#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0076[4096] = {
    1, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23,
    0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30,
    0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 54,
    0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0,
    0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0,
    0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0,
    0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0,
    0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111,
    0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 116, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0,
    120, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151,
    0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 164, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 173, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 179,
    0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 187, 0, 188, 0, 189, 0, 190, 0,
    191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0,
    205, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 211, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0,
    0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 223,
    0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0,
    0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 248, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 258, 0, 259, 0, 260, 0, 261, 0, 262, 0, 263,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0,
    0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272,
    0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 277, 0, 0, 278, 0, 279, 0, 0, 280, 0, 281, 0, 0, 282, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 288, 0, 0, 0, 289, 0, 290, 0, 0, 0, 291,
    0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0,
    0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 299, 0, 300, 0, 301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 308, 0, 0, 309, 0, 310, 0, 0, 311, 0, 312, 0, 0, 313, 0, 314, 0, 0, 315, 0, 316, 0,
    0, 317, 0, 318, 0, 0, 319, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0076(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003D8000;
    case 2u: goto L_003D8018;
    case 3u: goto L_003D801C;
    case 4u: goto L_003D802C;
    case 5u: goto L_003D8030;
    case 6u: goto L_003D8050;
    case 7u: goto L_003D80E4;
    case 8u: goto L_003D8100;
    case 9u: goto L_003D8128;
    case 10u: goto L_003D8164;
    case 11u: goto L_003D81A8;
    case 12u: goto L_003D8324;
    case 13u: goto L_003D8360;
    case 14u: goto L_003D83A4;
    case 15u: goto L_003D83F8;
    case 16u: goto L_003D8460;
    case 17u: goto L_003D84A4;
    case 18u: goto L_003D8510;
    case 19u: goto L_003D8598;
    case 20u: goto L_003D8618;
    case 21u: goto L_003D8650;
    case 22u: goto L_003D8654;
    case 23u: goto L_003D877C;
    case 24u: goto L_003D8788;
    case 25u: goto L_003D87F4;
    case 26u: goto L_003D8848;
    case 27u: goto L_003D8938;
    case 28u: goto L_003D8A14;
    case 29u: goto L_003D8A2C;
    case 30u: goto L_003D8A7C;
    case 31u: goto L_003D8A8C;
    case 32u: goto L_003D8AC4;
    case 33u: goto L_003D8AD4;
    case 34u: goto L_003D8B20;
    case 35u: goto L_003D8B2C;
    case 36u: goto L_003D8B9C;
    case 37u: goto L_003D8BBC;
    case 38u: goto L_003D8BC8;
    case 39u: goto L_003D8BD0;
    case 40u: goto L_003D8C00;
    case 41u: goto L_003D8C10;
    case 42u: goto L_003D8C34;
    case 43u: goto L_003D8C50;
    case 44u: goto L_003D8C68;
    case 45u: goto L_003D8C74;
    case 46u: goto L_003D8CDC;
    case 47u: goto L_003D8D1C;
    case 48u: goto L_003D8D94;
    case 49u: goto L_003D8E28;
    case 50u: goto L_003D8EC4;
    case 51u: goto L_003D8ECC;
    case 52u: goto L_003D8EDC;
    case 53u: goto L_003D8EEC;
    case 54u: goto L_003D8EFC;
    case 55u: goto L_003D8F14;
    case 56u: goto L_003D8F58;
    case 57u: goto L_003D8F78;
    case 58u: goto L_003D9000;
    case 59u: goto L_003D9040;
    case 60u: goto L_003D9080;
    case 61u: goto L_003D9110;
    case 62u: goto L_003D9180;
    case 63u: goto L_003D91B8;
    case 64u: goto L_003D91F0;
    case 65u: goto L_003D9228;
    case 66u: goto L_003D9240;
    case 67u: goto L_003D92B0;
    case 68u: goto L_003D92E8;
    case 69u: goto L_003D9320;
    case 70u: goto L_003D9358;
    case 71u: goto L_003D9370;
    case 72u: goto L_003D93B0;
    case 73u: goto L_003D93D4;
    case 74u: goto L_003D93F8;
    case 75u: goto L_003D941C;
    case 76u: goto L_003D9440;
    case 77u: goto L_003D9464;
    case 78u: goto L_003D9488;
    case 79u: goto L_003D94AC;
    case 80u: goto L_003D94E0;
    case 81u: goto L_003D9500;
    case 82u: goto L_003D9524;
    case 83u: goto L_003D9538;
    case 84u: goto L_003D954C;
    case 85u: goto L_003D9560;
    case 86u: goto L_003D9574;
    case 87u: goto L_003D9588;
    case 88u: goto L_003D959C;
    case 89u: goto L_003D95B0;
    case 90u: goto L_003D95C0;
    case 91u: goto L_003D95F0;
    case 92u: goto L_003D9620;
    case 93u: goto L_003D962C;
    case 94u: goto L_003D9678;
    case 95u: goto L_003D9680;
    case 96u: goto L_003D96A0;
    case 97u: goto L_003D96B0;
    case 98u: goto L_003D9700;
    case 99u: goto L_003D9720;
    case 100u: goto L_003D9768;
    case 101u: goto L_003D9780;
    case 102u: goto L_003D9798;
    case 103u: goto L_003D97B0;
    case 104u: goto L_003D97F4;
    case 105u: goto L_003D980C;
    case 106u: goto L_003D9824;
    case 107u: goto L_003D9830;
    case 108u: goto L_003D984C;
    case 109u: goto L_003D985C;
    case 110u: goto L_003D986C;
    case 111u: goto L_003D987C;
    case 112u: goto L_003D9884;
    case 113u: goto L_003D98A0;
    case 114u: goto L_003D98C4;
    case 115u: goto L_003D98CC;
    case 116u: goto L_003D98D4;
    case 117u: goto L_003D98DC;
    case 118u: goto L_003D98E8;
    case 119u: goto L_003D98F4;
    case 120u: goto L_003D9900;
    case 121u: goto L_003D990C;
    case 122u: goto L_003D9924;
    case 123u: goto L_003D9940;
    case 124u: goto L_003D99E4;
    case 125u: goto L_003D9A24;
    case 126u: goto L_003D9A90;
    case 127u: goto L_003D9BCC;
    case 128u: goto L_003D9C0C;
    case 129u: goto L_003D9C78;
    case 130u: goto L_003D9CE0;
    case 131u: goto L_003D9D24;
    case 132u: goto L_003D9D98;
    case 133u: goto L_003D9DD8;
    case 134u: goto L_003D9F10;
    case 135u: goto L_003D9F48;
    case 136u: goto L_003D9F7C;
    case 137u: goto L_003D9FBC;
    case 138u: goto L_003DA030;
    case 139u: goto L_003DA06C;
    case 140u: goto L_003DA0AC;
    case 141u: goto L_003DA118;
    case 142u: goto L_003DA15C;
    case 143u: goto L_003DA1A4;
    case 144u: goto L_003DA210;
    case 145u: goto L_003DA490;
    case 146u: goto L_003DA620;
    case 147u: goto L_003DA688;
    case 148u: goto L_003DA6A8;
    case 149u: goto L_003DA6C8;
    case 150u: goto L_003DA6E8;
    case 151u: goto L_003DA6FC;
    case 152u: goto L_003DA720;
    case 153u: goto L_003DA7BC;
    case 154u: goto L_003DA814;
    case 155u: goto L_003DA854;
    case 156u: goto L_003DA858;
    case 157u: goto L_003DA8B4;
    case 158u: goto L_003DA90C;
    case 159u: goto L_003DA940;
    case 160u: goto L_003DA980;
    case 161u: goto L_003DAA1C;
    case 162u: goto L_003DAA90;
    case 163u: goto L_003DAAEC;
    case 164u: goto L_003DAAF0;
    case 165u: goto L_003DAB68;
    case 166u: goto L_003DABDC;
    case 167u: goto L_003DAC2C;
    case 168u: goto L_003DAC60;
    case 169u: goto L_003DACFC;
    case 170u: goto L_003DAD4C;
    case 171u: goto L_003DAD9C;
    case 172u: goto L_003DADE4;
    case 173u: goto L_003DADE8;
    case 174u: goto L_003DAE40;
    case 175u: goto L_003DAE88;
    case 176u: goto L_003DAEC0;
    case 177u: goto L_003DAEEC;
    case 178u: goto L_003DAEF4;
    case 179u: goto L_003DAEFC;
    case 180u: goto L_003DAF04;
    case 181u: goto L_003DAF0C;
    case 182u: goto L_003DAF14;
    case 183u: goto L_003DAF1C;
    case 184u: goto L_003DAF24;
    case 185u: goto L_003DAF50;
    case 186u: goto L_003DAF58;
    case 187u: goto L_003DAF60;
    case 188u: goto L_003DAF68;
    case 189u: goto L_003DAF70;
    case 190u: goto L_003DAF78;
    case 191u: goto L_003DAF80;
    case 192u: goto L_003DAF90;
    case 193u: goto L_003DAFBC;
    case 194u: goto L_003DAFC4;
    case 195u: goto L_003DAFCC;
    case 196u: goto L_003DAFD4;
    case 197u: goto L_003DAFDC;
    case 198u: goto L_003DAFE4;
    case 199u: goto L_003DAFEC;
    case 200u: goto L_003DAFF4;
    case 201u: goto L_003DB000;
    case 202u: goto L_003DB01C;
    case 203u: goto L_003DB0C0;
    case 204u: goto L_003DB0F4;
    case 205u: goto L_003DB100;
    case 206u: goto L_003DB10C;
    case 207u: goto L_003DB118;
    case 208u: goto L_003DB124;
    case 209u: goto L_003DB160;
    case 210u: goto L_003DB16C;
    case 211u: goto L_003DB174;
    case 212u: goto L_003DB1A8;
    case 213u: goto L_003DB1C0;
    case 214u: goto L_003DB1F4;
    case 215u: goto L_003DB250;
    case 216u: goto L_003DB2C0;
    case 217u: goto L_003DB2D8;
    case 218u: goto L_003DB2F0;
    case 219u: goto L_003DB308;
    case 220u: goto L_003DB320;
    case 221u: goto L_003DB35C;
    case 222u: goto L_003DB368;
    case 223u: goto L_003DB37C;
    case 224u: goto L_003DB3A0;
    case 225u: goto L_003DB3B0;
    case 226u: goto L_003DB3BC;
    case 227u: goto L_003DB3CC;
    case 228u: goto L_003DB3E8;
    case 229u: goto L_003DB3F8;
    case 230u: goto L_003DB418;
    case 231u: goto L_003DB428;
    case 232u: goto L_003DB444;
    case 233u: goto L_003DB450;
    case 234u: goto L_003DB460;
    case 235u: goto L_003DB550;
    case 236u: goto L_003DB56C;
    case 237u: goto L_003DB5E8;
    case 238u: goto L_003DB678;
    case 239u: goto L_003DB740;
    case 240u: goto L_003DB7C4;
    case 241u: goto L_003DB7F0;
    case 242u: goto L_003DB840;
    case 243u: goto L_003DB890;
    case 244u: goto L_003DB8E0;
    case 245u: goto L_003DB8F0;
    case 246u: goto L_003DB994;
    case 247u: goto L_003DB9D0;
    case 248u: goto L_003DB9D4;
    case 249u: goto L_003DB9D8;
    case 250u: goto L_003DBA30;
    case 251u: goto L_003DBA64;
    case 252u: goto L_003DBA70;
    case 253u: goto L_003DBAA8;
    case 254u: goto L_003DBAB4;
    case 255u: goto L_003DBB00;
    case 256u: goto L_003DBB44;
    case 257u: goto L_003DBB4C;
    case 258u: goto L_003DBB54;
    case 259u: goto L_003DBB5C;
    case 260u: goto L_003DBB64;
    case 261u: goto L_003DBB6C;
    case 262u: goto L_003DBB74;
    case 263u: goto L_003DBB7C;
    case 264u: goto L_003DBBCC;
    case 265u: goto L_003DBBE0;
    case 266u: goto L_003DBBF4;
    case 267u: goto L_003DBC10;
    case 268u: goto L_003DBC24;
    case 269u: goto L_003DBC38;
    case 270u: goto L_003DBC54;
    case 271u: goto L_003DBC68;
    case 272u: goto L_003DBC7C;
    case 273u: goto L_003DBC98;
    case 274u: goto L_003DBCAC;
    case 275u: goto L_003DBCC0;
    case 276u: goto L_003DBCD0;
    case 277u: goto L_003DBD0C;
    case 278u: goto L_003DBD18;
    case 279u: goto L_003DBD20;
    case 280u: goto L_003DBD2C;
    case 281u: goto L_003DBD34;
    case 282u: goto L_003DBD40;
    case 283u: goto L_003DBD48;
    case 284u: goto L_003DBD64;
    case 285u: goto L_003DBD7C;
    case 286u: goto L_003DBDBC;
    case 287u: goto L_003DBDCC;
    case 288u: goto L_003DBDD4;
    case 289u: goto L_003DBDE4;
    case 290u: goto L_003DBDEC;
    case 291u: goto L_003DBDFC;
    case 292u: goto L_003DBE04;
    case 293u: goto L_003DBE20;
    case 294u: goto L_003DBE38;
    case 295u: goto L_003DBE50;
    case 296u: goto L_003DBE70;
    case 297u: goto L_003DBE84;
    case 298u: goto L_003DBEB0;
    case 299u: goto L_003DBEB8;
    case 300u: goto L_003DBEC0;
    case 301u: goto L_003DBEC8;
    case 302u: goto L_003DBED0;
    case 303u: goto L_003DBED8;
    case 304u: goto L_003DBEE0;
    case 305u: goto L_003DBEE8;
    case 306u: goto L_003DBF14;
    case 307u: goto L_003DBF20;
    case 308u: goto L_003DBF28;
    case 309u: goto L_003DBF34;
    case 310u: goto L_003DBF3C;
    case 311u: goto L_003DBF48;
    case 312u: goto L_003DBF50;
    case 313u: goto L_003DBF5C;
    case 314u: goto L_003DBF64;
    case 315u: goto L_003DBF70;
    case 316u: goto L_003DBF78;
    case 317u: goto L_003DBF84;
    case 318u: goto L_003DBF8C;
    case 319u: goto L_003DBF98;
    case 320u: goto L_003DBFA0;
    case 321u: goto L_003DBFAC;
    case 322u: goto L_003DBFD0;
    default: bad_entry(c, 0x003D8000u); return;
    }
L_003D8000:
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7FDCu | kUnwind; return; } [[clang::musttail]] return unit_0075(c, 260u, depth); } }
    c.budget -= 1;
L_003D8018:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D801C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D802C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003D8034; } }
L_003D802C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D8030:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003D8034:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D8050:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[3] = ld32((c.r[29].w[0] + 92u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D84F4; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D84F4; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_003D808C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003D8090; } }
L_003D808C:
    c.r[17].d[0] = ld8((c.r[18].w[0] + 220u));
    c.budget -= 1;
L_003D8090:
    set32(c.r[3], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_003D80B0; } }
    set32(c.r[3], 0u + 68u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_003D80B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = ld32((c.r[18].w[0] + 32u));  if (t) { goto L_003D8410; } }
L_003D80B0:
    set32(c.r[4], ld32((c.r[18].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D8400; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1578u));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D80D4; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 1;
L_003D80D4:
    set32(c.r[3], ld32((c.r[18].w[0] + 348u)));
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_003D80E4:
    c.f[2] = ld32((c.r[3].w[0] + 52u));
    c.f[1] = ld32((c.r[3].w[0] + 56u));
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[3]);
    c.budget -= 7;
L_003D8100:
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003D8128; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D8430; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003D84F8; } }
L_003D8128:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(15ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D832C; } }
    c.r[2].d[0] = ld16((c.r[28].w[0] - 28990u));
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28988u)));
    set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8164u); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003D8164u) [[unlikely]] return; }
L_003D8164:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 28990u));
    c.r[7].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[28].w[0] - 28988u)));
    set32(c.r[6], c.r[16].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[4].d[0] = c.r[5].d[0] ^ 0ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003D81E0; } }
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 2;
L_003D81A8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_003D81C0; } }
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0])));  if (t) { goto L_003D81E4; } }
L_003D81C0:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D81A8u | kUnwind; return; } goto L_003D81A8; } }
L_003D81E0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D81E4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D84F4; } }
    set32(c.r[8], ld32((c.r[28].w[0] - 28844u)));
    set32(c.r[4], c.r[17].w[0] << 16);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.r[9].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[6], 0u - 5u);
    c.r[2].d[0] = 0ull & 1ull;
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], 0u - 2u);
    st32((c.r[8].w[0]), c.r[9].w[0]);
    c.f[7] = 0u;
    set32(c.r[9], ld32((c.r[28].w[0] - 28844u)));
    c.r[8].d[0] = ld8((c.r[9].w[0] + 4u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 28844u)));
    c.r[6].d[0] = ld8((c.r[7].w[0] + 4u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 28844u)));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 28844u)));
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    set32(c.r[2], ld32((c.r[28].w[0] - 28844u)));
    st32((c.r[2].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    set32(c.r[2], ld32((c.r[28].w[0] - 28844u)));
    st32((c.r[2].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    set32(c.r[2], ld32((c.r[28].w[0] - 28844u)));
    st32((c.r[2].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    set32(c.r[2], ld32((c.r[28].w[0] - 28844u)));
    st32((c.r[2].w[0] + 36u), c.f[0]);
    c.f[8] = ld32((c.r[3].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[7]) == fp::key(c.f[8]));
    c.budget -= 43;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D8300; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[6] = ld32((c.r[2].w[0] - 22568u));
    c.f[5] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[3] = ld32((c.r[29].w[0] + 100u));
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[4] = ld32((c.r[2].w[0] - 22572u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[5], c.f[6]);
    set32(c.r[3], ld32((c.r[28].w[0] - 28844u)));
    st32((c.r[29].w[0] + 72u), c.f[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[1] = ld32((c.r[2].w[0] - 22576u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    st32((c.r[29].w[0] + 68u), c.f[3]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[0]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[8]);
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[3].w[0] + 28u), c.f[0]);
    c.budget -= 26;
L_003D8300:
    set32(c.r[3], ld32((c.r[28].w[0] - 28844u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 28840u)));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28840u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8324u); set32(c.r[5], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D8324u) [[unlikely]] return; }
L_003D8324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D83F8; } }
L_003D832C:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 28998u));
    set32(c.r[16], c.r[16].w[0] - 15u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28996u)));
    set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8360u); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003D8360u) [[unlikely]] return; }
L_003D8360:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 28998u));
    c.r[7].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[28].w[0] - 28996u)));
    set32(c.r[6], c.r[16].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[4].d[0] = c.r[5].d[0] ^ 0ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003D83E0; } }
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 2;
L_003D83A4:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_003D83BC; } }
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_003D83E4; } }
L_003D83BC:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D83A4u | kUnwind; return; } goto L_003D83A4; } }
    c.budget -= 1;
L_003D83E0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D83E4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D84F4; } }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D83F8u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0076(c, 245u, depth + 1u); else { c.pc = 0x003DB8F0u; return; } if (c.pc != 0x003D83F8u) [[unlikely]] return; }
L_003D83F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D84F4; } }
L_003D8400:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 18976u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D80E4u | kUnwind; return; } goto L_003D80E4; } }
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.budget -= 1;
L_003D8410:
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[29].w[0] + 96u), c.f[3]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 108u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8100u | kUnwind; return; } goto L_003D8100; } }
L_003D8430:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 28990u));
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28988u)));
    set32(c.r[5], c.r[3].w[0] + 13u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8460u); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003D8460u) [[unlikely]] return; }
L_003D8460:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 28990u));
    c.r[7].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[28].w[0] - 28988u)));
    set32(c.r[6], c.r[5].w[0] + 13u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[4].d[0] = c.r[5].d[0] ^ 0ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003D84E0; } }
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 2;
L_003D84A4:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_003D84BC; } }
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_003D84E4; } }
L_003D84BC:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D84A4u | kUnwind; return; } goto L_003D84A4; } }
    c.budget -= 1;
L_003D84E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D84E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8128u | kUnwind; return; } goto L_003D8128; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 13u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8128u | kUnwind; return; } goto L_003D8128; } }
L_003D84F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D84F8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003D8510:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D9008; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28868u)));
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st8((c.r[29].w[0] + 272u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D8620; } }
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D8E18; } }
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003D8590; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] << 42;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_003D8594; } }
L_003D8590:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D8594:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003D8598:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D85D0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D85C4; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] << 45;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_003D85C8; } }
L_003D85C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D85C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D8620; } }
L_003D85D0:
    set32(c.r[7], ld32((c.r[28].w[0] - 28604u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003D860C; } }
    c.f[0] = ld32((c.r[7].w[0] + 32u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[6].w[0] + 28160u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 36u));
    st32((c.r[5].w[0] + 28164u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 40u));
    st32((c.r[3].w[0] + 28168u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 44u));
    st32((c.r[2].w[0] + 28172u), c.f[0]);
    c.budget -= 12;
L_003D860C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8618u); set32(c.r[5], c.r[5].w[0] + 28160u);  if (depth < kMaxDepth) unit_0085(c, 233u, depth + 1u); else { c.pc = 0x00417EF0u; return; } if (c.pc != 0x003D8618u) [[unlikely]] return; }
L_003D8618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D8694; } }
L_003D8620:
    set32(c.r[3], ld32((c.r[28].w[0] - 28872u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D8694; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D8E38; } }
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003D8E20; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D8650:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003D8654:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D8690; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28872u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D8684; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] << 45;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_003D8688; } }
L_003D8684:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D8688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D8694; } }
L_003D8690:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D8694:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003D8770; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28648u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D8770; } }
    c.f[1] = ld32((c.r[28].w[0] - 28668u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D86D4; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D86EC; } }
L_003D86D4:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.budget -= 6;
L_003D86EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1004u));
    c.f[0] = ld32((c.r[2].w[0] + 30716u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D8730; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[2].w[0] + 30704u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 30708u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 30712u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 30716u), c.f[1]);
    c.budget -= 10;
L_003D8730:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[1] = ld32((c.r[3].w[0] + 996u));
    c.f[0] = ld32((c.r[2].w[0] + 30732u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D8770; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[2].w[0] + 30720u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 30724u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 30728u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 30732u), c.f[1]);
    c.budget -= 9;
L_003D8770:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D877Cu); set32(c.r[4], c.r[4].w[0] + 30704u);  if (depth < kMaxDepth) unit_0076(c, 59u, depth + 1u); else { c.pc = 0x003D9040u; return; } if (c.pc != 0x003D877Cu) [[unlikely]] return; }
L_003D877C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8788u); set32(c.r[4], c.r[4].w[0] + 30720u);  if (depth < kMaxDepth) unit_0076(c, 59u, depth + 1u); else { c.pc = 0x003D9040u; return; } if (c.pc != 0x003D8788u) [[unlikely]] return; }
L_003D8788:
    set32(c.r[3], c.r[28].w[0] - 28704u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 768u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 800u);
    c.r[20].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] + 896u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[18], c.r[18].w[0] + 448u);
    set32(c.r[3], c.r[3].w[0] - 22568u);
    set32(c.r[17], c.r[17].w[0] + 368u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    set32(c.r[21], c.r[21].w[0] + 832u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[22], c.r[22].w[0] + 864u);
    set32(c.r[3], c.r[3].w[0] - 22572u);
    set32(c.r[30], c.r[30].w[0] + 960u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.budget -= 27;
L_003D87F4:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_003D88E4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28868u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D88E0; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D8E40; } }
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003D8840; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] << 42;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_003D8844; } }
L_003D8840:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D8844:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_003D8848:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D88E0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 28604u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D88E0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[5] = ld32((c.r[3].w[0] + 28164u));
    c.f[7] = ld32((c.r[4].w[0] + 28168u));
    c.f[3] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[3].w[0] - 22576u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[2] = ld32((c.r[4].w[0] + 28160u));
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28868u)));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 320u), c.f[2]);
    c.f[6] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.f[1] = ld32((c.r[4].w[0] + 44u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);
    c.f[4] = ld32((c.r[3].w[0]));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    set32(c.r[3], c.r[29].w[0] + 324u);
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[2]);
    st32((c.r[3].w[0]), c.f[4]);
    set32(c.r[3], c.r[29].w[0] + 328u);
    st32((c.r[3].w[0]), c.f[6]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[1]);
    c.budget -= 33;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.f[0]);  if (t) { goto L_003D88E4; } }
L_003D88E0:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_003D88E4:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_003D89F8; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 28864u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_003D89F4; } }
    set32(c.r[6], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D8E48; } }
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003D8930; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] << 42;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_003D8934; } }
L_003D8930:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D8934:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_003D8938:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D8970; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D8964; } }
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] << 45;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_003D8968; } }
L_003D8964:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D8968:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D89F4; } }
L_003D8970:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[5] = ld32((c.r[3].w[0] + 28180u));
    c.f[7] = ld32((c.r[4].w[0] + 28184u));
    c.f[3] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[3].w[0] - 22576u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[2] = ld32((c.r[4].w[0] + 28176u));
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28864u)));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 304u), c.f[2]);
    c.f[6] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.f[1] = ld32((c.r[4].w[0] + 44u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);
    c.f[4] = ld32((c.r[3].w[0]));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    set32(c.r[3], c.r[29].w[0] + 308u);
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[2]);
    st32((c.r[3].w[0]), c.f[4]);
    set32(c.r[3], c.r[29].w[0] + 312u);
    st32((c.r[3].w[0]), c.f[6]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[1]);
    c.budget -= 33;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.f[0]);  if (t) { goto L_003D89F8; } }
L_003D89F4:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_003D89F8:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D8DC8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8A14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D8A14u) [[unlikely]] return; }
L_003D8A14:
    set32(c.r[3], c.r[20].w[0] - 3u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_003D8E50; } }
    c.f[20] = ld32((c.r[16].w[0] + 28u));
    c.budget -= 1;
L_003D8A2C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D8A44; } }
    set32(c.r[23], 0u + 1u);
    c.budget -= 1;
L_003D8A44:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D8B04; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003D8A98; } }
    c.r[2].d[0] = c.r[5].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D8A84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8A7Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 145u, depth + 1u); else { c.pc = 0x003DA490u; return; } if (c.pc != 0x003D8A7Cu) [[unlikely]] return; }
L_003D8A7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D8A94; } }
L_003D8A84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8A8Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 168u, depth + 1u); else { c.pc = 0x003DAC60u; return; } if (c.pc != 0x003D8A8Cu) [[unlikely]] return; }
L_003D8A8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D8A98; } }
L_003D8A94:
    set32(c.r[23], 0u + 1u);
    c.budget -= 1;
L_003D8A98:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[22].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003D8AE0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D8ACC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8AC4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 145u, depth + 1u); else { c.pc = 0x003DA490u; return; } if (c.pc != 0x003D8AC4u) [[unlikely]] return; }
L_003D8AC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D8ADC; } }
L_003D8ACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8AD4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 168u, depth + 1u); else { c.pc = 0x003DAC60u; return; } if (c.pc != 0x003D8AD4u) [[unlikely]] return; }
L_003D8AD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D8AE0; } }
L_003D8ADC:
    set32(c.r[23], 0u + 1u);
    c.budget -= 1;
L_003D8AE0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003D8B04; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[22].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003D8B04; } }
    set32(c.r[23], 0u + 1u);
    c.budget -= 1;
L_003D8B04:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull; st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D8F68; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[4].d[0]; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_003D8EBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8B20u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 168u, depth + 1u); else { c.pc = 0x003DAC60u; return; } if (c.pc != 0x003D8B20u) [[unlikely]] return; }
L_003D8B20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D8F0C; } }
    c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003D8B2C:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_003D8C2C; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[20].d[0] == c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003D8B5C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[3].d[0];  if (t) { goto L_003D8B5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[29].w[0] + 256u));  if (t) { goto L_003D8B9C; } }
L_003D8B5C:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[3].d[0];  if (t) { goto L_003D8F24; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_003D8B9C; } }
    c.f[0] = ld32((c.r[19].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D8B9C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[3].w[0] + 908u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D8B9C; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003D8B9C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D8C24; } }
    set32(c.r[2], 0u + 3u);
    c.r[23].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; st32((c.r[19].w[0]), c.f[20]);  if (t) { goto L_003D8BC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8BBCu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 168u, depth + 1u); else { c.pc = 0x003DAC60u; return; } if (c.pc != 0x003D8BBCu) [[unlikely]] return; }
L_003D8BBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D8F50; } }
    set32(c.r[23], 0u + 2u);
    c.budget -= 1;
L_003D8BC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8BD0u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 160u, depth + 1u); else { c.pc = 0x003DA980u; return; } if (c.pc != 0x003D8BD0u) [[unlikely]] return; }
L_003D8BD0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D8C18; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D8C18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8C00u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 152u, depth + 1u); else { c.pc = 0x003DA720u; return; } if (c.pc != 0x003D8C00u) [[unlikely]] return; }
L_003D8C00:
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8C10u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0076(c, 144u, depth + 1u); else { c.pc = 0x003DA210u; return; } if (c.pc != 0x003D8C10u) [[unlikely]] return; }
L_003D8C10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[29].w[0] + 272u));  if (t) { goto L_003D8C38; } }
L_003D8C18:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D8C34; } }
L_003D8C24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), 0u);  if (t) { goto L_003D8C34; } }
L_003D8C2C:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[29].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D8C34:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 272u));
    c.budget -= 1;
L_003D8C38:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D8DC8; } }
    c.r[3].d[0] = ld8((c.r[29].w[0] + 256u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D8F70; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    c.budget -= 1;
L_003D8C50:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D8D94; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[3].d[0];  if (t) { goto L_003D8F80; } }
L_003D8C68:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[3].d[0];  if (t) { goto L_003D8FBC; } }
L_003D8C74:
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D8FF0; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[23], ld32((c.r[16].w[0])));  if (t) { goto L_003D8D94; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[3].d[0];  if (t) { goto L_003D8CA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0])));  if (t) { goto L_003D8D98; } }
L_003D8CA4:
    set32(c.r[3], ld32((c.r[28].w[0] - 28676u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D8D94; } }
    c.r[2].d[0] = ld16((c.r[28].w[0] - 28966u));
    mmi::mult(c, 0, c.r[23].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28964u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8CDCu); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003D8CDCu) [[unlikely]] return; }
L_003D8CDC:
    c.r[4].d[0] = ld16((c.r[28].w[0] - 28966u));
    c.r[3].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[23].w[0], c.r[4].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[28].w[0] - 28964u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[5].d[0] = c.r[6].d[0] ^ 0ull;
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003D8D58; } }
    c.r[5].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 2;
L_003D8D1C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003D8D34; } }
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0])));  if (t) { goto L_003D8D5C; } }
L_003D8D34:
    c.r[4].d[0] = c.r[6].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = c.r[6].d[0] ^ c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8D1Cu | kUnwind; return; } goto L_003D8D1C; } }
    c.budget -= 1;
L_003D8D58:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D8D5C:
    st32((c.r[28].w[0] - 28860u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[3].w[0] + 28u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D8D80; } }
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 60u), c.f[0]);
    c.budget -= 3;
L_003D8D80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x49740000u);
    c.r[2].d[0] = c.r[2].d[0] | 9216ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8D94u); set32(c.r[4], ld32((c.r[28].w[0] - 28860u)));  if (depth < kMaxDepth) unit_0086(c, 85u, depth + 1u); else { c.pc = 0x00419570u; return; } if (c.pc != 0x003D8D94u) [[unlikely]] return; }
L_003D8D94:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003D8D98:
    c.f[0] = ld32((c.r[30].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0])));
    st32((c.r[21].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[22].w[0]), c.r[3].w[0]);
    st32((c.r[19].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    st32((c.r[18].w[0]), 0u);
    st32((c.r[30].w[0]), 0u);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 12;
L_003D8DC8:
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[21], c.r[21].w[0] + 4u);
    set32(c.r[22], c.r[22].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[30], c.r[30].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D87F4u | kUnwind; return; } goto L_003D87F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_003D900C; } }
L_003D8E18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8598u | kUnwind; return; } goto L_003D8598; } }
L_003D8E20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8E28u); c.r[4].d[0] = ld8((c.r[4].w[0] + 36u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x003D8E28u) [[unlikely]] return; }
L_003D8E28:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8650u | kUnwind; return; } goto L_003D8650; } }
L_003D8E38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8654u | kUnwind; return; } goto L_003D8654; } }
L_003D8E40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8848u | kUnwind; return; } goto L_003D8848; } }
L_003D8E48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8938u | kUnwind; return; } goto L_003D8938; } }
L_003D8E50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[3].w[0] - 22576u));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[5] = ld32((c.r[17].w[0] + 4u));
    c.f[7] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[3] = 0u;
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 288u), c.f[0]);
    c.f[6] = ld32((c.r[3].w[0]));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);
    c.f[4] = ld32((c.r[3].w[0]));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    set32(c.r[3], c.r[29].w[0] + 292u);
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[2] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[3].w[0]), c.f[4]);
    set32(c.r[3], c.r[29].w[0] + 296u);
    st32((c.r[3].w[0]), c.f[6]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8A2Cu | kUnwind; return; } goto L_003D8A2C; } }
L_003D8EBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8EC4u);  if (depth < kMaxDepth) unit_0076(c, 168u, depth + 1u); else { c.pc = 0x003DAC60u; return; } if (c.pc != 0x003D8EC4u) [[unlikely]] return; }
L_003D8EC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D8ED4; } }
L_003D8ECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8B2Cu | kUnwind; return; } goto L_003D8B2C; } }
L_003D8ED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8EDCu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0076(c, 145u, depth + 1u); else { c.pc = 0x003DA490u; return; } if (c.pc != 0x003D8EDCu) [[unlikely]] return; }
L_003D8EDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8ECCu | kUnwind; return; } goto L_003D8ECC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8EECu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 168u, depth + 1u); else { c.pc = 0x003DAC60u; return; } if (c.pc != 0x003D8EECu) [[unlikely]] return; }
L_003D8EEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8ECCu | kUnwind; return; } goto L_003D8ECC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8EFCu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 145u, depth + 1u); else { c.pc = 0x003DA490u; return; } if (c.pc != 0x003D8EFCu) [[unlikely]] return; }
L_003D8EFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8B2Cu | kUnwind; return; } goto L_003D8B2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8ECCu | kUnwind; return; } goto L_003D8ECC; } }
L_003D8F0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8F14u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 145u, depth + 1u); else { c.pc = 0x003DA490u; return; } if (c.pc != 0x003D8F14u) [[unlikely]] return; }
L_003D8F14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8B2Cu | kUnwind; return; } goto L_003D8B2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8B2Cu | kUnwind; return; } goto L_003D8B2C; } }
L_003D8F24:
    c.f[0] = ld32((c.r[19].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8B9Cu | kUnwind; return; } goto L_003D8B9C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[3].w[0] + 904u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8B9Cu | kUnwind; return; } goto L_003D8B9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8B9Cu | kUnwind; return; } goto L_003D8B9C; } }
L_003D8F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8F58u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 145u, depth + 1u); else { c.pc = 0x003DA490u; return; } if (c.pc != 0x003D8F58u) [[unlikely]] return; }
L_003D8F58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8BC8u | kUnwind; return; } goto L_003D8BC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[23], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8BC8u | kUnwind; return; } goto L_003D8BC8; } }
L_003D8F68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8C34u | kUnwind; return; } goto L_003D8C34; } }
L_003D8F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8F78u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 146u, depth + 1u); else { c.pc = 0x003DA620u; return; } if (c.pc != 0x003D8F78u) [[unlikely]] return; }
L_003D8F78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8C50u | kUnwind; return; } goto L_003D8C50; } }
L_003D8F80:
    set32(c.r[7], ld32((c.r[28].w[0] - 28600u)));
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[6].w[0] + 28160u), c.f[3]);
    st32((c.r[28].w[0] - 28604u), c.r[7].w[0]);
    st32((c.r[5].w[0] + 28164u), c.f[2]);
    st32((c.r[4].w[0] + 28168u), c.f[1]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 28172u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8C68u | kUnwind; return; } goto L_003D8C68; } }
L_003D8FBC:
    c.f[3] = ld32((c.r[17].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[6].w[0] + 28176u), c.f[3]);
    st32((c.r[5].w[0] + 28180u), c.f[2]);
    st32((c.r[4].w[0] + 28184u), c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 28188u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8C74u | kUnwind; return; } goto L_003D8C74; } }
L_003D8FF0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9000u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 123u, depth + 1u); else { c.pc = 0x003D9940u; return; } if (c.pc != 0x003D9000u) [[unlikely]] return; }
L_003D9000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D8D94u | kUnwind; return; } goto L_003D8D94; } }
L_003D9008:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_003D900C:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_003D9040:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D9108; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] - 25296u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.f[2] = ld32((c.r[5].w[0]));  if (t) { goto L_003D9088; } }
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D9108; } }
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 1;
L_003D9080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9108; } }
L_003D9088:
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);  if (t) { goto L_003D90A0; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003D90BC; } }
L_003D90A0:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003D90BC:
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 25296u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[3].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D9108; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D9080u | kUnwind; return; } goto L_003D9080; } }
L_003D9108:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D9110:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], 0u + 6u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003D91F8; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003D91C0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003D9188; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003D9150; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003D922C; } }
L_003D9150:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D9228; } }
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 72u), 0u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9180u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D9180u) [[unlikely]] return; }
L_003D9180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9228; } }
L_003D9188:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D9228; } }
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D91B8u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D91B8u) [[unlikely]] return; }
L_003D91B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9228; } }
L_003D91C0:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D9228; } }
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D91F0u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D91F0u) [[unlikely]] return; }
L_003D91F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9228; } }
L_003D91F8:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D9228; } }
    st32((c.r[29].w[0] + 16u), 0u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 24u), 0u);
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9228u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D9228u) [[unlikely]] return; }
L_003D9228:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D922C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003D9240:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], 0u + 6u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003D9328; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003D92F0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003D92B8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003D9280; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003D935C; } }
L_003D9280:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D9358; } }
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 72u), 0u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D92B0u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D92B0u) [[unlikely]] return; }
L_003D92B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9358; } }
L_003D92B8:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D9358; } }
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D92E8u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D92E8u) [[unlikely]] return; }
L_003D92E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9358; } }
L_003D92F0:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D9358; } }
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9320u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D9320u) [[unlikely]] return; }
L_003D9320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9358; } }
L_003D9328:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D9358; } }
    st32((c.r[29].w[0] + 16u), 0u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 24u), 0u);
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9358u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D9358u) [[unlikely]] return; }
L_003D9358:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D935C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003D9370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D94E0; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D93B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D93B0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D93B0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D93B0u) [[unlikely]] return; }
L_003D93B0:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D93D4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D93D4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D93D4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D93D4u) [[unlikely]] return; }
L_003D93D4:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D93F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D93F8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D93F8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D93F8u) [[unlikely]] return; }
L_003D93F8:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D941C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D941C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D941Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D941Cu) [[unlikely]] return; }
L_003D941C:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D9440; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D9440; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9440u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D9440u) [[unlikely]] return; }
L_003D9440:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D9464; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D9464; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9464u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D9464u) [[unlikely]] return; }
L_003D9464:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D9488; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D9488; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9488u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D9488u) [[unlikely]] return; }
L_003D9488:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D94AC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D94AC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D94ACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D94ACu) [[unlikely]] return; }
L_003D94AC:
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 28u), 0u);  if (t) { goto L_003D94E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D94E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003D94E0u) [[unlikely]] return; }
L_003D94E0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D9500:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9524u); set32(c.r[4], c.r[4].w[0] + 24783u);  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x003D9524u) [[unlikely]] return; }
L_003D9524:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 24811u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9538u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x003D9538u) [[unlikely]] return; }
L_003D9538:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[16].w[0] + 8u);
    set32(c.r[4], c.r[4].w[0] + 24839u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D954Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x003D954Cu) [[unlikely]] return; }
L_003D954C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[16].w[0] + 12u);
    set32(c.r[4], c.r[4].w[0] + 24872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9560u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x003D9560u) [[unlikely]] return; }
L_003D9560:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 24905u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9574u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x003D9574u) [[unlikely]] return; }
L_003D9574:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    set32(c.r[4], c.r[4].w[0] + 24933u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9588u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x003D9588u) [[unlikely]] return; }
L_003D9588:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[16].w[0] + 24u);
    set32(c.r[4], c.r[4].w[0] + 24961u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D959Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x003D959Cu) [[unlikely]] return; }
L_003D959C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[16].w[0] + 28u);
    set32(c.r[4], c.r[4].w[0] + 24990u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D95B0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x003D95B0u) [[unlikely]] return; }
L_003D95B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D95C0:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), 0u);  c.pc = t; return; }
L_003D95F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.f[20] = ld32((c.r[29].w[0] + 60u));  if (t) { goto L_003D9688; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9620u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D9620u) [[unlikely]] return; }
L_003D9620:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D9664; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003D962C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003D9688; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 452u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0] + 384u), 0u);
    st32((c.r[3].w[0] + 388u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0] + 392u), 0u);
    st32((c.r[3].w[0] + 396u), c.f[20]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003D968C; } }
L_003D9664:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9678u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D9678u) [[unlikely]] return; }
L_003D9678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9680u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 146u, depth + 1u); else { c.pc = 0x003DA620u; return; } if (c.pc != 0x003D9680u) [[unlikely]] return; }
L_003D9680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D962Cu | kUnwind; return; } goto L_003D962C; } }
L_003D9688:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003D968C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D96A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.f[0] = ld32((c.r[29].w[0] + 12u));  if (t) { goto L_003D96B8; } }
L_003D96B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[29], c.r[29].w[0] + 16u);  if (t) { goto L_003D96F4; } }
L_003D96B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[9], ld32((c.r[3].w[0] + 804u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0] + 4u), c.r[9].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[8].w[0] + 452u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 396u), c.f[0]);
    st32((c.r[7].w[0] + 384u), 0u);
    st32((c.r[6].w[0] + 388u), 0u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 392u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D96B0u | kUnwind; return; } goto L_003D96B0; } }
L_003D96F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D9700:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 5;
    { set32(c.r[4], c.r[4].w[0] + 25019u);  [[clang::musttail]] return unit_0084(c, 271u, depth); }
L_003D9720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003D9798; } }
    c.r[5].d[0] = ld8((c.r[5].w[0] + 220u));
    set32(c.r[3], 0u + 55u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003D9788; } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003D9770; } }
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003D975C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003D979C; } }
L_003D975C:
    st32((c.r[4].w[0] + 112u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9768u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 177u, depth + 1u); else { c.pc = 0x004827C0u; return; } if (c.pc != 0x003D9768u) [[unlikely]] return; }
L_003D9768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9798; } }
L_003D9770:
    st32((c.r[4].w[0] + 116u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9780u); set32(c.r[4], c.r[4].w[0] + 28u);  if (depth < kMaxDepth) unit_00A0(c, 177u, depth + 1u); else { c.pc = 0x004827C0u; return; } if (c.pc != 0x003D9780u) [[unlikely]] return; }
L_003D9780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9798; } }
L_003D9788:
    st32((c.r[4].w[0] + 120u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9798u); set32(c.r[4], c.r[4].w[0] + 56u);  if (depth < kMaxDepth) unit_00A0(c, 177u, depth + 1u); else { c.pc = 0x004827C0u; return; } if (c.pc != 0x003D9798u) [[unlikely]] return; }
L_003D9798:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D979C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D97B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 55u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = ld8((c.r[5].w[0] + 220u));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D9814; } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003D97FC; } }
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003D97E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003D9828; } }
L_003D97E8:
    st32((c.r[7].w[0] + 112u), c.r[5].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D97F4u); set32(c.r[5], ld32((c.r[7].w[0] + 112u)));  if (depth < kMaxDepth) unit_00A0(c, 177u, depth + 1u); else { c.pc = 0x004827C0u; return; } if (c.pc != 0x003D97F4u) [[unlikely]] return; }
L_003D97F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9824; } }
L_003D97FC:
    st32((c.r[7].w[0] + 116u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 116u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D980Cu); set32(c.r[4], c.r[7].w[0] + 28u);  if (depth < kMaxDepth) unit_00A0(c, 177u, depth + 1u); else { c.pc = 0x004827C0u; return; } if (c.pc != 0x003D980Cu) [[unlikely]] return; }
L_003D980C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9824; } }
L_003D9814:
    st32((c.r[7].w[0] + 120u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9824u); set32(c.r[4], c.r[7].w[0] + 56u);  if (depth < kMaxDepth) unit_00A0(c, 177u, depth + 1u); else { c.pc = 0x004827C0u; return; } if (c.pc != 0x003D9824u) [[unlikely]] return; }
L_003D9824:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D9828:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D9830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 25030u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D984Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 179u, depth + 1u); else { c.pc = 0x004827F0u; return; } if (c.pc != 0x003D984Cu) [[unlikely]] return; }
L_003D984C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D985Cu); set32(c.r[5], c.r[5].w[0] + 25037u);  if (depth < kMaxDepth) unit_00A0(c, 179u, depth + 1u); else { c.pc = 0x004827F0u; return; } if (c.pc != 0x003D985Cu) [[unlikely]] return; }
L_003D985C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D986Cu); set32(c.r[5], c.r[5].w[0] + 25044u);  if (depth < kMaxDepth) unit_00A0(c, 179u, depth + 1u); else { c.pc = 0x004827F0u; return; } if (c.pc != 0x003D986Cu) [[unlikely]] return; }
L_003D986C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[16].w[0] + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D987Cu); set32(c.r[5], c.r[5].w[0] + 25052u);  if (depth < kMaxDepth) unit_00A0(c, 179u, depth + 1u); else { c.pc = 0x004827F0u; return; } if (c.pc != 0x003D987Cu) [[unlikely]] return; }
L_003D987C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9884u); set32(c.r[4], c.r[16].w[0] + 84u);  if (depth < kMaxDepth) unit_00A0(c, 178u, depth + 1u); else { c.pc = 0x004827D0u; return; } if (c.pc != 0x003D9884u) [[unlikely]] return; }
L_003D9884:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D98A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D9924; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D98C4u);  if (depth < kMaxDepth) unit_00A0(c, 174u, depth + 1u); else { c.pc = 0x00482730u; return; } if (c.pc != 0x003D98C4u) [[unlikely]] return; }
L_003D98C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D98CCu); set32(c.r[4], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_00A0(c, 174u, depth + 1u); else { c.pc = 0x00482730u; return; } if (c.pc != 0x003D98CCu) [[unlikely]] return; }
L_003D98CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D98D4u); set32(c.r[4], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_00A0(c, 174u, depth + 1u); else { c.pc = 0x00482730u; return; } if (c.pc != 0x003D98D4u) [[unlikely]] return; }
L_003D98D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D98DCu); set32(c.r[4], c.r[17].w[0] + 84u);  if (depth < kMaxDepth) unit_00A0(c, 174u, depth + 1u); else { c.pc = 0x00482730u; return; } if (c.pc != 0x003D98DCu) [[unlikely]] return; }
L_003D98DC:
    set32(c.r[4], c.r[17].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D98E8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A0(c, 192u, depth + 1u); else { c.pc = 0x004829E0u; return; } if (c.pc != 0x003D98E8u) [[unlikely]] return; }
L_003D98E8:
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D98F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A0(c, 192u, depth + 1u); else { c.pc = 0x004829E0u; return; } if (c.pc != 0x003D98F4u) [[unlikely]] return; }
L_003D98F4:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9900u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A0(c, 192u, depth + 1u); else { c.pc = 0x004829E0u; return; } if (c.pc != 0x003D9900u) [[unlikely]] return; }
L_003D9900:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D990Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A0(c, 192u, depth + 1u); else { c.pc = 0x004829E0u; return; } if (c.pc != 0x003D990Cu) [[unlikely]] return; }
L_003D990C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003D9924; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9924u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003D9924u) [[unlikely]] return; }
L_003D9924:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D9940:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003DA1EC; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_003D9F50; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_003D9C80; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_003D9A98; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_003D99AC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003DA1EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DA118; } }
L_003D99AC:
    set32(c.r[3], ld32((c.r[28].w[0] - 28676u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DA1EC; } }
    c.r[2].d[0] = ld16((c.r[28].w[0] - 28966u));
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28964u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D99E4u); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003D99E4u) [[unlikely]] return; }
L_003D99E4:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 28966u));
    c.r[7].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[28].w[0] - 28964u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[4].d[0] = c.r[5].d[0] ^ 0ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003D9A60; } }
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 2;
L_003D9A24:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_003D9A3C; } }
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0])));  if (t) { goto L_003D9A64; } }
L_003D9A3C:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D9A24u | kUnwind; return; } goto L_003D9A24; } }
    c.budget -= 1;
L_003D9A60:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D9A64:
    st32((c.r[28].w[0] - 28860u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[3].w[0] + 28u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D9A88; } }
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 60u), c.f[0]);
    c.budget -= 3;
L_003D9A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9A90u); set32(c.r[4], ld32((c.r[28].w[0] - 28860u)));  if (depth < kMaxDepth) unit_0086(c, 63u, depth + 1u); else { c.pc = 0x00419030u; return; } if (c.pc != 0x003D9A90u) [[unlikely]] return; }
L_003D9A90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DA118; } }
L_003D9A98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[18].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003DA038; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28648u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D9BA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[1] = ld32((c.r[2].w[0] - 25288u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D9BA0; } }
    c.f[1] = ld32((c.r[28].w[0] - 28664u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D9AFC; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9B10; } }
L_003D9AFC:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 5;
L_003D9B10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[1] = ld32((c.r[2].w[0] + 1004u));
    c.f[2] = ld32((c.r[28].w[0] - 28672u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[2].w[0] + 30716u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D9B5C; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[2].w[0] + 30704u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 30708u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 30712u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 30716u), c.f[1]);
    c.budget -= 10;
L_003D9B5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[1] = ld32((c.r[3].w[0] + 996u));
    c.f[0] = ld32((c.r[2].w[0] + 30732u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D9BA0; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[2].w[0] + 30720u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 30724u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 30728u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 30732u), c.f[1]);
    c.budget -= 9;
L_003D9BA0:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 28982u));
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28980u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9BCCu); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003D9BCCu) [[unlikely]] return; }
L_003D9BCC:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 28982u));
    c.r[7].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[28].w[0] - 28980u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[4].d[0] = c.r[5].d[0] ^ 0ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003D9C48; } }
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 2;
L_003D9C0C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_003D9C24; } }
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0])));  if (t) { goto L_003D9C4C; } }
L_003D9C24:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D9C0Cu | kUnwind; return; } goto L_003D9C0C; } }
    c.budget -= 1;
L_003D9C48:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D9C4C:
    st32((c.r[28].w[0] - 28872u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[3].w[0] + 28u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D9C70; } }
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 60u), c.f[0]);
    c.budget -= 3;
L_003D9C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9C78u); set32(c.r[4], ld32((c.r[28].w[0] - 28872u)));  if (depth < kMaxDepth) unit_0086(c, 28u, depth + 1u); else { c.pc = 0x004186D0u; return; } if (c.pc != 0x003D9C78u) [[unlikely]] return; }
L_003D9C78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DA118; } }
L_003D9C80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.r[2].d[0] = c.r[18].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003DA120; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[18].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D9D6C; } }
    c.r[2].d[0] = c.r[18].d[0] << 33;
    c.r[2].d[0] = c.r[2].d[0] >> 33;
    c.r[18].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[19], c.r[2].w[0] >> 16);
    c.r[2].d[0] = ld16((c.r[28].w[0] - 28990u));
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28988u)));
    set32(c.r[5], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9CE0u); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003D9CE0u) [[unlikely]] return; }
L_003D9CE0:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 28990u));
    c.r[7].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[28].w[0] - 28988u)));
    set32(c.r[6], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[4].d[0] = c.r[5].d[0] ^ 0ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003D9D60; } }
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 2;
L_003D9D24:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_003D9D3C; } }
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_003D9D64; } }
L_003D9D3C:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D9D24u | kUnwind; return; } goto L_003D9D24; } }
    c.budget -= 1;
L_003D9D60:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D9D64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28868u), c.r[2].w[0]);  if (t) { goto L_003D9F10; } }
L_003D9D6C:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 28974u));
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28972u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9D98u); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003D9D98u) [[unlikely]] return; }
L_003D9D98:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 28974u));
    c.r[7].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[28].w[0] - 28972u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[4].d[0] = c.r[5].d[0] ^ 0ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003D9E10; } }
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 2;
L_003D9DD8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_003D9DF0; } }
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_003D9E14; } }
L_003D9DF0:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D9DD8u | kUnwind; return; } goto L_003D9DD8; } }
L_003D9E10:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D9E14:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28648u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 28868u), c.r[2].w[0]);  if (t) { goto L_003D9F10; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[1] = ld32((c.r[3].w[0] - 25288u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D9F10; } }
    c.f[1] = ld32((c.r[28].w[0] - 28664u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D9E68; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9E80; } }
L_003D9E68:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.budget -= 6;
L_003D9E80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[1] = ld32((c.r[3].w[0] + 1004u));
    c.f[2] = ld32((c.r[28].w[0] - 28672u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[3].w[0] + 30716u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D9ECC; } }
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] + 30704u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 30708u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0] + 30712u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 30716u), c.f[1]);
    c.budget -= 10;
L_003D9ECC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[1] = ld32((c.r[4].w[0] + 996u));
    c.f[0] = ld32((c.r[3].w[0] + 30732u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D9F10; } }
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] + 30720u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 30724u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 30728u), c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 30732u), c.f[1]);
    c.budget -= 9;
L_003D9F10:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    st32((c.r[3].w[0] + 52u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D9F38; } }
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 44u), c.f[0]);
    c.budget -= 3;
L_003D9F38:
    set32(c.r[4], ld32((c.r[28].w[0] - 28868u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9F48u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0085(c, 215u, depth + 1u); else { c.pc = 0x004178D0u; return; } if (c.pc != 0x003D9F48u) [[unlikely]] return; }
L_003D9F48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DA118; } }
L_003D9F50:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 28974u));
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28972u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9F7Cu); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003D9F7Cu) [[unlikely]] return; }
L_003D9F7C:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 28974u));
    c.r[7].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[28].w[0] - 28972u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[4].d[0] = c.r[5].d[0] ^ 0ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003D9FF8; } }
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 2;
L_003D9FBC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_003D9FD4; } }
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0])));  if (t) { goto L_003D9FFC; } }
L_003D9FD4:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D9FBCu | kUnwind; return; } goto L_003D9FBC; } }
    c.budget -= 1;
L_003D9FF8:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D9FFC:
    st32((c.r[28].w[0] - 28864u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    st32((c.r[3].w[0] + 52u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DA020; } }
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 44u), c.f[0]);
    c.budget -= 3;
L_003DA020:
    set32(c.r[4], ld32((c.r[28].w[0] - 28864u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA030u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0085(c, 215u, depth + 1u); else { c.pc = 0x004178D0u; return; } if (c.pc != 0x003DA030u) [[unlikely]] return; }
L_003DA030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DA118; } }
L_003DA038:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 29006u));
    c.r[16].d[0] = c.r[18].d[0] << 33;
    c.r[16].d[0] = c.r[16].d[0] >> 33;
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29004u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA06Cu); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003DA06Cu) [[unlikely]] return; }
L_003DA06C:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 29006u));
    c.r[7].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[28].w[0] - 29004u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[4].d[0] = c.r[5].d[0] ^ 0ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003DA0E8; } }
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 2;
L_003DA0AC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_003DA0C4; } }
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0])));  if (t) { goto L_003DA0EC; } }
L_003DA0C4:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DA0ACu | kUnwind; return; } goto L_003DA0AC; } }
    c.budget -= 1;
L_003DA0E8:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DA0EC:
    st32((c.r[28].w[0] - 28872u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[3].w[0] + 28u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DA110; } }
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 60u), c.f[0]);
    c.budget -= 3;
L_003DA110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA118u); set32(c.r[4], ld32((c.r[28].w[0] - 28872u)));  if (depth < kMaxDepth) unit_0086(c, 28u, depth + 1u); else { c.pc = 0x004186D0u; return; } if (c.pc != 0x003DA118u) [[unlikely]] return; }
L_003DA118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003DA1F0; } }
L_003DA120:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[18].d[0] = c.r[18].d[0] << 34;
    c.r[2].d[0] = ld16((c.r[2].w[0] + 28218u));
    c.r[18].d[0] = c.r[18].d[0] >> 34;
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], ld32((c.r[2].w[0] + 28220u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA15Cu); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003DA15Cu) [[unlikely]] return; }
L_003DA15C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld16((c.r[3].w[0] + 28218u));
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[4], ld32((c.r[3].w[0] + 28220u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[4].d[0] = c.r[5].d[0] ^ 0ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003DA1E0; } }
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 2;
L_003DA1A4:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_003DA1BC; } }
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_003DA1E4; } }
L_003DA1BC:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DA1A4u | kUnwind; return; } goto L_003DA1A4; } }
    c.budget -= 1;
L_003DA1E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DA1E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28868u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D9F10u | kUnwind; return; } goto L_003D9F10; } }
L_003DA1EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003DA1F0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003DA210:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DA488; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003DA41C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003DA3AC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003DA33C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003DA2CC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DA25C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DA488; } }
L_003DA25C:
    set32(c.r[3], ld32((c.r[28].w[0] - 28876u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DA488; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DA488; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.f[0] = ld32((c.r[3].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[13]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DA488; } }
    st32((c.r[3].w[0] + 68u), c.f[12]);
    st32((c.r[3].w[0] + 64u), c.f[13]);
    c.f[2] = ld32((c.r[3].w[0] + 68u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DA2C4; } }
    c.f[1] = ld32((c.r[3].w[0] + 64u));
    c.f[0] = ld32((c.r[3].w[0] + 60u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 7;
L_003DA2C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 72u), c.f[0]);  if (t) { goto L_003DA488; } }
L_003DA2CC:
    set32(c.r[3], ld32((c.r[28].w[0] - 28860u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DA488; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DA488; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.f[0] = ld32((c.r[3].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[13]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DA488; } }
    st32((c.r[3].w[0] + 68u), c.f[12]);
    st32((c.r[3].w[0] + 64u), c.f[13]);
    c.f[2] = ld32((c.r[3].w[0] + 68u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DA334; } }
    c.f[1] = ld32((c.r[3].w[0] + 64u));
    c.f[0] = ld32((c.r[3].w[0] + 60u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 7;
L_003DA334:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 72u), c.f[0]);  if (t) { goto L_003DA488; } }
L_003DA33C:
    set32(c.r[3], ld32((c.r[28].w[0] - 28872u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DA488; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DA488; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[13]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DA488; } }
    st32((c.r[3].w[0] + 52u), c.f[12]);
    st32((c.r[3].w[0] + 48u), c.f[13]);
    c.f[2] = ld32((c.r[3].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DA3A4; } }
    c.f[1] = ld32((c.r[3].w[0] + 48u));
    c.f[0] = ld32((c.r[3].w[0] + 60u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 7;
L_003DA3A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 56u), c.f[0]);  if (t) { goto L_003DA488; } }
L_003DA3AC:
    set32(c.r[3], ld32((c.r[28].w[0] - 28868u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DA488; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DA488; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.f[0] = ld32((c.r[3].w[0] + 76u));
    fpu_compare(c, fp::key(c.f[13]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DA488; } }
    st32((c.r[3].w[0] + 80u), c.f[12]);
    st32((c.r[3].w[0] + 76u), c.f[13]);
    c.f[2] = ld32((c.r[3].w[0] + 80u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DA414; } }
    c.f[1] = ld32((c.r[3].w[0] + 76u));
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 7;
L_003DA414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 84u), c.f[0]);  if (t) { goto L_003DA488; } }
L_003DA41C:
    set32(c.r[3], ld32((c.r[28].w[0] - 28864u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DA488; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DA488; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.f[0] = ld32((c.r[3].w[0] + 76u));
    fpu_compare(c, fp::key(c.f[13]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DA488; } }
    st32((c.r[3].w[0] + 80u), c.f[12]);
    st32((c.r[3].w[0] + 76u), c.f[13]);
    c.f[2] = ld32((c.r[3].w[0] + 80u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DA484; } }
    c.f[1] = ld32((c.r[3].w[0] + 76u));
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 7;
L_003DA484:
    st32((c.r[3].w[0] + 84u), c.f[0]);
    c.budget -= 1;
L_003DA488:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003DA490:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DA608; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003DA5CC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003DA590; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003DA554; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003DA518; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DA4DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003DA60C; } }
L_003DA4DC:
    set32(c.r[2], ld32((c.r[28].w[0] - 28876u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DA608; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DA50C; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] << 45;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_003DA510; } }
L_003DA50C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DA510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DA60C; } }
L_003DA518:
    set32(c.r[2], ld32((c.r[28].w[0] - 28860u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DA608; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DA548; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] << 45;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_003DA54C; } }
L_003DA548:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DA54C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DA60C; } }
L_003DA554:
    set32(c.r[2], ld32((c.r[28].w[0] - 28864u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DA608; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DA584; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] << 45;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_003DA588; } }
L_003DA584:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DA588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DA60C; } }
L_003DA590:
    set32(c.r[2], ld32((c.r[28].w[0] - 28872u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DA608; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DA5C0; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] << 45;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_003DA5C4; } }
L_003DA5C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DA5C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DA60C; } }
L_003DA5CC:
    set32(c.r[2], ld32((c.r[28].w[0] - 28868u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DA608; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DA5FC; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] << 45;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_003DA600; } }
L_003DA5FC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DA600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DA60C; } }
L_003DA608:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DA60C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003DA620:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DA70C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003DA6D4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003DA6D4; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003DA6B4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003DA694; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DA674; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003DA710; } }
L_003DA674:
    set32(c.r[4], ld32((c.r[28].w[0] - 28876u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DA688; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA688u);  if (depth < kMaxDepth) unit_0086(c, 60u, depth + 1u); else { c.pc = 0x00418E90u; return; } if (c.pc != 0x003DA688u) [[unlikely]] return; }
L_003DA688:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 896u), 0u);  if (t) { goto L_003DA70C; } }
L_003DA694:
    set32(c.r[4], ld32((c.r[28].w[0] - 28860u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DA6A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA6A8u);  if (depth < kMaxDepth) unit_0086(c, 60u, depth + 1u); else { c.pc = 0x00418E90u; return; } if (c.pc != 0x003DA6A8u) [[unlikely]] return; }
L_003DA6A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 900u), 0u);  if (t) { goto L_003DA70C; } }
L_003DA6B4:
    set32(c.r[4], ld32((c.r[28].w[0] - 28864u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DA6C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA6C8u);  if (depth < kMaxDepth) unit_0085(c, 211u, depth + 1u); else { c.pc = 0x00417750u; return; } if (c.pc != 0x003DA6C8u) [[unlikely]] return; }
L_003DA6C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 912u), 0u);  if (t) { goto L_003DA70C; } }
L_003DA6D4:
    set32(c.r[4], ld32((c.r[28].w[0] - 28868u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DA6E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA6E8u);  if (depth < kMaxDepth) unit_0085(c, 211u, depth + 1u); else { c.pc = 0x00417750u; return; } if (c.pc != 0x003DA6E8u) [[unlikely]] return; }
L_003DA6E8:
    set32(c.r[4], ld32((c.r[28].w[0] - 28872u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DA6FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA6FCu);  if (depth < kMaxDepth) unit_0086(c, 22u, depth + 1u); else { c.pc = 0x00418510u; return; } if (c.pc != 0x003DA6FCu) [[unlikely]] return; }
L_003DA6FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0] + 904u), 0u);
    st32((c.r[3].w[0] + 908u), 0u);
    c.budget -= 4;
L_003DA70C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DA710:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DA720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DA91C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003DA8C4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003DA86C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003DA824; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003DA7CC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DA774; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DA91C; } }
L_003DA774:
    set32(c.r[5], ld32((c.r[28].w[0] - 28876u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003DA91C; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DA928; } }
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003DA7B4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] << 42;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_003DA7B8; } }
L_003DA7B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DA7B8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003DA7BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DA91C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[5].w[0] + 36u));  if (t) { goto L_003DA968; } }
L_003DA7CC:
    set32(c.r[5], ld32((c.r[28].w[0] - 28860u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003DA91C; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DA930; } }
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003DA80C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] << 42;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_003DA810; } }
L_003DA80C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DA810:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003DA814:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DA91C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[5].w[0] + 36u));  if (t) { goto L_003DA968; } }
L_003DA824:
    set32(c.r[3], ld32((c.r[28].w[0] - 28872u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DA91C; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DA950; } }
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003DA938; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DA854:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003DA858:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DA91C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28872u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0] + 36u));  if (t) { goto L_003DA968; } }
L_003DA86C:
    set32(c.r[5], ld32((c.r[28].w[0] - 28868u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003DA91C; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DA958; } }
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003DA8AC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] << 42;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_003DA8B0; } }
L_003DA8AC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DA8B0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003DA8B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DA91C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[5].w[0] + 60u));  if (t) { goto L_003DA968; } }
L_003DA8C4:
    set32(c.r[5], ld32((c.r[28].w[0] - 28864u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003DA91C; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DA960; } }
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003DA904; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] << 42;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_003DA908; } }
L_003DA904:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DA908:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003DA90C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DA91C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[5].w[0] + 60u));  if (t) { goto L_003DA968; } }
L_003DA91C:
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003DA96C; } }
L_003DA928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DA7BCu | kUnwind; return; } goto L_003DA7BC; } }
L_003DA930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DA814u | kUnwind; return; } goto L_003DA814; } }
L_003DA938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA940u); c.r[4].d[0] = ld8((c.r[4].w[0] + 36u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x003DA940u) [[unlikely]] return; }
L_003DA940:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DA854u | kUnwind; return; } goto L_003DA854; } }
L_003DA950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DA858u | kUnwind; return; } goto L_003DA858; } }
L_003DA958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DA8B4u | kUnwind; return; } goto L_003DA8B4; } }
L_003DA960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DA90Cu | kUnwind; return; } goto L_003DA90C; } }
L_003DA968:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DA96C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DA980:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DAC08; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003DAB94; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003DAB20; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003DAABC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003DAA48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DA9D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DAC08; } }
L_003DA9D4:
    set32(c.r[6], ld32((c.r[28].w[0] - 28876u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003DAC08; } }
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003DAC14; } }
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003DAA14; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] << 42;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_003DAA18; } }
L_003DAA14:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DAA18:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003DAA1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DAC08; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003DAA3C; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0] + 60u));  if (t) { goto L_003DAA40; } }
L_003DAA3C:
    c.f[0] = ld32((c.r[6].w[0] + 28u));
    c.budget -= 1;
L_003DAA40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003DAC58; } }
L_003DAA48:
    set32(c.r[6], ld32((c.r[28].w[0] - 28860u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003DAC08; } }
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003DAC1C; } }
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003DAA88; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] << 42;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_003DAA8C; } }
L_003DAA88:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DAA8C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003DAA90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DAC08; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003DAAB0; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0] + 60u));  if (t) { goto L_003DAAB4; } }
L_003DAAB0:
    c.f[0] = ld32((c.r[6].w[0] + 28u));
    c.budget -= 1;
L_003DAAB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DAC54; } }
L_003DAABC:
    set32(c.r[3], ld32((c.r[28].w[0] - 28872u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DAC08; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DAC3C; } }
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003DAC24; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DAAEC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003DAAF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DAC08; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 28872u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DAB14; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0] + 60u));  if (t) { goto L_003DAB18; } }
L_003DAB14:
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    c.budget -= 1;
L_003DAB18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DAC54; } }
L_003DAB20:
    set32(c.r[6], ld32((c.r[28].w[0] - 28868u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003DAC08; } }
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003DAC44; } }
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003DAB60; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] << 42;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_003DAB64; } }
L_003DAB60:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DAB64:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003DAB68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DAC08; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003DAB88; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0] + 44u));  if (t) { goto L_003DAB8C; } }
L_003DAB88:
    c.f[0] = ld32((c.r[6].w[0] + 52u));
    c.budget -= 1;
L_003DAB8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DAC54; } }
L_003DAB94:
    set32(c.r[6], ld32((c.r[28].w[0] - 28864u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003DAC08; } }
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003DAC4C; } }
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003DABD4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] << 42;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_003DABD8; } }
L_003DABD4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DABD8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003DABDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DAC08; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003DABFC; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0] + 44u));  if (t) { goto L_003DAC00; } }
L_003DABFC:
    c.f[0] = ld32((c.r[6].w[0] + 52u));
    c.budget -= 1;
L_003DAC00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DAC54; } }
L_003DAC08:
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DAC54; } }
L_003DAC14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DAA1Cu | kUnwind; return; } goto L_003DAA1C; } }
L_003DAC1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DAA90u | kUnwind; return; } goto L_003DAA90; } }
L_003DAC24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAC2Cu); c.r[4].d[0] = ld8((c.r[4].w[0] + 36u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x003DAC2Cu) [[unlikely]] return; }
L_003DAC2C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DAAECu | kUnwind; return; } goto L_003DAAEC; } }
L_003DAC3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DAAF0u | kUnwind; return; } goto L_003DAAF0; } }
L_003DAC44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DAB68u | kUnwind; return; } goto L_003DAB68; } }
L_003DAC4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DABDCu | kUnwind; return; } goto L_003DABDC; } }
L_003DAC54:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DAC58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DAC60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DAEA8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003DADB4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003DADB4; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003DAD54; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003DAD04; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DACB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003DAEAC; } }
L_003DACB4:
    set32(c.r[3], ld32((c.r[28].w[0] - 28876u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DAE60; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DAE58; } }
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003DACF4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] << 42;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_003DACF8; } }
L_003DACF4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DACF8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003DACFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003DAEB0; } }
L_003DAD04:
    set32(c.r[3], ld32((c.r[28].w[0] - 28860u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DAE70; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DAE68; } }
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003DAD44; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] << 42;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_003DAD48; } }
L_003DAD44:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DAD48:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003DAD4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DAEAC; } }
L_003DAD54:
    set32(c.r[3], ld32((c.r[28].w[0] - 28864u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DADAC; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DAE78; } }
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003DAD94; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] << 42;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_003DAD98; } }
L_003DAD94:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DAD98:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003DAD9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DADAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003DAEAC; } }
L_003DADAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003DAEAC; } }
L_003DADB4:
    set32(c.r[3], ld32((c.r[28].w[0] - 28872u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DADF8; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DAE98; } }
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003DAE80; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DADE4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003DADE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DADF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003DAEAC; } }
L_003DADF8:
    set32(c.r[3], ld32((c.r[28].w[0] - 28868u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DAE50; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DAEA0; } }
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003DAE38; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] << 42;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_003DAE3C; } }
L_003DAE38:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DAE3C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003DAE40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DAE50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003DAEAC; } }
L_003DAE50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003DAEAC; } }
L_003DAE58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DACFCu | kUnwind; return; } goto L_003DACFC; } }
L_003DAE60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003DAEAC; } }
L_003DAE68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DAD4Cu | kUnwind; return; } goto L_003DAD4C; } }
L_003DAE70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003DAEAC; } }
L_003DAE78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DAD9Cu | kUnwind; return; } goto L_003DAD9C; } }
L_003DAE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAE88u); c.r[4].d[0] = ld8((c.r[4].w[0] + 36u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x003DAE88u) [[unlikely]] return; }
L_003DAE88:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DADE4u | kUnwind; return; } goto L_003DADE4; } }
L_003DAE98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DADE8u | kUnwind; return; } goto L_003DADE8; } }
L_003DAEA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DAE40u | kUnwind; return; } goto L_003DAE40; } }
L_003DAEA8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DAEAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DAEB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DAEC0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1536u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(39ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003DAF24; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 19088u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003D8000u < 16384u) { entry = entries_0076[(t - 0x003D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003DAEEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003DAF28; } }
L_003DAEF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003DAF28; } }
L_003DAEFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_003DAF28; } }
L_003DAF04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_003DAF28; } }
L_003DAF0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_003DAF28; } }
L_003DAF14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_003DAF28; } }
L_003DAF1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_003DAF28; } }
L_003DAF24:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DAF28:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003DAF80; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 19040u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003D8000u < 16384u) { entry = entries_0076[(t - 0x003D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003DAF50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003DAF84; } }
L_003DAF58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003DAF84; } }
L_003DAF60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003DAF84; } }
L_003DAF68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_003DAF84; } }
L_003DAF70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_003DAF84; } }
L_003DAF78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_003DAF84; } }
L_003DAF80:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003DAF84:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003DAF90:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1536u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(39ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003DAFF4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 19248u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003D8000u < 16384u) { entry = entries_0076[(t - 0x003D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003DAFBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003DAFF8; } }
L_003DAFC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003DAFF8; } }
L_003DAFCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_003DAFF8; } }
L_003DAFD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_003DAFF8; } }
L_003DAFDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_003DAFF8; } }
L_003DAFE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_003DAFF8; } }
L_003DAFEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_003DAFF8; } }
L_003DAFF4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DAFF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003DB000:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DB078; } }
L_003DB01C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] + 30704u), static_cast<std::uint8_t>(0u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[4].w[0] + 30720u), static_cast<std::uint8_t>(0u));
    c.f[2] = ld32((c.r[3].w[0] + 1004u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[1] = ld32((c.r[3].w[0] + 996u));
    st32((c.r[8].w[0] - 25284u), c.f[2]);
    st32((c.r[7].w[0] + 1004u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[3].w[0] + 1000u));
    st32((c.r[6].w[0] - 25292u), c.f[1]);
    st32((c.r[5].w[0] + 996u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0] - 25288u), c.f[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 1000u), c.f[0]);  if (t) { goto L_003DB384; } }
L_003DB078:
    c.f[2] = ld32((c.r[28].w[0] - 28696u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[1] = ld32((c.r[28].w[0] - 28692u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[28].w[0] - 28688u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[28].w[0] - 28908u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 28912u), static_cast<std::uint8_t>(0u));
    st32((c.r[7].w[0] - 25292u), c.f[2]);
    st32((c.r[6].w[0] + 996u), c.f[2]);
    st32((c.r[5].w[0] - 25288u), c.f[1]);
    st32((c.r[4].w[0] + 1000u), c.f[1]);
    st32((c.r[3].w[0] - 25284u), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB0C0u); st32((c.r[2].w[0] + 1004u), c.f[0]);  if (depth < kMaxDepth) unit_009A(c, 54u, depth + 1u); else { c.pc = 0x00468D60u; return; } if (c.pc != 0x003DB0C0u) [[unlikely]] return; }
L_003DB0C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[2] = ld32((c.r[2].w[0] - 25292u));
    st8((c.r[28].w[0] - 28912u), static_cast<std::uint8_t>(0u));
    c.f[1] = ld32((c.r[3].w[0] - 25288u));
    st8((c.r[28].w[0] - 28648u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[2].w[0] - 25284u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28644u));
    st32((c.r[28].w[0] - 28696u), c.f[2]);
    st32((c.r[28].w[0] - 28692u), c.f[1]);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 28688u), c.f[0]);  if (t) { goto L_003DB374; } }
L_003DB0F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB100u); set32(c.r[4], c.r[4].w[0] + 496u);  if (depth < kMaxDepth) unit_00A0(c, 174u, depth + 1u); else { c.pc = 0x00482730u; return; } if (c.pc != 0x003DB100u) [[unlikely]] return; }
L_003DB100:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB10Cu); set32(c.r[4], c.r[4].w[0] + 524u);  if (depth < kMaxDepth) unit_00A0(c, 174u, depth + 1u); else { c.pc = 0x00482730u; return; } if (c.pc != 0x003DB10Cu) [[unlikely]] return; }
L_003DB10C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB118u); set32(c.r[4], c.r[4].w[0] + 552u);  if (depth < kMaxDepth) unit_00A0(c, 174u, depth + 1u); else { c.pc = 0x00482730u; return; } if (c.pc != 0x003DB118u) [[unlikely]] return; }
L_003DB118:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB124u); set32(c.r[4], c.r[4].w[0] + 580u);  if (depth < kMaxDepth) unit_00A0(c, 174u, depth + 1u); else { c.pc = 0x00482730u; return; } if (c.pc != 0x003DB124u) [[unlikely]] return; }
L_003DB124:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 28592u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 752u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[9], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB160u); st32((c.r[28].w[0] - 28596u), 0u);  if (depth < kMaxDepth) unit_001C(c, 69u, depth + 1u); else { c.pc = 0x002708F0u; return; } if (c.pc != 0x003DB160u) [[unlikely]] return; }
L_003DB160:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB16Cu); set32(c.r[4], c.r[4].w[0] + 1024u);  if (depth < kMaxDepth) unit_0085(c, 72u, depth + 1u); else { c.pc = 0x004156A0u; return; } if (c.pc != 0x003DB16Cu) [[unlikely]] return; }
L_003DB16C:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003DB174:
    set32(c.r[4], ld32((c.r[28].w[0] - 28900u)));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 34u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 34u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[5].w[0] + 28u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB1A8u); c.r[4].d[0] = ld8((c.r[5].w[0] + 4u));  if (depth < kMaxDepth) unit_001A(c, 272u, depth + 1u); else { c.pc = 0x0026A8F0u; return; } if (c.pc != 0x003DB1A8u) [[unlikely]] return; }
L_003DB1A8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DB174u | kUnwind; return; } goto L_003DB174; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003DB1C0:
    set32(c.r[4], ld32((c.r[28].w[0] - 28892u)));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0] + 20u), 0u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 24u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB1F4u); c.r[4].d[0] = ld8((c.r[5].w[0] + 4u));  if (depth < kMaxDepth) unit_001A(c, 272u, depth + 1u); else { c.pc = 0x0026A8F0u; return; } if (c.pc != 0x003DB1F4u) [[unlikely]] return; }
L_003DB1F4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DB1C0u | kUnwind; return; } goto L_003DB1C0; } }
    c.r[12].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[28].w[0] - 28576u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[12], c.r[12].w[0] + 368u);
    set32(c.r[11], c.r[11].w[0] + 832u);
    set32(c.r[10], c.r[10].w[0] + 896u);
    set32(c.r[9], c.r[9].w[0] + 864u);
    set32(c.r[8], c.r[8].w[0] + 928u);
    set32(c.r[7], c.r[7].w[0] + 448u);
    set32(c.r[6], c.r[6].w[0] + 768u);
    set32(c.r[5], c.r[5].w[0] + 800u);
    set32(c.r[4], c.r[28].w[0] - 28704u);
    c.budget -= 19;
L_003DB250:
    st32((c.r[12].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[12].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    st32((c.r[12].w[0] + 8u), 0u);
    st32((c.r[11].w[0]), 0u);
    set32(c.r[12], c.r[12].w[0] + 16u);
    st32((c.r[10].w[0]), 0u);
    set32(c.r[11], c.r[11].w[0] + 4u);
    st32((c.r[9].w[0]), 0u);
    set32(c.r[10], c.r[10].w[0] + 4u);
    st32((c.r[8].w[0]), 0u);
    set32(c.r[9], c.r[9].w[0] + 4u);
    st32((c.r[7].w[0]), 0u);
    set32(c.r[8], c.r[8].w[0] + 4u);
    st32((c.r[6].w[0]), 0u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    st32((c.r[5].w[0]), 0u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 23;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DB250u | kUnwind; return; } goto L_003DB250; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28876u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DB2C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB2C0u);  if (depth < kMaxDepth) unit_0086(c, 60u, depth + 1u); else { c.pc = 0x00418E90u; return; } if (c.pc != 0x003DB2C0u) [[unlikely]] return; }
L_003DB2C0:
    st32((c.r[28].w[0] - 28876u), 0u);
    c.budget -= 1;
L_003DB2C4:
    set32(c.r[4], ld32((c.r[28].w[0] - 28860u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DB2DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB2D8u);  if (depth < kMaxDepth) unit_0086(c, 60u, depth + 1u); else { c.pc = 0x00418E90u; return; } if (c.pc != 0x003DB2D8u) [[unlikely]] return; }
L_003DB2D8:
    st32((c.r[28].w[0] - 28860u), 0u);
    c.budget -= 1;
L_003DB2DC:
    set32(c.r[4], ld32((c.r[28].w[0] - 28872u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DB2F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB2F0u);  if (depth < kMaxDepth) unit_0086(c, 22u, depth + 1u); else { c.pc = 0x00418510u; return; } if (c.pc != 0x003DB2F0u) [[unlikely]] return; }
L_003DB2F0:
    st32((c.r[28].w[0] - 28872u), 0u);
    c.budget -= 1;
L_003DB2F4:
    set32(c.r[4], ld32((c.r[28].w[0] - 28868u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DB30C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB308u);  if (depth < kMaxDepth) unit_0085(c, 211u, depth + 1u); else { c.pc = 0x00417750u; return; } if (c.pc != 0x003DB308u) [[unlikely]] return; }
L_003DB308:
    st32((c.r[28].w[0] - 28868u), 0u);
    c.budget -= 1;
L_003DB30C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28864u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DB324; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB320u);  if (depth < kMaxDepth) unit_0085(c, 211u, depth + 1u); else { c.pc = 0x00417750u; return; } if (c.pc != 0x003DB320u) [[unlikely]] return; }
L_003DB320:
    st32((c.r[28].w[0] - 28864u), 0u);
    c.budget -= 1;
L_003DB324:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28624u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DB360; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28628u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DB35C; } }
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB35Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DB35Cu) [[unlikely]] return; }
L_003DB35C:
    st8((c.r[28].w[0] - 28624u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003DB360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB368u);  if (depth < kMaxDepth) unit_001D(c, 134u, depth + 1u); else { c.pc = 0x00277090u; return; } if (c.pc != 0x003DB368u) [[unlikely]] return; }
L_003DB368:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 31672u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DB01Cu | kUnwind; return; } goto L_003DB01C; } }
L_003DB374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB37Cu);  if (depth < kMaxDepth) unit_001D(c, 135u, depth + 1u); else { c.pc = 0x002770A0u; return; } if (c.pc != 0x003DB37Cu) [[unlikely]] return; }
L_003DB37C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 28644u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DB0F4u | kUnwind; return; } goto L_003DB0F4; } }
L_003DB384:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DB3A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB3B0u); set32(c.r[4], c.r[28].w[0] - 28824u);  if (depth < kMaxDepth) unit_0084(c, 59u, depth + 1u); else { c.pc = 0x00410EB0u; return; } if (c.pc != 0x003DB3B0u) [[unlikely]] return; }
L_003DB3B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 28784u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DB3D8; } }
L_003DB3BC:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 28784u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB3CCu); st32((c.r[28].w[0] - 28780u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003DB3CCu) [[unlikely]] return; }
L_003DB3CC:
    set32(c.r[2], ld32((c.r[28].w[0] - 28780u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 28784u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DB3BCu | kUnwind; return; } goto L_003DB3BC; } }
L_003DB3D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 28760u)));
    st32((c.r[28].w[0] - 28784u), 0u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[28].w[0] - 28780u), 0u);  if (t) { goto L_003DB408; } }
L_003DB3E8:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 28760u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB3F8u); st32((c.r[28].w[0] - 28756u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003DB3F8u) [[unlikely]] return; }
L_003DB3F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 28756u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 28760u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DB3E8u | kUnwind; return; } goto L_003DB3E8; } }
    c.budget -= 1;
L_003DB408:
    set32(c.r[2], ld32((c.r[28].w[0] - 28816u)));
    st32((c.r[28].w[0] - 28760u), 0u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[28].w[0] - 28756u), 0u);  if (t) { goto L_003DB438; } }
L_003DB418:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB428u); st32((c.r[28].w[0] - 28812u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003DB428u) [[unlikely]] return; }
L_003DB428:
    set32(c.r[2], ld32((c.r[28].w[0] - 28812u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 28816u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DB418u | kUnwind; return; } goto L_003DB418; } }
    c.budget -= 1;
L_003DB438:
    st32((c.r[28].w[0] - 28816u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB444u); st32((c.r[28].w[0] - 28812u), 0u);  if (depth < kMaxDepth) unit_001D(c, 124u, depth + 1u); else { c.pc = 0x00276FB0u; return; } if (c.pc != 0x003DB444u) [[unlikely]] return; }
L_003DB444:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DB450:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00277010u | kUnwind; return; } [[clang::musttail]] return unit_001D(c, 128u, depth); }
L_003DB460:
    c.f[1] = ld32((c.r[28].w[0] - 32272u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DB498; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DB4B0; } }
L_003DB498:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.budget -= 6;
L_003DB4B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[3].w[0] + 30716u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DB4F4; } }
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] + 30704u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 30708u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0] + 30712u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 30716u), c.f[1]);
    c.budget -= 10;
L_003DB4F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[3].w[0] + 30732u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DB538; } }
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] + 30720u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 30724u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0] + 30728u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 30732u), c.f[1]);
    c.budget -= 10;
L_003DB538:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 28648u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003DB550:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 7;
L_003DB56C:
    set32(c.r[3], ld32((c.r[28].w[0] - 28896u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[5].d[0] << 42;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DB6C4; } }
    set32(c.r[9], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    set32(c.r[8], c.r[4].w[0] << 18);
    c.r[7].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[6], c.r[4].w[0] << 19);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    set32(c.r[4], c.r[4].w[0] << 22);
    c.r[5].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st32((c.r[16].w[0] + 24u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 24u)));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st32((c.r[16].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 22;
L_003DB5E8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DB56Cu | kUnwind; return; } goto L_003DB56C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 28888u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[5].d[0] << 42;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DB748; } }
    set32(c.r[9], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    set32(c.r[8], c.r[4].w[0] << 18);
    c.r[7].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[6], c.r[4].w[0] << 19);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    set32(c.r[4], c.r[4].w[0] << 22);
    c.r[5].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st32((c.r[16].w[0] + 24u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 24u)));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st32((c.r[16].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 64u), 0u);
    c.budget -= 23;
L_003DB678:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[3] = ld32((c.r[3].w[0] - 25292u));
    set32(c.r[4], 0u + 1u);
    st8((c.r[28].w[0] - 28908u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st8((c.r[28].w[0] - 28912u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[1] = ld32((c.r[4].w[0] - 25288u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[2] = ld32((c.r[3].w[0] - 25280u));
    st32((c.r[28].w[0] - 28696u), c.f[3]);
    st32((c.r[28].w[0] - 28692u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[3].w[0] - 25284u));
    st32((c.r[6].w[0] - 25292u), c.f[2]);
    st32((c.r[5].w[0] + 996u), c.f[2]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28688u), c.f[0]);  if (t) { goto L_003DB7CC; } }
L_003DB6C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], c.r[4].w[0] << 21);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[7], c.r[4].w[0] << 18);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], c.r[4].w[0] << 19);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 24u)));
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], c.r[4].w[0] << 22);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st32((c.r[16].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[16].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB740u); c.r[4].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_001A(c, 287u, depth + 1u); else { c.pc = 0x0026AA80u; return; } if (c.pc != 0x003DB740u) [[unlikely]] return; }
L_003DB740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DB5E8u | kUnwind; return; } goto L_003DB5E8; } }
L_003DB748:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[8].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[4], c.r[8].w[0] << 21);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[7], c.r[8].w[0] << 18);
    set32(c.r[5], c.r[8].w[0] << 19);
    set32(c.r[3], c.r[8].w[0] << 22);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st32((c.r[16].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[16].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB7C4u); c.r[4].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_001A(c, 287u, depth + 1u); else { c.pc = 0x0026AA80u; return; } if (c.pc != 0x003DB7C4u) [[unlikely]] return; }
L_003DB7C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DB678u | kUnwind; return; } goto L_003DB678; } }
L_003DB7CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DB7F0:
    c.f[2] = ld32((c.r[28].w[0] - 28696u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[1] = ld32((c.r[28].w[0] - 28692u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[28].w[0] - 28688u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[28].w[0] - 28908u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 28912u), static_cast<std::uint8_t>(0u));
    st32((c.r[8].w[0] - 25292u), c.f[2]);
    st32((c.r[7].w[0] + 996u), c.f[2]);
    st32((c.r[6].w[0] - 25288u), c.f[1]);
    st32((c.r[5].w[0] + 1000u), c.f[1]);
    st32((c.r[4].w[0] - 25284u), c.f[0]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 1004u), c.f[0]);  c.pc = t; return; }
L_003DB840:
    c.f[2] = ld32((c.r[28].w[0] - 28696u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[1] = ld32((c.r[28].w[0] - 28692u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[28].w[0] - 28688u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[28].w[0] - 28912u), static_cast<std::uint8_t>(0u));
    st32((c.r[8].w[0] - 25292u), c.f[2]);
    st32((c.r[7].w[0] + 996u), c.f[2]);
    st32((c.r[6].w[0] - 25288u), c.f[1]);
    st32((c.r[5].w[0] + 1000u), c.f[1]);
    st32((c.r[4].w[0] - 25284u), c.f[0]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 1004u), c.f[0]);  c.pc = t; return; }
L_003DB890:
    set32(c.r[3], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st8((c.r[28].w[0] - 28912u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[3] = ld32((c.r[3].w[0] - 25292u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[2] = ld32((c.r[3].w[0] - 25280u));
    st32((c.r[28].w[0] - 28696u), c.f[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[1] = ld32((c.r[3].w[0] - 25288u));
    st32((c.r[5].w[0] - 25292u), c.f[2]);
    st32((c.r[4].w[0] + 996u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[3].w[0] - 25284u));
    st32((c.r[28].w[0] - 28692u), c.f[1]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 28688u), c.f[0]);  c.pc = t; return; }
L_003DB8E0:
    set32(c.r[3], 0u + 1u);
    st32((c.r[28].w[0] - 28628u), c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 28624u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003DB8F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DBADC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 28936u)));
    set32(c.r[18], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[18].sd[0] < 32ll ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[18].d[0] = 0ull;
    set32(c.r[4], c.r[18].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] - 2304u);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 11;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_003DBADC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[4] = ld32((c.r[3].w[0] - 22568u));
    c.f[5] = ld32((c.r[19].w[0] + 8u));
    c.f[3] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[2] = ld32((c.r[3].w[0] - 22572u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[29].w[0] + 120u), c.f[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[3].w[0] - 22576u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 116u), c.f[2]);
    set32(c.r[3], ld32((c.r[28].w[0] - 28936u)));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 17;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; st32((c.r[29].w[0] + 112u), c.f[0]);  if (t) { goto L_003DBADC; } }
L_003DB994:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DBA9C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 24u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[17].w[0] + 16u);  if (t) { goto L_003DBA14; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DBA50; } }
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003DBA1C; } }
L_003DB9D0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DB9D4:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_003DB9D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DBA58; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[1].d[0] = c.r[18].sd[0] < 32ll ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[18].d[0] = 0ull;
    set32(c.r[3], c.r[18].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] - 2304u);
    set32(c.r[3], ld32((c.r[28].w[0] - 28936u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    c.budget -= 11;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DB994u | kUnwind; return; } goto L_003DB994; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_003DBAE0; } }
L_003DBA14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DB9D8u | kUnwind; return; } goto L_003DB9D8; } }
L_003DBA1C:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DB9D0u | kUnwind; return; } goto L_003DB9D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBA30u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x003DBA30u) [[unlikely]] return; }
L_003DBA30:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DB9D4u | kUnwind; return; } goto L_003DB9D4; } }
L_003DBA50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DB9D8u | kUnwind; return; } goto L_003DB9D8; } }
L_003DBA58:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBA64u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0085(c, 151u, depth + 1u); else { c.pc = 0x00416B30u; return; } if (c.pc != 0x003DBA64u) [[unlikely]] return; }
L_003DBA64:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBA70u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0085(c, 99u, depth + 1u); else { c.pc = 0x004160C0u; return; } if (c.pc != 0x003DBA70u) [[unlikely]] return; }
L_003DBA70:
    c.f[3] = ld32((c.r[19].w[0]));
    st32((c.r[28].w[0] - 28936u), c.r[18].w[0]);
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[17].w[0]), c.f[3]);
    st32((c.r[17].w[0] + 4u), c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[1]);
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 32u), c.r[21].w[0]);  if (t) { goto L_003DBADC; } }
L_003DBA9C:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBAA8u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0085(c, 151u, depth + 1u); else { c.pc = 0x00416B30u; return; } if (c.pc != 0x003DBAA8u) [[unlikely]] return; }
L_003DBAA8:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBAB4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0085(c, 99u, depth + 1u); else { c.pc = 0x004160C0u; return; } if (c.pc != 0x003DBAB4u) [[unlikely]] return; }
L_003DBAB4:
    c.f[3] = ld32((c.r[19].w[0]));
    st32((c.r[28].w[0] - 28936u), c.r[18].w[0]);
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[17].w[0]), c.f[3]);
    st32((c.r[17].w[0] + 4u), c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[1]);
    st32((c.r[17].w[0] + 12u), c.f[0]);
    st32((c.r[17].w[0] + 32u), c.r[21].w[0]);
    c.budget -= 10;
L_003DBADC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003DBAE0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003DBB00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003DBCC0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1536u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(39ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003DBB7C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003D8000u < 16384u) { entry = entries_0076[(t - 0x003D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003DBB44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003DBB80; } }
L_003DBB4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003DBB80; } }
L_003DBB54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 5u);  if (t) { goto L_003DBB80; } }
L_003DBB5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 6u);  if (t) { goto L_003DBB80; } }
L_003DBB64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 8u);  if (t) { goto L_003DBB80; } }
L_003DBB6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 9u);  if (t) { goto L_003DBB80; } }
L_003DBB74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 7u);  if (t) { goto L_003DBB80; } }
L_003DBB7C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DBB80:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003DBC84; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003DBC40; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003DBBFC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003DBBB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003DBCC4; } }
L_003DBBB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 32u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBBCCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x003DBBCCu) [[unlikely]] return; }
L_003DBBCC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 33u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBBE0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x003DBBE0u) [[unlikely]] return; }
L_003DBBE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBBF4u); set32(c.r[5], 0u + 34u);  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x003DBBF4u) [[unlikely]] return; }
L_003DBBF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DBCC0; } }
L_003DBBFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 40u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBC10u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x003DBC10u) [[unlikely]] return; }
L_003DBC10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 41u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBC24u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x003DBC24u) [[unlikely]] return; }
L_003DBC24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBC38u); set32(c.r[5], 0u + 42u);  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x003DBC38u) [[unlikely]] return; }
L_003DBC38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DBCC0; } }
L_003DBC40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 48u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBC54u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x003DBC54u) [[unlikely]] return; }
L_003DBC54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 49u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBC68u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x003DBC68u) [[unlikely]] return; }
L_003DBC68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBC7Cu); set32(c.r[5], 0u + 50u);  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x003DBC7Cu) [[unlikely]] return; }
L_003DBC7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DBCC0; } }
L_003DBC84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 56u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBC98u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x003DBC98u) [[unlikely]] return; }
L_003DBC98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 57u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBCACu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x003DBCACu) [[unlikely]] return; }
L_003DBCAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBCC0u); set32(c.r[5], 0u + 58u);  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x003DBCC0u) [[unlikely]] return; }
L_003DBCC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003DBCC4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DBCD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003DBD84; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 537u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003DBD48; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 19616u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003D8000u < 16384u) { entry = entries_0076[(t - 0x003D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003DBD0C:
    set32(c.r[5], 0u + 35u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBD18u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x003DBD18u) [[unlikely]] return; }
L_003DBD18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003DBE3C; } }
L_003DBD20:
    set32(c.r[5], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBD2Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x003DBD2Cu) [[unlikely]] return; }
L_003DBD2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DBE38; } }
L_003DBD34:
    set32(c.r[5], 0u + 38u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBD40u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x003DBD40u) [[unlikely]] return; }
L_003DBD40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DBE38; } }
L_003DBD48:
    set32(c.r[2], ld32((c.r[28].w[0] - 28652u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003DBD6C; } }
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], 0u + 37u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBD64u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x003DBD64u) [[unlikely]] return; }
L_003DBD64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DBE38; } }
L_003DBD6C:
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], 0u + 35u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBD7Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x003DBD7Cu) [[unlikely]] return; }
L_003DBD7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DBE38; } }
L_003DBD84:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DBE38; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 537u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003DBE04; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 19568u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003D8000u < 16384u) { entry = entries_0076[(t - 0x003D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003DBDBC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 102u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBDCCu); set32(c.r[4], c.r[4].w[0] + 28208u);  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x003DBDCCu) [[unlikely]] return; }
L_003DBDCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DBE38; } }
L_003DBDD4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBDE4u); set32(c.r[4], c.r[4].w[0] + 28208u);  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x003DBDE4u) [[unlikely]] return; }
L_003DBDE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DBE38; } }
L_003DBDEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 101u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBDFCu); set32(c.r[4], c.r[4].w[0] + 28208u);  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x003DBDFCu) [[unlikely]] return; }
L_003DBDFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DBE38; } }
L_003DBE04:
    set32(c.r[2], ld32((c.r[28].w[0] - 28652u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003DBE28; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 99u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBE20u); set32(c.r[4], c.r[4].w[0] + 28208u);  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x003DBE20u) [[unlikely]] return; }
L_003DBE20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DBE38; } }
L_003DBE28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 102u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBE38u); set32(c.r[4], c.r[4].w[0] + 28208u);  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x003DBE38u) [[unlikely]] return; }
L_003DBE38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DBE3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DBE50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DBE78; } }
L_003DBE70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003DBFB4; } }
L_003DBE78:
    set32(c.r[5], 0u + 50u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBE84u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x003DBE84u) [[unlikely]] return; }
L_003DBE84:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1536u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(39ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003DBEE8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 19712u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003D8000u < 16384u) { entry = entries_0076[(t - 0x003D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003DBEB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003DBEEC; } }
L_003DBEB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003DBEEC; } }
L_003DBEC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_003DBEEC; } }
L_003DBEC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_003DBEEC; } }
L_003DBED0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_003DBEEC; } }
L_003DBED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_003DBEEC; } }
L_003DBEE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_003DBEEC; } }
L_003DBEE8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DBEEC:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003DBFA0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 19664u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003D8000u < 16384u) { entry = entries_0076[(t - 0x003D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003DBF14:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBF20u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0077(c, 6u, depth + 1u); else { c.pc = 0x003DC0A0u; return; } if (c.pc != 0x003DBF20u) [[unlikely]] return; }
L_003DBF20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DBE70u | kUnwind; return; } goto L_003DBE70; } }
L_003DBF28:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBF34u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0077(c, 6u, depth + 1u); else { c.pc = 0x003DC0A0u; return; } if (c.pc != 0x003DBF34u) [[unlikely]] return; }
L_003DBF34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DBE70u | kUnwind; return; } goto L_003DBE70; } }
L_003DBF3C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBF48u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0077(c, 6u, depth + 1u); else { c.pc = 0x003DC0A0u; return; } if (c.pc != 0x003DBF48u) [[unlikely]] return; }
L_003DBF48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DBE70u | kUnwind; return; } goto L_003DBE70; } }
L_003DBF50:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBF5Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0077(c, 6u, depth + 1u); else { c.pc = 0x003DC0A0u; return; } if (c.pc != 0x003DBF5Cu) [[unlikely]] return; }
L_003DBF5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DBE70u | kUnwind; return; } goto L_003DBE70; } }
L_003DBF64:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBF70u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0077(c, 6u, depth + 1u); else { c.pc = 0x003DC0A0u; return; } if (c.pc != 0x003DBF70u) [[unlikely]] return; }
L_003DBF70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DBE70u | kUnwind; return; } goto L_003DBE70; } }
L_003DBF78:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBF84u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_0077(c, 6u, depth + 1u); else { c.pc = 0x003DC0A0u; return; } if (c.pc != 0x003DBF84u) [[unlikely]] return; }
L_003DBF84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DBE70u | kUnwind; return; } goto L_003DBE70; } }
L_003DBF8C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBF98u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0077(c, 6u, depth + 1u); else { c.pc = 0x003DC0A0u; return; } if (c.pc != 0x003DBF98u) [[unlikely]] return; }
L_003DBF98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DBE70u | kUnwind; return; } goto L_003DBE70; } }
L_003DBFA0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBFACu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0077(c, 6u, depth + 1u); else { c.pc = 0x003DC0A0u; return; } if (c.pc != 0x003DBFACu) [[unlikely]] return; }
L_003DBFAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DBE70u | kUnwind; return; } goto L_003DBE70; } }
L_003DBFB4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DBFD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0077(c, 5u, depth); } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0077(c, 3u, depth); } }
    [[clang::musttail]] return unit_0077(c, 2u, depth);
}

}

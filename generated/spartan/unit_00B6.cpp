#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B6[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0,
    12, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0,
    0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0,
    0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0,
    0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0,
    0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80,
    0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 85,
    0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104,
    0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0,
    122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0,
    0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 148,
    0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    161, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164,
    0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0,
    0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0,
    0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0,
    0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 222, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0,
    0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248,
    0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 253, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266,
};

void unit_00B6(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004D8000;
    case 2u: goto L_004D8004;
    case 3u: goto L_004D8028;
    case 4u: goto L_004D8030;
    case 5u: goto L_004D806C;
    case 6u: goto L_004D8078;
    case 7u: goto L_004D813C;
    case 8u: goto L_004D814C;
    case 9u: goto L_004D81A0;
    case 10u: goto L_004D81DC;
    case 11u: goto L_004D81E8;
    case 12u: goto L_004D8200;
    case 13u: goto L_004D820C;
    case 14u: goto L_004D821C;
    case 15u: goto L_004D8258;
    case 16u: goto L_004D8280;
    case 17u: goto L_004D8290;
    case 18u: goto L_004D82A0;
    case 19u: goto L_004D8314;
    case 20u: goto L_004D8330;
    case 21u: goto L_004D834C;
    case 22u: goto L_004D8370;
    case 23u: goto L_004D8380;
    case 24u: goto L_004D83A0;
    case 25u: goto L_004D83C8;
    case 26u: goto L_004D83F0;
    case 27u: goto L_004D841C;
    case 28u: goto L_004D8438;
    case 29u: goto L_004D845C;
    case 30u: goto L_004D8468;
    case 31u: goto L_004D8484;
    case 32u: goto L_004D849C;
    case 33u: goto L_004D84BC;
    case 34u: goto L_004D84F0;
    case 35u: goto L_004D8518;
    case 36u: goto L_004D8528;
    case 37u: goto L_004D8538;
    case 38u: goto L_004D8550;
    case 39u: goto L_004D856C;
    case 40u: goto L_004D8588;
    case 41u: goto L_004D85A0;
    case 42u: goto L_004D85C4;
    case 43u: goto L_004D85DC;
    case 44u: goto L_004D85F4;
    case 45u: goto L_004D8624;
    case 46u: goto L_004D8658;
    case 47u: goto L_004D868C;
    case 48u: goto L_004D86B0;
    case 49u: goto L_004D86C8;
    case 50u: goto L_004D86E4;
    case 51u: goto L_004D86F8;
    case 52u: goto L_004D870C;
    case 53u: goto L_004D8730;
    case 54u: goto L_004D8744;
    case 55u: goto L_004D87C0;
    case 56u: goto L_004D87D0;
    case 57u: goto L_004D87E0;
    case 58u: goto L_004D87F0;
    case 59u: goto L_004D8820;
    case 60u: goto L_004D8830;
    case 61u: goto L_004D8840;
    case 62u: goto L_004D88C0;
    case 63u: goto L_004D8918;
    case 64u: goto L_004D8B38;
    case 65u: goto L_004D8C74;
    case 66u: goto L_004D8CB0;
    case 67u: goto L_004D8EC8;
    case 68u: goto L_004D8FD0;
    case 69u: goto L_004D8FD8;
    case 70u: goto L_004D901C;
    case 71u: goto L_004D9058;
    case 72u: goto L_004D9080;
    case 73u: goto L_004D9098;
    case 74u: goto L_004D90F8;
    case 75u: goto L_004D910C;
    case 76u: goto L_004D912C;
    case 77u: goto L_004D91D8;
    case 78u: goto L_004D9240;
    case 79u: goto L_004D9250;
    case 80u: goto L_004D92FC;
    case 81u: goto L_004D931C;
    case 82u: goto L_004D93A0;
    case 83u: goto L_004D93D8;
    case 84u: goto L_004D93E4;
    case 85u: goto L_004D93FC;
    case 86u: goto L_004D9408;
    case 87u: goto L_004D9440;
    case 88u: goto L_004D94A0;
    case 89u: goto L_004D94D0;
    case 90u: goto L_004D9504;
    case 91u: goto L_004D9520;
    case 92u: goto L_004D95A0;
    case 93u: goto L_004D95D0;
    case 94u: goto L_004D9608;
    case 95u: goto L_004D9614;
    case 96u: goto L_004D9684;
    case 97u: goto L_004D96F0;
    case 98u: goto L_004D9744;
    case 99u: goto L_004D9770;
    case 100u: goto L_004D9810;
    case 101u: goto L_004D9820;
    case 102u: goto L_004D983C;
    case 103u: goto L_004D9860;
    case 104u: goto L_004D987C;
    case 105u: goto L_004D9898;
    case 106u: goto L_004D98D4;
    case 107u: goto L_004D9910;
    case 108u: goto L_004D9938;
    case 109u: goto L_004D9950;
    case 110u: goto L_004D995C;
    case 111u: goto L_004D9970;
    case 112u: goto L_004D99A0;
    case 113u: goto L_004D99C0;
    case 114u: goto L_004D9A04;
    case 115u: goto L_004D9A18;
    case 116u: goto L_004D9A50;
    case 117u: goto L_004D9A70;
    case 118u: goto L_004D9A90;
    case 119u: goto L_004D9AD4;
    case 120u: goto L_004D9AE0;
    case 121u: goto L_004D9AF4;
    case 122u: goto L_004D9B00;
    case 123u: goto L_004D9B14;
    case 124u: goto L_004D9B2C;
    case 125u: goto L_004D9B38;
    case 126u: goto L_004D9B58;
    case 127u: goto L_004D9BF4;
    case 128u: goto L_004D9C14;
    case 129u: goto L_004D9C24;
    case 130u: goto L_004D9C34;
    case 131u: goto L_004D9C50;
    case 132u: goto L_004D9CB0;
    case 133u: goto L_004D9CC0;
    case 134u: goto L_004D9CF0;
    case 135u: goto L_004D9D04;
    case 136u: goto L_004D9D3C;
    case 137u: goto L_004D9D4C;
    case 138u: goto L_004D9D90;
    case 139u: goto L_004D9DD0;
    case 140u: goto L_004D9E04;
    case 141u: goto L_004D9E10;
    case 142u: goto L_004DA240;
    case 143u: goto L_004DA270;
    case 144u: goto L_004DA288;
    case 145u: goto L_004DA2A0;
    case 146u: goto L_004DA2D0;
    case 147u: goto L_004DA2F8;
    case 148u: goto L_004DA2FC;
    case 149u: goto L_004DA31C;
    case 150u: goto L_004DA39C;
    case 151u: goto L_004DA3B4;
    case 152u: goto L_004DA3C8;
    case 153u: goto L_004DA400;
    case 154u: goto L_004DA420;
    case 155u: goto L_004DA43C;
    case 156u: goto L_004DA480;
    case 157u: goto L_004DA5C0;
    case 158u: goto L_004DA5CC;
    case 159u: goto L_004DA5D0;
    case 160u: goto L_004DA6A0;
    case 161u: goto L_004DA700;
    case 162u: goto L_004DA704;
    case 163u: goto L_004DA768;
    case 164u: goto L_004DA77C;
    case 165u: goto L_004DA788;
    case 166u: goto L_004DA870;
    case 167u: goto L_004DA880;
    case 168u: goto L_004DAA00;
    case 169u: goto L_004DAB60;
    case 170u: goto L_004DABB8;
    case 171u: goto L_004DAC1C;
    case 172u: goto L_004DAC34;
    case 173u: goto L_004DAC4C;
    case 174u: goto L_004DACCC;
    case 175u: goto L_004DACD8;
    case 176u: goto L_004DACFC;
    case 177u: goto L_004DAD4C;
    case 178u: goto L_004DAD68;
    case 179u: goto L_004DAE50;
    case 180u: goto L_004DAE88;
    case 181u: goto L_004DAE94;
    case 182u: goto L_004DAEAC;
    case 183u: goto L_004DAEB8;
    case 184u: goto L_004DAEF0;
    case 185u: goto L_004DAF20;
    case 186u: goto L_004DAF6C;
    case 187u: goto L_004DAF78;
    case 188u: goto L_004DAF8C;
    case 189u: goto L_004DAF98;
    case 190u: goto L_004DAFB0;
    case 191u: goto L_004DAFC0;
    case 192u: goto L_004DAFEC;
    case 193u: goto L_004DAFF8;
    case 194u: goto L_004DB068;
    case 195u: goto L_004DB088;
    case 196u: goto L_004DB098;
    case 197u: goto L_004DB0D0;
    case 198u: goto L_004DB100;
    case 199u: goto L_004DB120;
    case 200u: goto L_004DB158;
    case 201u: goto L_004DB170;
    case 202u: goto L_004DB190;
    case 203u: goto L_004DB1BC;
    case 204u: goto L_004DB1F0;
    case 205u: goto L_004DB21C;
    case 206u: goto L_004DB230;
    case 207u: goto L_004DB24C;
    case 208u: goto L_004DB270;
    case 209u: goto L_004DB2E0;
    case 210u: goto L_004DB320;
    case 211u: goto L_004DB3B8;
    case 212u: goto L_004DB3CC;
    case 213u: goto L_004DB4A8;
    case 214u: goto L_004DB4B4;
    case 215u: goto L_004DB4B8;
    case 216u: goto L_004DB568;
    case 217u: goto L_004DB5C0;
    case 218u: goto L_004DB5E4;
    case 219u: goto L_004DB5EC;
    case 220u: goto L_004DB608;
    case 221u: goto L_004DB640;
    case 222u: goto L_004DB684;
    case 223u: goto L_004DB698;
    case 224u: goto L_004DB6A4;
    case 225u: goto L_004DB748;
    case 226u: goto L_004DB7B0;
    case 227u: goto L_004DB7C0;
    case 228u: goto L_004DB940;
    case 229u: goto L_004DBAA0;
    case 230u: goto L_004DBAFC;
    case 231u: goto L_004DBB10;
    case 232u: goto L_004DBB4C;
    case 233u: goto L_004DBB54;
    case 234u: goto L_004DBB78;
    case 235u: goto L_004DBBE4;
    case 236u: goto L_004DBBF0;
    case 237u: goto L_004DBC1C;
    case 238u: goto L_004DBC70;
    case 239u: goto L_004DBCA8;
    case 240u: goto L_004DBCB8;
    case 241u: goto L_004DBCD0;
    case 242u: goto L_004DBCE4;
    case 243u: goto L_004DBD40;
    case 244u: goto L_004DBD78;
    case 245u: goto L_004DBD88;
    case 246u: goto L_004DBDA0;
    case 247u: goto L_004DBDB4;
    case 248u: goto L_004DBDFC;
    case 249u: goto L_004DBE14;
    case 250u: goto L_004DBE40;
    case 251u: goto L_004DBE5C;
    case 252u: goto L_004DBE64;
    case 253u: goto L_004DBE74;
    case 254u: goto L_004DBEF0;
    case 255u: goto L_004DBF18;
    case 256u: goto L_004DBF24;
    case 257u: goto L_004DBF4C;
    case 258u: goto L_004DBF58;
    case 259u: goto L_004DBF80;
    case 260u: goto L_004DBF90;
    case 261u: goto L_004DBFA0;
    case 262u: goto L_004DBFB0;
    case 263u: goto L_004DBFC0;
    case 264u: goto L_004DBFD0;
    case 265u: goto L_004DBFE0;
    case 266u: goto L_004DBFFC;
    default: bad_entry(c, 0x004D8000u); return;
    }
L_004D8000:
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_004D8004:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], c.r[3].w[0] + 544u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D8260; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D8028u);  if (depth < kMaxDepth) unit_0023(c, 150u, depth + 1u); else { c.pc = 0x0028D810u; return; } if (c.pc != 0x004D8028u) [[unlikely]] return; }
L_004D8028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_004D8264; } }
L_004D8030:
    set32(c.r[2], ld32((c.r[28].w[0] - 28268u)));
    c.f[20] = ld32((c.r[28].w[0] - 28264u));
    set32(c.r[17], c.r[29].w[0] + 84u);
    set32(c.r[16], c.r[29].w[0] + 88u);
    set32(c.r[2], ld32((c.r[2].w[0] + 200u)));
    c.f[12] = c.f[20];
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D806Cu); st32((c.r[29].w[0] + 92u), c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004D806Cu) [[unlikely]] return; }
L_004D806C:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D8078u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004D8078u) [[unlikely]] return; }
L_004D8078:
    c.f[7] = ld32((c.r[28].w[0] - 28264u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.f[8] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[2] = c.r[2].w[0];
    c.r[7].d[0] = 0ull | 0ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.f[8] = fp::ee::add(c.fcr31, c.f[8], c.f[7]);
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[7].d[0] = c.r[7].d[0] | 32768ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[7] = fp::ee::mul(c.fcr31, c.f[2], c.f[8]);
    c.f[4] = c.r[2].w[0];
    c.f[5] = 0u;
    set32(c.r[2], c.f[7]);
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[8]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    c.f[8] = c.r[4].w[0];
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[8] = fp::ee::add(c.fcr31, c.f[7], c.f[8]);
    c.f[8] = fp::cvt_w_s(c.f[8]);
    c.f[8] = fp::cvt_s_w(c.f[8]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[6] = c.r[3].w[0];
    st32((c.r[17].w[0]), c.f[1]);
    c.f[6] = fp::ee::msub(c.fcr31, c.facc, c.f[6], c.f[8]);
    c.f[3] = ld32((c.r[29].w[0] + 80u));
    c.f[2] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[20]);
    c.f[1] = ld32((c.r[16].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[20]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[28].w[0] - 28264u), c.f[6]);
    st32((c.r[29].w[0] + 80u), c.f[3]);
    st32((c.r[16].w[0]), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 49;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D813Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 88u, depth + 1u); else { c.pc = 0x00281060u; return; } if (c.pc != 0x004D813Cu) [[unlikely]] return; }
L_004D813C:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D814Cu); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 192u, depth + 1u); else { c.pc = 0x0028DE10u; return; } if (c.pc != 0x004D814Cu) [[unlikely]] return; }
L_004D814C:
    set32(c.r[7], ld32((c.r[18].w[0] + 28u)));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 5u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[2], 0u - 33u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[8], 0u + 1u);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 526u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 526u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[18].w[0] + 28u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    st16((c.r[2].w[0] + 762u), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D81A0u); set32(c.r[4], ld32((c.r[2].w[0] + 1356u)));  if (depth < kMaxDepth) unit_00A2(c, 15u, depth + 1u); else { c.pc = 0x00488280u; return; } if (c.pc != 0x004D81A0u) [[unlikely]] return; }
L_004D81A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 28268u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 200u)));
    c.f[0] = ld32((c.r[3].w[0] + 104u));
    c.f[1] = ld32((c.r[2].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004D81C8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 404u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004D81C8:
    st32((c.r[3].w[0] + 104u), c.f[1]);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[16], c.r[2].w[0] + 544u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D81DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 200u, depth + 1u); else { c.pc = 0x0028DF10u; return; } if (c.pc != 0x004D81DCu) [[unlikely]] return; }
L_004D81DC:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D81E8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0028DF00u; return; } if (c.pc != 0x004D81E8u) [[unlikely]] return; }
L_004D81E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D8200; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 120u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D8200u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 78u, depth + 1u); else { c.pc = 0x004D5670u; return; } if (c.pc != 0x004D8200u) [[unlikely]] return; }
L_004D8200:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D820Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 160u, depth + 1u); else { c.pc = 0x00289C00u; return; } if (c.pc != 0x004D820Cu) [[unlikely]] return; }
L_004D820C:
    set32(c.r[3], ld32((c.r[28].w[0] - 28268u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_004D821C:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D8238; } }
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { goto L_004D8248; } }
L_004D8238:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D821Cu | kUnwind; return; } goto L_004D821C; } }
L_004D8248:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[5], 0u + 34u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D8258u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_001F(c, 392u, depth + 1u); else { c.pc = 0x0027FF00u; return; } if (c.pc != 0x004D8258u) [[unlikely]] return; }
L_004D8258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D8028u | kUnwind; return; } goto L_004D8028; } }
L_004D8260:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004D8264:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004D8280:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 64u), c.r[5].w[0]);  c.pc = t; return; }
L_004D8290:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_004D82A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004D8314; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25984u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004D82FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004D82FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004D82FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004D82FC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004D8314; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D8314u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004D8314u) [[unlikely]] return; }
L_004D8314:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004D8330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 70u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D834Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x002B9620u; return; } if (c.pc != 0x004D834Cu) [[unlikely]] return; }
L_004D834C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 25984u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004D8370:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 228u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_004D8380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 220u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004D83AC; } }
L_004D83A0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 228u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004D83D4; } }
L_004D83AC:
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 200u)));
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D83C8u); set32(c.r[4], c.r[3].w[0] + 304u);  if (depth < kMaxDepth) unit_00B6(c, 153u, depth + 1u); else { c.pc = 0x004DA400u; return; } if (c.pc != 0x004D83C8u) [[unlikely]] return; }
L_004D83C8:
    st32((c.r[16].w[0] + 220u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 224u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D83A0u | kUnwind; return; } goto L_004D83A0; } }
L_004D83D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004D83F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 220u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004D8440; } }
L_004D841C:
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u - 1u);
    st8((c.r[17].w[0] + 228u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[17].w[0] + 224u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 220u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004D8468; } }
L_004D8438:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_004D84D8; } }
L_004D8440:
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 200u)));
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D845Cu); set32(c.r[4], c.r[3].w[0] + 304u);  if (depth < kMaxDepth) unit_00B6(c, 153u, depth + 1u); else { c.pc = 0x004DA400u; return; } if (c.pc != 0x004D845Cu) [[unlikely]] return; }
L_004D845C:
    st32((c.r[17].w[0] + 220u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 224u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D841Cu | kUnwind; return; } goto L_004D841C; } }
L_004D8468:
    set32(c.r[2], 0u + 21216u);
    set32(c.r[18], ld32((c.r[17].w[0] + 224u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 312u)));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_004D8484:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 532u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D849Cu); set32(c.r[19], c.r[2].w[0] + 532u);  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004D849Cu) [[unlikely]] return; }
L_004D849C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D84D4; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D84BCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 422u, depth + 1u); else { c.pc = 0x003F7C90u; return; } if (c.pc != 0x004D84BCu) [[unlikely]] return; }
L_004D84BC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D8484u | kUnwind; return; } goto L_004D8484; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D8438u | kUnwind; return; } goto L_004D8438; } }
L_004D84D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004D84D8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004D84F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 224u), 0u);
    st32((c.r[4].w[0] + 236u), 0u);
    st32((c.r[4].w[0] + 248u), 0u);
    set32(c.r[5], ld32((c.r[4].w[0] + 220u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004D8540; } }
L_004D8518:
    set32(c.r[5], ld32((c.r[16].w[0] + 232u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_004D855C; } }
L_004D8528:
    set32(c.r[5], ld32((c.r[16].w[0] + 244u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_004D8578; } }
L_004D8538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004D8594; } }
L_004D8540:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D8550u); set32(c.r[4], c.r[2].w[0] + 304u);  if (depth < kMaxDepth) unit_00B6(c, 146u, depth + 1u); else { c.pc = 0x004DA2D0u; return; } if (c.pc != 0x004D8550u) [[unlikely]] return; }
L_004D8550:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 220u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D8518u | kUnwind; return; } goto L_004D8518; } }
L_004D855C:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D856Cu); set32(c.r[4], c.r[2].w[0] + 304u);  if (depth < kMaxDepth) unit_00B6(c, 146u, depth + 1u); else { c.pc = 0x004DA2D0u; return; } if (c.pc != 0x004D856Cu) [[unlikely]] return; }
L_004D856C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 232u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D8528u | kUnwind; return; } goto L_004D8528; } }
L_004D8578:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D8588u); set32(c.r[4], c.r[2].w[0] + 304u);  if (depth < kMaxDepth) unit_00B6(c, 146u, depth + 1u); else { c.pc = 0x004DA2D0u; return; } if (c.pc != 0x004D8588u) [[unlikely]] return; }
L_004D8588:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 244u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D8538u | kUnwind; return; } goto L_004D8538; } }
L_004D8594:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004D85A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 224u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004D85FC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 224u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 224u), c.r[3].w[0]);
    c.budget -= 3;
L_004D85C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 236u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_004D8630; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 236u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 236u), c.r[3].w[0]);
    c.budget -= 3;
L_004D85DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_004D8664; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 248u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 248u), c.r[3].w[0]);
    c.budget -= 3;
L_004D85F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004D869C; } }
L_004D85FC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 228u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D85C4u | kUnwind; return; } goto L_004D85C4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 220u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D85C4u | kUnwind; return; } goto L_004D85C4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D8624u); set32(c.r[4], c.r[2].w[0] + 304u);  if (depth < kMaxDepth) unit_00B6(c, 142u, depth + 1u); else { c.pc = 0x004DA240u; return; } if (c.pc != 0x004D8624u) [[unlikely]] return; }
L_004D8624:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 220u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D85C4u | kUnwind; return; } goto L_004D85C4; } }
L_004D8630:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 240u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D85DCu | kUnwind; return; } goto L_004D85DC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 232u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D85DCu | kUnwind; return; } goto L_004D85DC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D8658u); set32(c.r[4], c.r[2].w[0] + 304u);  if (depth < kMaxDepth) unit_00B6(c, 142u, depth + 1u); else { c.pc = 0x004DA240u; return; } if (c.pc != 0x004D8658u) [[unlikely]] return; }
L_004D8658:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 232u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D85DCu | kUnwind; return; } goto L_004D85DC; } }
L_004D8664:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 252u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004D8698; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 244u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004D8698; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D868Cu); set32(c.r[4], c.r[2].w[0] + 304u);  if (depth < kMaxDepth) unit_00B6(c, 142u, depth + 1u); else { c.pc = 0x004DA240u; return; } if (c.pc != 0x004D868Cu) [[unlikely]] return; }
L_004D868C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 244u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D85F4u | kUnwind; return; } goto L_004D85F4; } }
L_004D8698:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004D869C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004D86B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 204u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004D86D0; } }
L_004D86C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 204u)));  if (t) { goto L_004D8714; } }
L_004D86D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 200u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004D86E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004D86E4u) [[unlikely]] return; }
L_004D86E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D86F8u); set32(c.r[5], c.r[5].w[0] - 21392u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x004D86F8u) [[unlikely]] return; }
L_004D86F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D870Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x002BD2E0u; return; } if (c.pc != 0x004D870Cu) [[unlikely]] return; }
L_004D870C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 204u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D86C8u | kUnwind; return; } goto L_004D86C8; } }
L_004D8714:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004D8730:
    st32((c.r[4].w[0] + 200u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 212u), 0u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 204u), 0u);
    c.budget -= 5;
L_004D8744:
    st32((c.r[5].w[0]), 0u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), 0u);
    c.r[3].d[0] = c.r[6].sd[0] < 42ll ? 1ull : 0ull;
    st32((c.r[5].w[0] + 8u), 0u);
    st32((c.r[5].w[0] + 12u), 0u);
    st32((c.r[5].w[0] + 16u), 0u);
    st32((c.r[5].w[0] + 20u), 0u);
    st32((c.r[5].w[0] + 24u), 0u);
    st32((c.r[5].w[0] + 28u), 0u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D8744u | kUnwind; return; } goto L_004D8744; } }
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[5].w[0]), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 220u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 224u), 0u);
    st8((c.r[4].w[0] + 228u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 232u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 236u), 0u);
    st8((c.r[4].w[0] + 240u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 244u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 248u), 0u);
    st8((c.r[4].w[0] + 252u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 216u), static_cast<std::uint8_t>(0u));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 217u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_004D87C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D87D0u); set32(c.r[4], ld32((c.r[28].w[0] - 28268u)));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004D87D0u) [[unlikely]] return; }
L_004D87D0:
    st32((c.r[28].w[0] - 28268u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004D87E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D87F0u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004D87F0u) [[unlikely]] return; }
L_004D87F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D8804; } }
    st32((c.r[2].w[0] + 200u), 0u);
    st32((c.r[2].w[0] + 212u), 0u);
    st32((c.r[2].w[0] + 204u), 0u);
    c.budget -= 3;
L_004D8804:
    st32((c.r[28].w[0] - 28268u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004D8820:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004D8830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004D8840:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.f[24] = c.f[12];  if (t) { goto L_004D8C80; } }
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[20].w[0] + 24u));
    c.f[5] = ld32((c.r[2].w[0]));
    c.f[4] = ld32((c.r[20].w[0] + 16u));
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = ld32((c.r[20].w[0] + 20u));
    c.f[22] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 16u), c.f[5]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[20] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[21] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[20].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[20].w[0] + 24u), c.f[0]);
    c.budget -= 14;
L_004D88C0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[23] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004D8910; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 14u)));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = ld32((c.r[20].w[0] + 28u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    st16((c.r[20].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[2] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[23]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[23]);
    c.f[23] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    c.budget -= 15;
L_004D8910:
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 4u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004D8918:
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D8CA0; } }
    c.r[1].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004D8CA0; } }
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[3].w[0] + 32u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 50u));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_004D8C78; } }
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 17u));
    c.f[3] = ld32((c.r[2].w[0] + 32u));
    c.f[5] = ld32((c.r[2].w[0] + 40u));
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.r[6].d[0] = ld16((c.r[5].w[0] + 6u));
    c.f[4] = fp::ee::mul(c.fcr31, c.f[0], c.f[23]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] << 4);
    c.budget -= 12;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);  if (t) { goto L_004D8990; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004D89AC; } }
L_004D8990:
    set32(c.r[6], c.r[4].w[0] >> 1);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004D89AC:
    c.r[4].d[0] = ld8((c.r[2].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_004D89C4; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004D89E0; } }
L_004D89C4:
    set32(c.r[6], c.r[4].w[0] >> 1);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004D89E0:
    c.f[2] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[0], c.f[24]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[22], c.f[2]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[24]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[5], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[24]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 22;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_004D8C20; } }
    c.r[8].d[0] = ld8((c.r[2].w[0] + 19u));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 17u));
    c.r[1].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004D8C94; } }
    c.r[4].d[0] = ld8((c.r[2].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_004D8A64; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004D8A80; } }
L_004D8A64:
    set32(c.r[6], c.r[4].w[0] >> 1);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004D8A80:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] < 0;  if (t) { goto L_004D8A94; } }
    c.f[0] = c.r[8].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004D8AB0; } }
L_004D8A94:
    set32(c.r[6], c.r[8].w[0] >> 1);
    c.r[4].d[0] = c.r[8].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004D8AB0:
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_004D8AD8; } }
    c.f[0] = c.r[7].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004D8AF4; } }
L_004D8AD8:
    set32(c.r[6], c.r[7].w[0] >> 1);
    c.r[4].d[0] = c.r[7].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004D8AF4:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[7], c.f[0]);
    c.r[6].d[0] = 0ull | 0ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 17;
L_004D8B38:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 20u)));
    c.f[0] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[23]);
    set32(c.r[8], c.f[0]);
    c.r[7].d[0] = 0ull | 0ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | 32768ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[7].d[0] = c.r[7].d[0] & c.r[8].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.f[2] = c.r[6].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    set32(c.r[7], c.f[2]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    set32(c.r[6], c.r[7].w[0] << 16);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st32((c.r[29].w[0] + 148u), c.r[6].w[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[8], c.f[0]);
    c.r[7].d[0] = 0ull | 0ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | 32768ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[7].d[0] = c.r[7].d[0] & c.r[8].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.f[4] = ld32((c.r[2].w[0] + 44u));
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.f[3] = ld32((c.r[2].w[0] + 36u));
    c.f[2] = ld32((c.r[2].w[0] + 40u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    st32((c.r[2].w[0] + 32u), c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[4]);
    st32((c.r[2].w[0] + 36u), c.f[3]);
    st32((c.r[2].w[0] + 40u), c.f[2]);
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[5].d[0] = ld16((c.r[5].w[0] + 6u));
    set32(c.r[6], c.r[6].w[0] + 328u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.budget -= 58;
L_004D8C20:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 17u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[2].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_004D8C78; } }
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[20].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0] + 292u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D8C74u); set32(c.r[4], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x004D8C74u) [[unlikely]] return; }
L_004D8C74:
    c.budget -= 1;
L_004D8C78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D8918u | kUnwind; return; } goto L_004D8918; } }
L_004D8C80:
    c.f[20] = 0u;
    c.f[21] = c.f[20];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[20];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D88C0u | kUnwind; return; } goto L_004D88C0; } }
L_004D8C94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[2].w[0] + 16u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D8B38u | kUnwind; return; } goto L_004D8B38; } }
    c.budget -= 1;
L_004D8CA0:
    set32(c.r[2], ld32((c.r[20].w[0] + 296u)));
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 6u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[21], c.r[2].w[0] + 28u);
    c.budget -= 4;
L_004D8CB0:
    c.r[2].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D9350; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] > 0;  if (t) { goto L_004D9350; } }
    set32(c.r[2], c.r[17].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[16], c.r[2].w[0] + 224u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 242u));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004D9020; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 17u));
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[5] = ld32((c.r[16].w[0] + 40u));
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 6u));
    c.f[4] = fp::ee::mul(c.fcr31, c.f[0], c.f[23]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);  if (t) { goto L_004D8D1C; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004D8D38; } }
L_004D8D1C:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004D8D38:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_004D8D50; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004D8D6C; } }
L_004D8D50:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004D8D6C:
    c.f[2] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[0], c.f[24]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[22], c.f[2]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[24]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[5], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[24]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 22;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[2].w[0] + 8u), c.f[0]);  if (t) { goto L_004D8FB0; } }
    c.r[7].d[0] = ld8((c.r[16].w[0] + 19u));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 17u));
    c.r[1].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004D9028; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_004D8DF0; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004D8E0C; } }
L_004D8DF0:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004D8E0C:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_004D8E20; } }
    c.f[0] = c.r[7].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004D8E3C; } }
L_004D8E20:
    set32(c.r[5], c.r[7].w[0] >> 1);
    c.r[3].d[0] = c.r[7].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004D8E3C:
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_004D8E64; } }
    c.f[0] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004D8E80; } }
L_004D8E64:
    set32(c.r[5], c.r[6].w[0] >> 1);
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004D8E80:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
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
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 18;
L_004D8EC8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[23]);
    set32(c.r[7], c.f[0]);
    c.r[6].d[0] = 0ull | 0ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.f[2] = c.r[5].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    set32(c.r[6], c.f[2]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    set32(c.r[5], c.r[6].w[0] << 16);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st32((c.r[29].w[0] + 144u), c.r[5].w[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[7], c.f[0]);
    c.r[6].d[0] = 0ull | 0ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[4] = ld32((c.r[16].w[0] + 44u));
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    c.f[2] = ld32((c.r[16].w[0] + 40u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    st32((c.r[16].w[0] + 32u), c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[4]);
    st32((c.r[16].w[0] + 36u), c.f[3]);
    st32((c.r[16].w[0] + 40u), c.f[2]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[4].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[5], c.r[5].w[0] + 328u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 58;
L_004D8FB0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 17u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004D9030; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_004D9038; } }
L_004D8FD0:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_004D8FD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D9020; } }
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[20].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 292u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D901Cu); set32(c.r[4], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x004D901Cu) [[unlikely]] return; }
L_004D901C:
    c.budget -= 1;
L_004D9020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D8CB0u | kUnwind; return; } goto L_004D8CB0; } }
L_004D9028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 16u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D8EC8u | kUnwind; return; } goto L_004D8EC8; } }
L_004D9030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D8FD8u | kUnwind; return; } goto L_004D8FD8; } }
L_004D9038:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 48u));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 48u));
    c.r[1].d[0] = c.r[2].sd[0] < 3841ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004D9088; } }
L_004D9058:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 48u));
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 260u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D9080u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x003FA3F0u; return; } if (c.pc != 0x004D9080u) [[unlikely]] return; }
L_004D9080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D8FD0u | kUnwind; return; } goto L_004D8FD0; } }
L_004D9088:
    set32(c.r[2], c.r[2].w[0] - 3840u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D9058u | kUnwind; return; } goto L_004D9058; } }
    c.budget -= 1;
L_004D9098:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004D931C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004D91FC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[16], c.r[2].w[0] + 32u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 50u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_004D91FC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 300u)));
    set32(c.r[6], c.r[16].w[0] + 16u);
    set32(c.r[19], ld32((c.r[20].w[0] + 296u)));
    set32(c.r[7], c.r[29].w[0] + 156u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D90F8u); set32(c.r[17], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_00B6(c, 139u, depth + 1u); else { c.pc = 0x004D9DD0u; return; } if (c.pc != 0x004D90F8u) [[unlikely]] return; }
L_004D90F8:
    set32(c.r[18], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D910Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x004D910Cu) [[unlikely]] return; }
L_004D910C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 6u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 260u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D912Cu); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x003FA3F0u; return; } if (c.pc != 0x004D912Cu) [[unlikely]] return; }
L_004D912C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 156u));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[4], c.r[4].w[0] + 328u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 157u));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 158u));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 159u));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[20].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 292u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 8u)));
    set32(c.r[4], c.r[2].w[0] + 12u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D91D8u); set32(c.r[5], ld32((c.r[2].w[0] + 32u)));  if (depth < kMaxDepth) unit_0082(c, 345u, depth + 1u); else { c.pc = 0x0040B7F0u; return; } if (c.pc != 0x004D91D8u) [[unlikely]] return; }
L_004D91D8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[20].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D91FC; } }
    st16((c.r[20].w[0] + 8u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_004D91FC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_004D931C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[16], c.r[2].w[0] + 224u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 242u));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_004D931C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 300u)));
    set32(c.r[6], c.r[16].w[0] + 16u);
    set32(c.r[7], c.r[29].w[0] + 152u);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D9240u); set32(c.r[17], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_00B6(c, 139u, depth + 1u); else { c.pc = 0x004D9DD0u; return; } if (c.pc != 0x004D9240u) [[unlikely]] return; }
L_004D9240:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D9250u); set32(c.r[6], 0u + 15u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x004D9250u) [[unlikely]] return; }
L_004D9250:
    set32(c.r[2], c.r[2].w[0] << 16);
    st16((c.r[16].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 152u));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[4], c.r[4].w[0] + 328u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 153u));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 154u));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 155u));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[20].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 292u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 224u)));
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D92FCu); set32(c.r[4], c.r[3].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 345u, depth + 1u); else { c.pc = 0x0040B7F0u; return; } if (c.pc != 0x004D92FCu) [[unlikely]] return; }
L_004D92FC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[20].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004D931C; } }
    st16((c.r[20].w[0] + 10u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_004D931C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D9360; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D9344; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 6u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004D9344:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_004D9364; } }
L_004D9350:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D931Cu | kUnwind; return; } goto L_004D931C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D9098u | kUnwind; return; } goto L_004D9098; } }
L_004D9360:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_004D9364:
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004D93A0:
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
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_004D93E0; } }
L_004D93D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D9478; } }
L_004D93E0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D93E4:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D93FCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 61u, depth + 1u); else { c.pc = 0x004D8840u; return; } if (c.pc != 0x004D93FCu) [[unlikely]] return; }
L_004D93FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D9424; } }
    c.budget -= 1;
L_004D9408:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D93E4u | kUnwind; return; } goto L_004D93E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D93D8u | kUnwind; return; } goto L_004D93D8; } }
L_004D9424:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D9440u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00B6(c, 101u, depth + 1u); else { c.pc = 0x004D9820u; return; } if (c.pc != 0x004D9440u) [[unlikely]] return; }
L_004D9440:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D9408u | kUnwind; return; } goto L_004D9408; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D9408u | kUnwind; return; } goto L_004D9408; } }
L_004D9478:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004D94A0:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 28u), c.f[12]);  c.pc = t; return; }
L_004D94D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], c.r[5].w[0] << 3);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] << 1);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[17], c.r[3].w[0] << 4);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D9504u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 101u, depth + 1u); else { c.pc = 0x004D9820u; return; } if (c.pc != 0x004D9504u) [[unlikely]] return; }
L_004D9504:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004D9588; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 3;
L_004D9520:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_004D9574; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_004D9588; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_004D9588; } }
L_004D9574:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D9520u | kUnwind; return; } goto L_004D9520; } }
    c.budget -= 1;
L_004D9588:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004D95A0:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[6], 0u - 1u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[6].w[0]));  c.pc = t; return; }
L_004D95D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st16((c.r[4].w[0] + 288u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 292u), c.r[18].w[0]);
    st32((c.r[4].w[0] + 296u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 296u)));
    c.r[16].d[0] = ld16((c.r[2].w[0] + 20u));
    c.budget -= 14;
L_004D9608:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D9614u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 351u, depth + 1u); else { c.pc = 0x0040B900u; return; } if (c.pc != 0x004D9614u) [[unlikely]] return; }
L_004D9614:
    set32(c.r[3], c.r[2].w[0] >> 16);
    set32(c.r[4], c.r[17].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[6], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[4].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[7], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[2].w[0] << 3);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[5], 0u - 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0] + 32u), c.r[3].w[0]);
    st8((c.r[7].w[0] + 50u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 24;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 12u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D9608u | kUnwind; return; } goto L_004D9608; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 296u)));
    c.r[5].d[0] = ld16((c.r[2].w[0] + 48u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D9684u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 351u, depth + 1u); else { c.pc = 0x0040B900u; return; } if (c.pc != 0x004D9684u) [[unlikely]] return; }
L_004D9684:
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] >> 16);
    set32(c.r[7], c.r[3].w[0] << 5);
    set32(c.r[5], 0u - 1u);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[19].w[0] + 224u), c.r[3].w[0]);
    st8((c.r[19].w[0] + 242u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[19].w[0] + 224u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[5].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004D96F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st8((c.r[29].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004D9758; } }
L_004D9744:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 112u)));
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[21].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 8u), c.r[7].w[0]);  if (t) { goto L_004D97EC; } }
L_004D9758:
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D9770u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 101u, depth + 1u); else { c.pc = 0x004D9820u; return; } if (c.pc != 0x004D9770u) [[unlikely]] return; }
L_004D9770:
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[3].w[0] << 2);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0]), c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + 23824u);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.f[2] = ld32((c.r[19].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[16].w[0] + 300u), c.r[4].w[0]);
    set32(c.r[3], 0u + 12u);
    st32((c.r[16].w[0] + 16u), c.f[2]);
    st8((c.r[29].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 20u), c.f[1]);
    st32((c.r[16].w[0] + 24u), c.f[0]);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 288u)));
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D9744u | kUnwind; return; } goto L_004D9744; } }
L_004D97EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004D9810:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C120u | kUnwind; return; } [[clang::musttail]] return unit_0083(c, 10u, depth); }
L_004D9820:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 7;
L_004D983C:
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[16], c.r[3].w[0] + 32u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 50u));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_004D9888; } }
    c.budget -= 1;
L_004D9860:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D983Cu | kUnwind; return; } goto L_004D983C; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 242u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_004D98C0; } }
L_004D987C:
    st16((c.r[18].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(0u));  if (t) { goto L_004D98F8; } }
L_004D9888:
    set32(c.r[2], ld32((c.r[18].w[0] + 292u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D9898u); set32(c.r[4], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x004D9898u) [[unlikely]] return; }
L_004D9898:
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D9860u | kUnwind; return; } goto L_004D9860; } }
    c.budget -= 1;
L_004D98C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 292u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 224u)));
    set32(c.r[16], c.r[18].w[0] + 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D98D4u); set32(c.r[4], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x004D98D4u) [[unlikely]] return; }
L_004D98D4:
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D987Cu | kUnwind; return; } goto L_004D987C; } }
L_004D98F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004D9910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D993C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D9938u); set32(c.r[5], c.r[5].w[0] - 26256u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004D9938u) [[unlikely]] return; }
L_004D9938:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_004D993C:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D9954; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D9950u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004D9950u) [[unlikely]] return; }
L_004D9950:
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 1;
L_004D9954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D995Cu); set32(c.r[4], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0082(c, 390u, depth + 1u); else { c.pc = 0x0040BFC0u; return; } if (c.pc != 0x004D995Cu) [[unlikely]] return; }
L_004D995C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004D9970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004D99A0; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004D99A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D99A0u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004D99A0u) [[unlikely]] return; }
L_004D99A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004D99C0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], c.r[18].w[0] - 20448u);
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 17;
L_004D9A04:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004D9B38; } }
    c.budget -= 1;
L_004D9A18:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[2].d[0] = c.r[22].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D9A04u | kUnwind; return; } goto L_004D9A04; } }
    set32(c.r[22], c.r[29].w[0] + 156u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st32((c.r[29].w[0] + 152u), 0u);
    c.r[20].d[0] = 0ull + 0ull;
    st32((c.r[22].w[0]), 0u);
    c.r[19].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 20448u);
    c.r[17].d[0] = c.r[23].d[0] & 65535ull;
    set32(c.r[16], c.r[29].w[0] + 148u);
    c.budget -= 9;
L_004D9A50:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 72u));
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[29].w[0] + 144u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D9A70u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0083(c, 14u, depth + 1u); else { c.pc = 0x0040C1A0u; return; } if (c.pc != 0x004D9A70u) [[unlikely]] return; }
L_004D9A70:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 28u);
    c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D9A50u | kUnwind; return; } goto L_004D9A50; } }
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D9A90u); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0082(c, 357u, depth + 1u); else { c.pc = 0x0040BA70u; return; } if (c.pc != 0x004D9A90u) [[unlikely]] return; }
L_004D9A90:
    c.r[3].d[0] = c.r[23].d[0] & 65535ull;
    st32((c.r[21].w[0] + 8u), 0u);
    st32((c.r[21].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], c.r[3].w[0] + 15u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] >> 4);
    set32(c.r[3], c.r[3].w[0] + 15u);
    set32(c.r[3], c.r[3].w[0] >> 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[21].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[21].w[0] + 4u)));  if (t) { goto L_004D9AD8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D9AD4u); set32(c.r[5], c.r[5].w[0] - 26256u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004D9AD4u) [[unlikely]] return; }
L_004D9AD4:
    st32((c.r[21].w[0] + 12u), 0u);
    c.budget -= 1;
L_004D9AD8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004D9BD8; } }
L_004D9AE0:
    set32(c.r[4], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[21].w[0] + 4u)));  if (t) { goto L_004D9AF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D9AF4u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004D9AF4u) [[unlikely]] return; }
L_004D9AF4:
    st32((c.r[21].w[0] + 16u), 0u);
    c.budget -= 1;
L_004D9AF8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004D9C1C; } }
L_004D9B00:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004D9C2C; } }
    set32(c.r[3], ld32((c.r[22].w[0])));
    c.budget -= 1;
L_004D9B14:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D9C84; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D9B2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D9B2Cu); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004D9B2Cu) [[unlikely]] return; }
L_004D9B2C:
    st32((c.r[22].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_004D9C88; } }
L_004D9B38:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[19].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[19].w[0]);
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D9B58u); set32(c.r[5], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x004D9B58u) [[unlikely]] return; }
L_004D9B58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D9BB8; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[17].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 8u));
    st16((c.r[17].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 10u));
    st16((c.r[17].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 20u));
    st16((c.r[17].w[0] + 72u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 22u));
    st16((c.r[17].w[0] + 74u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 24u));
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 76u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D9A18u | kUnwind; return; } goto L_004D9A18; } }
    c.budget -= 1;
L_004D9BB8:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D9B38u | kUnwind; return; } goto L_004D9B38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D9A18u | kUnwind; return; } goto L_004D9A18; } }
    c.budget -= 1;
L_004D9BD8:
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D9BF4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004D9BF4u) [[unlikely]] return; }
L_004D9BF4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 25424u);
    set32(c.r[6], c.r[6].w[0] - 26256u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D9C14u); set32(c.r[7], 0u + 304u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004D9C14u) [[unlikely]] return; }
L_004D9C14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D9AE0u | kUnwind; return; } goto L_004D9AE0; } }
L_004D9C1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D9C24u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004D9C24u) [[unlikely]] return; }
L_004D9C24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D9B00u | kUnwind; return; } goto L_004D9B00; } }
L_004D9C2C:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004D9C34:
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.r[5].d[0] = c.r[18].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[6], c.r[21].w[0] + 20u);
    set32(c.r[7], c.r[21].w[0] + 52u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D9C50u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 93u, depth + 1u); else { c.pc = 0x004D95D0u; return; } if (c.pc != 0x004D9C50u) [[unlikely]] return; }
L_004D9C50:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[17], c.r[17].w[0] + 304u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D9C34u | kUnwind; return; } goto L_004D9C34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[22].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D9B14u | kUnwind; return; } goto L_004D9B14; } }
L_004D9C84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_004D9C88:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004D9CB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004D9CC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004D9D38; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_004D9CF0:
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004D9D70; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004D9D04:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 304u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D9D04u | kUnwind; return; } goto L_004D9D04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 8u), 0u);  if (t) { goto L_004D9D74; } }
L_004D9D38:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D9D3C:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D9D4Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00B6(c, 101u, depth + 1u); else { c.pc = 0x004D9820u; return; } if (c.pc != 0x004D9D4Cu) [[unlikely]] return; }
L_004D9D4C:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[19].w[0] + 8u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D9D3Cu | kUnwind; return; } goto L_004D9D3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D9CF0u | kUnwind; return; } goto L_004D9CF0; } }
L_004D9D70:
    st32((c.r[19].w[0] + 8u), 0u);
    c.budget -= 1;
L_004D9D74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004D9D90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25648u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_004D9DD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D9E04u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004D9E04u) [[unlikely]] return; }
L_004D9E04:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D9E10u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004D9E10u) [[unlikely]] return; }
L_004D9E10:
    c.r[5].d[0] = ld8((c.r[19].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[6].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 4u));
    c.r[5].d[0] = ld8((c.r[19].w[0] + 4u));
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 29;
    { const bool t = c.r[3].sd[0] < 0; st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_004D9E90; } }
    c.f[1] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004D9EAC; } }
L_004D9E90:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004D9EAC:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_004D9EC0; } }
    c.f[1] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004D9EDC; } }
L_004D9EC0:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004D9EDC:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0; c.f[3] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);  if (t) { goto L_004D9EF0; } }
    c.f[1] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004D9F0C; } }
L_004D9EF0:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004D9F0C:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[3]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 5u));
    c.r[5].d[0] = ld8((c.r[19].w[0] + 5u));
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] < 0; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_004D9F40; } }
    c.f[1] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004D9F5C; } }
L_004D9F40:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004D9F5C:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_004D9F70; } }
    c.f[1] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004D9F8C; } }
L_004D9F70:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004D9F8C:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0; c.f[3] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);  if (t) { goto L_004D9FA0; } }
    c.f[1] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004D9FBC; } }
L_004D9FA0:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004D9FBC:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[3]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 6u));
    c.r[5].d[0] = ld8((c.r[19].w[0] + 6u));
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] < 0; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_004D9FF0; } }
    c.f[1] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004DA00C; } }
L_004D9FF0:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004DA00C:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_004DA020; } }
    c.f[1] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004DA03C; } }
L_004DA020:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004DA03C:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0; c.f[3] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);  if (t) { goto L_004DA050; } }
    c.f[1] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004DA06C; } }
L_004DA050:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004DA06C:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[3]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 7u));
    c.r[5].d[0] = ld8((c.r[19].w[0] + 7u));
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] < 0; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_004DA0A0; } }
    c.f[1] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004DA0BC; } }
L_004DA0A0:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004DA0BC:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_004DA0D0; } }
    c.f[1] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004DA0EC; } }
L_004DA0D0:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004DA0EC:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0; c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);  if (t) { goto L_004DA100; } }
    c.f[1] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004DA11C; } }
L_004DA100:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004DA11C:
    c.f[7] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.r[4].d[0] = ld16((c.r[19].w[0] + 2u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 2u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.f[1] = c.r[3].w[0];
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[6], c.f[1]);
    c.r[5].d[0] = 0ull | 0ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    set32(c.r[3], c.f[2]);
    c.f[6] = ld32((c.r[19].w[0] + 20u));
    c.f[5] = ld32((c.r[18].w[0] + 20u));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.f[4] = ld32((c.r[19].w[0] + 24u));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.f[3] = ld32((c.r[18].w[0] + 24u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[19].w[0] + 16u));
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[6]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[5], c.f[6]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[5]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[4]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 16u), c.f[1]);
    st32((c.r[17].w[0] + 20u), c.f[5]);
    st32((c.r[17].w[0] + 24u), c.f[3]);
    c.f[4] = ld32((c.r[19].w[0] + 28u));
    c.f[3] = ld32((c.r[18].w[0] + 28u));
    c.f[2] = ld32((c.r[19].w[0] + 8u));
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[4]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 28u), c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 71;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004DA240:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], 0u + 21216u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[16].w[0] + 517u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 12;
L_004DA270:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 532u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DA288u); set32(c.r[18], c.r[2].w[0] + 532u);  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004DA288u) [[unlikely]] return; }
L_004DA288:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DA2B0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DA2A0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007D(c, 416u, depth + 1u); else { c.pc = 0x003F7B90u; return; } if (c.pc != 0x004DA2A0u) [[unlikely]] return; }
L_004DA2A0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DA270u | kUnwind; return; } goto L_004DA270; } }
L_004DA2B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DA2D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_004DA388; } }
L_004DA2F8:
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_004DA2FC:
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004DA380; } }
    set32(c.r[3], 0u + 21216u);
    set32(c.r[6], ld32((c.r[20].w[0] + 12u)));
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
L_004DA31C:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_004DA370; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_004DA380; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_004DA380; } }
L_004DA370:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DA31Cu | kUnwind; return; } goto L_004DA31C; } }
L_004DA380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_004DA3E0; } }
L_004DA388:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], 0u + 21216u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_004DA39C:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 532u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DA3B4u); set32(c.r[17], c.r[2].w[0] + 532u);  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004DA3B4u) [[unlikely]] return; }
L_004DA3B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DA2F8u | kUnwind; return; } goto L_004DA2F8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DA3C8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x004DA3C8u) [[unlikely]] return; }
L_004DA3C8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DA39Cu | kUnwind; return; } goto L_004DA39C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[20].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DA2FCu | kUnwind; return; } goto L_004DA2FC; } }
L_004DA3E0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004DA400:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004DA428; } }
L_004DA420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_004DA464; } }
L_004DA428:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DA43Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00B6(c, 208u, depth + 1u); else { c.pc = 0x004DB270u; return; } if (c.pc != 0x004DA43Cu) [[unlikely]] return; }
L_004DA43C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DA420u | kUnwind; return; } goto L_004DA420; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 524u)));
    c.budget -= 8;
L_004DA464:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004DA480:
    set32(c.r[29], c.r[29].w[0] - 368u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[29].w[0] + 300u));
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st32((c.r[29].w[0] + 204u), c.f[12]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), c.f[31]);
    st32((c.r[29].w[0] + 40u), c.f[30]);
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
    c.r[2].d[0] = ld8((c.r[4].w[0] + 517u));
    c.f[20] = ld32((c.r[29].w[0] + 236u));
    c.f[21] = ld32((c.r[29].w[0] + 252u));
    c.budget -= 29;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004DABB8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 516u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004DA834; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_004DA6C4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004DA520; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004DABB8; } }
L_004DA520:
    set32(c.r[3], ld32((c.r[16].w[0] + 512u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 380u));
    set32(c.r[2], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 48u));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = c.r[4].d[0] >> 57;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { goto L_004DA554; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[5].w[0] + 60u));  if (t) { goto L_004DA558; } }
L_004DA554:
    set32(c.r[5], 0u + 60u);
    c.budget -= 1;
L_004DA558:
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_004DAC70; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_004DACEC; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_004DA598; } }
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_004DA598:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[6].d[0] = c.r[7].d[0] & 255ull;
    c.r[4].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004DA5B0; } }
    c.r[7].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_004DA5B0:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[7], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_004DA5C0:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DA5CCu); set32(c.r[6], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0032(c, 15u, depth + 1u); else { c.pc = 0x002C8480u; return; } if (c.pc != 0x004DA5CCu) [[unlikely]] return; }
L_004DA5CC:
    set32(c.r[2], c.r[29].w[0] + 308u);
    c.budget -= 1;
L_004DA5D0:
    set32(c.r[5], c.r[29].w[0] + 276u);
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 280u);
    c.f[25] = ld32((c.r[29].w[0] + 340u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[24] = ld32((c.r[29].w[0] + 336u));
    c.f[3] = ld32((c.r[29].w[0] + 304u));
    c.f[26] = ld32((c.r[29].w[0] + 344u));
    c.f[4] = 0u;
    set32(c.r[2], c.r[29].w[0] + 312u);
    c.f[7] = fp::ee::sub(c.fcr31, c.f[1], c.f[25]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[5] = fp::ee::mul(c.fcr31, c.f[7], c.f[7]);
    c.f[8] = fp::ee::sub(c.fcr31, c.f[3], c.f[24]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[0], c.f[26]);
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[8]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[3] = fp::ee::sqrt(c.fcr31, c.f[3]);
    c.f[2] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    c.f[3] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[7], c.f[3]);
    st32((c.r[5].w[0]), c.f[2]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[6], c.f[3]);
    st32((c.r[4].w[0]), c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[8]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[27] = fp::ee::sqrt(c.fcr31, c.f[2]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[27], c.f[1]);
    c.f[30] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[8], c.f[3]);
    c.f[1] = ld32((c.r[16].w[0] + 21148u));
    c.f[0] = ld32((c.r[29].w[0] + 204u));
    c.f[29] = ld32((c.r[16].w[0] + 21148u));
    c.f[22] = ld32((c.r[29].w[0] + 276u));
    c.f[23] = ld32((c.r[29].w[0] + 280u));
    st32((c.r[29].w[0] + 260u), c.f[7]);
    st32((c.r[29].w[0] + 256u), c.f[8]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[27]));
    st32((c.r[29].w[0] + 264u), c.f[6]);
    st32((c.r[29].w[0] + 272u), c.f[20]);
    c.budget -= 50;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 21148u), c.f[0]);  if (t) { goto L_004DACF8; } }
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[27]));
    c.budget -= 2;
L_004DA6A0:
    st32((c.r[16].w[0] + 21148u), 0u);
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DA6A0u | kUnwind; return; } goto L_004DA6A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004DACFC; } }
L_004DA6C4:
    c.f[2] = ld32((c.r[16].w[0] + 21144u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.f[0] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[3] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = c.f[12];
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 21144u), c.f[0]);  if (t) { goto L_004DADDC; } }
L_004DA700:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DA704:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EC90000u);
    c.f[3] = ld32((c.r[2].w[0] - 20336u));
    c.f[1] = c.r[17].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 21144u));
    c.f[21] = c.f[3] ^ fp::kSign;
    c.r[2].d[0] = c.r[3].d[0] | 4059ull;
    c.f[3] = fp::cvt_s_w(c.f[1]);
    c.f[4] = c.r[2].w[0];
    c.f[1] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.f[23] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[23]) <= fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004DA760; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = c.r[2].w[0];
    c.f[23] = fp::ee::sub(c.fcr31, c.f[23], c.f[0]);
    c.budget -= 5;
L_004DA760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DA768u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004DA768u) [[unlikely]] return; }
L_004DA768:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = ld32((c.r[2].w[0] - 20332u));
    c.f[12] = c.f[23];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DA77Cu); c.f[22] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004DA77Cu) [[unlikely]] return; }
L_004DA77C:
    c.f[12] = c.f[23];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DA788u); c.f[23] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004DA788u) [[unlikely]] return; }
L_004DA788:
    set32(c.r[4], ld32((c.r[16].w[0] + 512u)));
    set32(c.r[2], c.r[17].w[0] << 4);
    c.f[2] = 0u;
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.f[9] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[23]);
    c.f[1] = c.f[0] ^ fp::kSign;
    set32(c.r[4], ld32((c.r[4].w[0] + 348u)));
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[23]);
    c.f[8] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);
    c.f[5] = ld32((c.r[4].w[0] + 788u));
    c.f[6] = ld32((c.r[4].w[0] + 772u));
    c.f[7] = ld32((c.r[4].w[0] + 804u));
    c.f[4] = ld32((c.r[4].w[0] + 820u));
    c.f[1] = ld32((c.r[4].w[0] + 792u));
    c.f[2] = ld32((c.r[4].w[0] + 776u));
    c.facc = fp::ee::mul(c.fcr31, c.f[22], c.f[5]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[6]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[7]);
    c.f[3] = ld32((c.r[4].w[0] + 808u));
    c.facc = fp::ee::mul(c.fcr31, c.f[22], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[2]);
    c.f[0] = ld32((c.r[4].w[0] + 824u));
    c.f[5] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[3]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 784u));
    c.f[2] = ld32((c.r[4].w[0] + 768u));
    c.f[3] = ld32((c.r[4].w[0] + 800u));
    c.f[0] = ld32((c.r[4].w[0] + 816u));
    c.facc = fp::ee::mul(c.fcr31, c.f[22], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[5]);
    st32((c.r[3].w[0] + 8u), c.f[4]);
    c.budget -= 41;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 12u), c.f[20]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DA704u | kUnwind; return; } goto L_004DA704; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004DABB8; } }
L_004DA834:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 23840u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_004DABB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[25].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[14], 0u + 2u);
    set32(c.r[25], c.r[25].w[0] + 23840u);
    c.f[5] = c.r[2].w[0];
    set32(c.r[22], c.r[29].w[0] + 212u);
    set32(c.r[23], c.r[29].w[0] + 216u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[15], 0u - 1u);
    set32(c.r[13], c.r[14].w[0] - 1u);
    c.budget -= 10;
L_004DA870:
    set32(c.r[24], ld32((c.r[25].w[0])));
    set32(c.r[2], ld32((c.r[24].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[15].d[0]; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004DABA8; } }
L_004DA880:
    set32(c.r[4], ld32((c.r[16].w[0] + 512u)));
    set32(c.r[3], ld32((c.r[24].w[0])));
    c.f[17] = ld32((c.r[24].w[0] + 20u));
    set32(c.r[2], ld32((c.r[24].w[0] + 32u)));
    c.f[13] = ld32((c.r[24].w[0] + 16u));
    c.f[12] = ld32((c.r[24].w[0] + 24u));
    c.r[18].d[0] = c.r[14].d[0] + 0ull;
    c.f[16] = ld32((c.r[24].w[0] + 52u));
    c.f[15] = ld32((c.r[24].w[0] + 48u));
    set32(c.r[4], ld32((c.r[4].w[0] + 348u)));
    c.f[14] = ld32((c.r[24].w[0] + 56u));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[7] = ld32((c.r[3].w[0] + 16u));
    c.f[8] = ld32((c.r[3].w[0]));
    c.f[9] = ld32((c.r[3].w[0] + 32u));
    c.f[3] = ld32((c.r[3].w[0] + 20u));
    c.f[2] = ld32((c.r[3].w[0] + 48u));
    c.f[4] = ld32((c.r[3].w[0] + 4u));
    c.facc = fp::ee::mul(c.fcr31, c.f[17], c.f[7]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[13], c.f[8]);
    c.f[7] = fp::ee::madd(c.fcr31, c.facc, c.f[12], c.f[9]);
    c.facc = fp::ee::mul(c.fcr31, c.f[17], c.f[3]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[7]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[13], c.f[4]);
    c.f[6] = ld32((c.r[3].w[0] + 36u));
    c.f[1] = ld32((c.r[3].w[0] + 52u));
    c.f[9] = ld32((c.r[3].w[0] + 24u));
    c.f[10] = ld32((c.r[3].w[0] + 8u));
    c.f[11] = ld32((c.r[3].w[0] + 40u));
    c.f[7] = ld32((c.r[2].w[0] + 8u));
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[12], c.f[6]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[17], c.f[9]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[13], c.f[10]);
    c.f[9] = fp::ee::madd(c.fcr31, c.facc, c.f[12], c.f[11]);
    c.f[6] = ld32((c.r[2].w[0] + 24u));
    c.f[4] = ld32((c.r[3].w[0] + 56u));
    c.f[8] = ld32((c.r[2].w[0] + 40u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[11] = ld32((c.r[2].w[0] + 20u));
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.facc = fp::ee::mul(c.fcr31, c.f[16], c.f[6]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[15], c.f[7]);
    c.f[6] = fp::ee::madd(c.fcr31, c.facc, c.f[14], c.f[8]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[9]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    c.facc = fp::ee::mul(c.fcr31, c.f[16], c.f[11]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    st32((c.r[23].w[0]), c.f[1]);
    c.f[13] = ld32((c.r[2].w[0] + 36u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[15], c.f[12]);
    c.f[7] = ld32((c.r[2].w[0] + 16u));
    c.f[8] = ld32((c.r[2].w[0]));
    c.f[9] = ld32((c.r[2].w[0] + 32u));
    c.f[10] = ld32((c.r[2].w[0] + 52u));
    c.f[11] = fp::ee::madd(c.fcr31, c.facc, c.f[14], c.f[13]);
    c.f[6] = ld32((c.r[2].w[0] + 48u));
    c.facc = fp::ee::mul(c.fcr31, c.f[16], c.f[7]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[15], c.f[8]);
    c.f[7] = fp::ee::madd(c.fcr31, c.facc, c.f[14], c.f[9]);
    c.f[10] = fp::ee::add(c.fcr31, c.f[10], c.f[11]);
    c.f[6] = fp::ee::add(c.fcr31, c.f[6], c.f[7]);
    c.f[7] = fp::ee::sub(c.fcr31, c.f[10], c.f[3]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[6], c.f[2]);
    st32((c.r[29].w[0] + 208u), c.f[6]);
    st32((c.r[22].w[0]), c.f[7]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[5]);
    c.f[6] = fp::ee::mul(c.fcr31, c.f[6], c.f[5]);
    c.budget -= 73;
    { const bool t = c.r[19].d[0] == 0ull; c.f[7] = fp::ee::mul(c.fcr31, c.f[7], c.f[5]);  if (t) { goto L_004DA9B8; } }
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    c.r[18].d[0] = c.r[13].d[0] + 0ull;
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[7]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    c.budget -= 5;
L_004DA9B8:
    c.r[1].d[0] = 0ll < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004DAB98; } }
    c.r[1].d[0] = c.r[18].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[12], c.r[18].w[0] - 8u);  if (t) { goto L_004DAB50; } }
    c.r[1].d[0] = c.r[18].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004DA9F8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[18].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004DA9F8; } }
    c.r[2].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 2;
L_004DA9F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DAB50; } }
L_004DAA00:
    set32(c.r[2], c.r[20].w[0] << 4);
    set32(c.r[10], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 8u);
    st32((c.r[10].w[0]), c.f[2]);
    set32(c.r[2], c.r[20].w[0] + 1u);
    st32((c.r[10].w[0] + 4u), c.f[3]);
    set32(c.r[3], c.r[2].w[0] << 4);
    st32((c.r[10].w[0] + 8u), c.f[4]);
    set32(c.r[2], c.r[20].w[0] + 2u);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[9], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[20].w[0] + 3u);
    set32(c.r[3], c.r[2].w[0] << 4);
    st32((c.r[10].w[0] + 12u), c.f[0]);
    set32(c.r[2], c.r[20].w[0] + 4u);
    st32((c.r[9].w[0]), c.f[2]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[7]);
    set32(c.r[6], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[20].w[0] + 5u);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + 6u);
    set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[9].w[0] + 4u), c.f[3]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[20].w[0] + 7u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[9].w[0] + 8u), c.f[4]);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    st32((c.r[9].w[0] + 12u), c.f[0]);
    st32((c.r[8].w[0]), c.f[2]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[7]);
    st32((c.r[8].w[0] + 4u), c.f[3]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    st32((c.r[8].w[0] + 8u), c.f[4]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    st32((c.r[8].w[0] + 12u), c.f[0]);
    st32((c.r[7].w[0]), c.f[2]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[7]);
    st32((c.r[7].w[0] + 4u), c.f[3]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    st32((c.r[7].w[0] + 8u), c.f[4]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    st32((c.r[7].w[0] + 12u), c.f[0]);
    st32((c.r[6].w[0]), c.f[2]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[7]);
    st32((c.r[6].w[0] + 4u), c.f[3]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    st32((c.r[6].w[0] + 8u), c.f[4]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    st32((c.r[6].w[0] + 12u), c.f[0]);
    st32((c.r[5].w[0]), c.f[2]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[7]);
    st32((c.r[5].w[0] + 4u), c.f[3]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    st32((c.r[5].w[0] + 8u), c.f[4]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    st32((c.r[5].w[0] + 12u), c.f[0]);
    st32((c.r[4].w[0]), c.f[2]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[7]);
    st32((c.r[4].w[0] + 4u), c.f[3]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[4]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    st32((c.r[3].w[0]), c.f[2]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[7]);
    st32((c.r[3].w[0] + 4u), c.f[3]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[4]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[7]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    c.budget -= 83;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 12u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DAA00u | kUnwind; return; } goto L_004DAA00; } }
    c.budget -= 1;
L_004DAB50:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004DAB98; } }
    c.budget -= 1;
L_004DAB60:
    set32(c.r[2], c.r[20].w[0] << 4);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0]), c.f[2]);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    st32((c.r[3].w[0] + 4u), c.f[3]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.f[4]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[7]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 12u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DAB60u | kUnwind; return; } goto L_004DAB60; } }
    c.budget -= 1;
L_004DAB98:
    set32(c.r[24], c.r[24].w[0] + 32u);
    set32(c.r[2], ld32((c.r[24].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[15].d[0]; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DA880u | kUnwind; return; } goto L_004DA880; } }
L_004DABA8:
    set32(c.r[25], c.r[25].w[0] + 4u);
    set32(c.r[2], ld32((c.r[25].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DA870u | kUnwind; return; } goto L_004DA870; } }
L_004DABB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = ld32((c.r[16].w[0] + 520u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004DAC60; } }
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004DAC60; } }
    c.f[0] = ld32((c.r[29].w[0] + 204u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[16].w[0] + 520u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 517u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DAC60; } }
    c.f[0] = ld32((c.r[16].w[0] + 520u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004DAC60; } }
    set32(c.r[2], 0u + 1u);
    c.r[17].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 517u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_004DAC1C:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 532u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DAC34u); set32(c.r[18], c.r[2].w[0] + 532u);  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004DAC34u) [[unlikely]] return; }
L_004DAC34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DAC60; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DAC4Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007D(c, 416u, depth + 1u); else { c.pc = 0x003F7B90u; return; } if (c.pc != 0x004DAC4Cu) [[unlikely]] return; }
L_004DAC4C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DAC1Cu | kUnwind; return; } goto L_004DAC1C; } }
    c.budget -= 1;
L_004DAC60:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 517u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_004DADE8; } }
L_004DAC70:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1536u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_004DACE0; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_004DACA4; } }
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_004DACA4:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004DACBC; } }
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_004DACBC:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[6], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_004DACCC:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DACD8u); set32(c.r[5], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0032(c, 17u, depth + 1u); else { c.pc = 0x002C8540u; return; } if (c.pc != 0x004DACD8u) [[unlikely]] return; }
L_004DACD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[29].w[0] + 308u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DA5D0u | kUnwind; return; } goto L_004DA5D0; } }
L_004DACE0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - 20400u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DACCCu | kUnwind; return; } goto L_004DACCC; } }
L_004DACEC:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - 20400u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DA5C0u | kUnwind; return; } goto L_004DA5C0; } }
L_004DACF8:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DACFC:
    set32(c.r[3], c.r[18].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.f[3] = c.r[18].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 21152u));
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 21148u));
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[30], c.f[3]);
    c.f[28] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[28]) <= fp::key(c.f[27]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[17], c.r[3].w[0] + 21152u);  if (t) { goto L_004DAD80; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[29]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[27]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[28] = fp::ee::sub(c.fcr31, c.f[28], c.f[27]);  if (t) { goto L_004DAD80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DAD4Cu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004DAD4Cu) [[unlikely]] return; }
L_004DAD4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[1] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DAD68u); c.f[31] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x004DAD68u) [[unlikely]] return; }
L_004DAD68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DAD78; } }
    c.f[31] = c.f[31] ^ fp::kSign;
    c.budget -= 2;
L_004DAD78:
    st32((c.r[17].w[0]), c.f[31]);
    c.budget -= 2;
L_004DAD80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = 0u;
    c.f[2] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[28]);
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[24], c.f[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[22], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[25], c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[23], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[26], c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 12u), c.f[21]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DACFCu | kUnwind; return; } goto L_004DACFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DABB8u | kUnwind; return; } goto L_004DABB8; } }
L_004DADDC:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 21144u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DA700u | kUnwind; return; } goto L_004DA700; } }
L_004DADE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
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
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_004DAE50:
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
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_004DAE90; } }
L_004DAE88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004DAEF8; } }
L_004DAE90:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DAE94:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DAEACu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 156u, depth + 1u); else { c.pc = 0x004DA480u; return; } if (c.pc != 0x004DAEACu) [[unlikely]] return; }
L_004DAEAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DAED4; } }
    c.budget -= 1;
L_004DAEB8:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DAE94u | kUnwind; return; } goto L_004DAE94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DAE88u | kUnwind; return; } goto L_004DAE88; } }
L_004DAED4:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 524u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DAEF0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B6(c, 146u, depth + 1u); else { c.pc = 0x004DA2D0u; return; } if (c.pc != 0x004DAEF0u) [[unlikely]] return; }
L_004DAEF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DAEB8u | kUnwind; return; } goto L_004DAEB8; } }
L_004DAEF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004DAF20:
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
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004DAF70; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DAF6Cu); set32(c.r[5], c.r[5].w[0] - 19984u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004DAF6Cu) [[unlikely]] return; }
L_004DAF6C:
    st32((c.r[21].w[0] + 8u), 0u);
    c.budget -= 1;
L_004DAF70:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004DB058; } }
L_004DAF78:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[21].w[0])));  if (t) { goto L_004DAF90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DAF8Cu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004DAF8Cu) [[unlikely]] return; }
L_004DAF8C:
    st32((c.r[21].w[0] + 12u), 0u);
    c.budget -= 1;
L_004DAF90:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004DB090; } }
L_004DAF98:
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_004DB050; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004DAFB0:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[22], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[22].w[0] + 524u), c.r[20].w[0]);
    c.budget -= 4;
L_004DAFC0:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + 9992u);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[5], 0u + 52u);
    st32((c.r[2].w[0] + 700u), 0u);
    set32(c.r[16], c.r[2].w[0] + 664u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DAFECu); st32((c.r[2].w[0] + 696u), 0u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x004DAFECu) [[unlikely]] return; }
L_004DAFEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DAFF8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 85u, depth + 1u); else { c.pc = 0x00304E30u; return; } if (c.pc != 0x004DAFF8u) [[unlikely]] return; }
L_004DAFF8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 10u));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 512ll ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 64ull;
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 10u));
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DAFC0u | kUnwind; return; } goto L_004DAFC0; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[18], c.r[18].w[0] + 21216u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DAFB0u | kUnwind; return; } goto L_004DAFB0; } }
L_004DB050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_004DB0A0; } }
L_004DB058:
    set32(c.r[2], 0u + 21216u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DB068u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004DB068u) [[unlikely]] return; }
L_004DB068:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 20272u);
    set32(c.r[6], c.r[6].w[0] - 19984u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DB088u); set32(c.r[7], 0u + 21216u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004DB088u) [[unlikely]] return; }
L_004DB088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DAF78u | kUnwind; return; } goto L_004DAF78; } }
L_004DB090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DB098u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004DB098u) [[unlikely]] return; }
L_004DB098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DAF98u | kUnwind; return; } goto L_004DAF98; } }
L_004DB0A0:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004DB0D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 20080u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 20192u);
    set32(c.r[4], c.r[16].w[0] + 664u);
    set32(c.r[7], 0u + 40u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DB100u); set32(c.r[8], 0u + 512u);  if (depth < kMaxDepth) unit_0002(c, 183u, depth + 1u); else { c.pc = 0x0020B3F0u; return; } if (c.pc != 0x004DB100u) [[unlikely]] return; }
L_004DB100:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004DB120:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004DB170; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DB158; } }
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_004DB158; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DB158u);  if (depth < kMaxDepth) unit_0018(c, 157u, depth + 1u); else { c.pc = 0x00261CA0u; return; } if (c.pc != 0x004DB158u) [[unlikely]] return; }
L_004DB158:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004DB170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DB170u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004DB170u) [[unlikely]] return; }
L_004DB170:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004DB190:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DB1BCu); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0018(c, 158u, depth + 1u); else { c.pc = 0x00261CB0u; return; } if (c.pc != 0x004DB1BCu) [[unlikely]] return; }
L_004DB1BC:
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
L_004DB1F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004DB230; } }
    set32(c.r[4], c.r[17].w[0] + 664u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004DB238; } }
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004DB21C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004DB230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DB230u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004DB230u) [[unlikely]] return; }
L_004DB230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004DB254; } }
L_004DB238:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], 0u + 40u);
    set32(c.r[5], c.r[5].w[0] - 20192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DB24Cu); set32(c.r[7], 0u + 512u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x004DB24Cu) [[unlikely]] return; }
L_004DB24C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DB21Cu | kUnwind; return; } goto L_004DB21C; } }
L_004DB254:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004DB270:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[29].w[0] + 268u));
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = ld32((c.r[29].w[0] + 284u));
    st32((c.r[4].w[0] + 512u), c.r[6].w[0]);
    c.f[21] = ld32((c.r[29].w[0] + 204u));
    st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[22] = ld32((c.r[29].w[0] + 220u));
    st32((c.r[4].w[0] + 520u), c.f[12]);
    st8((c.r[4].w[0] + 517u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 28;
L_004DB2E0:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 696u), 0u);
    c.r[2].d[0] = c.r[4].sd[0] < 512ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 736u), 0u);
    st32((c.r[3].w[0] + 776u), 0u);
    st32((c.r[3].w[0] + 816u), 0u);
    st32((c.r[3].w[0] + 856u), 0u);
    st32((c.r[3].w[0] + 896u), 0u);
    st32((c.r[3].w[0] + 936u), 0u);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 976u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DB2E0u | kUnwind; return; } goto L_004DB2E0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DB320:
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 8u);
    st32((c.r[3].w[0]), 0u);
    c.r[2].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 8u), 0u);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    st32((c.r[3].w[0] + 16u), 0u);
    st32((c.r[3].w[0] + 20u), 0u);
    st32((c.r[3].w[0] + 24u), 0u);
    st32((c.r[3].w[0] + 28u), c.f[0]);
    st32((c.r[3].w[0] + 32u), 0u);
    st32((c.r[3].w[0] + 36u), 0u);
    st32((c.r[3].w[0] + 40u), 0u);
    st32((c.r[3].w[0] + 44u), c.f[0]);
    st32((c.r[3].w[0] + 48u), 0u);
    st32((c.r[3].w[0] + 52u), 0u);
    st32((c.r[3].w[0] + 56u), 0u);
    st32((c.r[3].w[0] + 60u), c.f[0]);
    st32((c.r[3].w[0] + 64u), 0u);
    st32((c.r[3].w[0] + 68u), 0u);
    st32((c.r[3].w[0] + 72u), 0u);
    st32((c.r[3].w[0] + 76u), c.f[0]);
    st32((c.r[3].w[0] + 80u), 0u);
    st32((c.r[3].w[0] + 84u), 0u);
    st32((c.r[3].w[0] + 88u), 0u);
    st32((c.r[3].w[0] + 92u), c.f[0]);
    st32((c.r[3].w[0] + 96u), 0u);
    st32((c.r[3].w[0] + 100u), 0u);
    st32((c.r[3].w[0] + 104u), 0u);
    st32((c.r[3].w[0] + 108u), c.f[0]);
    st32((c.r[3].w[0] + 112u), 0u);
    st32((c.r[3].w[0] + 116u), 0u);
    st32((c.r[3].w[0] + 120u), 0u);
    c.budget -= 37;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 124u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DB320u | kUnwind; return; } goto L_004DB320; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DB3B8:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DB3CCu); set32(c.r[5], c.r[2].w[0] + 532u);  if (depth < kMaxDepth) unit_007D(c, 408u, depth + 1u); else { c.pc = 0x003F7A50u; return; } if (c.pc != 0x004DB3CCu) [[unlikely]] return; }
L_004DB3CC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DB3B8u | kUnwind; return; } goto L_004DB3B8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 516u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004DB774; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_004DB63C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004DB408; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004DBB30; } }
L_004DB408:
    set32(c.r[2], ld32((c.r[16].w[0] + 512u)));
    c.r[4].d[0] = ld16((c.r[2].w[0] + 380u));
    set32(c.r[3], ld32((c.r[2].w[0] + 344u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 48u));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = c.r[4].d[0] >> 57;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { goto L_004DB43C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[5].w[0] + 60u));  if (t) { goto L_004DB440; } }
L_004DB43C:
    set32(c.r[5], 0u + 60u);
    c.budget -= 1;
L_004DB440:
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_004DBB88; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_004DBC04; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_004DB480; } }
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_004DB480:
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[6].d[0] = c.r[7].d[0] & 255ull;
    c.r[4].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004DB498; } }
    c.r[7].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_004DB498:
    set32(c.r[3], ld32((c.r[2].w[0] + 348u)));
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_004DB4A8:
    set32(c.r[4], c.r[2].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DB4B4u); set32(c.r[6], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0032(c, 15u, depth + 1u); else { c.pc = 0x002C8480u; return; } if (c.pc != 0x004DB4B4u) [[unlikely]] return; }
L_004DB4B4:
    set32(c.r[2], c.r[29].w[0] + 292u);
    c.budget -= 1;
L_004DB4B8:
    set32(c.r[5], c.r[29].w[0] + 244u);
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 248u);
    c.f[25] = ld32((c.r[29].w[0] + 324u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[24] = ld32((c.r[29].w[0] + 320u));
    c.r[17].d[0] = 0ull + 0ull;
    c.f[3] = ld32((c.r[29].w[0] + 288u));
    c.f[26] = ld32((c.r[29].w[0] + 328u));
    c.f[4] = 0u;
    set32(c.r[2], c.r[29].w[0] + 296u);
    c.f[7] = fp::ee::sub(c.fcr31, c.f[1], c.f[25]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[5] = fp::ee::mul(c.fcr31, c.f[7], c.f[7]);
    c.f[8] = fp::ee::sub(c.fcr31, c.f[3], c.f[24]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[0], c.f[26]);
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[8]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[3] = fp::ee::sqrt(c.fcr31, c.f[3]);
    c.f[2] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    c.f[3] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[7], c.f[3]);
    st32((c.r[5].w[0]), c.f[2]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[6], c.f[3]);
    st32((c.r[4].w[0]), c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[8]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[2] = fp::ee::sqrt(c.fcr31, c.f[2]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[27] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[8], c.f[3]);
    c.f[21] = ld32((c.r[29].w[0] + 244u));
    c.f[23] = ld32((c.r[29].w[0] + 248u));
    st32((c.r[29].w[0] + 228u), c.f[7]);
    st32((c.r[29].w[0] + 224u), c.f[8]);
    st32((c.r[29].w[0] + 232u), c.f[6]);
    st32((c.r[29].w[0] + 240u), c.f[20]);
    c.budget -= 44;
L_004DB568:
    c.f[0] = c.r[17].w[0];
    set32(c.r[2], c.r[17].w[0] << 4);
    c.f[1] = ld32((c.r[16].w[0] + 21148u));
    set32(c.r[6], c.r[16].w[0] + c.r[2].w[0]);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[27], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[24], c.f[0]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[25], c.f[0]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[23], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[26], c.f[0]);
    st32((c.r[6].w[0] + 8u), c.f[0]);
    st32((c.r[6].w[0] + 12u), c.f[22]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DB5C0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_007D(c, 136u, depth + 1u); else { c.pc = 0x003F5370u; return; } if (c.pc != 0x004DB5C0u) [[unlikely]] return; }
L_004DB5C0:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0] + 532u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DB568u | kUnwind; return; } goto L_004DB568; } }
    st32((c.r[16].w[0] + 21148u), 0u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004DB5E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DB5ECu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004DB5ECu) [[unlikely]] return; }
L_004DB5EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[1] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DB608u); c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x004DB608u) [[unlikely]] return; }
L_004DB608:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DB618; } }
    c.f[20] = c.f[20] ^ fp::kSign;
    c.budget -= 2;
L_004DB618:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[2].w[0] + 21152u), c.f[20]);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DB5E4u | kUnwind; return; } goto L_004DB5E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004DBB30; } }
L_004DB63C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DB640:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EC90000u);
    c.f[4] = ld32((c.r[2].w[0] - 20336u));
    c.f[0] = 0u;
    c.f[2] = c.r[17].w[0];
    c.r[2].d[0] = c.r[3].d[0] | 4059ull;
    c.f[3] = c.r[2].w[0];
    c.f[20] = c.f[4] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[1] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[2]);
    c.f[23] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DB684u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004DB684u) [[unlikely]] return; }
L_004DB684:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = ld32((c.r[2].w[0] - 20332u));
    c.f[12] = c.f[23];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DB698u); c.f[22] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004DB698u) [[unlikely]] return; }
L_004DB698:
    c.f[12] = c.f[23];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DB6A4u); c.f[23] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004DB6A4u) [[unlikely]] return; }
L_004DB6A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 512u)));
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[6], c.r[16].w[0] + c.r[2].w[0]);
    c.f[2] = 0u;
    c.f[1] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[9] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[23]);
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[23]);
    c.f[8] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[1]);
    c.f[5] = ld32((c.r[2].w[0] + 788u));
    c.f[6] = ld32((c.r[2].w[0] + 772u));
    c.f[7] = ld32((c.r[2].w[0] + 804u));
    c.f[4] = ld32((c.r[2].w[0] + 820u));
    c.f[1] = ld32((c.r[2].w[0] + 792u));
    c.f[2] = ld32((c.r[2].w[0] + 776u));
    c.facc = fp::ee::mul(c.fcr31, c.f[22], c.f[5]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[6]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[7]);
    c.f[3] = ld32((c.r[2].w[0] + 808u));
    c.facc = fp::ee::mul(c.fcr31, c.f[22], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[2]);
    c.f[0] = ld32((c.r[2].w[0] + 824u));
    c.f[5] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[3]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 784u));
    c.f[2] = ld32((c.r[2].w[0] + 768u));
    c.f[3] = ld32((c.r[2].w[0] + 800u));
    c.f[0] = ld32((c.r[2].w[0] + 816u));
    c.facc = fp::ee::mul(c.fcr31, c.f[22], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    st32((c.r[6].w[0] + 4u), c.f[5]);
    st32((c.r[6].w[0] + 8u), c.f[4]);
    st32((c.r[6].w[0] + 12u), c.f[21]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DB748u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_007D(c, 136u, depth + 1u); else { c.pc = 0x003F5370u; return; } if (c.pc != 0x004DB748u) [[unlikely]] return; }
L_004DB748:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0] + 532u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DB640u | kUnwind; return; } goto L_004DB640; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 21144u), c.r[2].w[0]);  if (t) { goto L_004DBB30; } }
L_004DB774:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 23840u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_004DBAF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[25].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[14], 0u + 2u);
    set32(c.r[25], c.r[25].w[0] + 23840u);
    c.f[4] = c.r[2].w[0];
    set32(c.r[22], c.r[29].w[0] + 180u);
    set32(c.r[23], c.r[29].w[0] + 184u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[15], 0u - 1u);
    set32(c.r[13], c.r[14].w[0] - 1u);
    c.budget -= 10;
L_004DB7B0:
    set32(c.r[24], ld32((c.r[25].w[0])));
    set32(c.r[2], ld32((c.r[24].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[15].d[0]; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004DBAE8; } }
L_004DB7C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 512u)));
    set32(c.r[3], ld32((c.r[24].w[0])));
    c.f[16] = ld32((c.r[24].w[0] + 20u));
    set32(c.r[2], ld32((c.r[24].w[0] + 32u)));
    c.f[12] = ld32((c.r[24].w[0] + 16u));
    c.f[11] = ld32((c.r[24].w[0] + 24u));
    c.r[18].d[0] = c.r[14].d[0] + 0ull;
    c.f[15] = ld32((c.r[24].w[0] + 52u));
    c.f[14] = ld32((c.r[24].w[0] + 48u));
    set32(c.r[4], ld32((c.r[4].w[0] + 348u)));
    c.f[13] = ld32((c.r[24].w[0] + 56u));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[6] = ld32((c.r[3].w[0] + 16u));
    c.f[7] = ld32((c.r[3].w[0]));
    c.f[8] = ld32((c.r[3].w[0] + 32u));
    c.f[2] = ld32((c.r[3].w[0] + 20u));
    c.f[1] = ld32((c.r[3].w[0] + 48u));
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    c.facc = fp::ee::mul(c.fcr31, c.f[16], c.f[6]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[12], c.f[7]);
    c.f[6] = fp::ee::madd(c.fcr31, c.facc, c.f[11], c.f[8]);
    c.facc = fp::ee::mul(c.fcr31, c.f[16], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[12], c.f[3]);
    c.f[5] = ld32((c.r[3].w[0] + 36u));
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    c.f[8] = ld32((c.r[3].w[0] + 24u));
    c.f[9] = ld32((c.r[3].w[0] + 8u));
    c.f[10] = ld32((c.r[3].w[0] + 40u));
    c.f[6] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[11], c.f[5]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[16], c.f[8]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[12], c.f[9]);
    c.f[8] = fp::ee::madd(c.fcr31, c.facc, c.f[11], c.f[10]);
    c.f[5] = ld32((c.r[2].w[0] + 24u));
    c.f[3] = ld32((c.r[3].w[0] + 56u));
    c.f[7] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = ld32((c.r[2].w[0] + 56u));
    c.f[10] = ld32((c.r[2].w[0] + 20u));
    c.f[11] = ld32((c.r[2].w[0] + 4u));
    c.facc = fp::ee::mul(c.fcr31, c.f[15], c.f[5]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[14], c.f[6]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[13], c.f[7]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[8]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[15], c.f[10]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[23].w[0]), c.f[0]);
    c.f[12] = ld32((c.r[2].w[0] + 36u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[14], c.f[11]);
    c.f[6] = ld32((c.r[2].w[0] + 16u));
    c.f[7] = ld32((c.r[2].w[0]));
    c.f[8] = ld32((c.r[2].w[0] + 32u));
    c.f[9] = ld32((c.r[2].w[0] + 52u));
    c.f[10] = fp::ee::madd(c.fcr31, c.facc, c.f[13], c.f[12]);
    c.f[5] = ld32((c.r[2].w[0] + 48u));
    c.facc = fp::ee::mul(c.fcr31, c.f[15], c.f[6]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[14], c.f[7]);
    c.f[6] = fp::ee::madd(c.fcr31, c.facc, c.f[13], c.f[8]);
    c.f[9] = fp::ee::add(c.fcr31, c.f[9], c.f[10]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[6]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[9], c.f[2]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[5], c.f[1]);
    st32((c.r[29].w[0] + 176u), c.f[5]);
    st32((c.r[22].w[0]), c.f[6]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[4]);
    c.budget -= 73;
    { const bool t = c.r[19].d[0] == 0ull; c.f[6] = fp::ee::mul(c.fcr31, c.f[6], c.f[4]);  if (t) { goto L_004DB8F8; } }
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.r[18].d[0] = c.r[13].d[0] + 0ull;
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 5;
L_004DB8F8:
    c.r[1].d[0] = 0ll < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004DBAD8; } }
    c.r[1].d[0] = c.r[18].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[12], c.r[18].w[0] - 8u);  if (t) { goto L_004DBA90; } }
    c.r[1].d[0] = c.r[18].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004DB938; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[18].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004DB938; } }
    c.r[2].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 2;
L_004DB938:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DBA90; } }
L_004DB940:
    set32(c.r[2], c.r[20].w[0] << 4);
    set32(c.r[10], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 8u);
    st32((c.r[10].w[0]), c.f[1]);
    set32(c.r[2], c.r[20].w[0] + 1u);
    st32((c.r[10].w[0] + 4u), c.f[2]);
    set32(c.r[3], c.r[2].w[0] << 4);
    st32((c.r[10].w[0] + 8u), c.f[3]);
    set32(c.r[2], c.r[20].w[0] + 2u);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[9], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[20].w[0] + 3u);
    set32(c.r[3], c.r[2].w[0] << 4);
    st32((c.r[10].w[0] + 12u), c.f[20]);
    set32(c.r[2], c.r[20].w[0] + 4u);
    st32((c.r[9].w[0]), c.f[1]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    set32(c.r[6], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[20].w[0] + 5u);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + 6u);
    set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[9].w[0] + 4u), c.f[2]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[20].w[0] + 7u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[9].w[0] + 8u), c.f[3]);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    st32((c.r[9].w[0] + 12u), c.f[20]);
    st32((c.r[8].w[0]), c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    st32((c.r[8].w[0] + 4u), c.f[2]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[8].w[0] + 8u), c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    st32((c.r[8].w[0] + 12u), c.f[20]);
    st32((c.r[7].w[0]), c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    st32((c.r[7].w[0] + 4u), c.f[2]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[7].w[0] + 8u), c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    st32((c.r[7].w[0] + 12u), c.f[20]);
    st32((c.r[6].w[0]), c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    st32((c.r[6].w[0] + 4u), c.f[2]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[6].w[0] + 8u), c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    st32((c.r[6].w[0] + 12u), c.f[20]);
    st32((c.r[5].w[0]), c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[5].w[0] + 8u), c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    st32((c.r[5].w[0] + 12u), c.f[20]);
    st32((c.r[4].w[0]), c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 8u), c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    st32((c.r[4].w[0] + 12u), c.f[20]);
    st32((c.r[3].w[0]), c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 83;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 12u), c.f[20]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DB940u | kUnwind; return; } goto L_004DB940; } }
    c.budget -= 1;
L_004DBA90:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004DBAD8; } }
    c.budget -= 1;
L_004DBAA0:
    set32(c.r[2], c.r[20].w[0] << 4);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0]), c.f[1]);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    st32((c.r[3].w[0] + 4u), c.f[2]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 12u), c.f[20]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DBAA0u | kUnwind; return; } goto L_004DBAA0; } }
    c.budget -= 1;
L_004DBAD8:
    set32(c.r[24], c.r[24].w[0] + 32u);
    set32(c.r[2], ld32((c.r[24].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[15].d[0]; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DB7C0u | kUnwind; return; } goto L_004DB7C0; } }
L_004DBAE8:
    set32(c.r[25], c.r[25].w[0] + 4u);
    set32(c.r[2], ld32((c.r[25].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DB7B0u | kUnwind; return; } goto L_004DB7B0; } }
L_004DBAF8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DBAFC:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[6], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DBB10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007D(c, 136u, depth + 1u); else { c.pc = 0x003F5370u; return; } if (c.pc != 0x004DBB10u) [[unlikely]] return; }
L_004DBB10:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0] + 532u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DBAFCu | kUnwind; return; } goto L_004DBAFC; } }
    c.budget -= 1;
L_004DBB30:
    st32((c.r[16].w[0] + 528u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 528u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 532u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DBB4Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004DBB4Cu) [[unlikely]] return; }
L_004DBB4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DBC10; } }
L_004DBB54:
    set32(c.r[2], ld32((c.r[16].w[0] + 528u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 528u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 528u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 532u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DBB78u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004DBB78u) [[unlikely]] return; }
L_004DBB78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DBB54u | kUnwind; return; } goto L_004DBB54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 532u)));  if (t) { goto L_004DBC14; } }
L_004DBB88:
    c.r[5].d[0] = ld8((c.r[2].w[0] + 1536u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_004DBBF8; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_004DBBBC; } }
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_004DBBBC:
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004DBBD4; } }
    c.r[6].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_004DBBD4:
    set32(c.r[3], ld32((c.r[2].w[0] + 348u)));
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_004DBBE4:
    set32(c.r[4], c.r[2].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DBBF0u); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0032(c, 17u, depth + 1u); else { c.pc = 0x002C8540u; return; } if (c.pc != 0x004DBBF0u) [[unlikely]] return; }
L_004DBBF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[29].w[0] + 292u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DB4B8u | kUnwind; return; } goto L_004DB4B8; } }
L_004DBBF8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - 20400u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DBBE4u | kUnwind; return; } goto L_004DBBE4; } }
L_004DBC04:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - 20400u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DB4A8u | kUnwind; return; } goto L_004DB4A8; } }
L_004DBC10:
    set32(c.r[5], ld32((c.r[16].w[0] + 532u)));
    c.budget -= 1;
L_004DBC14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DBC1Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004DBC1Cu) [[unlikely]] return; }
L_004DBC1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_004DBC70:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004DBD10; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DBCA8:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_004DBCB8:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 532u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DBCD0u); set32(c.r[16], c.r[2].w[0] + 532u);  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004DBCD0u) [[unlikely]] return; }
L_004DBCD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DBCF8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DBCE4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x004DBCE4u) [[unlikely]] return; }
L_004DBCE4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DBCB8u | kUnwind; return; } goto L_004DBCB8; } }
    c.budget -= 1;
L_004DBCF8:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DBCA8u | kUnwind; return; } goto L_004DBCA8; } }
    c.budget -= 1;
L_004DBD10:
    st32((c.r[20].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004DBD40:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004DBDE0; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DBD78:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_004DBD88:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 532u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DBDA0u); set32(c.r[16], c.r[2].w[0] + 532u);  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004DBDA0u) [[unlikely]] return; }
L_004DBDA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DBDC8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DBDB4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x004DBDB4u) [[unlikely]] return; }
L_004DBDB4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DBD88u | kUnwind; return; } goto L_004DBD88; } }
    c.budget -= 1;
L_004DBDC8:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DBD78u | kUnwind; return; } goto L_004DBD78; } }
    c.budget -= 1;
L_004DBDE0:
    st32((c.r[20].w[0] + 4u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004DBE00; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DBDFCu); set32(c.r[5], c.r[5].w[0] - 19984u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004DBDFCu) [[unlikely]] return; }
L_004DBDFC:
    st32((c.r[20].w[0] + 8u), 0u);
    c.budget -= 1;
L_004DBE00:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004DBE18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DBE14u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004DBE14u) [[unlikely]] return; }
L_004DBE14:
    st32((c.r[20].w[0] + 12u), 0u);
    c.budget -= 1;
L_004DBE18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004DBE40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DBE5Cu); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DBE5Cu) [[unlikely]] return; }
L_004DBE5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004DBE7C; } }
L_004DBE64:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DBE74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 283u, depth + 1u); else { c.pc = 0x004AA3D0u; return; } if (c.pc != 0x004DBE74u) [[unlikely]] return; }
L_004DBE74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004DBEDC; } }
L_004DBE7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], 0u - 2u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 3u);
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[2], c.r[2].w[0] + 25760u);
    st32((c.r[17].w[0] + 12u), 0u);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[7].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DBE64u | kUnwind; return; } goto L_004DBE64; } }
L_004DBEDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004DBEF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DBF18u); c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 85u, depth + 1u); else { c.pc = 0x002BC790u; return; } if (c.pc != 0x004DBF18u) [[unlikely]] return; }
L_004DBF18:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DBF24u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DBF24u) [[unlikely]] return; }
L_004DBF24:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DBF5C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DBF4Cu); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 63u, depth + 1u); else { c.pc = 0x002F0620u; return; } if (c.pc != 0x004DBF4Cu) [[unlikely]] return; }
L_004DBF4C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DBF58u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 368u, depth + 1u); else { c.pc = 0x00473540u; return; } if (c.pc != 0x004DBF58u) [[unlikely]] return; }
L_004DBF58:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DBF5C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004DBF80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DBF90u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DBF90u) [[unlikely]] return; }
L_004DBF90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DBFA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DBFA0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 35u, depth + 1u); else { c.pc = 0x005004A0u; return; } if (c.pc != 0x004DBFA0u) [[unlikely]] return; }
L_004DBFA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004DBFB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DBFC0u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DBFC0u) [[unlikely]] return; }
L_004DBFC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DBFD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DBFD0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 39u, depth + 1u); else { c.pc = 0x00500590u; return; } if (c.pc != 0x004DBFD0u) [[unlikely]] return; }
L_004DBFD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004DBFE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DBFFCu); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DBFFCu) [[unlikely]] return; }
L_004DBFFC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
    [[clang::musttail]] return unit_00B7(c, 1u, depth);
}

}

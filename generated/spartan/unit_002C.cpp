#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002C[4096] = {
    1, 2, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0,
    0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0,
    0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0,
    0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 55, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0,
    0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0,
    0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77,
    0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0,
    88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0,
    0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 183, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0,
    0, 0, 187, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206,
    0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0,
    240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0,
};

void unit_002C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002B0000;
    case 2u: goto L_002B0004;
    case 3u: goto L_002B0010;
    case 4u: goto L_002B0020;
    case 5u: goto L_002B0030;
    case 6u: goto L_002B0038;
    case 7u: goto L_002B0050;
    case 8u: goto L_002B0060;
    case 9u: goto L_002B0078;
    case 10u: goto L_002B0088;
    case 11u: goto L_002B00C0;
    case 12u: goto L_002B013C;
    case 13u: goto L_002B0140;
    case 14u: goto L_002B0164;
    case 15u: goto L_002B0184;
    case 16u: goto L_002B01A4;
    case 17u: goto L_002B01D0;
    case 18u: goto L_002B01E8;
    case 19u: goto L_002B020C;
    case 20u: goto L_002B0214;
    case 21u: goto L_002B0244;
    case 22u: goto L_002B0254;
    case 23u: goto L_002B0288;
    case 24u: goto L_002B02A0;
    case 25u: goto L_002B02C4;
    case 26u: goto L_002B02CC;
    case 27u: goto L_002B02FC;
    case 28u: goto L_002B033C;
    case 29u: goto L_002B034C;
    case 30u: goto L_002B0388;
    case 31u: goto L_002B03AC;
    case 32u: goto L_002B0430;
    case 33u: goto L_002B043C;
    case 34u: goto L_002B053C;
    case 35u: goto L_002B0548;
    case 36u: goto L_002B05D0;
    case 37u: goto L_002B0660;
    case 38u: goto L_002B0698;
    case 39u: goto L_002B0724;
    case 40u: goto L_002B07C4;
    case 41u: goto L_002B07D0;
    case 42u: goto L_002B08C0;
    case 43u: goto L_002B08CC;
    case 44u: goto L_002B0930;
    case 45u: goto L_002B0954;
    case 46u: goto L_002B0968;
    case 47u: goto L_002B0998;
    case 48u: goto L_002B0A20;
    case 49u: goto L_002B0A2C;
    case 50u: goto L_002B0AAC;
    case 51u: goto L_002B0B40;
    case 52u: goto L_002B0B50;
    case 53u: goto L_002B0B60;
    case 54u: goto L_002B0C60;
    case 55u: goto L_002B0C8C;
    case 56u: goto L_002B0C90;
    case 57u: goto L_002B0CF8;
    case 58u: goto L_002B0D28;
    case 59u: goto L_002B0D40;
    case 60u: goto L_002B0D58;
    case 61u: goto L_002B0E14;
    case 62u: goto L_002B0E30;
    case 63u: goto L_002B0E70;
    case 64u: goto L_002B0E88;
    case 65u: goto L_002B0F00;
    case 66u: goto L_002B0F08;
    case 67u: goto L_002B0F18;
    case 68u: goto L_002B0F5C;
    case 69u: goto L_002B0F74;
    case 70u: goto L_002B0F94;
    case 71u: goto L_002B0FAC;
    case 72u: goto L_002B0FD4;
    case 73u: goto L_002B1010;
    case 74u: goto L_002B1050;
    case 75u: goto L_002B1060;
    case 76u: goto L_002B10A8;
    case 77u: goto L_002B10FC;
    case 78u: goto L_002B1120;
    case 79u: goto L_002B1140;
    case 80u: goto L_002B11C0;
    case 81u: goto L_002B11E0;
    case 82u: goto L_002B1200;
    case 83u: goto L_002B1240;
    case 84u: goto L_002B125C;
    case 85u: goto L_002B12BC;
    case 86u: goto L_002B12D0;
    case 87u: goto L_002B12F8;
    case 88u: goto L_002B1300;
    case 89u: goto L_002B1330;
    case 90u: goto L_002B1348;
    case 91u: goto L_002B1380;
    case 92u: goto L_002B1390;
    case 93u: goto L_002B14A4;
    case 94u: goto L_002B14C0;
    case 95u: goto L_002B14D0;
    case 96u: goto L_002B14E0;
    case 97u: goto L_002B151C;
    case 98u: goto L_002B153C;
    case 99u: goto L_002B154C;
    case 100u: goto L_002B1580;
    case 101u: goto L_002B15B8;
    case 102u: goto L_002B1648;
    case 103u: goto L_002B166C;
    case 104u: goto L_002B1684;
    case 105u: goto L_002B169C;
    case 106u: goto L_002B16A8;
    case 107u: goto L_002B16E4;
    case 108u: goto L_002B1700;
    case 109u: goto L_002B1820;
    case 110u: goto L_002B1840;
    case 111u: goto L_002B1854;
    case 112u: goto L_002B1900;
    case 113u: goto L_002B195C;
    case 114u: goto L_002B198C;
    case 115u: goto L_002B1994;
    case 116u: goto L_002B19C4;
    case 117u: goto L_002B1A00;
    case 118u: goto L_002B1A38;
    case 119u: goto L_002B1A4C;
    case 120u: goto L_002B1AF4;
    case 121u: goto L_002B1B10;
    case 122u: goto L_002B1B20;
    case 123u: goto L_002B1C20;
    case 124u: goto L_002B1C40;
    case 125u: goto L_002B1C54;
    case 126u: goto L_002B1D00;
    case 127u: goto L_002B1D78;
    case 128u: goto L_002B1EA8;
    case 129u: goto L_002B1EAC;
    case 130u: goto L_002B1EDC;
    case 131u: goto L_002B1F04;
    case 132u: goto L_002B1F1C;
    case 133u: goto L_002B1F38;
    case 134u: goto L_002B1F74;
    case 135u: goto L_002B1FA0;
    case 136u: goto L_002B1FD8;
    case 137u: goto L_002B1FF0;
    case 138u: goto L_002B2008;
    case 139u: goto L_002B2018;
    case 140u: goto L_002B20B8;
    case 141u: goto L_002B20D0;
    case 142u: goto L_002B2150;
    case 143u: goto L_002B21B0;
    case 144u: goto L_002B21E0;
    case 145u: goto L_002B2200;
    case 146u: goto L_002B2214;
    case 147u: goto L_002B22C0;
    case 148u: goto L_002B23F4;
    case 149u: goto L_002B2410;
    case 150u: goto L_002B2494;
    case 151u: goto L_002B24A0;
    case 152u: goto L_002B24F0;
    case 153u: goto L_002B257C;
    case 154u: goto L_002B2610;
    case 155u: goto L_002B2628;
    case 156u: goto L_002B264C;
    case 157u: goto L_002B2670;
    case 158u: goto L_002B2770;
    case 159u: goto L_002B27A0;
    case 160u: goto L_002B281C;
    case 161u: goto L_002B2830;
    case 162u: goto L_002B2858;
    case 163u: goto L_002B2860;
    case 164u: goto L_002B2890;
    case 165u: goto L_002B28D0;
    case 166u: goto L_002B28E8;
    case 167u: goto L_002B28F8;
    case 168u: goto L_002B2950;
    case 169u: goto L_002B2964;
    case 170u: goto L_002B2974;
    case 171u: goto L_002B29CC;
    case 172u: goto L_002B2A10;
    case 173u: goto L_002B2A34;
    case 174u: goto L_002B2A4C;
    case 175u: goto L_002B2A94;
    case 176u: goto L_002B2AB8;
    case 177u: goto L_002B2AFC;
    case 178u: goto L_002B2B78;
    case 179u: goto L_002B2BDC;
    case 180u: goto L_002B2C44;
    case 181u: goto L_002B2C74;
    case 182u: goto L_002B2CAC;
    case 183u: goto L_002B2CB0;
    case 184u: goto L_002B2CBC;
    case 185u: goto L_002B2CCC;
    case 186u: goto L_002B2CF8;
    case 187u: goto L_002B2D08;
    case 188u: goto L_002B2D18;
    case 189u: goto L_002B2D24;
    case 190u: goto L_002B2D58;
    case 191u: goto L_002B2DD0;
    case 192u: goto L_002B2E40;
    case 193u: goto L_002B2E50;
    case 194u: goto L_002B2EA4;
    case 195u: goto L_002B2EB4;
    case 196u: goto L_002B2ED0;
    case 197u: goto L_002B2FE4;
    case 198u: goto L_002B3000;
    case 199u: goto L_002B3064;
    case 200u: goto L_002B306C;
    case 201u: goto L_002B309C;
    case 202u: goto L_002B30B0;
    case 203u: goto L_002B30F0;
    case 204u: goto L_002B319C;
    case 205u: goto L_002B31C0;
    case 206u: goto L_002B31FC;
    case 207u: goto L_002B3210;
    case 208u: goto L_002B3230;
    case 209u: goto L_002B3240;
    case 210u: goto L_002B3340;
    case 211u: goto L_002B33D0;
    case 212u: goto L_002B33E0;
    case 213u: goto L_002B3460;
    case 214u: goto L_002B34A0;
    case 215u: goto L_002B3580;
    case 216u: goto L_002B3594;
    case 217u: goto L_002B35AC;
    case 218u: goto L_002B35C4;
    case 219u: goto L_002B35C8;
    case 220u: goto L_002B3600;
    case 221u: goto L_002B3648;
    case 222u: goto L_002B36D4;
    case 223u: goto L_002B36DC;
    case 224u: goto L_002B370C;
    case 225u: goto L_002B373C;
    case 226u: goto L_002B3760;
    case 227u: goto L_002B3770;
    case 228u: goto L_002B38BC;
    case 229u: goto L_002B38F0;
    case 230u: goto L_002B3934;
    case 231u: goto L_002B3958;
    case 232u: goto L_002B398C;
    case 233u: goto L_002B3994;
    case 234u: goto L_002B39C4;
    case 235u: goto L_002B3A00;
    case 236u: goto L_002B3A10;
    case 237u: goto L_002B3AA0;
    case 238u: goto L_002B3AB0;
    case 239u: goto L_002B3BE8;
    case 240u: goto L_002B3C00;
    case 241u: goto L_002B3C48;
    case 242u: goto L_002B3C7C;
    case 243u: goto L_002B3CAC;
    case 244u: goto L_002B3CB4;
    case 245u: goto L_002B3CE4;
    case 246u: goto L_002B3D20;
    case 247u: goto L_002B3D30;
    case 248u: goto L_002B3DC0;
    case 249u: goto L_002B3DD0;
    case 250u: goto L_002B3F04;
    case 251u: goto L_002B3F20;
    case 252u: goto L_002B3F88;
    case 253u: goto L_002B3F90;
    case 254u: goto L_002B3FC0;
    case 255u: goto L_002B3FF8;
    default: bad_entry(c, 0x002B0000u); return;
    }
L_002B0000:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B0004:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0010u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002B0010u) [[unlikely]] return; }
L_002B0010:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0020u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0020u) [[unlikely]] return; }
L_002B0020:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 348u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0030u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0030u) [[unlikely]] return; }
L_002B0030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AFFFCu | kUnwind; return; } [[clang::musttail]] return unit_002B(c, 360u, depth); } }
L_002B0038:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B0050:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_002B0060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 72u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B0080; } }
L_002B0078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002B00A8; } }
L_002B0080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0088u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_00AB(c, 232u, depth + 1u); else { c.pc = 0x004AE110u; return; } if (c.pc != 0x002B0088u) [[unlikely]] return; }
L_002B0088:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B00A0; } }
    set32(c.r[3], 0u + 211u);
    st8((c.r[4].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 681u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_002B00A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0078u | kUnwind; return; } goto L_002B0078; } }
L_002B00A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B00C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 68u)));
    c.f[21] = ld32((c.r[29].w[0] + 92u));
    c.f[20] = ld32((c.r[29].w[0] + 124u));
    c.budget -= 13;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B01D8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 64u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B0280; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = ld16((c.r[7].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B05A0; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 344u)));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 72u));
    set32(c.r[3], ld32((c.r[3].w[0] + 208u)));
    c.f[1] = ld32((c.r[3].w[0] + 52u));
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.f[22] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_002B0378; } }
L_002B013C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 72u));
    c.budget -= 1;
L_002B0140:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B018C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 96u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0164u); set32(c.r[4], c.r[3].w[0] + 680u);  if (depth < kMaxDepth) unit_0054(c, 24u, depth + 1u); else { c.pc = 0x00350780u; return; } if (c.pc != 0x002B0164u) [[unlikely]] return; }
L_002B0164:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B05A0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[5], c.r[17].w[0] + 80u);
    set32(c.r[6], 0u + 49u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0184u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 123u, depth + 1u); else { c.pc = 0x0028D390u; return; } if (c.pc != 0x002B0184u) [[unlikely]] return; }
L_002B0184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B01D0; } }
L_002B018C:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.f[12] = c.f[22];
    set32(c.r[5], c.r[17].w[0] + 96u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B01A4u); set32(c.r[4], c.r[2].w[0] + 680u);  if (depth < kMaxDepth) unit_0054(c, 24u, depth + 1u); else { c.pc = 0x00350780u; return; } if (c.pc != 0x002B01A4u) [[unlikely]] return; }
L_002B01A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B05A0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], 0u + 108u);
    set32(c.r[4], c.r[5].w[0] + 544u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 552u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002B05A0; } }
    set32(c.r[5], 0u + 26u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B01D0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 177u, depth + 1u); else { c.pc = 0x0028DC00u; return; } if (c.pc != 0x002B01D0u) [[unlikely]] return; }
L_002B01D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002B05A4; } }
L_002B01D8:
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B024C; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));
    c.budget -= 1;
L_002B01E8:
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_002B0264; } }
L_002B020C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0214u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002B0214u) [[unlikely]] return; }
L_002B0214:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B05A0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_002B05A0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0244u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002B0244u) [[unlikely]] return; }
L_002B0244:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B01D0u | kUnwind; return; } goto L_002B01D0; } }
L_002B024C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0254u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x002B05D0u; return; } if (c.pc != 0x002B0254u) [[unlikely]] return; }
L_002B0254:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B05A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B01E8u | kUnwind; return; } goto L_002B01E8; } }
L_002B0264:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B020Cu | kUnwind; return; } goto L_002B020C; } }
L_002B0280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0288u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 193u, depth + 1u); else { c.pc = 0x004ADB90u; return; } if (c.pc != 0x002B0288u) [[unlikely]] return; }
L_002B0288:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0304; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0344; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));
    c.budget -= 1;
L_002B02A0:
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_002B035C; } }
L_002B02C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B02CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002B02CCu) [[unlikely]] return; }
L_002B02CC:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B05A0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_002B05A0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B02FCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002B02FCu) [[unlikely]] return; }
L_002B02FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B01D0u | kUnwind; return; } goto L_002B01D0; } }
L_002B0304:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[3].w[0] + 544u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B05A0; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8u));
    set32(c.r[3], 0u + 108u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002B05A0; } }
    set32(c.r[5], 0u + 26u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B033Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 177u, depth + 1u); else { c.pc = 0x0028DC00u; return; } if (c.pc != 0x002B033Cu) [[unlikely]] return; }
L_002B033C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B01D0u | kUnwind; return; } goto L_002B01D0; } }
L_002B0344:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B034Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x002B05D0u; return; } if (c.pc != 0x002B034Cu) [[unlikely]] return; }
L_002B034C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B05A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B02A0u | kUnwind; return; } goto L_002B02A0; } }
L_002B035C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B02C4u | kUnwind; return; } goto L_002B02C4; } }
L_002B0378:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0388u); set32(c.r[5], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_00AB(c, 233u, depth + 1u); else { c.pc = 0x004AE140u; return; } if (c.pc != 0x002B0388u) [[unlikely]] return; }
L_002B0388:
    st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 72u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B03B4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B04BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B03ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x002B05D0u; return; } if (c.pc != 0x002B03ACu) [[unlikely]] return; }
L_002B03AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[17].w[0] + 72u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0140u | kUnwind; return; } goto L_002B0140; } }
L_002B03B4:
    c.f[2] = ld32((c.r[17].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.r[4].d[0] = 0ull | 0ull;
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    set32(c.r[16], c.r[29].w[0] + 104u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.f[21] = 0u;
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 100u), 0u);
    c.f[0] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[21], c.f[2]);
    set32(c.r[2], c.f[1]);
    st32((c.r[16].w[0]), c.f[22]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[23] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[2]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0430u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002B0430u) [[unlikely]] return; }
L_002B0430:
    c.f[12] = c.f[23];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B043Cu); c.f[23] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002B043Cu) [[unlikely]] return; }
L_002B043C:
    c.f[7] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.f[6] = ld32((c.r[29].w[0] + 96u));
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    c.f[2] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[2], 0u + 211u);
    c.f[4] = ld32((c.r[17].w[0] + 84u));
    c.f[5] = c.f[0] ^ fp::kSign;
    c.f[3] = ld32((c.r[17].w[0] + 88u));
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[0]);
    c.f[6] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[23]);
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[23]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[5]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.f[1] = c.r[3].w[0];
    st32((c.r[29].w[0] + 96u), c.f[6]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[6]);
    st32((c.r[17].w[0] + 96u), c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[17].w[0] + 100u), c.f[4]);
    st32((c.r[17].w[0] + 104u), c.f[2]);
    st32((c.r[17].w[0] + 108u), c.f[20]);
    c.f[0] = ld32((c.r[17].w[0] + 112u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 112u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    st8((c.r[3].w[0] + 680u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 681u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B013Cu | kUnwind; return; } goto L_002B013C; } }
L_002B04BC:
    c.f[2] = ld32((c.r[17].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.r[5].d[0] = 0ull | 0ull;
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[2], c.f[1]);
    c.f[20] = 0u;
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.facc = fp::ee::add(c.fcr31, c.f[20], c.f[2]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.f[2] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[23] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[2]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B053Cu); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002B053Cu) [[unlikely]] return; }
L_002B053C:
    c.f[12] = c.f[23];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0548u); c.f[23] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002B0548u) [[unlikely]] return; }
L_002B0548:
    c.f[7] = ld32((c.r[16].w[0]));
    c.f[6] = ld32((c.r[29].w[0] + 64u));
    c.f[2] = ld32((c.r[29].w[0] + 68u));
    c.f[4] = ld32((c.r[17].w[0] + 84u));
    c.f[1] = ld32((c.r[17].w[0] + 80u));
    c.f[5] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[0]);
    c.f[6] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[23]);
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[23]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[5]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[3] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[17].w[0] + 96u), c.f[0]);
    st32((c.r[17].w[0] + 100u), c.f[4]);
    st32((c.r[29].w[0] + 64u), c.f[6]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[17].w[0] + 104u), c.f[1]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), c.f[21]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B013Cu | kUnwind; return; } goto L_002B013C; } }
L_002B05A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002B05A4:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002B05D0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.f[20] = ld32((c.r[29].w[0] + 172u));
    c.f[21] = ld32((c.r[29].w[0] + 220u));
    c.f[22] = ld32((c.r[29].w[0] + 252u));
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B0640; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 64u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B0640; } }
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B0640:
    set32(c.r[19], ld32((c.r[28].w[0] - 28288u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[23] = c.r[2].w[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002B06F8; } }
    set32(c.r[17], c.r[29].w[0] + 260u);
    set32(c.r[21], c.r[29].w[0] + 264u);
    c.budget -= 2;
L_002B0660:
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B06E8; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 96u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B06E8; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0698u); set32(c.r[16], c.r[2].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0698u) [[unlikely]] return; }
L_002B0698:
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    c.f[4] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    st32((c.r[29].w[0] + 256u), c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[23]));
    st32((c.r[17].w[0]), c.f[2]);
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[21].w[0]), c.f[4]);  if (t) { goto L_002B06E8; } }
    c.f[23] = c.f[0];
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
L_002B06E8:
    set32(c.r[19], ld32((c.r[19].w[0] + 420u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0660u | kUnwind; return; } goto L_002B0660; } }
    c.budget -= 1;
L_002B06F8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002B0938; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002B0930; } }
    st32((c.r[20].w[0] + 68u), c.r[18].w[0]);
    set32(c.r[5], c.r[20].w[0] + 80u);
    set32(c.r[4], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[7], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0724u); set32(c.r[6], c.r[20].w[0] + 112u);  if (depth < kMaxDepth) unit_00AB(c, 233u, depth + 1u); else { c.pc = 0x004AE140u; return; } if (c.pc != 0x002B0724u) [[unlikely]] return; }
L_002B0724:
    st8((c.r[20].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 72u));
    set32(c.r[3], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 208u)));
    c.f[1] = ld32((c.r[3].w[0] + 52u));
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_002B0840; } }
    c.f[2] = ld32((c.r[20].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    set32(c.r[16], c.r[29].w[0] + 232u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = 0ull | 0ull;
    st32((c.r[16].w[0]), c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 224u), 0u);
    st32((c.r[29].w[0] + 228u), 0u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = 0u;
    set32(c.r[2], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[20], c.f[2]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[21] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[2]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B07C4u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002B07C4u) [[unlikely]] return; }
L_002B07C4:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B07D0u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002B07D0u) [[unlikely]] return; }
L_002B07D0:
    c.f[7] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.f[6] = ld32((c.r[29].w[0] + 224u));
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[2] = ld32((c.r[29].w[0] + 228u));
    c.f[4] = ld32((c.r[20].w[0] + 84u));
    c.f[5] = c.f[0] ^ fp::kSign;
    c.f[3] = ld32((c.r[20].w[0] + 88u));
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[0]);
    c.f[6] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[21]);
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[21]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[5]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[0] = ld32((c.r[20].w[0] + 80u));
    c.f[2] = ld32((c.r[29].w[0] + 232u));
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 224u), c.f[6]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[6]);
    st32((c.r[20].w[0] + 96u), c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[20].w[0] + 100u), c.f[4]);
    st32((c.r[20].w[0] + 104u), c.f[2]);
    st32((c.r[20].w[0] + 108u), c.f[22]);
    c.f[0] = ld32((c.r[20].w[0] + 112u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 28;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 112u), c.f[0]);  if (t) { goto L_002B0920; } }
L_002B0840:
    c.f[2] = ld32((c.r[20].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.r[5].d[0] = 0ull | 0ull;
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    set32(c.r[16], c.r[29].w[0] + 200u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 192u), 0u);
    st32((c.r[29].w[0] + 196u), 0u);
    set32(c.r[2], c.f[1]);
    c.f[20] = 0u;
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.facc = fp::ee::add(c.fcr31, c.f[20], c.f[2]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.f[2] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[22] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[2]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B08C0u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002B08C0u) [[unlikely]] return; }
L_002B08C0:
    c.f[12] = c.f[22];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B08CCu); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002B08CCu) [[unlikely]] return; }
L_002B08CC:
    c.f[7] = ld32((c.r[16].w[0]));
    c.f[6] = ld32((c.r[29].w[0] + 192u));
    c.f[2] = ld32((c.r[29].w[0] + 196u));
    c.f[4] = ld32((c.r[20].w[0] + 84u));
    c.f[1] = ld32((c.r[20].w[0] + 80u));
    c.f[5] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[0]);
    c.f[6] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[22]);
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[22]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[5]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[3] = ld32((c.r[20].w[0] + 88u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    c.f[2] = ld32((c.r[29].w[0] + 200u));
    st32((c.r[20].w[0] + 96u), c.f[0]);
    st32((c.r[20].w[0] + 100u), c.f[4]);
    st32((c.r[29].w[0] + 192u), c.f[6]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[20].w[0] + 104u), c.f[1]);
    st32((c.r[20].w[0] + 108u), c.f[21]);
    c.budget -= 21;
L_002B0920:
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[2], 0u + 211u);
    st8((c.r[3].w[0] + 680u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 681u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002B0930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B0B04; } }
L_002B0938:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0930u | kUnwind; return; } goto L_002B0930; } }
    set32(c.r[19], ld32((c.r[28].w[0] - 28288u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002B0978; } }
    set32(c.r[17], c.r[29].w[0] + 180u);
    set32(c.r[16], c.r[29].w[0] + 184u);
    c.budget -= 2;
L_002B0954:
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0A94; } }
L_002B0968:
    set32(c.r[19], ld32((c.r[19].w[0] + 420u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0954u | kUnwind; return; } goto L_002B0954; } }
    c.budget -= 1;
L_002B0978:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002B0B00; } }
    st32((c.r[20].w[0] + 68u), c.r[18].w[0]);
    set32(c.r[5], c.r[20].w[0] + 80u);
    set32(c.r[4], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[7], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0998u); set32(c.r[6], c.r[20].w[0] + 112u);  if (depth < kMaxDepth) unit_00AB(c, 233u, depth + 1u); else { c.pc = 0x004AE140u; return; } if (c.pc != 0x002B0998u) [[unlikely]] return; }
L_002B0998:
    st8((c.r[20].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull | 0ull;
    c.f[2] = ld32((c.r[20].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    set32(c.r[16], c.r[29].w[0] + 152u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 144u), 0u);
    st32((c.r[29].w[0] + 148u), 0u);
    c.f[0] = c.r[2].w[0];
    c.f[21] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[21], c.f[2]);
    set32(c.r[2], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[22] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[2]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0A20u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002B0A20u) [[unlikely]] return; }
L_002B0A20:
    c.f[12] = c.f[22];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0A2Cu); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002B0A2Cu) [[unlikely]] return; }
L_002B0A2C:
    c.f[7] = ld32((c.r[16].w[0]));
    set32(c.r[2], 0u + 211u);
    c.f[6] = ld32((c.r[29].w[0] + 144u));
    c.f[2] = ld32((c.r[29].w[0] + 148u));
    c.f[4] = ld32((c.r[20].w[0] + 84u));
    c.f[1] = ld32((c.r[20].w[0] + 80u));
    c.f[5] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[0]);
    c.f[6] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[22]);
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[22]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[5]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[3] = ld32((c.r[20].w[0] + 88u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    c.f[2] = ld32((c.r[29].w[0] + 152u));
    st32((c.r[20].w[0] + 96u), c.f[0]);
    st32((c.r[20].w[0] + 100u), c.f[4]);
    st32((c.r[29].w[0] + 144u), c.f[6]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[20].w[0] + 104u), c.f[1]);
    st32((c.r[20].w[0] + 108u), c.f[20]);
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    st8((c.r[3].w[0] + 680u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 681u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0930u | kUnwind; return; } goto L_002B0930; } }
L_002B0A94:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0AACu); set32(c.r[21], c.r[2].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0AACu) [[unlikely]] return; }
L_002B0AAC:
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = ld32((c.r[21].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    c.f[4] = ld32((c.r[21].w[0] + 8u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[23]));
    st32((c.r[17].w[0]), c.f[2]);
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0]), c.f[4]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0968u | kUnwind; return; } goto L_002B0968; } }
    c.f[23] = c.f[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[19].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0968u | kUnwind; return; } goto L_002B0968; } }
    c.budget -= 1;
L_002B0B00:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B0B04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
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
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_002B0B40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 48u);  c.pc = t; return; }
L_002B0B50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 64u), c.r[5].w[0]);  c.pc = t; return; }
L_002B0B60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = 0ull & 1ull;
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[8], c.r[2].w[0] << 2);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[14], 0u - 2u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[15].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[11], 0u - 3u);
    c.r[13].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[10], c.r[10].w[0] - 27952u);
    set32(c.r[9], 0u + 28u);
    set32(c.r[7], 0u - 5u);
    set32(c.r[6], c.r[6].w[0] - 16688u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - 24752u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[13].d[0] = c.r[13].d[0] & c.r[14].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0]), c.r[10].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[14].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 63;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002B0C60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B0D00; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 1348u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 312u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0C8Cu); set32(c.r[8], ld32((c.r[16].w[0] + 28u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0C8Cu) [[unlikely]] return; }
L_002B0C8C:
    set32(c.r[10], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_002B0C90:
    set32(c.r[7], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[5], 0u - 1u);
    set32(c.r[9], ld32((c.r[10].w[0] + 752u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 82u)));
    st16((c.r[10].w[0] + 762u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[10], ld32((c.r[16].w[0] + 28u)));
    c.r[9].d[0] = ld16((c.r[10].w[0] + 544u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[10].w[0] + 544u));
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[10].w[0] + 544u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0CF8u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 192u, depth + 1u); else { c.pc = 0x0028DE10u; return; } if (c.pc != 0x002B0CF8u) [[unlikely]] return; }
L_002B0CF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002B0D30; } }
L_002B0D00:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0C8Cu | kUnwind; return; } goto L_002B0C8C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 332u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0D28u); set32(c.r[8], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0D28u) [[unlikely]] return; }
L_002B0D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], ld32((c.r[16].w[0] + 28u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0C90u | kUnwind; return; } goto L_002B0C90; } }
L_002B0D30:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B0D40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B0F64; } }
L_002B0D58:
    set32(c.r[7], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 526u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[7].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 752u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 82u)));
    st16((c.r[4].w[0] + 762u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002B1128; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 526u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0DC4; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B0DE4; } }
L_002B0DC4:
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_002B0DE4:
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B1028; } }
L_002B0E14:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 522u));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 522u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002B1048; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_002B0E30:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B1058; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B1058; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 220u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002B1068; } }
    set32(c.r[2], 0u + 67u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002B1068; } }
L_002B0E70:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002B10BC; } }
    set32(c.r[2], 0u + 67u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002B10BC; } }
L_002B0E88:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], 0u + 143u);
    set32(c.r[10], c.r[3].w[0] + 544u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 552u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B0F00; } }
    c.r[9].d[0] = ld16((c.r[10].w[0]));
    set32(c.r[6], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[7], c.r[16].w[0] + 96u);
    c.r[6].d[0] = c.r[9].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[10].w[0]));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[10].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0F00u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 165u, depth + 1u); else { c.pc = 0x0028DA10u; return; } if (c.pc != 0x002B0F00u) [[unlikely]] return; }
L_002B0F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0F08u); set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));  if (depth < kMaxDepth) unit_0028(c, 180u, depth + 1u); else { c.pc = 0x002A21E0u; return; } if (c.pc != 0x002B0F08u) [[unlikely]] return; }
L_002B0F08:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002B1108; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_002B0F18:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B11C8; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 220u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B11C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B11C8; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 1348u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 316u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0F5Cu); c.r[6].d[0] = ld8((c.r[16].w[0] + 80u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0F5Cu) [[unlikely]] return; }
L_002B0F5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002B11CC; } }
L_002B0F64:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0F74u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002B0F74u) [[unlikely]] return; }
L_002B0F74:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B1020; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0F94u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0F94u) [[unlikely]] return; }
L_002B0F94:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0FACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0FACu) [[unlikely]] return; }
L_002B0FAC:
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B100C; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 1348u)));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 320u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0FD4u); set32(c.r[5], ld32((c.r[16].w[0] + 28u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0FD4u) [[unlikely]] return; }
L_002B0FD4:
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], 0u + 67u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 220u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B100C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.f[0] = ld32((c.r[5].w[0] + 108u));
    c.f[1] = ld32((c.r[3].w[0] + 192u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 192u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    st32((c.r[3].w[0] + 108u), c.f[0]);
    c.budget -= 9;
L_002B100C:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002B1010:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0D58u | kUnwind; return; } goto L_002B0D58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B11C8; } }
L_002B1020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1010u | kUnwind; return; } goto L_002B1010; } }
L_002B1028:
    c.r[4].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0E14u | kUnwind; return; } goto L_002B0E14; } }
L_002B1048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1050u);  if (depth < kMaxDepth) unit_001F(c, 322u, depth + 1u); else { c.pc = 0x0027E770u; return; } if (c.pc != 0x002B1050u) [[unlikely]] return; }
L_002B1050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 72u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0E30u | kUnwind; return; } goto L_002B0E30; } }
L_002B1058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1060u); set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_001F(c, 384u, depth + 1u); else { c.pc = 0x0027FDD0u; return; } if (c.pc != 0x002B1060u) [[unlikely]] return; }
L_002B1060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0F00u | kUnwind; return; } goto L_002B0F00; } }
L_002B1068:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], 0u + 71u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0E70u | kUnwind; return; } goto L_002B0E70; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 840u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1348u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 312u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B10A8u); set32(c.r[7], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B10A8u) [[unlikely]] return; }
L_002B10A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], 0u + 1u);
    st16((c.r[2].w[0] + 762u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0F00u | kUnwind; return; } goto L_002B0F00; } }
L_002B10BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], 0u + 72u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0E88u | kUnwind; return; } goto L_002B0E88; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 840u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1348u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 312u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B10FCu); set32(c.r[7], 0u + 5u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B10FCu) [[unlikely]] return; }
L_002B10FC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0E88u | kUnwind; return; } goto L_002B0E88; } }
L_002B1108:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1348u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 324u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1120u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B1120u) [[unlikely]] return; }
L_002B1120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 28u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0F18u | kUnwind; return; } goto L_002B0F18; } }
L_002B1128:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B11C8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1140u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_001F(c, 322u, depth + 1u); else { c.pc = 0x0027E770u; return; } if (c.pc != 0x002B1140u) [[unlikely]] return; }
L_002B1140:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], 0u + 143u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 803u)));
    st32((c.r[16].w[0] + 132u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[10], c.r[4].w[0] + 544u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 552u));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B11C8; } }
    c.r[9].d[0] = ld16((c.r[10].w[0]));
    set32(c.r[7], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[6], c.r[16].w[0] + 96u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[10].w[0]));
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[10].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B11C0u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 162u, depth + 1u); else { c.pc = 0x0028D9A0u; return; } if (c.pc != 0x002B11C0u) [[unlikely]] return; }
L_002B11C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0F5Cu | kUnwind; return; } goto L_002B0F5C; } }
L_002B11C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B11CC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B11E0:
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 76u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 136u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002B1200:
    st32((c.r[4].w[0] + 64u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[4].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[4].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    st32((c.r[4].w[0] + 108u), c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x002B0000u < 16384u) { entry = entries_002C[(t - 0x002B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B1240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B1338; } }
L_002B125C:
    set32(c.r[9], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[6], 0u - 3u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
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
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 24;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B12BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B12BCu) [[unlikely]] return; }
L_002B12BC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.f[12] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B12D0u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 168u, depth + 1u); else { c.pc = 0x0028DA90u; return; } if (c.pc != 0x002B12D0u) [[unlikely]] return; }
L_002B12D0:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_002B1350; } }
L_002B12F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1300u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002B1300u) [[unlikely]] return; }
L_002B1300:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B136C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_002B136C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1330u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002B1330u) [[unlikely]] return; }
L_002B1330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002B1370; } }
L_002B1338:
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1348u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002B1348u) [[unlikely]] return; }
L_002B1348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B125Cu | kUnwind; return; } goto L_002B125C; } }
L_002B1350:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B12F8u | kUnwind; return; } goto L_002B12F8; } }
L_002B136C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002B1370:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B1380:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 68u), 0u);  c.pc = t; return; }
L_002B1390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 16352u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = 0ull & 1ull;
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[8], c.r[3].w[0] << 2);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[14], 0u - 2u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[15].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[13].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[11], 0u - 3u);
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[10], c.r[10].w[0] - 27952u);
    set32(c.r[9], 0u + 26u);
    set32(c.r[7], 0u - 5u);
    set32(c.r[6], c.r[6].w[0] - 16688u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 24080u);
    c.r[13].d[0] = c.r[13].d[0] & c.r[14].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0]), c.r[10].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[14].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 72u), c.f[12]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 69;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B14A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B14A4u) [[unlikely]] return; }
L_002B14A4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B14C0:
    set32(c.r[5], ld32((c.r[4].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] - 10288u);  [[clang::musttail]] return unit_002F(c, 151u, depth); }
L_002B14D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B14E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B1530; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[16].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 9;
L_002B151C:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], 0u + 211u);
    st8((c.r[4].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 681u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002B1570; } }
L_002B1530:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B153Cu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002B153Cu) [[unlikely]] return; }
L_002B153C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B154Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B154Cu) [[unlikely]] return; }
L_002B154C:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B151Cu | kUnwind; return; } goto L_002B151C; } }
L_002B1570:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B1580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld16((c.r[5].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B15C0; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B15C0; } }
L_002B15B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002B16F0; } }
L_002B15C0:
    c.f[2] = ld32((c.r[16].w[0] + 96u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[3] = c.r[3].w[0];
    c.f[1] = ld32((c.r[5].w[0] + 32u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[5].w[0] + 32u);  if (t) { goto L_002B16B0; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B16B0; } }
    c.f[2] = ld32((c.r[16].w[0] + 100u));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002B16B8; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B16B8; } }
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002B16C0; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B16C0; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002B1648:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B16C8; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 672u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B16EC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 264u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B166Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B166Cu) [[unlikely]] return; }
L_002B166C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B16EC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 328u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1684u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B1684u) [[unlikely]] return; }
L_002B1684:
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 72u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B169Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 78u, depth + 1u); else { c.pc = 0x004256D0u; return; } if (c.pc != 0x002B169Cu) [[unlikely]] return; }
L_002B169C:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B16A8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001F(c, 169u, depth + 1u); else { c.pc = 0x0027DA10u; return; } if (c.pc != 0x002B16A8u) [[unlikely]] return; }
L_002B16A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B15B8u | kUnwind; return; } goto L_002B15B8; } }
L_002B16B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1648u | kUnwind; return; } goto L_002B1648; } }
L_002B16B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1648u | kUnwind; return; } goto L_002B1648; } }
L_002B16C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1648u | kUnwind; return; } goto L_002B1648; } }
L_002B16C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    set32(c.r[4], c.r[5].w[0] + 680u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[5], c.r[16].w[0] + 96u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B16E4u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0054(c, 24u, depth + 1u); else { c.pc = 0x00350780u; return; } if (c.pc != 0x002B16E4u) [[unlikely]] return; }
L_002B16E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B15B8u | kUnwind; return; } goto L_002B15B8; } }
L_002B16EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B16F0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B1700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[24].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = 0ull & 1ull;
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[14], c.r[2].w[0] << 2);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[3], 0u - 2u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[17].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[25], 0u - 3u);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[24], c.r[24].w[0] - 27952u);
    set32(c.r[15], 0u + 66u);
    set32(c.r[13], 0u - 5u);
    set32(c.r[12], c.r[12].w[0] - 16688u);
    set32(c.r[10], 0u + 1u);
    set32(c.r[11], c.r[11].w[0] - 23744u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[17].d[0] & c.r[3].d[0];
    c.r[17].d[0] = c.r[17].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[17].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[25].d[0] = c.r[17].d[0] & c.r[25].d[0];
    c.r[25].d[0] = c.r[25].d[0] | c.r[16].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[25].w[0]));
    st32((c.r[4].w[0]), c.r[24].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[3].d[0] = c.r[15].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[13].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[14].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0]), c.r[12].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[11].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 76u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[5].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 72;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B1820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[16].w[0] + 1072u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1840u); set32(c.r[4], c.r[4].w[0] + 8912u);  if (depth < kMaxDepth) unit_004F(c, 71u, depth + 1u); else { c.pc = 0x0033D6A0u; return; } if (c.pc != 0x002B1840u) [[unlikely]] return; }
L_002B1840:
    st8((c.r[16].w[0] + 1267u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 1072u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1854u); st8((c.r[16].w[0] + 1266u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0040(c, 70u, depth + 1u); else { c.pc = 0x00301C10u; return; } if (c.pc != 0x002B1854u) [[unlikely]] return; }
L_002B1854:
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
    st32((c.r[16].w[0] + 1236u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 42;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B1900:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.r[4].d[0] = ld16((c.r[5].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B193C; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002B193C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B19E8; } }
    set32(c.r[4], c.r[5].w[0] + 680u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 72u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 73u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B195Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0054(c, 44u, depth + 1u); else { c.pc = 0x00350C90u; return; } if (c.pc != 0x002B195Cu) [[unlikely]] return; }
L_002B195C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B19E8; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_002B19CC; } }
L_002B198C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1994u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002B1994u) [[unlikely]] return; }
L_002B1994:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B19E8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_002B19E8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B19C4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002B19C4u) [[unlikely]] return; }
L_002B19C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002B19EC; } }
L_002B19CC:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B198Cu | kUnwind; return; } goto L_002B198C; } }
L_002B19E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002B19EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B1A00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 211u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    st8((c.r[3].w[0] + 680u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 681u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[16].w[0] + 1072u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1A38u); set32(c.r[4], c.r[4].w[0] + 8912u);  if (depth < kMaxDepth) unit_004F(c, 71u, depth + 1u); else { c.pc = 0x0033D6A0u; return; } if (c.pc != 0x002B1A38u) [[unlikely]] return; }
L_002B1A38:
    st8((c.r[16].w[0] + 1267u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 1072u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1A4Cu); st8((c.r[16].w[0] + 1266u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0040(c, 70u, depth + 1u); else { c.pc = 0x00301C10u; return; } if (c.pc != 0x002B1A4Cu) [[unlikely]] return; }
L_002B1A4C:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[2], 0u - 9u);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[11], 0u - 65u);
    set32(c.r[12], c.r[3].w[0] << 6);
    set32(c.r[8], c.r[3].w[0] << 8);
    set32(c.r[9], 0u - 33u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[7], 0u - 257u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[3], c.r[3].w[0] << 9);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[5], 0u - 129u);
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], 0u - 513u);
    c.r[13].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
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
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 1236u), 0u);
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1AF4u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002B1AF4u) [[unlikely]] return; }
L_002B1AF4:
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B1B10:
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 73u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 64u), c.r[5].w[0]);  c.pc = t; return; }
L_002B1B20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = 0ull & 1ull;
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[8], c.r[2].w[0] << 2);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[14], 0u - 2u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[15].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[11], 0u - 3u);
    c.r[13].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[10], c.r[10].w[0] - 27952u);
    set32(c.r[9], 0u + 21u);
    set32(c.r[7], 0u - 5u);
    set32(c.r[6], c.r[6].w[0] - 16688u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - 23408u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[13].d[0] = c.r[13].d[0] & c.r[14].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0]), c.r[10].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[14].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));
    c.budget -= 62;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_002B1C20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[16].w[0] + 1072u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1C40u); set32(c.r[4], c.r[4].w[0] + 8912u);  if (depth < kMaxDepth) unit_004F(c, 71u, depth + 1u); else { c.pc = 0x0033D6A0u; return; } if (c.pc != 0x002B1C40u) [[unlikely]] return; }
L_002B1C40:
    st8((c.r[16].w[0] + 1267u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 1072u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1C54u); st8((c.r[16].w[0] + 1266u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0040(c, 70u, depth + 1u); else { c.pc = 0x00301C10u; return; } if (c.pc != 0x002B1C54u) [[unlikely]] return; }
L_002B1C54:
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
    st32((c.r[16].w[0] + 1236u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 42;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B1D00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B1D40; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002B1D40:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B2198; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B1D80; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 76u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B1FF8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B1D78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 20360u)));
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 3;
L_002B1D78:
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 2;
L_002B1D80:
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 128u));
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 506u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 32u);  if (t) { goto L_002B2020; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[6] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[3], 0u + 1u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[5].w[0] + 36u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[5].w[0] + 32u);  if (t) { goto L_002B1DC0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B1DC0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B1DE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[6]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002B1DE8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B1DE8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B1E28; } }
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 64u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B1E28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002B1E2C; } }
L_002B1E28:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B1E2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B20A8; } }
    c.f[3] = ld32((c.r[18].w[0] + 100u));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 96u));
    c.f[5] = ld32((c.r[18].w[0] + 104u));
    c.f[4] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 72u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[6]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    st32((c.r[29].w[0] + 72u), c.f[4]);
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 68u), c.f[3]);  if (t) { goto L_002B1EA8; } }
    st32((c.r[18].w[0] + 96u), c.f[2]);
    c.r[3].d[0] = c.r[16].d[0] << 48;
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[18].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[18].w[0] + 108u), c.f[0]);
    st32((c.r[18].w[0] + 92u), c.r[3].w[0]);
    st8((c.r[18].w[0] + 129u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 12;
L_002B1EA8:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 128u));
    c.budget -= 1;
L_002B1EAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B20C0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[16].d[0] = c.r[16].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    c.f[12] = ld32((c.r[2].w[0] + 192u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1EDCu); set32(c.r[4], c.r[2].w[0] + 1072u);  if (depth < kMaxDepth) unit_0040(c, 90u, depth + 1u); else { c.pc = 0x003024A0u; return; } if (c.pc != 0x002B1EDCu) [[unlikely]] return; }
L_002B1EDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B20D8; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 129u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B2130; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1180u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B2130; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_002B1F04:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1180u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B1F74; } }
    set32(c.r[4], c.r[3].w[0] + 1072u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1F1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 52u, depth + 1u); else { c.pc = 0x00301670u; return; } if (c.pc != 0x002B1F1Cu) [[unlikely]] return; }
L_002B1F1C:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[5], c.r[18].w[0] + 112u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1F38u); set32(c.r[4], c.r[3].w[0] + 1072u);  if (depth < kMaxDepth) unit_0040(c, 98u, depth + 1u); else { c.pc = 0x003028B0u; return; } if (c.pc != 0x002B1F38u) [[unlikely]] return; }
L_002B1F38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B1F74; } }
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[3].d[0] = c.r[16].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[18].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[18].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[18].w[0] + 108u), c.f[0]);
    st32((c.r[18].w[0] + 92u), c.r[3].w[0]);
    st8((c.r[18].w[0] + 129u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 13;
L_002B1F74:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[3].w[0] + 496u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B2158; } }
    c.f[0] = ld32((c.r[3].w[0] + 500u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B2158; } }
L_002B1FA0:
    c.f[1] = ld32((c.r[18].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B1FE0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[5], c.r[18].w[0] + 112u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1FD8u); set32(c.r[4], c.r[3].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 26u, depth + 1u); else { c.pc = 0x0028C550u; return; } if (c.pc != 0x002B1FD8u) [[unlikely]] return; }
L_002B1FD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1FF0; } }
L_002B1FE0:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1FF0u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 192u, depth + 1u); else { c.pc = 0x0028DE10u; return; } if (c.pc != 0x002B1FF0u) [[unlikely]] return; }
L_002B1FF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002B219C; } }
L_002B1FF8:
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2008u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002B2008u) [[unlikely]] return; }
L_002B2008:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2018u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B2018u) [[unlikely]] return; }
L_002B2018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 88u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1D78u | kUnwind; return; } goto L_002B1D78; } }
L_002B2020:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[5] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 68u));
    c.f[4] = ld32((c.r[2].w[0] + 36u));
    c.f[2] = ld32((c.r[2].w[0] + 32u));
    c.f[6] = ld32((c.r[2].w[0] + 40u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    st32((c.r[29].w[0] + 88u), c.f[5]);
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 84u), c.f[3]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1EA8u | kUnwind; return; } goto L_002B1EA8; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    st8((c.r[18].w[0] + 128u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[18].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[18].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[18].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[18].w[0] + 108u), c.f[0]);
    st32((c.r[18].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 129u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1EA8u | kUnwind; return; } goto L_002B1EA8; } }
L_002B20A8:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B20B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B20B8u) [[unlikely]] return; }
L_002B20B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[18].w[0] + 128u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1EACu | kUnwind; return; } goto L_002B1EAC; } }
L_002B20C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B20D0u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 192u, depth + 1u); else { c.pc = 0x0028DE10u; return; } if (c.pc != 0x002B20D0u) [[unlikely]] return; }
L_002B20D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2198; } }
L_002B20D8:
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[3].d[0] = c.r[16].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[18].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[18].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[18].w[0] + 124u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[18].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[18].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[18].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[18].w[0] + 108u), c.f[0]);
    st32((c.r[18].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 129u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1F74u | kUnwind; return; } goto L_002B1F74; } }
L_002B2130:
    st8((c.r[18].w[0] + 129u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 5u);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[6], c.r[18].w[0] + 96u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 92u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2150u); set32(c.r[4], c.r[2].w[0] + 1072u);  if (depth < kMaxDepth) unit_0040(c, 164u, depth + 1u); else { c.pc = 0x00303D20u; return; } if (c.pc != 0x002B2150u) [[unlikely]] return; }
L_002B2150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 28u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1F04u | kUnwind; return; } goto L_002B1F04; } }
L_002B2158:
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[4].d[0] = c.r[16].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x457A0000u);
    st32((c.r[18].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[18].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[18].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[18].w[0] + 108u), c.f[0]);
    st32((c.r[18].w[0] + 92u), c.r[4].w[0]);
    st8((c.r[18].w[0] + 129u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 112u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1FA0u | kUnwind; return; } goto L_002B1FA0; } }
L_002B2198:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002B219C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B21B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x457A0000u);
    set32(c.r[3], 0u - 2u);
    st32((c.r[4].w[0] + 96u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 92u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 128u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 129u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002B21E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[16].w[0] + 1072u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2200u); set32(c.r[4], c.r[4].w[0] + 8912u);  if (depth < kMaxDepth) unit_004F(c, 71u, depth + 1u); else { c.pc = 0x0033D6A0u; return; } if (c.pc != 0x002B2200u) [[unlikely]] return; }
L_002B2200:
    st8((c.r[16].w[0] + 1267u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 1072u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2214u); st8((c.r[16].w[0] + 1266u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0040(c, 70u, depth + 1u); else { c.pc = 0x00301C10u; return; } if (c.pc != 0x002B2214u) [[unlikely]] return; }
L_002B2214:
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
    st32((c.r[16].w[0] + 1236u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 42;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B22C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[24].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[8].d[0] = 0ull & 1ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[14], c.r[8].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 2u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[25], 0u - 3u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[18].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[24], c.r[24].w[0] - 27952u);
    set32(c.r[15], 0u + 22u);
    set32(c.r[13], 0u - 5u);
    set32(c.r[12], c.r[12].w[0] - 16688u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[11], c.r[11].w[0] - 23072u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x42440000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.r[18].d[0] = c.r[18].d[0] & c.r[2].d[0];
    c.r[18].d[0] = c.r[18].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[18].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[25].d[0] = c.r[18].d[0] & c.r[25].d[0];
    c.r[25].d[0] = c.r[25].d[0] | c.r[17].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[25].w[0]));
    st32((c.r[4].w[0]), c.r[24].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[2].d[0] = c.r[15].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[13].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[14].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0]), c.r[12].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[11].w[0]);
    st8((c.r[4].w[0] + 76u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 80u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 72u), c.r[8].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 77;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B23F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B23F4u) [[unlikely]] return; }
L_002B23F4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B2410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 64u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B2494; } }
    set32(c.r[11], ld32((c.r[4].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[11].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B2494; } }
    c.r[10].d[0] = ld16((c.r[11].w[0] + 544u));
    set32(c.r[8], 0u - 3u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[6], 0u - 17u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[11].w[0] + 544u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[11].w[0] + 544u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[11].w[0] + 544u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[11].w[0] + 544u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[11].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 64u));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2494u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 354u, depth + 1u); else { c.pc = 0x0028B670u; return; } if (c.pc != 0x002B2494u) [[unlikely]] return; }
L_002B2494:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B24A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u - 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], ld32((c.r[4].w[0] + 28u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[8].w[0] + 526u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[8].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_002B2654; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 762u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B24F0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x002805A0u; return; } if (c.pc != 0x002B24F0u) [[unlikely]] return; }
L_002B24F0:
    set32(c.r[9], ld32((c.r[16].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[9].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B2654; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 64u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B2584; } }
    c.r[4].d[0] = ld8((c.r[9].w[0] + 552u));
    set32(c.r[3], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[11], c.r[9].w[0] + 544u);  if (t) { goto L_002B2654; } }
    c.r[10].d[0] = ld16((c.r[11].w[0]));
    set32(c.r[8], 0u - 3u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[11].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[11].w[0]));
    c.r[4].d[0] = c.r[8].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    st16((c.r[11].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[11].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[11].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B257Cu); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 354u, depth + 1u); else { c.pc = 0x0028B670u; return; } if (c.pc != 0x002B257Cu) [[unlikely]] return; }
L_002B257C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002B2658; } }
L_002B2584:
    c.r[8].d[0] = ld16((c.r[9].w[0] + 544u));
    set32(c.r[6], 0u - 3u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
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
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 524u));
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 24;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B2618; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 64u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B2618; } }
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B2630; } }
    set32(c.r[4], c.r[4].w[0] + 544u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 15u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2610u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 372u, depth + 1u); else { c.pc = 0x0028B930u; return; } if (c.pc != 0x002B2610u) [[unlikely]] return; }
L_002B2610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B257Cu | kUnwind; return; } goto L_002B257C; } }
L_002B2618:
    set32(c.r[4], c.r[4].w[0] + 544u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2628u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 354u, depth + 1u); else { c.pc = 0x0028B670u; return; } if (c.pc != 0x002B2628u) [[unlikely]] return; }
L_002B2628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B257Cu | kUnwind; return; } goto L_002B257C; } }
L_002B2630:
    set32(c.r[2], 0u + 182u);
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[29].w[0] + 46u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 46u);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B264Cu); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 360u, depth + 1u); else { c.pc = 0x0028B750u; return; } if (c.pc != 0x002B264Cu) [[unlikely]] return; }
L_002B264C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B257Cu | kUnwind; return; } goto L_002B257C; } }
L_002B2654:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B2658:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B2670:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = 0ull & 1ull;
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[9], c.r[2].w[0] << 2);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[15], 0u - 2u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[24].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[12], 0u - 3u);
    c.r[14].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[13].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[11], c.r[11].w[0] - 27952u);
    set32(c.r[10], 0u + 19u);
    set32(c.r[8], 0u - 5u);
    set32(c.r[7], c.r[7].w[0] - 16688u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] - 22736u);
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[14].d[0] = c.r[14].d[0] & c.r[15].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[24].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[14].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st32((c.r[4].w[0]), c.r[11].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[10].d[0] = c.r[10].d[0] & c.r[15].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[24].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0]), c.r[7].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.budget -= 64;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_002B2770:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 1360u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B29F0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B27E4; } }
L_002B27A0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 76u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B29F0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B27F4; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B29F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[18].w[0] + 68u));  if (t) { goto L_002B27F8; } }
L_002B27E4:
    set32(c.r[3], ld32((c.r[28].w[0] - 29112u)));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29112u), c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B27A0u | kUnwind; return; } goto L_002B27A0; } }
L_002B27F4:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 68u));
    c.budget -= 1;
L_002B27F8:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002B28A0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B2898; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B2898; } }
L_002B281C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002B29F0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2830u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 150u, depth + 1u); else { c.pc = 0x0028D810u; return; } if (c.pc != 0x002B2830u) [[unlikely]] return; }
L_002B2830:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 25u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 28u)));  if (t) { goto L_002B29D4; } }
L_002B2858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2860u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002B2860u) [[unlikely]] return; }
L_002B2860:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B29F0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[18].d[0];  if (t) { goto L_002B29F0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2890u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002B2890u) [[unlikely]] return; }
L_002B2890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002B29F4; } }
L_002B2898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B281Cu | kUnwind; return; } goto L_002B281C; } }
L_002B28A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 260u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 56u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B28CC; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002B2958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002B28D0; } }
L_002B28CC:
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 1;
L_002B28D0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B281Cu | kUnwind; return; } goto L_002B281C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B28E8u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002B28E8u) [[unlikely]] return; }
L_002B28E8:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B28F8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B28F8u) [[unlikely]] return; }
L_002B28F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B297C; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B297C; } }
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B2934; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 762u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_002B2934:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B297C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2950u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0065(c, 198u, depth + 1u); else { c.pc = 0x00397460u; return; } if (c.pc != 0x002B2950u) [[unlikely]] return; }
L_002B2950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B281Cu | kUnwind; return; } goto L_002B281C; } }
L_002B2958:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2964u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002B2964u) [[unlikely]] return; }
L_002B2964:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2974u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B2974u) [[unlikely]] return; }
L_002B2974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B28D0u | kUnwind; return; } goto L_002B28D0; } }
L_002B297C:
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002B29B8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B29B0; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B281Cu | kUnwind; return; } goto L_002B281C; } }
L_002B29B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B281Cu | kUnwind; return; } goto L_002B281C; } }
L_002B29B8:
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B29CCu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0065(c, 198u, depth + 1u); else { c.pc = 0x00397460u; return; } if (c.pc != 0x002B29CCu) [[unlikely]] return; }
L_002B29CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B281Cu | kUnwind; return; } goto L_002B281C; } }
L_002B29D4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2858u | kUnwind; return; } goto L_002B2858; } }
L_002B29F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002B29F4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B2A10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 68u));
    set32(c.r[16], ld32((c.r[5].w[0] + 1360u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B2D2C; } }
L_002B2A34:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B2E28; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 68u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B2D48; } }
L_002B2A4C:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], 0u + 14u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 220u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B2A84; } }
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B2A84; } }
    set32(c.r[2], 0u + 78u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B2A84; } }
    set32(c.r[2], 0u + 55u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B2AB8; } }
L_002B2A84:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 68u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B2D64; } }
L_002B2A94:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B2AB8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B2AB8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 3;
L_002B2AB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 260u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 68u)));  if (t) { goto L_002B2C30; } }
    c.r[5].d[0] = ld8((c.r[2].w[0] + 160u));
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002B2C30; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[4], c.r[5].w[0] + 8u);
    set32(c.r[5], ld32((c.r[5].w[0] + 208u)));
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B2B58; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_002B2AFC:
    c.r[5].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002B2B44; } }
    set32(c.r[5], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_002B2B44; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002B2B58; } }
L_002B2B44:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[5].d[0] = c.r[8].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2AFCu | kUnwind; return; } goto L_002B2AFC; } }
    c.budget -= 1;
L_002B2B58:
    set32(c.r[6], ld32((c.r[4].w[0] + 200u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 200u), c.r[5].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.r[5].d[0] = c.r[9].d[0] << 56;
    set32(c.r[7], 0u + 10u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 8;
L_002B2B78:
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
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002B2BE4; } }
    st8((c.r[10].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00800000u);
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
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_002B2D88; } }
L_002B2BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[2].w[0] + 40u)));  if (t) { goto L_002B2C1C; } }
L_002B2BE4:
    set32(c.r[6], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[6].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_002B2C00; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B2C00:
    c.r[6].d[0] = c.r[9].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2B78u | kUnwind; return; } goto L_002B2B78; } }
    breakpoint(c, 0x002B2C10u);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 3;
L_002B2C1C:
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[10].w[0]), c.r[6].w[0]);
    st8((c.r[10].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
L_002B2C30:
    st8((c.r[2].w[0] + 160u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B2D90; } }
L_002B2C44:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B2D98; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B2D98; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 811u));
    set32(c.r[2], 0u - 17u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 811u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_002B2C74:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 68u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B2DD8; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B2DBC; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B2CAC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2CACu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0065(c, 196u, depth + 1u); else { c.pc = 0x00397440u; return; } if (c.pc != 0x002B2CACu) [[unlikely]] return; }
L_002B2CAC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 77u)));
    c.budget -= 1;
L_002B2CB0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 78u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2CBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 180u, depth + 1u); else { c.pc = 0x00396FB0u; return; } if (c.pc != 0x002B2CBCu) [[unlikely]] return; }
L_002B2CBC:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 68u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B2DEC; } }
L_002B2CCC:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 69u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B2D18; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 20272u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002B0000u < 16384u) { entry = entries_002C[(t - 0x002B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B2CF8:
    set32(c.r[3], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 112u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002B2D24; } }
L_002B2D08:
    set32(c.r[3], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 112u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002B2D24; } }
L_002B2D18:
    set32(c.r[3], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 112u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_002B2D24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002B2E2C; } }
L_002B2D2C:
    set32(c.r[4], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st8((c.r[17].w[0] + 68u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[3].w[0] - 20360u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 64u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2A34u | kUnwind; return; } goto L_002B2A34; } }
L_002B2D48:
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2D58u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002B2D58u) [[unlikely]] return; }
L_002B2D58:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2A4Cu | kUnwind; return; } goto L_002B2A4C; } }
L_002B2D64:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2A94u | kUnwind; return; } goto L_002B2A94; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 64u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2AB8u | kUnwind; return; } goto L_002B2AB8; } }
L_002B2D88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2BDCu | kUnwind; return; } goto L_002B2BDC; } }
L_002B2D90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 124u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2C44u | kUnwind; return; } goto L_002B2C44; } }
L_002B2D98:
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 811u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], 0u - 17u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 811u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2C74u | kUnwind; return; } goto L_002B2C74; } }
L_002B2DBC:
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2DD0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0065(c, 198u, depth + 1u); else { c.pc = 0x00397460u; return; } if (c.pc != 0x002B2DD0u) [[unlikely]] return; }
L_002B2DD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 77u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2CB0u | kUnwind; return; } goto L_002B2CB0; } }
L_002B2DD8:
    set32(c.r[3], ld32((c.r[16].w[0] + 260u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    st32((c.r[3].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 124u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2CACu | kUnwind; return; } goto L_002B2CAC; } }
L_002B2DEC:
    set32(c.r[8], ld32((c.r[16].w[0] + 260u)));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 3u);
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 5u);
    c.r[7].d[0] = ld8((c.r[8].w[0] + 112u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0] + 112u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[8].w[0] + 112u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2CCCu | kUnwind; return; } goto L_002B2CCC; } }
L_002B2E28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002B2E2C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B2E40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2E50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[4].w[0] + 64u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 68u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 68u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B2EBC; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B2EBC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B2EBC; } }
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], 0u + 10u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_002B2EA4:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2EB4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B2EB4u) [[unlikely]] return; }
L_002B2EB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002B2EC8; } }
L_002B2EBC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 76u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2EA4u | kUnwind; return; } goto L_002B2EA4; } }
L_002B2EC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B2ED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 16352u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = 0ull & 1ull;
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[7], c.r[3].w[0] << 2);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[13], 0u - 2u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[12].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[10], 0u - 3u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[9], c.r[9].w[0] - 27952u);
    set32(c.r[8], 0u + 16u);
    set32(c.r[6], 0u - 5u);
    set32(c.r[5], c.r[5].w[0] - 16688u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 22400u);
    c.r[12].d[0] = c.r[12].d[0] & c.r[13].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[14].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[4].w[0]), c.r[9].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[13].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[14].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 72u), 0u);
    st8((c.r[4].w[0] + 76u), static_cast<std::uint8_t>(0u));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 69;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2FE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B2FE4u) [[unlikely]] return; }
L_002B2FE4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B3000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[4], c.r[3].w[0] + 544u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B30DC; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 68u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B30A4; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_002B30C0; } }
L_002B3064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B306Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002B306Cu) [[unlikely]] return; }
L_002B306C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B30DC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_002B30DC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B309Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002B309Cu) [[unlikely]] return; }
L_002B309C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B30B8; } }
L_002B30A4:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B30B0u); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0022(c, 185u, depth + 1u); else { c.pc = 0x00289F50u; return; } if (c.pc != 0x002B30B0u) [[unlikely]] return; }
L_002B30B0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002B30B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002B30E0; } }
L_002B30C0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3064u | kUnwind; return; } goto L_002B3064; } }
L_002B30DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002B30E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B30F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 20u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[5].w[0] + 220u));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B31A4; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B31A4; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 552u));
    set32(c.r[3], 0u + 189u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[10], c.r[5].w[0] + 544u);  if (t) { goto L_002B31A4; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B31A4; } }
    c.r[9].d[0] = ld16((c.r[10].w[0]));
    set32(c.r[7], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[5], 0u + 1u);
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
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B319Cu); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 185u, depth + 1u); else { c.pc = 0x00289F50u; return; } if (c.pc != 0x002B319Cu) [[unlikely]] return; }
L_002B319C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002B31A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B31C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[3].w[0] + 544u));
    set32(c.r[4], c.r[3].w[0] + 544u);
    c.r[3].d[0] = c.r[5].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B3204; } }
    c.r[3].d[0] = c.r[5].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B3204; } }
L_002B31FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002B321C; } }
L_002B3204:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3210u); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0022(c, 185u, depth + 1u); else { c.pc = 0x00289F50u; return; } if (c.pc != 0x002B3210u) [[unlikely]] return; }
L_002B3210:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B31FCu | kUnwind; return; } goto L_002B31FC; } }
L_002B321C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B3230:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 68u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002B3240:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = 0ull & 1ull;
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[8], c.r[2].w[0] << 2);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[14], 0u - 2u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[15].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[11], 0u - 3u);
    c.r[13].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[10], c.r[10].w[0] - 27952u);
    set32(c.r[9], 0u + 56u);
    set32(c.r[7], 0u - 5u);
    set32(c.r[6], c.r[6].w[0] - 16688u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - 22064u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[13].d[0] = c.r[13].d[0] & c.r[14].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0]), c.r[10].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[14].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 63;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 68u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002B3340:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 74u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B33D0; } }
    set32(c.r[11], ld32((c.r[4].w[0] + 28u)));
    c.r[5].d[0] = ld8((c.r[11].w[0] + 524u));
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B33D0; } }
    c.r[3].d[0] = c.r[5].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B33D0; } }
    c.r[10].d[0] = ld16((c.r[11].w[0] + 544u));
    set32(c.r[8], 0u - 3u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[6], 0u - 17u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[11].w[0] + 544u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[11].w[0] + 544u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[11].w[0] + 544u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[11].w[0] + 544u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[11].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B33D0u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 192u, depth + 1u); else { c.pc = 0x0028DE10u; return; } if (c.pc != 0x002B33D0u) [[unlikely]] return; }
L_002B33D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B33E0:
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    set32(c.r[10], ld32((c.r[4].w[0] + 28u)));
    c.r[4].d[0] = ld8((c.r[10].w[0] + 524u));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B3454; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B3454; } }
    c.r[9].d[0] = ld16((c.r[10].w[0] + 544u));
    set32(c.r[7], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[5], 0u - 17u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[3], 0u - 2049u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[10].w[0] + 544u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[10].w[0] + 544u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 18;
L_002B3454:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 65u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B3650; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B34A0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[3].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B34A0; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002B34A0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002B36AC; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 80u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B360C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B35CC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B34D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3648; } }
L_002B34D4:
    set32(c.r[7], ld32((c.r[17].w[0] + 28u)));
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.r[4].d[0] = ld16((c.r[7].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[6].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 14;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002B3520; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B3520; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B3520:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B3744; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 75u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B35C4; } }
    c.r[5].d[0] = ld8((c.r[7].w[0] + 552u));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[7].w[0] + 544u);  if (t) { goto L_002B35C4; } }
    c.r[3].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B3560; } }
    c.r[3].d[0] = ld16((c.r[7].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002B3560:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B35C4; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B3730; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3580u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002B3580u) [[unlikely]] return; }
L_002B3580:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B35C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3594u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x002B3594u) [[unlikely]] return; }
L_002B3594:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B35C4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B35ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B35ACu) [[unlikely]] return; }
L_002B35AC:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.f[12] = 0u;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 388u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B35C4u); set32(c.r[4], c.r[3].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 42u, depth + 1u); else { c.pc = 0x0028C860u; return; } if (c.pc != 0x002B35C4u) [[unlikely]] return; }
L_002B35C4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002B35C8:
    st8((c.r[17].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002B35CC:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[3].w[0] + 544u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B3744; } }
    c.r[6].d[0] = ld8((c.r[17].w[0] + 65u));
    set32(c.r[7], ld32((c.r[17].w[0] + 68u)));
    c.r[8].d[0] = ld8((c.r[17].w[0] + 72u));
    c.r[9].d[0] = ld8((c.r[17].w[0] + 73u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3600u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_0023(c, 171u, depth + 1u); else { c.pc = 0x0028DB00u; return; } if (c.pc != 0x002B3600u) [[unlikely]] return; }
L_002B3600:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B3648; } }
L_002B360C:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B3744; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 65u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B3644; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B3644; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 3;
L_002B3644:
    st8((c.r[17].w[0] + 80u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002B3648:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002B3748; } }
L_002B3650:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 88u), c.f[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] < 0; c.f[1] = ld32((c.r[17].w[0] + 88u));  if (t) { goto L_002B367C; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002B3698; } }
L_002B367C:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002B3698:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B34A0u | kUnwind; return; } goto L_002B34A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B34A0u | kUnwind; return; } goto L_002B34A0; } }
L_002B36AC:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_002B3714; } }
L_002B36D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B36DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002B36DCu) [[unlikely]] return; }
L_002B36DC:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B3744; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_002B3744; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B370Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002B370Cu) [[unlikely]] return; }
L_002B370C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3648u | kUnwind; return; } goto L_002B3648; } }
L_002B3714:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B36D4u | kUnwind; return; } goto L_002B36D4; } }
L_002B3730:
    c.f[12] = ld32((c.r[17].w[0] + 76u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B373Cu); set32(c.r[5], 0u + 388u);  if (depth < kMaxDepth) unit_0023(c, 39u, depth + 1u); else { c.pc = 0x0028C7F0u; return; } if (c.pc != 0x002B373Cu) [[unlikely]] return; }
L_002B373C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B35C8u | kUnwind; return; } goto L_002B35C8; } }
L_002B3744:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002B3748:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B3760:
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 84u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 88u), 0u);  c.pc = t; return; }
L_002B3770:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[24].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], 0u - 2u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[14].d[0] = 0ull & 1ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[14].w[0] << 2);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[20], 0u - 3u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[19], c.r[19].w[0] - 27952u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[18], 0u + 15u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[25], 0u - 5u);
    c.r[21].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[24], c.r[24].w[0] - 16688u);
    set32(c.r[14], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[13], 0u + 1u);
    set32(c.r[15], c.r[15].w[0] - 21728u);
    c.r[21].d[0] = c.r[21].d[0] & c.r[3].d[0];
    c.r[21].d[0] = c.r[21].d[0] | c.r[12].d[0];
    c.r[14].d[0] = 0ull < c.r[14].d[0] ? 1ull : 0ull;
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[21].w[0]));
    c.r[21].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[20].d[0] = c.r[21].d[0] & c.r[20].d[0];
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0]), c.r[19].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[25].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[17].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0]), c.r[24].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[15].w[0]);
    st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 65u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 68u), c.r[7].w[0]);
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 73u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 75u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[4].w[0] + 76u), c.f[12]);
    st32((c.r[4].w[0] + 92u), c.r[11].w[0]);
    st8((c.r[4].w[0] + 74u), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 83;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B38BCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B38BCu) [[unlikely]] return; }
L_002B38BC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002B38F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 92u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B393C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B3964; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B3964; } }
L_002B3934:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002B39EC; } }
L_002B393C:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.f[12] = ld32((c.r[17].w[0] + 80u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 84u)));
    set32(c.r[7], c.r[17].w[0] + 64u);
    set32(c.r[6], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3958u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 309u, depth + 1u); else { c.pc = 0x0028B000u; return; } if (c.pc != 0x002B3958u) [[unlikely]] return; }
L_002B3958:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 92u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3934u | kUnwind; return; } goto L_002B3934; } }
L_002B3964:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_002B39CC; } }
L_002B398C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3994u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002B3994u) [[unlikely]] return; }
L_002B3994:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B39E8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_002B39E8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B39C4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002B39C4u) [[unlikely]] return; }
L_002B39C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3934u | kUnwind; return; } goto L_002B3934; } }
L_002B39CC:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B398Cu | kUnwind; return; } goto L_002B398C; } }
L_002B39E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002B39EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B3A00:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x002B0000u < 16384u) { entry = entries_002C[(t - 0x002B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B3A10:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 40u)));
    set32(c.r[3], 0u + 14u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[5].w[0] + 46u));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 41u)));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[5].w[0] + 48u));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 42u)));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[5].w[0] + 50u));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 43u)));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[5].w[0] + 52u));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 44u)));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[5].w[0] + 54u));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 45u)));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[5].w[0] + 56u));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 24u));
    c.budget -= 28;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002B3A8C; } }
    c.r[3].d[0] = ld16((c.r[5].w[0] + 4u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002B3A94; } }
L_002B3A8C:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 6u));
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002B3A94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3AA0:
    st8((c.r[4].w[0] + 92u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_002B3AB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[8].d[0] = 0ull & 1ull;
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[11], c.r[8].w[0] << 2);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.f[3] = ld32((c.r[5].w[0]));
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.r[24].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[25], 0u - 2u);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    set32(c.r[14], 0u - 3u);
    c.r[15].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[13], c.r[13].w[0] - 27952u);
    set32(c.r[12], 0u + 63u);
    set32(c.r[10], 0u - 5u);
    set32(c.r[9], c.r[9].w[0] - 16688u);
    set32(c.r[3], 0u + 1u);
    c.r[24].d[0] = c.r[24].d[0] & c.r[25].d[0];
    set32(c.r[8], c.r[8].w[0] - 21392u);
    c.r[24].d[0] = c.r[24].d[0] | c.r[2].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[24].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[14].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0]), c.r[13].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[25].d[0];
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[11].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0]), c.r[9].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[8].w[0]);
    st32((c.r[4].w[0] + 64u), c.f[3]);
    st32((c.r[4].w[0] + 68u), c.f[2]);
    st32((c.r[4].w[0] + 72u), c.f[1]);
    st32((c.r[4].w[0] + 76u), c.f[0]);
    st32((c.r[4].w[0] + 80u), c.f[12]);
    st16((c.r[4].w[0] + 84u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 88u), c.r[7].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 78;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3BE8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B3BE8u) [[unlikely]] return; }
L_002B3BE8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B3C00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 88u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B3C54; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[3].w[0] + 544u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B3C54; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 80u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3C48u); set32(c.r[7], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0022(c, 294u, depth + 1u); else { c.pc = 0x0028ADD0u; return; } if (c.pc != 0x002B3C48u) [[unlikely]] return; }
L_002B3C48:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 88u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B3C7C; } }
L_002B3C54:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B3C84; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B3C84; } }
L_002B3C7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002B3D0C; } }
L_002B3C84:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_002B3CEC; } }
L_002B3CAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3CB4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002B3CB4u) [[unlikely]] return; }
L_002B3CB4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B3D08; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_002B3D08; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3CE4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002B3CE4u) [[unlikely]] return; }
L_002B3CE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3C7Cu | kUnwind; return; } goto L_002B3C7C; } }
L_002B3CEC:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3CACu | kUnwind; return; } goto L_002B3CAC; } }
L_002B3D08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002B3D0C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B3D20:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x002B0000u < 16384u) { entry = entries_002C[(t - 0x002B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B3D30:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 40u)));
    set32(c.r[3], 0u + 14u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[5].w[0] + 46u));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 41u)));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[5].w[0] + 48u));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 42u)));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[5].w[0] + 50u));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 43u)));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[5].w[0] + 52u));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 44u)));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[5].w[0] + 54u));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 45u)));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[5].w[0] + 56u));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 24u));
    c.budget -= 28;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002B3DAC; } }
    c.r[3].d[0] = ld16((c.r[5].w[0] + 4u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002B3DB4; } }
L_002B3DAC:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 6u));
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002B3DB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3DC0:
    st8((c.r[4].w[0] + 88u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_002B3DD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[8].d[0] = 0ull & 1ull;
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[11], c.r[8].w[0] << 2);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.f[3] = ld32((c.r[5].w[0]));
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.r[24].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[25], 0u - 2u);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    set32(c.r[14], 0u - 3u);
    c.r[15].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[13], c.r[13].w[0] - 27952u);
    set32(c.r[12], 0u + 62u);
    set32(c.r[10], 0u - 5u);
    set32(c.r[9], c.r[9].w[0] - 16688u);
    set32(c.r[3], 0u + 1u);
    c.r[24].d[0] = c.r[24].d[0] & c.r[25].d[0];
    set32(c.r[8], c.r[8].w[0] - 21056u);
    c.r[24].d[0] = c.r[24].d[0] | c.r[2].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[24].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[14].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0]), c.r[13].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[25].d[0];
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[11].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0]), c.r[9].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[8].w[0]);
    st32((c.r[4].w[0] + 64u), c.f[3]);
    st32((c.r[4].w[0] + 68u), c.f[2]);
    st32((c.r[4].w[0] + 72u), c.f[1]);
    st32((c.r[4].w[0] + 76u), c.f[0]);
    st16((c.r[4].w[0] + 80u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 84u), c.r[7].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 77;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3F04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B3F04u) [[unlikely]] return; }
L_002B3F04:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B3F20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 120u));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B3FC8; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], 0u + 16u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 220u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B3FC8; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 552u));
    set32(c.r[3], 0u + 104u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B3FC8; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { [[clang::musttail]] return unit_002D(c, 10u, depth); } }
L_002B3F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3F90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002B3F90u) [[unlikely]] return; }
L_002B3F90:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 13u, depth); } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 13u, depth); } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3FC0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002B3FC0u) [[unlikely]] return; }
L_002B3FC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { [[clang::musttail]] return unit_002D(c, 14u, depth); } }
L_002B3FC8:
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], 0u + 104u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 6u, depth); } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 6u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 11u, depth); } }
L_002B3FF8:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 544u));
    c.budget -= 2;
    [[clang::musttail]] return unit_002D(c, 1u, depth);
}

}

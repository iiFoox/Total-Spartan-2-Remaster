#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0042[4096] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0,
    0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 23, 0, 24,
    0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0,
    35, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39,
    0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0,
    0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0,
    0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0,
    0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0,
    0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0,
    127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155,
    0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0,
    163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190,
    0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0,
    200, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0,
    0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 216, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0,
    0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0,
    0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0042(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00308000;
    case 2u: goto L_00308008;
    case 3u: goto L_00308018;
    case 4u: goto L_00308030;
    case 5u: goto L_00308058;
    case 6u: goto L_00308068;
    case 7u: goto L_00308070;
    case 8u: goto L_003080A4;
    case 9u: goto L_003080E0;
    case 10u: goto L_00308108;
    case 11u: goto L_00308134;
    case 12u: goto L_00308160;
    case 13u: goto L_00308190;
    case 14u: goto L_003081CC;
    case 15u: goto L_003081DC;
    case 16u: goto L_00308240;
    case 17u: goto L_00308250;
    case 18u: goto L_00308270;
    case 19u: goto L_00308284;
    case 20u: goto L_003082B0;
    case 21u: goto L_003082DC;
    case 22u: goto L_003082E4;
    case 23u: goto L_003082F4;
    case 24u: goto L_003082FC;
    case 25u: goto L_00308308;
    case 26u: goto L_00308310;
    case 27u: goto L_00308328;
    case 28u: goto L_00308338;
    case 29u: goto L_0030834C;
    case 30u: goto L_00308384;
    case 31u: goto L_003083AC;
    case 32u: goto L_003083C0;
    case 33u: goto L_003083E0;
    case 34u: goto L_003083F4;
    case 35u: goto L_00308400;
    case 36u: goto L_0030840C;
    case 37u: goto L_00308418;
    case 38u: goto L_00308440;
    case 39u: goto L_0030847C;
    case 40u: goto L_00308494;
    case 41u: goto L_003084AC;
    case 42u: goto L_003084C4;
    case 43u: goto L_003084DC;
    case 44u: goto L_003084F4;
    case 45u: goto L_00308510;
    case 46u: goto L_00308530;
    case 47u: goto L_0030858C;
    case 48u: goto L_003085BC;
    case 49u: goto L_003085D0;
    case 50u: goto L_003085F0;
    case 51u: goto L_00308600;
    case 52u: goto L_00308618;
    case 53u: goto L_00308620;
    case 54u: goto L_00308630;
    case 55u: goto L_0030866C;
    case 56u: goto L_0030868C;
    case 57u: goto L_003086B4;
    case 58u: goto L_003086D4;
    case 59u: goto L_003086F4;
    case 60u: goto L_0030871C;
    case 61u: goto L_00308730;
    case 62u: goto L_00308738;
    case 63u: goto L_00308788;
    case 64u: goto L_003087A8;
    case 65u: goto L_003087D0;
    case 66u: goto L_003087F8;
    case 67u: goto L_00308818;
    case 68u: goto L_0030883C;
    case 69u: goto L_00308848;
    case 70u: goto L_00308850;
    case 71u: goto L_00308868;
    case 72u: goto L_00308878;
    case 73u: goto L_00308888;
    case 74u: goto L_00308894;
    case 75u: goto L_003088D0;
    case 76u: goto L_00308900;
    case 77u: goto L_0030892C;
    case 78u: goto L_00308940;
    case 79u: goto L_00308958;
    case 80u: goto L_00308974;
    case 81u: goto L_0030898C;
    case 82u: goto L_00308A04;
    case 83u: goto L_00308A18;
    case 84u: goto L_00308A74;
    case 85u: goto L_00308B04;
    case 86u: goto L_00308B94;
    case 87u: goto L_00308C18;
    case 88u: goto L_00308C28;
    case 89u: goto L_00308C38;
    case 90u: goto L_00308C84;
    case 91u: goto L_00308CA0;
    case 92u: goto L_00308D0C;
    case 93u: goto L_00308D24;
    case 94u: goto L_00308D2C;
    case 95u: goto L_00308DB8;
    case 96u: goto L_00308DFC;
    case 97u: goto L_00308EA8;
    case 98u: goto L_00308FA8;
    case 99u: goto L_00308FD0;
    case 100u: goto L_00309038;
    case 101u: goto L_00309088;
    case 102u: goto L_003090B8;
    case 103u: goto L_003090E8;
    case 104u: goto L_00309158;
    case 105u: goto L_00309178;
    case 106u: goto L_003091B4;
    case 107u: goto L_00309234;
    case 108u: goto L_00309240;
    case 109u: goto L_00309284;
    case 110u: goto L_003092B0;
    case 111u: goto L_003093B4;
    case 112u: goto L_00309428;
    case 113u: goto L_003094B0;
    case 114u: goto L_003094E0;
    case 115u: goto L_003094F0;
    case 116u: goto L_00309530;
    case 117u: goto L_00309600;
    case 118u: goto L_0030965C;
    case 119u: goto L_00309680;
    case 120u: goto L_00309740;
    case 121u: goto L_00309770;
    case 122u: goto L_003097A4;
    case 123u: goto L_003097B0;
    case 124u: goto L_003097D0;
    case 125u: goto L_00309964;
    case 126u: goto L_00309970;
    case 127u: goto L_00309980;
    case 128u: goto L_00309990;
    case 129u: goto L_003099A0;
    case 130u: goto L_003099B0;
    case 131u: goto L_00309A00;
    case 132u: goto L_00309A40;
    case 133u: goto L_00309A50;
    case 134u: goto L_00309AD4;
    case 135u: goto L_00309AF0;
    case 136u: goto L_00309C2C;
    case 137u: goto L_00309D00;
    case 138u: goto L_00309D40;
    case 139u: goto L_00309D80;
    case 140u: goto L_00309D90;
    case 141u: goto L_00309E2C;
    case 142u: goto L_00309E40;
    case 143u: goto L_00309FD0;
    case 144u: goto L_0030A008;
    case 145u: goto L_0030A0A8;
    case 146u: goto L_0030A0E0;
    case 147u: goto L_0030A114;
    case 148u: goto L_0030A18C;
    case 149u: goto L_0030A19C;
    case 150u: goto L_0030A1C0;
    case 151u: goto L_0030A200;
    case 152u: goto L_0030A270;
    case 153u: goto L_0030A330;
    case 154u: goto L_0030A3B4;
    case 155u: goto L_0030A3FC;
    case 156u: goto L_0030A420;
    case 157u: goto L_0030A44C;
    case 158u: goto L_0030A460;
    case 159u: goto L_0030A580;
    case 160u: goto L_0030A608;
    case 161u: goto L_0030A640;
    case 162u: goto L_0030A66C;
    case 163u: goto L_0030A680;
    case 164u: goto L_0030A6A4;
    case 165u: goto L_0030A6BC;
    case 166u: goto L_0030A740;
    case 167u: goto L_0030A77C;
    case 168u: goto L_0030A7A0;
    case 169u: goto L_0030A7E4;
    case 170u: goto L_0030A830;
    case 171u: goto L_0030A8DC;
    case 172u: goto L_0030A95C;
    case 173u: goto L_0030AA1C;
    case 174u: goto L_0030AA90;
    case 175u: goto L_0030AB1C;
    case 176u: goto L_0030AB50;
    case 177u: goto L_0030AB5C;
    case 178u: goto L_0030ABC4;
    case 179u: goto L_0030ABE0;
    case 180u: goto L_0030ACE0;
    case 181u: goto L_0030AD00;
    case 182u: goto L_0030AD14;
    case 183u: goto L_0030AD3C;
    case 184u: goto L_0030ADAC;
    case 185u: goto L_0030ADD4;
    case 186u: goto L_0030AE1C;
    case 187u: goto L_0030AEB0;
    case 188u: goto L_0030AF00;
    case 189u: goto L_0030AF30;
    case 190u: goto L_0030AF7C;
    case 191u: goto L_0030AF90;
    case 192u: goto L_0030AFA0;
    case 193u: goto L_0030B018;
    case 194u: goto L_0030B0C4;
    case 195u: goto L_0030B160;
    case 196u: goto L_0030B270;
    case 197u: goto L_0030B2F8;
    case 198u: goto L_0030B320;
    case 199u: goto L_0030B36C;
    case 200u: goto L_0030B380;
    case 201u: goto L_0030B398;
    case 202u: goto L_0030B3A4;
    case 203u: goto L_0030B3DC;
    case 204u: goto L_0030B45C;
    case 205u: goto L_0030B480;
    case 206u: goto L_0030B4D0;
    case 207u: goto L_0030B5F0;
    case 208u: goto L_0030B60C;
    case 209u: goto L_0030B690;
    case 210u: goto L_0030B6C0;
    case 211u: goto L_0030B6F8;
    case 212u: goto L_0030B704;
    case 213u: goto L_0030B720;
    case 214u: goto L_0030B764;
    case 215u: goto L_0030B77C;
    case 216u: goto L_0030B804;
    case 217u: goto L_0030B80C;
    case 218u: goto L_0030B820;
    case 219u: goto L_0030B89C;
    case 220u: goto L_0030B8B0;
    case 221u: goto L_0030B95C;
    case 222u: goto L_0030B974;
    case 223u: goto L_0030B984;
    case 224u: goto L_0030B9A0;
    case 225u: goto L_0030B9D8;
    case 226u: goto L_0030B9F0;
    case 227u: goto L_0030BAF4;
    case 228u: goto L_0030BB14;
    case 229u: goto L_0030BB5C;
    case 230u: goto L_0030BBF0;
    case 231u: goto L_0030BC30;
    case 232u: goto L_0030BC64;
    case 233u: goto L_0030BCE4;
    case 234u: goto L_0030BCFC;
    case 235u: goto L_0030BD4C;
    case 236u: goto L_0030BD74;
    case 237u: goto L_0030BD9C;
    case 238u: goto L_0030BE0C;
    case 239u: goto L_0030BE80;
    case 240u: goto L_0030BEBC;
    case 241u: goto L_0030BEC8;
    case 242u: goto L_0030BF30;
    case 243u: goto L_0030BF60;
    case 244u: goto L_0030BFB8;
    case 245u: goto L_0030BFC4;
    case 246u: goto L_0030BFE0;
    default: bad_entry(c, 0x00308000u); return;
    }
L_00308000:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00308008:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308018u); set32(c.r[6], 0u + 91u);  if (depth < kMaxDepth) unit_0041(c, 368u, depth + 1u); else { c.pc = 0x00307DF0u; return; } if (c.pc != 0x00308018u) [[unlikely]] return; }
L_00308018:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00307FA0u | kUnwind; return; } [[clang::musttail]] return unit_0041(c, 378u, depth); } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308030u); set32(c.r[6], 0u + 93u);  if (depth < kMaxDepth) unit_0041(c, 368u, depth + 1u); else { c.pc = 0x00307DF0u; return; } if (c.pc != 0x00308030u) [[unlikely]] return; }
L_00308030:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00307FA0u | kUnwind; return; } [[clang::musttail]] return unit_0041(c, 378u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_00308088; } }
    set32(c.r[2], c.r[21].w[0] + 1u);
    set32(c.r[2], c.r[17].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 6;
L_00308058:
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308068u); set32(c.r[6], 0u + 123u);  if (depth < kMaxDepth) unit_0041(c, 368u, depth + 1u); else { c.pc = 0x00307DF0u; return; } if (c.pc != 0x00308068u) [[unlikely]] return; }
L_00308068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003080D0; } }
L_00308070:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[30].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308008u | kUnwind; return; } goto L_00308008; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00307FA0u | kUnwind; return; } [[clang::musttail]] return unit_0041(c, 378u, depth); } }
    c.budget -= 1;
L_00308088:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[5], c.r[21].w[0] + 1u);
    set32(c.r[3], c.r[17].w[0] - c.r[5].w[0]);
    set32(c.r[21], c.r[3].w[0] + 1u);
    set32(c.r[6], c.r[21].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003080A4u); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x003080A4u) [[unlikely]] return; }
L_003080A4:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[18], c.r[18].w[0] + c.r[21].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308058u | kUnwind; return; } goto L_00308058; } }
L_003080D0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003080E0u); set32(c.r[6], 0u + 125u);  if (depth < kMaxDepth) unit_0041(c, 368u, depth + 1u); else { c.pc = 0x00307DF0u; return; } if (c.pc != 0x003080E0u) [[unlikely]] return; }
L_003080E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308070u | kUnwind; return; } goto L_00308070; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_00308118; } }
    set32(c.r[3], c.r[21].w[0] + 1u);
    set32(c.r[3], c.r[17].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    c.budget -= 6;
L_00308108:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[23].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308070u | kUnwind; return; } goto L_00308070; } }
    c.budget -= 1;
L_00308118:
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[5], c.r[21].w[0] + 1u);
    set32(c.r[3], c.r[17].w[0] - c.r[5].w[0]);
    set32(c.r[21], c.r[3].w[0] + 1u);
    set32(c.r[6], c.r[21].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308134u); set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00308134u) [[unlikely]] return; }
L_00308134:
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    st8((c.r[3].w[0] - 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[19], c.r[19].w[0] + c.r[21].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308108u | kUnwind; return; } goto L_00308108; } }
L_00308160:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00308190:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], 0u + 5u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003081C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308268; } }
L_003081C0:
    set32(c.r[2], c.r[18].w[0] - 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003081CCu); set32(c.r[4], c.r[2].w[0] >> 1);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003081CCu) [[unlikely]] return; }
L_003081CC:
    c.r[6].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00308250; } }
    set32(c.r[4], 0u + 12288u);
    c.budget -= 1;
L_003081DC:
    c.r[5].d[0] = c.r[6].d[0] & 65535ull;
    c.r[3].d[0] = c.r[5].d[0] & 65280ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00308258; } }
    c.r[3].d[0] = c.r[5].d[0] & 12288ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00308240; } }
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(12449ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_00308220; } }
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] - 12321u);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_00308238; } }
    c.budget -= 1;
L_00308220:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] - 12417u);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + 115u);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
L_00308238:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_00308240:
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.r[6].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003081DCu | kUnwind; return; } goto L_003081DC; } }
L_00308250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0030828C; } }
L_00308258:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308240u | kUnwind; return; } goto L_00308240; } }
    c.budget -= 1;
L_00308268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308270u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00308270u) [[unlikely]] return; }
L_00308270:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308284u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00308284u) [[unlikely]] return; }
L_00308284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308250u | kUnwind; return; } goto L_00308250; } }
L_0030828C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003082B0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003082DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x003082DCu) [[unlikely]] return; }
L_003082DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003082E4u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003082E4u) [[unlikely]] return; }
L_003082E4:
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003082F4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003082F4u) [[unlikely]] return; }
L_003082F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003082FCu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x003082FCu) [[unlikely]] return; }
L_003082FC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308308u); set32(c.r[4], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00308308u) [[unlikely]] return; }
L_00308308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308310u); set32(c.r[4], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x00308310u) [[unlikely]] return; }
L_00308310:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308328u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308328u) [[unlikely]] return; }
L_00308328:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308338u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00308338u) [[unlikely]] return; }
L_00308338:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[19], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030834Cu); set32(c.r[4], c.r[19].w[0] + 2u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0030834Cu) [[unlikely]] return; }
L_0030834C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003083E0; } }
    set32(c.r[17], c.r[29].w[0] + 116u);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003083B4; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308384u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x00308384u) [[unlikely]] return; }
L_00308384:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[16].d[0]; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003083CC; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003083ACu); set32(c.r[6], c.r[19].w[0] - c.r[16].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003083ACu) [[unlikely]] return; }
L_003083AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[18].w[0] + c.r[19].w[0]);  if (t) { goto L_003083D0; } }
L_003083B4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003083C0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003083C0u) [[unlikely]] return; }
L_003083C0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003083CC:
    set32(c.r[2], c.r[18].w[0] + c.r[19].w[0]);
    c.budget -= 1;
L_003083D0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003083E0u); st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x003083E0u) [[unlikely]] return; }
L_003083E0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[6], c.r[19].w[0] + 2u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003083F4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 13u, depth + 1u); else { c.pc = 0x00308190u; return; } if (c.pc != 0x003083F4u) [[unlikely]] return; }
L_003083F4:
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308400u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00308400u) [[unlikely]] return; }
L_00308400:
    set32(c.r[5], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030840Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 375u, depth + 1u); else { c.pc = 0x00307F30u; return; } if (c.pc != 0x0030840Cu) [[unlikely]] return; }
L_0030840C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308418u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x00308418u) [[unlikely]] return; }
L_00308418:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00308440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00308510; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12048u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00308480; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030847Cu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0030847Cu) [[unlikely]] return; }
L_0030847C:
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 1;
L_00308480:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00308498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308494u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00308494u) [[unlikely]] return; }
L_00308494:
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 1;
L_00308498:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003084B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003084ACu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003084ACu) [[unlikely]] return; }
L_003084AC:
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 1;
L_003084B0:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003084C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003084C4u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003084C4u) [[unlikely]] return; }
L_003084C4:
    st32((c.r[17].w[0] + 28u), 0u);
    c.budget -= 1;
L_003084C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003084E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003084DCu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003084DCu) [[unlikely]] return; }
L_003084DC:
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 1;
L_003084E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003084F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003084F4u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003084F4u) [[unlikely]] return; }
L_003084F4:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 1;
L_003084F8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00308510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308510u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00308510u) [[unlikely]] return; }
L_00308510:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00308530:
    set32(c.r[29], c.r[29].w[0] - 672u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 12048u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[3], 0u + 5u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[6], c.r[28].w[0] - 32160u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[5], c.r[29].w[0] + 656u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    c.budget -= 23;
L_0030858C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030858Cu | kUnwind; return; } goto L_0030858C; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00308608; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003085BCu); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x003085BCu) [[unlikely]] return; }
L_003085BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00308724; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[4], c.r[4].w[0] - 22000u);
    c.budget -= 3;
L_003085D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003085D0u | kUnwind; return; } goto L_003085D0; } }
    c.budget -= 1;
L_003085F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308600u); set32(c.r[5], c.r[5].w[0] - 5175u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x00308600u) [[unlikely]] return; }
L_00308600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0030861C; } }
L_00308608:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308618u); set32(c.r[5], c.r[5].w[0] - 5169u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00308618u) [[unlikely]] return; }
L_00308618:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030861C:
    c.r[19].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 1;
L_00308620:
    c.r[2].d[0] = c.r[20].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_0030875C; } }
    c.budget -= 1;
L_00308630:
    set32(c.r[2], c.r[20].w[0] + 1u);
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[20].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308620u | kUnwind; return; } goto L_00308620; } }
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[3], c.r[3].w[0] + 16000u);
    set32(c.r[2], c.r[29].w[0] + 656u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 400u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.budget -= 10;
L_0030866C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030866Cu | kUnwind; return; } goto L_0030866C; } }
    set32(c.r[5], c.r[6].w[0] - 1u);
    c.budget -= 1;
L_0030868C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030868Cu | kUnwind; return; } goto L_0030868C; } }
    set32(c.r[6], c.r[5].w[0] - 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 5177u);
    c.budget -= 3;
L_003086B4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003086B4u | kUnwind; return; } goto L_003086B4; } }
    set32(c.r[5], c.r[6].w[0] - 1u);
    c.budget -= 1;
L_003086D4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003086D4u | kUnwind; return; } goto L_003086D4; } }
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 1;
L_003086F4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003086F4u | kUnwind; return; } goto L_003086F4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030871Cu); set32(c.r[5], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_0042(c, 20u, depth + 1u); else { c.pc = 0x003082B0u; return; } if (c.pc != 0x0030871Cu) [[unlikely]] return; }
L_0030871C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003088A0; } }
L_00308724:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308730u); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x00308730u) [[unlikely]] return; }
L_00308730:
    set32(c.r[4], c.r[2].w[0] + 36u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 2;
L_00308738:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308738u | kUnwind; return; } goto L_00308738; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003085F0u | kUnwind; return; } goto L_003085F0; } }
L_0030875C:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[3], c.r[3].w[0] + 16000u);
    set32(c.r[2], c.r[29].w[0] + 656u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 400u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.budget -= 11;
L_00308788:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308788u | kUnwind; return; } goto L_00308788; } }
    set32(c.r[5], c.r[6].w[0] - 1u);
    c.budget -= 1;
L_003087A8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003087A8u | kUnwind; return; } goto L_003087A8; } }
    set32(c.r[6], c.r[5].w[0] - 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 5177u);
    c.budget -= 3;
L_003087D0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003087D0u | kUnwind; return; } goto L_003087D0; } }
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_003087F8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003087F8u | kUnwind; return; } goto L_003087F8; } }
    set32(c.r[5], c.r[6].w[0] - 1u);
    c.budget -= 1;
L_00308818:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308818u | kUnwind; return; } goto L_00308818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030883Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x0030883Cu) [[unlikely]] return; }
L_0030883C:
    set32(c.r[4], c.r[29].w[0] + 668u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308848u); set32(c.r[5], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00308848u) [[unlikely]] return; }
L_00308848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308850u); set32(c.r[4], c.r[29].w[0] + 668u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x00308850u) [[unlikely]] return; }
L_00308850:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308868u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308868u) [[unlikely]] return; }
L_00308868:
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 668u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308878u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00308878u) [[unlikely]] return; }
L_00308878:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_00308888; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308888u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x00308888u) [[unlikely]] return; }
L_00308888:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308894u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x00308894u) [[unlikely]] return; }
L_00308894:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308630u | kUnwind; return; } goto L_00308630; } }
    c.budget -= 1;
L_003088A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 672u);  c.pc = t; return; }
L_003088D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003088D0u | kUnwind; return; } goto L_003088D0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] - 1u);  c.pc = t; return; }
L_00308900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0030892C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 12032u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030892Cu); st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x0030892Cu) [[unlikely]] return; }
L_0030892C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00308940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00308A0C; } }
L_00308958:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 28u));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00308A24; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00308C40; } }
L_00308974:
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00308C7C; } }
    set32(c.r[3], 0u + 26u);
    c.budget -= 1;
L_0030898C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.budget -= 30;
L_00308A04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00308C8C; } }
L_00308A0C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308A18u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_001F(c, 188u, depth + 1u); else { c.pc = 0x0027DCB0u; return; } if (c.pc != 0x00308A18u) [[unlikely]] return; }
L_00308A18:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308958u | kUnwind; return; } goto L_00308958; } }
L_00308A24:
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 57u);
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 380u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00308B80; } }
    set32(c.r[3], 0u + 56u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00308AF0; } }
    set32(c.r[3], 0u + 222u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00308A60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308A04u | kUnwind; return; } goto L_00308A04; } }
L_00308A60:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00308C10; } }
    set32(c.r[3], 0u + 221u);
    c.budget -= 1;
L_00308A74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308A04u | kUnwind; return; } goto L_00308A04; } }
L_00308AF0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00308C20; } }
    set32(c.r[3], 0u + 83u);
    c.budget -= 1;
L_00308B04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308A04u | kUnwind; return; } goto L_00308A04; } }
L_00308B80:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00308C30; } }
    set32(c.r[3], 0u + 84u);
    c.budget -= 1;
L_00308B94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308A04u | kUnwind; return; } goto L_00308A04; } }
L_00308C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308C18u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x00308C18u) [[unlikely]] return; }
L_00308C18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 221u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308A74u | kUnwind; return; } goto L_00308A74; } }
L_00308C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308C28u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x00308C28u) [[unlikely]] return; }
L_00308C28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 83u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308B04u | kUnwind; return; } goto L_00308B04; } }
L_00308C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308C38u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x00308C38u) [[unlikely]] return; }
L_00308C38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 84u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308B94u | kUnwind; return; } goto L_00308B94; } }
L_00308C40:
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u - 3u);
    c.r[7].d[0] = ld16((c.r[16].w[0]));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 5u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[16].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308974u | kUnwind; return; } goto L_00308974; } }
L_00308C7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308C84u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x00308C84u) [[unlikely]] return; }
L_00308C84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 26u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030898Cu | kUnwind; return; } goto L_0030898C; } }
L_00308C8C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00308CA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.f[13] = ld32((c.r[29].w[0] + 72u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00308CDC; } }
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00308CDC; } }
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 1;
L_00308CDC:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 28u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00308FB0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00308DC0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308D0Cu); set32(c.r[17], c.r[2].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308D0Cu) [[unlikely]] return; }
L_00308D0C:
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 6;
L_00308D24:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00308DF4; } }
L_00308D2C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00308F34; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00308FB0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 380u));
    set32(c.r[4], ld32((c.r[5].w[0] + 344u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 49u));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00308D74; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00308D90; } }
L_00308D74:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_00308D90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[5].w[0] + 360u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00308FB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308DB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 99u, depth + 1u); else { c.pc = 0x00308FD0u; return; } if (c.pc != 0x00308DB8u) [[unlikely]] return; }
L_00308DB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00308FB4; } }
L_00308DC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00308DEC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308D24u | kUnwind; return; } goto L_00308D24; } }
L_00308DEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308D24u | kUnwind; return; } goto L_00308D24; } }
L_00308DF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308DFCu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x00308DFCu) [[unlikely]] return; }
L_00308DFC:
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[3].d[0] = c.r[3].d[0] | 63875ull;
    c.f[1] = c.r[3].w[0];
    c.f[5] = ld32((c.r[6].w[0] + 104u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[0], c.f[5]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    set32(c.r[5], c.f[0]);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[6] = c.r[3].w[0];
    c.f[6] = fp::ee::add(c.fcr31, c.f[0], c.f[6]);
    c.f[6] = fp::cvt_w_s(c.f[6]);
    c.f[6] = fp::cvt_s_w(c.f[6]);
    set32(c.r[4], ld32((c.r[6].w[0] + 752u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[5].d[0] = c.r[3].d[0] | 4059ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[2] = 0u;
    c.f[3] = c.r[5].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    c.f[2] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[6]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = c.f[2] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 37;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00308F2C; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00308EA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[0]);  if (t) { goto L_00308EA8; } }
L_00308EA4:
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[0]);
    c.budget -= 1;
L_00308EA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[3].d[0] = c.r[3].d[0] | 63875ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    set32(c.r[5], c.f[0]);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[6].w[0] + 104u));
    c.f[2] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 29;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00308F24; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[6].w[0] + 404u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00308F24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 104u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308D2Cu | kUnwind; return; } goto L_00308D2C; } }
L_00308F2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308EA8u | kUnwind; return; } goto L_00308EA8; } }
L_00308F34:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 380u));
    set32(c.r[5], ld32((c.r[4].w[0] + 344u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 49u));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00308F64; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00308F80; } }
L_00308F64:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_00308F80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 360u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00308FB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308FA8u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_001F(c, 188u, depth + 1u); else { c.pc = 0x0027DCB0u; return; } if (c.pc != 0x00308FA8u) [[unlikely]] return; }
L_00308FA8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00308FB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00308FB4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00308FD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st16((c.r[2].w[0] + 1494u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00309090; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1584u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00309028; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_00309028:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00309038:
    c.f[2] = ld32((c.r[2].w[0] + 56u));
    c.f[1] = ld32((c.r[2].w[0] + 52u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 72u), c.f[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030909C; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00309208; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[12] = 0u;
    set32(c.r[4], c.r[4].w[0] - 14224u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309088u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 126u, depth + 1u); else { c.pc = 0x00445C80u; return; } if (c.pc != 0x00309088u) [[unlikely]] return; }
L_00309088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0030928C; } }
L_00309090:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 5152u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309038u | kUnwind; return; } goto L_00309038; } }
L_0030909C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29516u));
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[28].w[0] - 29516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003091BC; } }
L_003090B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.f[20] = 0u;
    c.r[2].d[0] = ld8((c.r[2].w[0] + 220u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003091FC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1492u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 103u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003091C4; } }
L_003090E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = ld32((c.r[28].w[0] - 32272u));
    c.f[0] = c.r[2].w[0];
    c.f[5] = ld32((c.r[3].w[0] + 36u));
    c.f[4] = ld32((c.r[3].w[0] + 116u));
    c.f[7] = ld32((c.r[3].w[0] + 32u));
    c.f[6] = ld32((c.r[3].w[0] + 112u));
    c.f[3] = ld32((c.r[3].w[0] + 40u));
    c.f[2] = ld32((c.r[3].w[0] + 120u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.f[2] = fp::ee::sqrt(c.fcr31, c.f[2]);
    c.f[22] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 22;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00309144; } }
    c.f[22] = c.f[0];
    c.budget -= 1;
L_00309144:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[21] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309158u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x00309158u) [[unlikely]] return; }
L_00309158:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[22]);
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 8;
L_00309178:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29516u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 5064u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = 0u;
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] - 14224u);
    c.f[12] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003091B4u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 145u, depth + 1u); else { c.pc = 0x004460B0u; return; } if (c.pc != 0x003091B4u) [[unlikely]] return; }
L_003091B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309088u | kUnwind; return; } goto L_00309088; } }
L_003091BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29516u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003090B8u | kUnwind; return; } goto L_003090B8; } }
L_003091C4:
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 1492u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003090E8u | kUnwind; return; } goto L_003090E8; } }
L_003091FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 1492u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309178u | kUnwind; return; } goto L_00309178; } }
L_00309208:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[17], c.r[29].w[0] + 88u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.f[21] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.f[20] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309234u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x00309234u) [[unlikely]] return; }
L_00309234:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309240u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x00309240u) [[unlikely]] return; }
L_00309240:
    c.f[2] = ld32((c.r[17].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[3] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[4], c.r[4].w[0] - 14224u);
    c.f[1] = c.f[0] ^ fp::kSign;
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[7], c.r[29].w[0] + 80u);
    c.r[8].d[0] = 0ull + 0ull;
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[20]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309284u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 121u, depth + 1u); else { c.pc = 0x00445A60u; return; } if (c.pc != 0x00309284u) [[unlikely]] return; }
L_00309284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309088u | kUnwind; return; } goto L_00309088; } }
L_0030928C:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003092B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[25], c.r[3].w[0] << 2);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[15], 0u - 9u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[24], c.r[3].w[0] << 3);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[2], 0u - 5u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[13], 0u - 17u);
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[11], 0u - 33u);
    set32(c.r[12], c.r[3].w[0] << 5);
    set32(c.r[10], c.r[3].w[0] << 11);
    set32(c.r[9], 0u - 2049u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], 0u + 103u);
    set32(c.r[7], c.r[7].w[0] - 12032u);
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[25].d[0] = c.r[2].d[0] | c.r[25].d[0];
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[25].w[0]));
    set32(c.r[2], 0u - 3u);
    c.r[25].d[0] = ld16((c.r[4].w[0]));
    c.r[15].d[0] = c.r[25].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[24].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld16((c.r[4].w[0]));
    c.r[13].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld16((c.r[4].w[0]));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld16((c.r[4].w[0]));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[17].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    c.r[7].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 61;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003093D0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003093B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003093B4u) [[unlikely]] return; }
L_003093B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003093D0; } }
    st32((c.r[18].w[0] + 16u), 0u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_003093D0; } }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 2;
L_003093D0:
    c.r[7].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 3u);
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[2], 0u - 5u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 380u));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030949C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003094A8; } }
    st16((c.r[17].w[0] + 380u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 1;
L_00309428:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 360u), 0u);
    st32((c.r[17].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[17].w[0] + 356u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 382u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    st32((c.r[17].w[0] + 368u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 356u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[17].w[0] + 376u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 376u));
    c.f[0] = ld32((c.r[17].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 372u), c.f[0]);
    c.budget -= 29;
L_0030949C:
    st8((c.r[18].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003094B8; } }
L_003094A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003094B0u); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x003094B0u) [[unlikely]] return; }
L_003094B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 380u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309428u | kUnwind; return; } goto L_00309428; } }
L_003094B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003094E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003094F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.f[0] = ld32((c.r[2].w[0] + 368u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 372u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 376u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 380u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309530u); st32((c.r[29].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_0023(c, 198u, depth + 1u); else { c.pc = 0x0028DEC0u; return; } if (c.pc != 0x00309530u) [[unlikely]] return; }
L_00309530:
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], 0u - 2u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 524u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[8].d[0];
    st8((c.r[6].w[0] + 524u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[6].w[0] + 536u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 526u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 524u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 536u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.f[1] = ld32((c.r[4].w[0] + 384u));
    c.f[0] = ld32((c.r[3].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 28;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[9], 0u + 1u);  if (t) { goto L_003095A4; } }
    st8((c.r[3].w[0] + 404u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 1;
L_003095A4:
    st32((c.r[3].w[0] + 104u), c.f[1]);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F060000u);
    c.r[3].d[0] = c.r[3].d[0] | 2706ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F860000u);
    c.r[3].d[0] = c.r[3].d[0] | 2706ull;
    c.f[2] = ld32((c.r[4].w[0] + 388u));
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 344u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 1328u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_00309654; } }
    set32(c.r[4], 0u + 329u);
    c.budget -= 1;
L_00309600:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[3].d[0] | 4719ull;
    st32((c.r[16].w[0] + 360u), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
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
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00309664; } }
L_00309654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030965Cu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0030965Cu) [[unlikely]] return; }
L_0030965C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 329u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309600u | kUnwind; return; } goto L_00309600; } }
L_00309664:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00309680:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003097B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[9].d[0] = 0ull & 1ull;
    set32(c.r[2], c.r[2].w[0] - 12000u);
    set32(c.r[4], c.r[9].w[0] << 6);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], c.r[9].w[0] << 2);
    set32(c.r[11], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 2u);
    set32(c.r[8], 0u - 65u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[6], 0u - 5u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[10].d[0] = ld8((c.r[11].w[0] + 524u));
    c.r[2].d[0] = c.r[10].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    st8((c.r[11].w[0] + 524u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[9], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[9].w[0] + 525u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[9].w[0] + 525u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[7].w[0] + 526u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1497u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 1497u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 40;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00309740; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309740u);  if (depth < kMaxDepth) unit_0028(c, 195u, depth + 1u); else { c.pc = 0x002A2340u; return; } if (c.pc != 0x00309740u) [[unlikely]] return; }
L_00309740:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309770u); st32((c.r[29].w[0] + 44u), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 264u, depth + 1u); else { c.pc = 0x002EB440u; return; } if (c.pc != 0x00309770u) [[unlikely]] return; }
L_00309770:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st8((c.r[2].w[0] + 808u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[2].w[0] + 752u);
    set32(c.r[2], ld32((c.r[2].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 121u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003097A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003097A4u);  if (depth < kMaxDepth) unit_0065(c, 91u, depth + 1u); else { c.pc = 0x00395540u; return; } if (c.pc != 0x003097A4u) [[unlikely]] return; }
L_003097A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003097B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x003097B0u) [[unlikely]] return; }
L_003097B0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003097D0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[24], 0u - 17u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[25].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[14], 0u - 33u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[21], 0u - 5u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[12], 0u - 2049u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[11], 0u + 187u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], 0u - 9u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[10], c.r[10].w[0] - 12000u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[22], c.r[2].w[0] << 2);
    set32(c.r[19], c.r[2].w[0] << 3);
    set32(c.r[15], c.r[2].w[0] << 5);
    set32(c.r[13], c.r[2].w[0] << 11);
    set32(c.r[8], 0u - 65u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[23], 0u - 3u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[30], 0u - 129u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[21].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[22].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[20].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[3], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] << 6);
    c.r[18].d[0] = c.r[20].d[0] & c.r[18].d[0];
    c.r[18].d[0] = c.r[18].d[0] | c.r[19].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[18].d[0] = ld16((c.r[4].w[0]));
    c.r[18].d[0] = c.r[18].d[0] & c.r[24].d[0];
    c.r[18].d[0] = c.r[18].d[0] | c.r[25].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[18].d[0] = ld16((c.r[4].w[0]));
    c.r[14].d[0] = c.r[18].d[0] & c.r[14].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[15].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.r[14].d[0] = ld16((c.r[4].w[0]));
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[10].w[0]);
    c.r[10].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[10].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[9].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    c.r[6].d[0] = c.r[6].d[0] & c.r[21].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[22].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    c.r[6].d[0] = c.r[6].d[0] & c.r[23].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[30].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 525u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[5].w[0] + 525u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[21].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[22].d[0];
    st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1497u));
    c.r[3].d[0] = c.r[2].d[0] & c.r[21].d[0];
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[5].w[0] + 1497u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[5].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 121u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 100;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00309998; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 220u));
    c.budget -= 1;
L_00309964:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003099A8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 808u));
    c.budget -= 1;
L_00309970:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003099B8; } }
L_00309980:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003099C4; } }
L_00309990:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003099D0; } }
L_00309998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003099A0u); set32(c.r[4], c.r[16].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 93u, depth + 1u); else { c.pc = 0x00395580u; return; } if (c.pc != 0x003099A0u) [[unlikely]] return; }
L_003099A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[16].w[0] + 220u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309964u | kUnwind; return; } goto L_00309964; } }
L_003099A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003099B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 197u, depth + 1u); else { c.pc = 0x002A2380u; return; } if (c.pc != 0x003099B0u) [[unlikely]] return; }
L_003099B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[16].w[0] + 808u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309970u | kUnwind; return; } goto L_00309970; } }
L_003099B8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 808u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309980u | kUnwind; return; } goto L_00309980; } }
L_003099C4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 808u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309990u | kUnwind; return; } goto L_00309990; } }
L_003099D0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00309A00:
    c.r[8].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[6], 0u - 5u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[3], 0u - 3u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0] + 360u), 0u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 356u), 0u);  c.pc = t; return; }
L_00309A40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00309A50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00309AD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[8], 0u - 5u);
    set32(c.r[2], c.r[2].w[0] - 11968u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[6], 0u - 33u);
    set32(c.r[11], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[7], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], 0u - 65u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[10].d[0] = ld8((c.r[11].w[0] + 526u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[11].w[0] + 526u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[9], ld32((c.r[16].w[0] + 4u)));
    c.r[8].d[0] = ld8((c.r[9].w[0] + 526u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[9].w[0] + 526u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[6].d[0] = ld8((c.r[7].w[0] + 526u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309AD4u); st8((c.r[7].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x00309AD4u) [[unlikely]] return; }
L_00309AD4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00309AF0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[24], 0u - 17u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[25].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[21], 0u - 5u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[14], 0u - 33u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[12], 0u - 2049u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], 0u - 9u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[11], 0u + 186u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[22], c.r[2].w[0] << 2);
    set32(c.r[19], c.r[2].w[0] << 3);
    set32(c.r[15], c.r[2].w[0] << 5);
    set32(c.r[13], c.r[2].w[0] << 11);
    set32(c.r[7], c.r[2].w[0] << 1);
    set32(c.r[10], c.r[10].w[0] - 11968u);
    set32(c.r[8], 0u - 65u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[23], 0u - 129u);
    set32(c.r[2], c.r[2].w[0] << 7);
    c.r[3].d[0] = c.r[3].d[0] & c.r[21].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[22].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[20].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[3], 0u - 3u);
    c.r[18].d[0] = c.r[20].d[0] & c.r[18].d[0];
    c.r[18].d[0] = c.r[18].d[0] | c.r[19].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[18].d[0] = ld16((c.r[4].w[0]));
    c.r[18].d[0] = c.r[18].d[0] & c.r[24].d[0];
    c.r[18].d[0] = c.r[18].d[0] | c.r[25].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[18].d[0] = ld16((c.r[4].w[0]));
    c.r[14].d[0] = c.r[18].d[0] & c.r[14].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[15].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.r[14].d[0] = ld16((c.r[4].w[0]));
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[10].w[0]);
    c.r[10].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[4].w[0]));
    c.r[8].d[0] = c.r[8].d[0] & c.r[21].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[22].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[23].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[5].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 78;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00309CF8; } }
    set32(c.r[2], 0u + 331u);
    c.budget -= 1;
L_00309C2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[9], 0u - 2u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], 0u - 5u);
    st32((c.r[16].w[0] + 356u), c.r[3].w[0]);
    set32(c.r[5], 0u - 33u);
    c.r[11].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[8], c.r[3].w[0] << 2);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
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
    c.r[9].d[0] = ld8((c.r[16].w[0] + 526u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 526u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 526u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 526u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 526u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 51;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00309D08; } }
L_00309CF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309D00u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x00309D00u) [[unlikely]] return; }
L_00309D00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 331u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309C2Cu | kUnwind; return; } goto L_00309C2C; } }
L_00309D08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00309D40:
    c.r[8].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[6], 0u - 5u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[3], 0u - 3u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0] + 360u), 0u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 356u), 0u);  c.pc = t; return; }
L_00309D80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00309D90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00309E2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[11], 0u - 5u);
    set32(c.r[2], c.r[2].w[0] - 11936u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[7], 0u - 33u);
    set32(c.r[12], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[8], c.r[2].w[0] << 5);
    set32(c.r[6], c.r[2].w[0] << 6);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u - 65u);
    c.r[9].d[0] = ld8((c.r[12].w[0] + 526u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[11].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[12].w[0] + 526u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[10], ld32((c.r[16].w[0] + 4u)));
    c.r[9].d[0] = ld8((c.r[10].w[0] + 526u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[10].w[0] + 526u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[8], ld32((c.r[16].w[0] + 4u)));
    c.r[7].d[0] = ld8((c.r[8].w[0] + 526u));
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 1497u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[11].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309E2Cu); st8((c.r[6].w[0] + 1497u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x00309E2Cu) [[unlikely]] return; }
L_00309E2C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00309E40:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[24], 0u - 17u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[25].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[14], 0u - 33u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[21], 0u - 5u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[12], 0u - 2049u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[11], 0u + 185u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], 0u - 9u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[10], c.r[10].w[0] - 11936u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[22], c.r[2].w[0] << 2);
    set32(c.r[19], c.r[2].w[0] << 3);
    set32(c.r[15], c.r[2].w[0] << 5);
    set32(c.r[13], c.r[2].w[0] << 11);
    set32(c.r[7], c.r[2].w[0] << 1);
    set32(c.r[8], 0u - 65u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[23], 0u - 129u);
    set32(c.r[2], c.r[2].w[0] << 7);
    c.r[30].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[3].d[0] = c.r[3].d[0] & c.r[21].d[0];
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[22].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[20].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[3], 0u - 3u);
    c.r[18].d[0] = c.r[20].d[0] & c.r[18].d[0];
    c.r[18].d[0] = c.r[18].d[0] | c.r[19].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[18].d[0] = ld16((c.r[4].w[0]));
    c.r[18].d[0] = c.r[18].d[0] & c.r[24].d[0];
    c.r[18].d[0] = c.r[18].d[0] | c.r[25].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[18].d[0] = ld16((c.r[4].w[0]));
    c.r[18].d[0] = c.r[18].d[0] & c.r[14].d[0];
    c.r[15].d[0] = c.r[18].d[0] | c.r[15].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld16((c.r[4].w[0]));
    c.r[12].d[0] = c.r[15].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[10].w[0]);
    c.r[10].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[10].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[9].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld16((c.r[4].w[0]));
    c.r[10].d[0] = c.r[10].d[0] & c.r[21].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[22].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[10].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[23].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[5].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[21].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[22].d[0];
    st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[14].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[30].d[0];
    st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.f[0] = ld32((c.r[2].w[0] + 400u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 404u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 408u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 412u));
    c.budget -= 100;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309FD0u); st32((c.r[29].w[0] + 172u), c.f[0]);  if (depth < kMaxDepth) unit_0023(c, 198u, depth + 1u); else { c.pc = 0x0028DEC0u; return; } if (c.pc != 0x00309FD0u) [[unlikely]] return; }
L_00309FD0:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = ld32((c.r[2].w[0] + 384u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00309FF0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 404u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00309FF0:
    st32((c.r[16].w[0] + 104u), c.f[1]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030A0A0; } }
    set32(c.r[2], 0u + 330u);
    c.budget -= 1;
L_0030A008:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[5], 0u - 2u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    st32((c.r[16].w[0] + 356u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = ld8((c.r[16].w[0] + 382u));
    set32(c.r[3], 0u - 5u);
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
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1497u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 38;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1497u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030A0B0; } }
L_0030A0A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A0A8u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0030A0A8u) [[unlikely]] return; }
L_0030A0A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 330u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A008u | kUnwind; return; } goto L_0030A008; } }
L_0030A0B0:
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
L_0030A0E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 26u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 380u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030A1A4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030A194; } }
    set32(c.r[3], 0u + 26u);
    c.budget -= 1;
L_0030A114:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.budget -= 30;
L_0030A18C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0030A1B0; } }
L_0030A194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A19Cu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0030A19Cu) [[unlikely]] return; }
L_0030A19C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 26u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A114u | kUnwind; return; } goto L_0030A114; } }
L_0030A1A4:
    st32((c.r[16].w[0] + 360u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 356u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A18Cu | kUnwind; return; } goto L_0030A18C; } }
L_0030A1B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030A1C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0030A404; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.f[3] = ld32((c.r[3].w[0] + 32u));
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[2] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A200u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x0030A200u) [[unlikely]] return; }
L_0030A200:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030A21C; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 404u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0030A21C:
    st32((c.r[4].w[0] + 104u), c.f[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0030A2EC; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 26u);
    c.r[4].d[0] = ld16((c.r[16].w[0] + 380u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0030A404; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 344u)));
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[3].w[0] + 464u)));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030A404; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030A3F4; } }
    set32(c.r[3], 0u + 113u);
    c.budget -= 1;
L_0030A270:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { goto L_0030A3EC; } }
L_0030A2EC:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 26u);
    c.r[4].d[0] = ld16((c.r[16].w[0] + 380u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0030A404; } }
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0030A3DC; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030A330; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A330u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0030A330u) [[unlikely]] return; }
L_0030A330:
    set32(c.r[2], 0u + 113u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A3B4u); st32((c.r[16].w[0] + 372u), c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x0030A3B4u) [[unlikely]] return; }
L_0030A3B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    c.f[3] = c.r[4].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.f[0]);  if (t) { goto L_0030A3EC; } }
L_0030A3DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.budget -= 4;
L_0030A3EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0030A408; } }
L_0030A3F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A3FCu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0030A3FCu) [[unlikely]] return; }
L_0030A3FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 113u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A270u | kUnwind; return; } goto L_0030A270; } }
L_0030A404:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0030A408:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030A420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0030A44C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 11904u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A44Cu); st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x0030A44Cu) [[unlikely]] return; }
L_0030A44C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030A460:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[8].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[8].w[0] << 2);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[20], c.r[8].w[0] << 3);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[25], c.r[8].w[0] << 5);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[14], c.r[8].w[0] << 11);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[19], 0u - 9u);
    c.r[9].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[2], 0u - 5u);
    set32(c.r[15], 0u - 17u);
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[24], 0u - 33u);
    set32(c.r[13], 0u - 2049u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[12], 0u + 96u);
    set32(c.r[11], c.r[11].w[0] - 11904u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[8].d[0] = c.r[9].d[0] & c.r[2].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[3].d[0];
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[21].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[8], 0u - 3u);
    c.r[19].d[0] = c.r[21].d[0] & c.r[19].d[0];
    c.r[19].d[0] = c.r[19].d[0] | c.r[20].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[19].d[0] = ld16((c.r[4].w[0]));
    c.r[15].d[0] = c.r[19].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[18].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld16((c.r[4].w[0]));
    c.r[15].d[0] = c.r[15].d[0] & c.r[24].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[25].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld16((c.r[4].w[0]));
    c.r[13].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[13].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[11].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[6].d[0] = c.r[6].d[0] & c.r[24].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[10].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 20u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 71;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0030A600; } }
    set32(c.r[2], 0u + 26u);
    c.budget -= 1;
L_0030A580:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { goto L_0030A610; } }
L_0030A600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A608u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0030A608u) [[unlikely]] return; }
L_0030A608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 26u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A580u | kUnwind; return; } goto L_0030A580; } }
L_0030A610:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0030A640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0030A66C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 11872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A66Cu); st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x0030A66Cu) [[unlikely]] return; }
L_0030A66C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030A680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 221u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 380u));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0030A738; } }
L_0030A6A4:
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030A774; } }
    set32(c.r[3], 0u + 26u);
    c.budget -= 1;
L_0030A6BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { goto L_0030A784; } }
L_0030A738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A740u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_001F(c, 188u, depth + 1u); else { c.pc = 0x0027DCB0u; return; } if (c.pc != 0x0030A740u) [[unlikely]] return; }
L_0030A740:
    c.r[7].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[5], 0u - 3u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[3], 0u - 5u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[16].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A6A4u | kUnwind; return; } goto L_0030A6A4; } }
L_0030A774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A77Cu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0030A77Cu) [[unlikely]] return; }
L_0030A77C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 26u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A6BCu | kUnwind; return; } goto L_0030A6BC; } }
L_0030A784:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030A7A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0030A7D8; } }
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030A7D8; } }
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 1;
L_0030A7D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030AA98; } }
L_0030A7E4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030A80C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[2] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_0030A828; } }
L_0030A80C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[2] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
L_0030A828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A830u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x0030A830u) [[unlikely]] return; }
L_0030A830:
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[3].d[0] = c.r[3].d[0] | 63875ull;
    c.f[1] = c.r[3].w[0];
    c.f[5] = ld32((c.r[6].w[0] + 104u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[0], c.f[5]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    set32(c.r[5], c.f[0]);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[6] = c.r[3].w[0];
    c.f[6] = fp::ee::add(c.fcr31, c.f[0], c.f[6]);
    c.f[6] = fp::cvt_w_s(c.f[6]);
    c.f[6] = fp::cvt_s_w(c.f[6]);
    set32(c.r[4], ld32((c.r[6].w[0] + 752u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[5].d[0] = c.r[3].d[0] | 4059ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[2] = 0u;
    c.f[3] = c.r[5].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    c.f[2] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[6]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = c.f[2] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 37;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030AAAC; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030A8D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[0]);  if (t) { goto L_0030A8DC; } }
L_0030A8D8:
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[0]);
    c.budget -= 1;
L_0030A8DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[3].d[0] = c.r[3].d[0] | 63875ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    set32(c.r[5], c.f[0]);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[6].w[0] + 104u));
    c.f[2] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 29;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030A958; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[6].w[0] + 404u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0030A958:
    st32((c.r[6].w[0] + 104u), c.f[1]);
    c.budget -= 1;
L_0030A95C:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 221u);
    c.r[4].d[0] = ld16((c.r[5].w[0] + 380u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0030ABC4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 1494u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030ABC4; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], ld32((c.r[5].w[0] + 344u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 49u));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0030A9A4; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0030A9C0; } }
L_0030A9A4:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_0030A9C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[5].w[0] + 360u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030ABC4; } }
    st16((c.r[5].w[0] + 1494u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030AAB4; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1581u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030AA0C; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_0030AA0C:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0030AA1C:
    c.f[2] = ld32((c.r[2].w[0] + 56u));
    c.f[1] = ld32((c.r[2].w[0] + 52u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 72u), c.f[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030AAC0; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0030AB24; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0030AA78; } }
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030AA78; } }
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0030AA78:
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[4].w[0] - 15072u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AA90u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 126u, depth + 1u); else { c.pc = 0x00445C80u; return; } if (c.pc != 0x0030AA90u) [[unlikely]] return; }
L_0030AA90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0030ABC8; } }
L_0030AA98:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A95Cu | kUnwind; return; } goto L_0030A95C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A7E4u | kUnwind; return; } goto L_0030A7E4; } }
L_0030AAAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A8DCu | kUnwind; return; } goto L_0030A8DC; } }
L_0030AAB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 5152u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AA1Cu | kUnwind; return; } goto L_0030AA1C; } }
L_0030AAC0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29520u));
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[28].w[0] - 29520u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld8((c.r[28].w[0] - 29520u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0030AAE4; } }
    st8((c.r[28].w[0] - 29520u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0030AAE4:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 5072u);
    set32(c.r[7], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 15072u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AB1Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 145u, depth + 1u); else { c.pc = 0x004460B0u; return; } if (c.pc != 0x0030AB1Cu) [[unlikely]] return; }
L_0030AB1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030ABC4; } }
L_0030AB24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[17], c.r[29].w[0] + 88u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.f[21] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.f[20] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AB50u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x0030AB50u) [[unlikely]] return; }
L_0030AB50:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AB5Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x0030AB5Cu) [[unlikely]] return; }
L_0030AB5C:
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[4] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[2] = 0u;
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[20]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[20]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0030ABAC; } }
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030ABAC; } }
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0030ABAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[4], c.r[4].w[0] - 15072u);
    set32(c.r[7], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ABC4u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 121u, depth + 1u); else { c.pc = 0x00445A60u; return; } if (c.pc != 0x0030ABC4u) [[unlikely]] return; }
L_0030ABC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0030ABC8:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0030ABE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[25], c.r[3].w[0] << 2);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    set32(c.r[15], 0u - 9u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[24], c.r[3].w[0] << 3);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[13], 0u - 17u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[18].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[2], 0u - 5u);
    set32(c.r[11], 0u - 33u);
    set32(c.r[12], c.r[3].w[0] << 5);
    set32(c.r[10], c.r[3].w[0] << 11);
    set32(c.r[9], 0u - 2049u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], 0u + 95u);
    set32(c.r[7], c.r[7].w[0] - 11872u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.f[20] = c.f[12];
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].d[0] & c.r[2].d[0];
    c.r[25].d[0] = c.r[2].d[0] | c.r[25].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[25].w[0]));
    set32(c.r[2], 0u - 3u);
    c.r[25].d[0] = ld16((c.r[4].w[0]));
    c.r[15].d[0] = c.r[25].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[24].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld16((c.r[4].w[0]));
    c.r[13].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld16((c.r[4].w[0]));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld16((c.r[4].w[0]));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    c.r[7].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 60;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[4].w[0] + 20u), c.r[6].w[0]);  if (t) { goto L_0030AE9C; } }
    set32(c.r[25], ld32((c.r[6].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ACE0u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030ACE0u) [[unlikely]] return; }
L_0030ACE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0030ACF0; } }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 2;
L_0030ACF0:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030AD00; } }
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 1;
L_0030AD00:
    st32((c.r[17].w[0] + 16u), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1494u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030AEA4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_0030AD14:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030AEF0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 752u)));
    c.f[20] = 0u;
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1492u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 103u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030AEB8; } }
L_0030AD3C:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = ld32((c.r[28].w[0] - 32272u));
    c.f[0] = c.r[2].w[0];
    c.f[5] = ld32((c.r[3].w[0] + 36u));
    c.f[4] = ld32((c.r[3].w[0] + 116u));
    c.f[7] = ld32((c.r[3].w[0] + 32u));
    c.f[6] = ld32((c.r[3].w[0] + 112u));
    c.f[3] = ld32((c.r[3].w[0] + 40u));
    c.f[2] = ld32((c.r[3].w[0] + 120u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.f[2] = fp::ee::sqrt(c.fcr31, c.f[2]);
    c.f[22] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 22;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030AD98; } }
    c.f[22] = c.f[0];
    c.budget -= 1;
L_0030AD98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[21] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ADACu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x0030ADACu) [[unlikely]] return; }
L_0030ADAC:
    c.f[2] = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[22]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[20], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.budget -= 10;
L_0030ADD4:
    c.r[6].d[0] = ld16((c.r[17].w[0]));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 3u);
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[17].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030AEF8; } }
    set32(c.r[2], 0u + 221u);
    c.budget -= 1;
L_0030AE1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { goto L_0030AF08; } }
L_0030AE9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AD00u | kUnwind; return; } goto L_0030AD00; } }
L_0030AEA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AEB0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_001F(c, 188u, depth + 1u); else { c.pc = 0x0027DCB0u; return; } if (c.pc != 0x0030AEB0u) [[unlikely]] return; }
L_0030AEB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 24u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AD14u | kUnwind; return; } goto L_0030AD14; } }
L_0030AEB8:
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1492u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AD3Cu | kUnwind; return; } goto L_0030AD3C; } }
L_0030AEF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1492u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030ADD4u | kUnwind; return; } goto L_0030ADD4; } }
L_0030AEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AF00u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0030AF00u) [[unlikely]] return; }
L_0030AF00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 221u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AE1Cu | kUnwind; return; } goto L_0030AE1C; } }
L_0030AF08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030AF30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0030AF7C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[3].w[0] - 11840u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], 0u - 33u);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 526u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AF7Cu); st8((c.r[7].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x0030AF7Cu) [[unlikely]] return; }
L_0030AF7C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030AF90:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0] + 360u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 356u), 0u);  c.pc = t; return; }
L_0030AFA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 1484u)));
    set32(c.r[6], c.r[3].w[0] + 526u);
    c.r[5].d[0] = ld8((c.r[3].w[0] + 526u));
    c.r[3].d[0] = c.r[5].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0030AFF0; } }
    c.r[3].d[0] = c.r[5].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030AFF0; } }
    set32(c.r[3], 0u - 33u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0030AFF0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0030B150; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.f[3] = ld32((c.r[7].w[0] + 32u));
    c.f[1] = ld32((c.r[7].w[0] + 40u));
    c.f[2] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B018u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x0030B018u) [[unlikely]] return; }
L_0030B018:
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[3].d[0] = c.r[3].d[0] | 63875ull;
    c.f[1] = c.r[3].w[0];
    c.f[5] = ld32((c.r[6].w[0] + 104u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[0], c.f[5]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    set32(c.r[5], c.f[0]);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[6] = c.r[3].w[0];
    c.f[6] = fp::ee::add(c.fcr31, c.f[0], c.f[6]);
    c.f[6] = fp::cvt_w_s(c.f[6]);
    c.f[6] = fp::cvt_s_w(c.f[6]);
    set32(c.r[4], ld32((c.r[6].w[0] + 752u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[5].d[0] = c.r[3].d[0] | 4059ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[2] = 0u;
    c.f[3] = c.r[5].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    c.f[2] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[6]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = c.f[2] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 37;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030B148; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030B0C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[0]);  if (t) { goto L_0030B0C4; } }
L_0030B0C0:
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[0]);
    c.budget -= 1;
L_0030B0C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[3].d[0] = c.r[3].d[0] | 63875ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    set32(c.r[5], c.f[0]);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[6].w[0] + 104u));
    c.f[2] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 29;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030B140; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[6].w[0] + 404u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0030B140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 104u), c.f[1]);  if (t) { goto L_0030B150; } }
L_0030B148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B0C4u | kUnwind; return; } goto L_0030B0C4; } }
L_0030B150:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030B160:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[3].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], c.r[3].w[0] << 3);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[15], c.r[3].w[0] << 5);
    c.r[7].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[2], 0u - 5u);
    set32(c.r[12], c.r[3].w[0] << 11);
    set32(c.r[25], 0u - 9u);
    set32(c.r[13], 0u - 17u);
    c.r[24].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[14], 0u - 33u);
    set32(c.r[11], 0u - 2049u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[10], 0u + 94u);
    set32(c.r[8], c.r[8].w[0] - 11840u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[3].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], 0u - 3u);
    c.r[19].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[25].d[0] = c.r[19].d[0] & c.r[25].d[0];
    c.r[25].d[0] = c.r[25].d[0] | c.r[18].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[25].w[0]));
    c.r[25].d[0] = ld16((c.r[4].w[0]));
    c.r[13].d[0] = c.r[25].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[24].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld16((c.r[4].w[0]));
    c.r[13].d[0] = c.r[13].d[0] & c.r[14].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[15].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld16((c.r[4].w[0]));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[14].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[4].w[0]));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 67;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0030B2F0; } }
    set32(c.r[2], 0u + 26u);
    c.budget -= 1;
L_0030B270:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { goto L_0030B300; } }
L_0030B2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B2F8u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0030B2F8u) [[unlikely]] return; }
L_0030B2F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 26u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B270u | kUnwind; return; } goto L_0030B270; } }
L_0030B300:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030B320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0030B36C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[3].w[0] - 11808u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], 0u - 33u);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 526u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B36Cu); st8((c.r[7].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x0030B36Cu) [[unlikely]] return; }
L_0030B36C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030B380:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
L_0030B398:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B3A4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x0030B3A4u) [[unlikely]] return; }
L_0030B3A4:
    set32(c.r[17], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[16], c.r[2].w[0] + 26u);
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 344u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B398u | kUnwind; return; } goto L_0030B398; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030B454; } }
    st16((c.r[17].w[0] + 380u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 1;
L_0030B3DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 360u), 0u);
    st32((c.r[17].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[17].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    st32((c.r[17].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[17].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 376u));
    c.f[0] = ld32((c.r[17].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 30;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 372u), c.f[0]);  if (t) { goto L_0030B464; } }
L_0030B454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B45Cu); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0030B45Cu) [[unlikely]] return; }
L_0030B45C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 380u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B3DCu | kUnwind; return; } goto L_0030B3DC; } }
L_0030B464:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030B480:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 526u));
    set32(c.r[6], c.r[3].w[0] + 526u);
    c.r[3].d[0] = c.r[5].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030B4C0; } }
    c.r[3].d[0] = c.r[5].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030B4C0; } }
    set32(c.r[3], 0u - 33u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0030B4C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030B4D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[6], c.r[3].w[0] << 2);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[19], c.r[3].w[0] << 3);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[24], c.r[3].w[0] << 5);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[13], c.r[3].w[0] << 11);
    c.r[7].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[2], 0u - 5u);
    set32(c.r[18], 0u - 9u);
    set32(c.r[14], 0u - 17u);
    c.r[25].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[15], 0u - 33u);
    set32(c.r[12], 0u - 2049u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[11], 0u + 93u);
    set32(c.r[9], c.r[9].w[0] - 11808u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[3].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], 0u - 3u);
    c.r[20].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[3], 0u + 26u);
    c.r[18].d[0] = c.r[20].d[0] & c.r[18].d[0];
    c.r[18].d[0] = c.r[18].d[0] | c.r[19].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[18].d[0] = ld16((c.r[4].w[0]));
    c.r[14].d[0] = c.r[18].d[0] & c.r[14].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[25].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.r[14].d[0] = ld16((c.r[4].w[0]));
    c.r[14].d[0] = c.r[14].d[0] & c.r[15].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[24].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.r[14].d[0] = ld16((c.r[4].w[0]));
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[9].w[0]);
    c.r[9].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[15].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[9].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld16((c.r[5].w[0] + 380u));
    c.budget -= 69;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0030B5F8; } }
    set32(c.r[2], 0u + 27u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0030B5F8; } }
L_0030B5F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030B698; } }
L_0030B5F8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030B688; } }
    set32(c.r[2], 0u + 26u);
    c.budget -= 1;
L_0030B60C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 356u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B5F0u | kUnwind; return; } goto L_0030B5F0; } }
L_0030B688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B690u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0030B690u) [[unlikely]] return; }
L_0030B690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 26u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B60Cu | kUnwind; return; } goto L_0030B60C; } }
L_0030B698:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0030B6C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0030B704; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 11776u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st16((c.r[2].w[0] + 1494u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B6F8u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0037(c, 125u, depth + 1u); else { c.pc = 0x002DEB40u; return; } if (c.pc != 0x0030B6F8u) [[unlikely]] return; }
L_0030B6F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B704u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x0030B704u) [[unlikely]] return; }
L_0030B704:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030B720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 380u));
    set32(c.r[3], c.r[3].w[0] - 216u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0030B98C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 5056u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00308000u < 16384u) { entry = entries_0042[(t - 0x00308000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0030B764:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030B77C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B77Cu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0030B77Cu) [[unlikely]] return; }
L_0030B77C:
    set32(c.r[2], 0u + 222u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B804u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0037(c, 125u, depth + 1u); else { c.pc = 0x002DEB40u; return; } if (c.pc != 0x0030B804u) [[unlikely]] return; }
L_0030B804:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030B964; } }
L_0030B80C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030B96C; } }
    set32(c.r[3], 0u + 219u);
    c.budget -= 1;
L_0030B820:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { goto L_0030B964; } }
L_0030B89C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030B97C; } }
    set32(c.r[3], 0u + 220u);
    c.budget -= 1;
L_0030B8B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[7], 0u - 2u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], 0u - 3u);
    st32((c.r[16].w[0] + 356u), c.r[3].w[0]);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 382u));
    set32(c.r[3], 0u - 5u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
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
    c.budget -= 43;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0030B964; } }
L_0030B95C:
    st32((c.r[16].w[0] + 360u), 0u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.budget -= 2;
L_0030B964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0030B990; } }
L_0030B96C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B974u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0030B974u) [[unlikely]] return; }
L_0030B974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 219u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B820u | kUnwind; return; } goto L_0030B820; } }
L_0030B97C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B984u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0030B984u) [[unlikely]] return; }
L_0030B984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 220u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B8B0u | kUnwind; return; } goto L_0030B8B0; } }
L_0030B98C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0030B990:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030B9A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 222u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 380u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0030B9D8; } }
    c.f[1] = ld32((c.r[4].w[0] + 360u));
    c.f[0] = ld32((c.r[28].w[0] - 32144u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030B9D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B9D8u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_001F(c, 188u, depth + 1u); else { c.pc = 0x0027DCB0u; return; } if (c.pc != 0x0030B9D8u) [[unlikely]] return; }
L_0030B9D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0030B9F0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[24], c.r[3].w[0] << 2);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[15], 0u - 9u);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    set32(c.r[19], c.r[3].w[0] << 3);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[13], 0u - 17u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[11], 0u - 33u);
    c.r[25].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[2], 0u - 5u);
    set32(c.r[12], c.r[3].w[0] << 5);
    set32(c.r[10], c.r[3].w[0] << 11);
    set32(c.r[9], 0u - 2049u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], 0u + 92u);
    set32(c.r[7], c.r[7].w[0] - 11776u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[25].d[0] & c.r[2].d[0];
    c.r[24].d[0] = c.r[2].d[0] | c.r[24].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[24].w[0]));
    set32(c.r[2], 0u - 3u);
    c.r[24].d[0] = ld16((c.r[4].w[0]));
    c.r[15].d[0] = c.r[24].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[19].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld16((c.r[4].w[0]));
    c.r[13].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld16((c.r[4].w[0]));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld16((c.r[4].w[0]));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[17].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    c.r[7].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 20u), c.f[12]);
    set32(c.r[25], ld32((c.r[6].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 65;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BAF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030BAF4u) [[unlikely]] return; }
L_0030BAF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0030BB04; } }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 2;
L_0030BB04:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.f[20] = 0u;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030BD58; } }
L_0030BB14:
    c.r[6].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 3u);
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030BE78; } }
    set32(c.r[2], 0u + 221u);
    c.budget -= 1;
L_0030BB5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[17].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[17].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[17].w[0] + 356u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 382u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    st32((c.r[17].w[0] + 368u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 356u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[17].w[0] + 376u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 376u));
    c.f[0] = ld32((c.r[17].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 372u), c.f[0]);
    c.budget -= 32;
    { const bool t = c.r[16].d[0] == 0ull; st16((c.r[17].w[0] + 1494u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0030BC30; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BBF0u); set32(c.r[19], c.r[17].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030BBF0u) [[unlikely]] return; }
L_0030BBF0:
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.f[4] = ld32((c.r[19].w[0] + 8u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 136u), c.f[4]);
    st32((c.r[29].w[0] + 132u), c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BC30u); st32((c.r[29].w[0] + 128u), c.f[0]);  if (depth < kMaxDepth) unit_0037(c, 126u, depth + 1u); else { c.pc = 0x002DEB60u; return; } if (c.pc != 0x0030BC30u) [[unlikely]] return; }
L_0030BC30:
    set32(c.r[3], ld32((c.r[17].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030BE88; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1581u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030BC54; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_0030BC54:
    set32(c.r[2], ld32((c.r[17].w[0] + 348u)));
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0030BC64:
    c.f[2] = ld32((c.r[2].w[0] + 56u));
    c.f[1] = ld32((c.r[2].w[0] + 52u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    st32((c.r[29].w[0] + 104u), c.f[2]);
    set32(c.r[7], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 9;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0030BCEC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0030BCB0; } }
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030BCB0; } }
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0030BCB0:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29524u));
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 5080u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15952u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BCE4u); c.f[12] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0091(c, 82u, depth + 1u); else { c.pc = 0x00445290u; return; } if (c.pc != 0x0030BCE4u) [[unlikely]] return; }
L_0030BCE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0030BD50; } }
L_0030BCEC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0030BE94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BCFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x0030BCFCu) [[unlikely]] return; }
L_0030BCFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030BE94; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0030BD2C; } }
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030BD2C; } }
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0030BD2C:
    c.f[12] = ld32((c.r[18].w[0] + 20u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15952u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BD4Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 75u, depth + 1u); else { c.pc = 0x00445170u; return; } if (c.pc != 0x0030BD4Cu) [[unlikely]] return; }
L_0030BD4C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0030BD50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0030BF38; } }
L_0030BD58:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29524u));
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[28].w[0] - 29524u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29524u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030BE30; } }
L_0030BD74:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 220u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030BE70; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1492u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 103u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030BE38; } }
L_0030BD9C:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = ld32((c.r[28].w[0] - 32272u));
    c.f[0] = c.r[2].w[0];
    c.f[5] = ld32((c.r[3].w[0] + 36u));
    c.f[4] = ld32((c.r[3].w[0] + 116u));
    c.f[7] = ld32((c.r[3].w[0] + 32u));
    c.f[6] = ld32((c.r[3].w[0] + 112u));
    c.f[3] = ld32((c.r[3].w[0] + 40u));
    c.f[2] = ld32((c.r[3].w[0] + 120u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.f[2] = fp::ee::sqrt(c.fcr31, c.f[2]);
    c.f[22] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 22;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030BDF8; } }
    c.f[22] = c.f[0];
    c.budget -= 1;
L_0030BDF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[21] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BE0Cu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x0030BE0Cu) [[unlikely]] return; }
L_0030BE0C:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[22]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BB14u | kUnwind; return; } goto L_0030BB14; } }
L_0030BE30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29524u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BD74u | kUnwind; return; } goto L_0030BD74; } }
L_0030BE38:
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 1492u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BD9Cu | kUnwind; return; } goto L_0030BD9C; } }
L_0030BE70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1492u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BB14u | kUnwind; return; } goto L_0030BB14; } }
L_0030BE78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BE80u); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0030BE80u) [[unlikely]] return; }
L_0030BE80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 221u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BB5Cu | kUnwind; return; } goto L_0030BB5C; } }
L_0030BE88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 5152u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BC64u | kUnwind; return; } goto L_0030BC64; } }
L_0030BE94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[29].w[0] + 112u), 0u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[16], c.r[29].w[0] + 120u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.f[21] = ld32((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BEBCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x0030BEBCu) [[unlikely]] return; }
L_0030BEBC:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BEC8u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x0030BEC8u) [[unlikely]] return; }
L_0030BEC8:
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[4] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[2] = 0u;
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[20]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[20]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 212u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0030BF14; } }
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030BF14; } }
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0030BF14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15952u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[7], c.r[29].w[0] + 112u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BF30u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 61u, depth + 1u); else { c.pc = 0x00444D90u; return; } if (c.pc != 0x0030BF30u) [[unlikely]] return; }
L_0030BF30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BD4Cu | kUnwind; return; } goto L_0030BD4C; } }
L_0030BF38:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0030BF60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0030BFC4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[3].w[0] - 11744u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], 0u - 33u);
    st16((c.r[5].w[0] + 1494u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 526u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[6].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BFB8u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0037(c, 125u, depth + 1u); else { c.pc = 0x002DEB40u; return; } if (c.pc != 0x0030BFB8u) [[unlikely]] return; }
L_0030BFB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BFC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x0030BFC4u) [[unlikely]] return; }
L_0030BFC4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030BFE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 220u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 380u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0043(c, 3u, depth); } }
    [[clang::musttail]] return unit_0043(c, 1u, depth);
}

}

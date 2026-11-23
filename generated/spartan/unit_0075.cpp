#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0075[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0,
    11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0,
    0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122,
    0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0,
    0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0,
    0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139,
    0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0,
    0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153,
    0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 157, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0,
    190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0,
    0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 209, 210, 211, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 215, 216, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 220, 0, 221, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 235, 0, 0, 236, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 238, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240,
    0, 0, 0, 0, 0, 241, 0, 242, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0,
    254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256,
    0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0075(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003D4000;
    case 2u: goto L_003D4010;
    case 3u: goto L_003D4084;
    case 4u: goto L_003D40A0;
    case 5u: goto L_003D40B0;
    case 6u: goto L_003D40C0;
    case 7u: goto L_003D40D0;
    case 8u: goto L_003D4144;
    case 9u: goto L_003D4160;
    case 10u: goto L_003D4170;
    case 11u: goto L_003D4180;
    case 12u: goto L_003D4190;
    case 13u: goto L_003D4204;
    case 14u: goto L_003D4220;
    case 15u: goto L_003D4290;
    case 16u: goto L_003D42F0;
    case 17u: goto L_003D431C;
    case 18u: goto L_003D4350;
    case 19u: goto L_003D4390;
    case 20u: goto L_003D4408;
    case 21u: goto L_003D4480;
    case 22u: goto L_003D44C0;
    case 23u: goto L_003D4520;
    case 24u: goto L_003D4530;
    case 25u: goto L_003D4540;
    case 26u: goto L_003D4550;
    case 27u: goto L_003D4560;
    case 28u: goto L_003D4588;
    case 29u: goto L_003D4600;
    case 30u: goto L_003D4720;
    case 31u: goto L_003D47AC;
    case 32u: goto L_003D47D0;
    case 33u: goto L_003D47DC;
    case 34u: goto L_003D4858;
    case 35u: goto L_003D4864;
    case 36u: goto L_003D48D0;
    case 37u: goto L_003D4ADC;
    case 38u: goto L_003D4AE4;
    case 39u: goto L_003D4B50;
    case 40u: goto L_003D4C5C;
    case 41u: goto L_003D4CD0;
    case 42u: goto L_003D4D18;
    case 43u: goto L_003D4D6C;
    case 44u: goto L_003D4DC0;
    case 45u: goto L_003D4DD8;
    case 46u: goto L_003D4E50;
    case 47u: goto L_003D4EA4;
    case 48u: goto L_003D4EF8;
    case 49u: goto L_003D4F20;
    case 50u: goto L_003D4F50;
    case 51u: goto L_003D4F80;
    case 52u: goto L_003D4F94;
    case 53u: goto L_003D4FF4;
    case 54u: goto L_003D5058;
    case 55u: goto L_003D50F0;
    case 56u: goto L_003D5100;
    case 57u: goto L_003D5138;
    case 58u: goto L_003D5184;
    case 59u: goto L_003D51AC;
    case 60u: goto L_003D51C8;
    case 61u: goto L_003D51D4;
    case 62u: goto L_003D51EC;
    case 63u: goto L_003D5230;
    case 64u: goto L_003D5258;
    case 65u: goto L_003D5270;
    case 66u: goto L_003D5280;
    case 67u: goto L_003D5290;
    case 68u: goto L_003D52A0;
    case 69u: goto L_003D52C8;
    case 70u: goto L_003D5338;
    case 71u: goto L_003D5340;
    case 72u: goto L_003D534C;
    case 73u: goto L_003D535C;
    case 74u: goto L_003D5368;
    case 75u: goto L_003D5380;
    case 76u: goto L_003D5508;
    case 77u: goto L_003D5530;
    case 78u: goto L_003D556C;
    case 79u: goto L_003D5584;
    case 80u: goto L_003D55B0;
    case 81u: goto L_003D5628;
    case 82u: goto L_003D5640;
    case 83u: goto L_003D56B0;
    case 84u: goto L_003D587C;
    case 85u: goto L_003D5918;
    case 86u: goto L_003D5960;
    case 87u: goto L_003D59F4;
    case 88u: goto L_003D5A30;
    case 89u: goto L_003D5AE0;
    case 90u: goto L_003D5B08;
    case 91u: goto L_003D5B30;
    case 92u: goto L_003D5B50;
    case 93u: goto L_003D5BC0;
    case 94u: goto L_003D5C40;
    case 95u: goto L_003D5C60;
    case 96u: goto L_003D5C6C;
    case 97u: goto L_003D5CB0;
    case 98u: goto L_003D5CD0;
    case 99u: goto L_003D5D2C;
    case 100u: goto L_003D5D38;
    case 101u: goto L_003D5DE8;
    case 102u: goto L_003D5E9C;
    case 103u: goto L_003D5EA8;
    case 104u: goto L_003D5F0C;
    case 105u: goto L_003D6090;
    case 106u: goto L_003D60A0;
    case 107u: goto L_003D60BC;
    case 108u: goto L_003D613C;
    case 109u: goto L_003D61B4;
    case 110u: goto L_003D61F8;
    case 111u: goto L_003D6218;
    case 112u: goto L_003D6244;
    case 113u: goto L_003D625C;
    case 114u: goto L_003D6300;
    case 115u: goto L_003D631C;
    case 116u: goto L_003D6348;
    case 117u: goto L_003D63A0;
    case 118u: goto L_003D6478;
    case 119u: goto L_003D64A4;
    case 120u: goto L_003D6510;
    case 121u: goto L_003D651C;
    case 122u: goto L_003D657C;
    case 123u: goto L_003D6598;
    case 124u: goto L_003D65A8;
    case 125u: goto L_003D65B4;
    case 126u: goto L_003D65E8;
    case 127u: goto L_003D65F4;
    case 128u: goto L_003D6674;
    case 129u: goto L_003D6698;
    case 130u: goto L_003D6704;
    case 131u: goto L_003D6710;
    case 132u: goto L_003D6770;
    case 133u: goto L_003D678C;
    case 134u: goto L_003D679C;
    case 135u: goto L_003D67A8;
    case 136u: goto L_003D67DC;
    case 137u: goto L_003D67E8;
    case 138u: goto L_003D6864;
    case 139u: goto L_003D687C;
    case 140u: goto L_003D6894;
    case 141u: goto L_003D68E0;
    case 142u: goto L_003D6968;
    case 143u: goto L_003D698C;
    case 144u: goto L_003D6998;
    case 145u: goto L_003D69B4;
    case 146u: goto L_003D69BC;
    case 147u: goto L_003D69D4;
    case 148u: goto L_003D69EC;
    case 149u: goto L_003D6A10;
    case 150u: goto L_003D6A50;
    case 151u: goto L_003D6A9C;
    case 152u: goto L_003D6AB0;
    case 153u: goto L_003D6AFC;
    case 154u: goto L_003D6B20;
    case 155u: goto L_003D6B4C;
    case 156u: goto L_003D6B64;
    case 157u: goto L_003D6B68;
    case 158u: goto L_003D6C08;
    case 159u: goto L_003D6C18;
    case 160u: goto L_003D6C38;
    case 161u: goto L_003D6C64;
    case 162u: goto L_003D6C7C;
    case 163u: goto L_003D6CAC;
    case 164u: goto L_003D6CE0;
    case 165u: goto L_003D6CF0;
    case 166u: goto L_003D6D00;
    case 167u: goto L_003D6D8C;
    case 168u: goto L_003D6D9C;
    case 169u: goto L_003D6DBC;
    case 170u: goto L_003D6DC4;
    case 171u: goto L_003D6DFC;
    case 172u: goto L_003D6E2C;
    case 173u: goto L_003D6E50;
    case 174u: goto L_003D6E84;
    case 175u: goto L_003D6E98;
    case 176u: goto L_003D6EE4;
    case 177u: goto L_003D6F08;
    case 178u: goto L_003D6F24;
    case 179u: goto L_003D6FE0;
    case 180u: goto L_003D6FF0;
    case 181u: goto L_003D7010;
    case 182u: goto L_003D7030;
    case 183u: goto L_003D7090;
    case 184u: goto L_003D70A0;
    case 185u: goto L_003D70B0;
    case 186u: goto L_003D70C0;
    case 187u: goto L_003D70D0;
    case 188u: goto L_003D70E0;
    case 189u: goto L_003D70F0;
    case 190u: goto L_003D7100;
    case 191u: goto L_003D7110;
    case 192u: goto L_003D7170;
    case 193u: goto L_003D7184;
    case 194u: goto L_003D7260;
    case 195u: goto L_003D72B8;
    case 196u: goto L_003D72C4;
    case 197u: goto L_003D7380;
    case 198u: goto L_003D73C4;
    case 199u: goto L_003D7460;
    case 200u: goto L_003D74B0;
    case 201u: goto L_003D758C;
    case 202u: goto L_003D75C0;
    case 203u: goto L_003D75D8;
    case 204u: goto L_003D760C;
    case 205u: goto L_003D7630;
    case 206u: goto L_003D763C;
    case 207u: goto L_003D7640;
    case 208u: goto L_003D7654;
    case 209u: goto L_003D768C;
    case 210u: goto L_003D7690;
    case 211u: goto L_003D7694;
    case 212u: goto L_003D76A4;
    case 213u: goto L_003D76AC;
    case 214u: goto L_003D76D8;
    case 215u: goto L_003D76DC;
    case 216u: goto L_003D76E0;
    case 217u: goto L_003D7720;
    case 218u: goto L_003D7770;
    case 219u: goto L_003D77B4;
    case 220u: goto L_003D7804;
    case 221u: goto L_003D780C;
    case 222u: goto L_003D7818;
    case 223u: goto L_003D7820;
    case 224u: goto L_003D7978;
    case 225u: goto L_003D7980;
    case 226u: goto L_003D79E0;
    case 227u: goto L_003D7A58;
    case 228u: goto L_003D7AA0;
    case 229u: goto L_003D7AA8;
    case 230u: goto L_003D7AB0;
    case 231u: goto L_003D7ABC;
    case 232u: goto L_003D7AC8;
    case 233u: goto L_003D7AD4;
    case 234u: goto L_003D7AE0;
    case 235u: goto L_003D7AE8;
    case 236u: goto L_003D7AF4;
    case 237u: goto L_003D7B38;
    case 238u: goto L_003D7B3C;
    case 239u: goto L_003D7B40;
    case 240u: goto L_003D7B7C;
    case 241u: goto L_003D7B94;
    case 242u: goto L_003D7B9C;
    case 243u: goto L_003D7BA4;
    case 244u: goto L_003D7BB4;
    case 245u: goto L_003D7C00;
    case 246u: goto L_003D7C1C;
    case 247u: goto L_003D7C58;
    case 248u: goto L_003D7C88;
    case 249u: goto L_003D7DE8;
    case 250u: goto L_003D7E18;
    case 251u: goto L_003D7E38;
    case 252u: goto L_003D7E48;
    case 253u: goto L_003D7E70;
    case 254u: goto L_003D7E80;
    case 255u: goto L_003D7EA0;
    case 256u: goto L_003D7EFC;
    case 257u: goto L_003D7F0C;
    case 258u: goto L_003D7F30;
    case 259u: goto L_003D7F98;
    case 260u: goto L_003D7FDC;
    default: bad_entry(c, 0x003D4000u); return;
    }
L_003D4000:
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003D4010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003D4084; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 6976u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003D406C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003D406C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003D406C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_003D406C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003D4084; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4084u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003D4084u) [[unlikely]] return; }
L_003D4084:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D40A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 85u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003D40B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D40C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D40D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003D4144; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 6304u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003D412C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 16976u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003D412C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003D412C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_003D412C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003D4144; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4144u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003D4144u) [[unlikely]] return; }
L_003D4144:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D4160:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D4170:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D4180:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D4190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003D4204; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 5984u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003D41EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 16976u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003D41EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003D41EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_003D41EC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003D4204; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4204u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003D4204u) [[unlikely]] return; }
L_003D4204:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D4220:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D4410; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D4410; } }
    c.f[2] = ld32((c.r[17].w[0] + 40u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D4418; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D4418; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003D4290:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D4420; } }
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D42C4; } }
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { goto L_003D42F0; } }
L_003D42C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] - 20412u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 8u), c.f[0]);  if (t) { goto L_003D42F0; } }
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.budget -= 4;
L_003D42F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D4308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D4314; } }
L_003D4308:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003D4314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D431Cu); c.r[18].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_007A(c, 85u, depth + 1u); else { c.pc = 0x003E8B20u; return; } if (c.pc != 0x003D431Cu) [[unlikely]] return; }
L_003D431C:
    c.f[3] = ld32((c.r[17].w[0] + 28u));
    c.f[2] = ld32((c.r[17].w[0] + 24u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003D443C; } }
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D443C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003D443C; } }
    c.f[4] = ld32((c.r[17].w[0] + 36u));
    c.budget -= 1;
L_003D4350:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[3] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[4], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003D4388; } }
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D4388; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003D4388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003D43B8; } }
L_003D4390:
    c.f[4] = ld32((c.r[17].w[0] + 36u));
    c.f[3] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.f[2] = c.f[2] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003D43B4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D43B4:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_003D43B8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D444C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003D444C; } }
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[3] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D4460; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = ld32((c.r[3].w[0] - 20412u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 20u), c.f[1]);  if (t) { goto L_003D4468; } }
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[17].w[0] + 36u), c.f[1]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.budget -= 3;
L_003D4408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003D446C; } }
L_003D4410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4290u | kUnwind; return; } goto L_003D4290; } }
L_003D4418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4290u | kUnwind; return; } goto L_003D4290; } }
L_003D4420:
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D42F0u | kUnwind; return; } goto L_003D42F0; } }
L_003D443C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4390u | kUnwind; return; } goto L_003D4390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = ld32((c.r[17].w[0] + 36u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4350u | kUnwind; return; } goto L_003D4350; } }
L_003D444C:
    st32((c.r[17].w[0] + 36u), c.f[3]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4408u | kUnwind; return; } goto L_003D4408; } }
L_003D4460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.f[4]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4408u | kUnwind; return; } goto L_003D4408; } }
L_003D4468:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D446C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D4480:
    c.f[3] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 24u), c.f[12]);
    st32((c.r[4].w[0] + 32u), c.f[3]);
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 44u), c.f[0]);  c.pc = t; return; }
L_003D44C0:
    set32(c.r[6], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF590000u);
    st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], 0u - 1u);
    st8((c.r[4].w[0] + 49u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 112u), 0u);
    st32((c.r[4].w[0] + 128u), 0u);
    st8((c.r[4].w[0] + 132u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 133u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 134u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 135u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 208u), 0u);
    st32((c.r[4].w[0] + 144u), 0u);
    st32((c.r[4].w[0] + 148u), 0u);
    st32((c.r[4].w[0] + 152u), 0u);
    st16((c.r[4].w[0] + 212u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), 0u);  c.pc = t; return; }
L_003D4520:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 135u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_003D4530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 132u));  c.pc = t; return; }
L_003D4540:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 133u));  c.pc = t; return; }
L_003D4550:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 134u));  c.pc = t; return; }
L_003D4560:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4588u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_007A(c, 316u, depth + 1u); else { c.pc = 0x003EB660u; return; } if (c.pc != 0x003D4588u) [[unlikely]] return; }
L_003D4588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D45DC; } }
    c.f[3] = ld32((c.r[29].w[0] + 84u));
    c.f[4] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[5] = ld32((c.r[29].w[0] + 88u));
    c.f[6] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[20]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[5], c.f[6]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    st32((c.r[29].w[0] + 72u), c.f[5]);
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 68u), c.f[3]);  if (t) { goto L_003D45DC; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D45DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003D4600:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[0] = c.r[3].w[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[7].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 20;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_003D4654; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D4654:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D467C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBA830000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_003D467C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D467C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D46D8; } }
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_003D46A8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D46A8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D46D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBA830000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_003D46D0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D46D0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003D4898; } }
L_003D46D8:
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    set32(c.r[18], c.r[29].w[0] + 164u);
    c.f[3] = ld32((c.r[5].w[0]));
    set32(c.r[17], c.r[29].w[0] + 168u);
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    set32(c.r[16], c.r[29].w[0] + 172u);
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.f[3]);
    st32((c.r[17].w[0]), c.f[2]);
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4720u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_007A(c, 310u, depth + 1u); else { c.pc = 0x003EB3E0u; return; } if (c.pc != 0x003D4720u) [[unlikely]] return; }
L_003D4720:
    c.f[8] = ld32((c.r[29].w[0] + 144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EB20000u);
    c.f[3] = ld32((c.r[29].w[0] + 148u));
    c.r[2].d[0] = c.r[2].d[0] | 47298ull;
    c.f[2] = ld32((c.r[29].w[0] + 152u));
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    c.f[7] = ld32((c.r[20].w[0] + 8u));
    c.f[1] = ld32((c.r[20].w[0]));
    st32((c.r[29].w[0] + 160u), c.f[8]);
    st32((c.r[18].w[0]), c.f[3]);
    st32((c.r[17].w[0]), c.f[2]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[6] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[5] = ld32((c.r[29].w[0] + 168u));
    c.f[4] = ld32((c.r[20].w[0] + 4u));
    c.f[3] = ld32((c.r[19].w[0] + 4u));
    c.f[2] = ld32((c.r[29].w[0] + 164u));
    c.f[6] = fp::ee::add(c.fcr31, c.f[7], c.f[6]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[5], c.f[6]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[8], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[5], c.f[5]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[20] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 136u), c.f[5]);
    st32((c.r[29].w[0] + 132u), c.f[2]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D47ACu);  if (depth < kMaxDepth) unit_000B(c, 72u, depth + 1u); else { c.pc = 0x0022DA40u; return; } if (c.pc != 0x003D47ACu) [[unlikely]] return; }
L_003D47AC:
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[2] = 0u;
    c.f[1] = ld32((c.r[20].w[0] + 4u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[19].w[0] + 4u), c.f[0]);  if (t) { goto L_003D4890; } }
L_003D47D0:
    c.f[13] = ld32((c.r[19].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D47DCu); c.f[12] = ld32((c.r[19].w[0]));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x003D47DCu) [[unlikely]] return; }
L_003D47DC:
    set32(c.r[3], ld32((c.r[21].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.r[5].d[0] = 0ull | 0ull;
    c.f[3] = c.r[2].w[0];
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.f[4] = ld32((c.r[3].w[0] + 180u));
    c.f[1] = 0u;
    c.f[2] = c.r[2].w[0];
    c.f[21] = ld32((c.r[19].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[4], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[1]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4858u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003D4858u) [[unlikely]] return; }
L_003D4858:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4864u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003D4864u) [[unlikely]] return; }
L_003D4864:
    c.f[2] = ld32((c.r[19].w[0] + 8u));
    c.f[3] = ld32((c.r[19].w[0]));
    c.f[1] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 8u), c.f[0]);  if (t) { goto L_003D4898; } }
L_003D4890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D47D0u | kUnwind; return; } goto L_003D47D0; } }
L_003D4898:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003D48D0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[9] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 22903u));
    c.f[20] = ld32((c.r[29].w[0] + 92u));
    c.f[21] = ld32((c.r[29].w[0] + 108u));
    c.f[2] = ld32((c.r[29].w[0] + 140u));
    c.f[1] = ld32((c.r[29].w[0] + 156u));
    c.f[22] = ld32((c.r[29].w[0] + 176u));
    c.f[23] = ld32((c.r[29].w[0] + 180u));
    c.f[24] = ld32((c.r[29].w[0] + 184u));
    c.f[25] = ld32((c.r[29].w[0] + 188u));
    c.budget -= 23;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D4958; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[3].w[0] + 160u), 0u);
    st32((c.r[3].w[0] + 164u), 0u);
    st32((c.r[3].w[0] + 168u), 0u);
    st32((c.r[3].w[0] + 172u), c.f[1]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[3].w[0] + 144u), 0u);
    st32((c.r[3].w[0] + 148u), 0u);
    st32((c.r[3].w[0] + 152u), 0u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 156u), c.f[2]);  if (t) { goto L_003D4C9C; } }
L_003D4958:
    c.f[8] = ld32((c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[7] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[6] = ld32((c.r[5].w[0] + 4u));
    c.f[5] = ld32((c.r[6].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[4] = 0u;
    c.f[7] = fp::ee::sub(c.fcr31, c.f[8], c.f[7]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[7], c.f[7]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[3] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[3]));
    c.budget -= 24;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D4ADC; } }
    c.f[1] = fp::ee::add(c.fcr31, c.f[5], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[6]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[4]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D49EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_003D4A0C; } }
L_003D49EC:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D4A00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = c.f[3];  if (t) { goto L_003D4A08; } }
L_003D4A00:
    c.f[3] = c.f[1];
    c.f[4] = c.f[3];
    c.budget -= 2;
L_003D4A08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 1;
L_003D4A0C:
    c.f[1] = c.r[2].w[0];
    c.f[22] = 0u;
    c.f[12] = fp::ee::mul(c.fcr31, c.f[4], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[22]));
    c.f[25] = c.f[9];
    c.f[24] = c.f[22];
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[23] = c.f[12];  if (t) { goto L_003D4C64; } }
    c.f[2] = ld32((c.r[16].w[0] + 144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003D4A50; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D4A50:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D4A78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBC230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003D4A78; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D4A78:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D4B8C; } }
    c.f[3] = ld32((c.r[16].w[0] + 152u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003D4AA4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D4AA4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D4ACC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBC230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003D4ACC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D4ACC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D4C64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 160u), c.f[2]);  if (t) { goto L_003D4B90; } }
L_003D4ADC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D4C78; } }
L_003D4AE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40AC0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.f[1] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[2] = ld32((c.r[28].w[0] - 29672u));
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.f[3] = ld32((c.r[29].w[0] + 164u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[4] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[3].w[0] + 148u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[3].w[0] + 144u);  if (t) { goto L_003D4B40; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D4B44; } }
L_003D4B40:
    c.f[12] = c.f[4];
    c.budget -= 1;
L_003D4B44:
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4B50u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 187u, depth + 1u); else { c.pc = 0x00471D60u; return; } if (c.pc != 0x003D4B50u) [[unlikely]] return; }
L_003D4B50:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[3].w[0] + 160u), c.f[22]);
    st32((c.r[3].w[0] + 164u), c.f[23]);
    st32((c.r[3].w[0] + 168u), c.f[24]);
    st32((c.r[3].w[0] + 172u), c.f[25]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[3].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[3].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[3].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 156u), c.f[0]);  if (t) { goto L_003D4C9C; } }
L_003D4B8C:
    st32((c.r[29].w[0] + 160u), c.f[2]);
    c.budget -= 1;
L_003D4B90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[16].w[0] + 148u));
    set32(c.r[7], c.r[29].w[0] + 164u);
    c.f[6] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.f[0] = c.r[2].w[0];
    c.f[4] = ld32((c.r[29].w[0] + 160u));
    c.facc = fp::ee::mul(c.fcr31, c.f[6], c.f[6]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    st32((c.r[7].w[0]), c.f[2]);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[2] = ld32((c.r[16].w[0] + 152u));
    c.f[7] = fp::ee::mul(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[4].w[0]), c.f[2]);
    c.f[2] = ld32((c.r[16].w[0] + 156u));
    c.f[5] = ld32((c.r[4].w[0]));
    c.f[0] = c.r[2].w[0];
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[7]) <= fp::key(c.f[0]));
    st32((c.r[29].w[0] + 172u), c.f[2]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[2] = fp::ee::sqrt(c.fcr31, c.f[2]);
    c.f[3] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[29].w[0] + 160u), c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[6], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[5], c.f[3]);
    st32((c.r[7].w[0]), c.f[2]);
    c.budget -= 34;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0]), c.f[1]);  if (t) { goto L_003D4C1C; } }
    c.f[7] = c.f[0];
    c.budget -= 1;
L_003D4C1C:
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[7]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[7]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[7]);
    st32((c.r[29].w[0] + 160u), c.f[2]);
    st32((c.r[7].w[0]), c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 177u));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D4C5C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4C5Cu); set32(c.r[7], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0075(c, 29u, depth + 1u); else { c.pc = 0x003D4600u; return; } if (c.pc != 0x003D4C5Cu) [[unlikely]] return; }
L_003D4C5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4ADCu | kUnwind; return; } goto L_003D4ADC; } }
L_003D4C64:
    st32((c.r[29].w[0] + 172u), c.f[0]);
    st32((c.r[29].w[0] + 160u), 0u);
    st32((c.r[29].w[0] + 164u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 168u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4C5Cu | kUnwind; return; } goto L_003D4C5C; } }
L_003D4C78:
    c.f[22] = 0u;
    st32((c.r[29].w[0] + 160u), 0u);
    st32((c.r[29].w[0] + 172u), c.f[20]);
    st32((c.r[29].w[0] + 164u), 0u);
    c.f[25] = c.f[21];
    st32((c.r[29].w[0] + 168u), 0u);
    c.f[23] = c.f[22];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.f[24] = c.f[22];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4AE4u | kUnwind; return; } goto L_003D4AE4; } }
L_003D4C9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003D4CD0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4D18u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_007A(c, 310u, depth + 1u); else { c.pc = 0x003EB3E0u; return; } if (c.pc != 0x003D4D18u) [[unlikely]] return; }
L_003D4D18:
    set32(c.r[20], c.r[29].w[0] + 200u);
    set32(c.r[22], c.r[29].w[0] + 196u);
    c.f[5] = ld32((c.r[20].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.f[4] = ld32((c.r[18].w[0] + 8u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[7], c.r[29].w[0] + 160u);
    c.f[3] = ld32((c.r[22].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[12] = ld32((c.r[19].w[0] + 36u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 136u), c.f[4]);
    st32((c.r[29].w[0] + 132u), c.f[2]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4D6Cu); st32((c.r[29].w[0] + 128u), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 281u, depth + 1u); else { c.pc = 0x002EB8E0u; return; } if (c.pc != 0x003D4D6Cu) [[unlikely]] return; }
L_003D4D6C:
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_003D4E00; } }
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 12u), c.f[0]);  if (t) { goto L_003D4DC0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 9;
L_003D4DC0:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4DD8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007A(c, 310u, depth + 1u); else { c.pc = 0x003EB3E0u; return; } if (c.pc != 0x003D4DD8u) [[unlikely]] return; }
L_003D4DD8:
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.f[0]);  if (t) { goto L_003D4E24; } }
L_003D4E00:
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0]));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0]));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 204u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4DC0u | kUnwind; return; } goto L_003D4DC0; } }
L_003D4E24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003D4E50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003D4EB4; } }
    c.f[12] = ld32((c.r[4].w[0] + 36u));
    c.r[8].d[0] = 0ull + 0ull;
    c.f[5] = ld32((c.r[6].w[0] + 8u));
    c.r[9].d[0] = 0ull + 0ull;
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    c.f[3] = ld32((c.r[6].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 40u), c.f[4]);
    st32((c.r[29].w[0] + 36u), c.f[2]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4EA4u); st32((c.r[29].w[0] + 32u), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 268u, depth + 1u); else { c.pc = 0x002EB540u; return; } if (c.pc != 0x003D4EA4u) [[unlikely]] return; }
L_003D4EA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D4F08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003D4F0C; } }
L_003D4EB4:
    c.f[12] = ld32((c.r[4].w[0] + 36u));
    c.r[8].d[0] = 0ull + 0ull;
    c.f[5] = ld32((c.r[6].w[0] + 8u));
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    c.f[3] = ld32((c.r[6].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 24u), c.f[4]);
    st32((c.r[29].w[0] + 20u), c.f[2]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4EF8u); st32((c.r[29].w[0] + 16u), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 281u, depth + 1u); else { c.pc = 0x002EB8E0u; return; } if (c.pc != 0x003D4EF8u) [[unlikely]] return; }
L_003D4EF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D4F08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003D4F0C; } }
L_003D4F08:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D4F0C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D4F20:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 135u));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D50F8; } }
    c.f[0] = ld32((c.r[19].w[0]));
    c.budget -= 1;
L_003D4F50:
    set32(c.r[18], c.r[29].w[0] + 212u);
    set32(c.r[17], c.r[29].w[0] + 216u);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29088u));
    set32(c.r[16], c.r[29].w[0] + 220u);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_003D51A0; } }
L_003D4F80:
    c.r[16].d[0] = ld8((c.r[20].w[0] + 135u));
    st8((c.r[20].w[0] + 135u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4F94u); set32(c.r[4], ld32((c.r[2].w[0] + 88u)));  if (depth < kMaxDepth) unit_007A(c, 87u, depth + 1u); else { c.pc = 0x003E8BC0u; return; } if (c.pc != 0x003D4F94u) [[unlikely]] return; }
L_003D4F94:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003D5004; } }
    set32(c.r[16], c.r[29].w[0] + 216u);
    set32(c.r[17], c.r[29].w[0] + 212u);
    c.f[5] = ld32((c.r[16].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[7], c.r[29].w[0] + 128u);
    c.f[3] = ld32((c.r[17].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 120u), c.f[4]);
    st32((c.r[29].w[0] + 116u), c.f[2]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[12] = ld32((c.r[20].w[0] + 36u));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4FF4u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 268u, depth + 1u); else { c.pc = 0x002EB540u; return; } if (c.pc != 0x003D4FF4u) [[unlikely]] return; }
L_003D4FF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D5068; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003D506C; } }
L_003D5004:
    set32(c.r[16], c.r[29].w[0] + 216u);
    set32(c.r[17], c.r[29].w[0] + 212u);
    c.f[5] = ld32((c.r[16].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[7], c.r[29].w[0] + 128u);
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 104u), c.f[4]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[12] = ld32((c.r[20].w[0] + 36u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5058u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 281u, depth + 1u); else { c.pc = 0x002EB8E0u; return; } if (c.pc != 0x003D5058u) [[unlikely]] return; }
L_003D5058:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D5068; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003D506C; } }
L_003D5068:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D506C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D50B4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[2] = ld32((c.r[29].w[0] + 132u));
    c.f[3] = ld32((c.r[29].w[0] + 136u));
    c.f[4] = ld32((c.r[29].w[0] + 140u));
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[20].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[20].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[20].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[20].w[0] + 156u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 152u)));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 212u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D50D0; } }
L_003D50B4:
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[4] = ld32((c.r[29].w[0] + 220u));
    st32((c.r[20].w[0] + 144u), 0u);
    st32((c.r[20].w[0] + 148u), 0u);
    st32((c.r[20].w[0] + 152u), 0u);
    c.budget -= 7;
L_003D50D0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D50F0; } }
    st32((c.r[19].w[0]), c.f[1]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 4u), c.f[2]);
    st32((c.r[19].w[0] + 8u), c.f[3]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 12u), c.f[4]);  if (t) { goto L_003D5210; } }
L_003D50F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D5210; } }
L_003D50F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5100u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007A(c, 311u, depth + 1u); else { c.pc = 0x003EB470u; return; } if (c.pc != 0x003D5100u) [[unlikely]] return; }
L_003D5100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D5110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003D5190; } }
L_003D5110:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 31676u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D5190; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    set32(c.r[6], c.r[2].w[0] + 112u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5138u); set32(c.r[7], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_007A(c, 310u, depth + 1u); else { c.pc = 0x003EB3E0u; return; } if (c.pc != 0x003D5138u) [[unlikely]] return; }
L_003D5138:
    c.f[5] = ld32((c.r[19].w[0] + 8u));
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.f[4] = ld32((c.r[29].w[0] + 184u));
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.f[3] = ld32((c.r[19].w[0] + 4u));
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.f[2] = ld32((c.r[29].w[0] + 180u));
    c.r[7].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 168u), c.f[4]);
    st32((c.r[29].w[0] + 164u), c.f[2]);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[12] = ld32((c.r[20].w[0] + 36u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5184u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 216u, depth + 1u); else { c.pc = 0x002EA5A0u; return; } if (c.pc != 0x003D5184u) [[unlikely]] return; }
L_003D5184:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D5190; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003D5190:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D50F0u | kUnwind; return; } goto L_003D50F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[19].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4F50u | kUnwind; return; } goto L_003D4F50; } }
L_003D51A0:
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D51ACu); set32(c.r[4], ld32((c.r[2].w[0] + 88u)));  if (depth < kMaxDepth) unit_007A(c, 87u, depth + 1u); else { c.pc = 0x003E8BC0u; return; } if (c.pc != 0x003D51ACu) [[unlikely]] return; }
L_003D51AC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D51C8u); set32(c.r[6], c.r[29].w[0] + 208u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D51C8u) [[unlikely]] return; }
L_003D51C8:
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D51D4u); set32(c.r[4], ld32((c.r[2].w[0] + 88u)));  if (depth < kMaxDepth) unit_007A(c, 87u, depth + 1u); else { c.pc = 0x003E8BC0u; return; } if (c.pc != 0x003D51D4u) [[unlikely]] return; }
L_003D51D4:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 208u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D51ECu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_007A(c, 310u, depth + 1u); else { c.pc = 0x003EB3E0u; return; } if (c.pc != 0x003D51ECu) [[unlikely]] return; }
L_003D51EC:
    c.f[3] = ld32((c.r[29].w[0] + 192u));
    c.f[2] = ld32((c.r[29].w[0] + 196u));
    c.f[1] = ld32((c.r[29].w[0] + 200u));
    c.f[0] = ld32((c.r[29].w[0] + 204u));
    st32((c.r[29].w[0] + 208u), c.f[3]);
    st32((c.r[18].w[0]), c.f[2]);
    st32((c.r[17].w[0]), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4F80u | kUnwind; return; } goto L_003D4F80; } }
L_003D5210:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003D5230:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5258u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 87u, depth + 1u); else { c.pc = 0x003E8BC0u; return; } if (c.pc != 0x003D5258u) [[unlikely]] return; }
L_003D5258:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5270u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_007A(c, 310u, depth + 1u); else { c.pc = 0x003EB3E0u; return; } if (c.pc != 0x003D5270u) [[unlikely]] return; }
L_003D5270:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5280u); st8((c.r[18].w[0] + 133u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0075(c, 49u, depth + 1u); else { c.pc = 0x003D4F20u; return; } if (c.pc != 0x003D5280u) [[unlikely]] return; }
L_003D5280:
    st8((c.r[18].w[0] + 132u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5290u); set32(c.r[4], ld32((c.r[2].w[0] + 88u)));  if (depth < kMaxDepth) unit_007A(c, 87u, depth + 1u); else { c.pc = 0x003E8BC0u; return; } if (c.pc != 0x003D5290u) [[unlikely]] return; }
L_003D5290:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D52A0u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_007A(c, 312u, depth + 1u); else { c.pc = 0x003EB4E0u; return; } if (c.pc != 0x003D52A0u) [[unlikely]] return; }
L_003D52A0:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[18].w[0] + 134u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22904u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D52C8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D52C8u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0078(c, 272u, depth + 1u); else { c.pc = 0x003E38F0u; return; } if (c.pc != 0x003D52C8u) [[unlikely]] return; }
L_003D52C8:
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[16], c.r[29].w[0] + 120u);
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29752u)));
    c.f[12] = ld32((c.r[18].w[0] + 36u));
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[3], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.r[3].w[0] >> 4);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[7], c.f[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] >> 4);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5338u); set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_004F(c, 80u, depth + 1u); else { c.pc = 0x0033D890u; return; } if (c.pc != 0x003D5338u) [[unlikely]] return; }
L_003D5338:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D53F8; } }
L_003D5340:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D534Cu); set32(c.r[4], ld32((c.r[2].w[0] + 88u)));  if (depth < kMaxDepth) unit_007A(c, 87u, depth + 1u); else { c.pc = 0x003E8BC0u; return; } if (c.pc != 0x003D534Cu) [[unlikely]] return; }
L_003D534C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D535Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0075(c, 36u, depth + 1u); else { c.pc = 0x003D48D0u; return; } if (c.pc != 0x003D535Cu) [[unlikely]] return; }
L_003D535C:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5368u); set32(c.r[4], ld32((c.r[2].w[0] + 88u)));  if (depth < kMaxDepth) unit_007A(c, 87u, depth + 1u); else { c.pc = 0x003E8BC0u; return; } if (c.pc != 0x003D5368u) [[unlikely]] return; }
L_003D5368:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5380u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007A(c, 310u, depth + 1u); else { c.pc = 0x003EB3E0u; return; } if (c.pc != 0x003D5380u) [[unlikely]] return; }
L_003D5380:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 133u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D53D0; } }
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[18].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[18].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[18].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 204u), c.f[0]);  if (t) { goto L_003D53F0; } }
L_003D53D0:
    c.f[0] = ld32((c.r[18].w[0] + 192u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 196u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 200u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 204u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.budget -= 8;
L_003D53F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003D551C; } }
L_003D53F8:
    c.f[5] = ld32((c.r[18].w[0] + 36u));
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.f[4] = c.r[2].w[0];
    c.f[6] = ld32((c.r[29].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    c.f[5] = ld32((c.r[3].w[0] + 12u));
    c.f[7] = ld32((c.r[3].w[0] + 4u));
    c.f[8] = ld32((c.r[29].w[0] + 112u));
    c.f[9] = ld32((c.r[3].w[0]));
    c.f[10] = ld32((c.r[16].w[0]));
    c.f[11] = ld32((c.r[3].w[0] + 8u));
    c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[6]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[8]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[11], c.f[10]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[5] = c.f[4] & fp::kAbs;
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.f[4] = fp::ee::mul(c.fcr31, c.f[7], c.f[5]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    c.f[3] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[9], c.f[5]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.f[4] = fp::ee::mul(c.fcr31, c.f[11], c.f[5]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 112u), c.f[1]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[2] = c.r[2].w[0];
    st32((c.r[18].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[18].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[18].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[18].w[0] + 156u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 88u)));
    st16((c.r[18].w[0] + 212u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[2], ld32((c.r[28].w[0] - 29752u)));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[12] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[3], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.r[3].w[0] >> 4);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[7], c.f[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] >> 4);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 68;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5508u); set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_004F(c, 80u, depth + 1u); else { c.pc = 0x0033D890u; return; } if (c.pc != 0x003D5508u) [[unlikely]] return; }
L_003D5508:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D5340u | kUnwind; return; } goto L_003D5340; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 133u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D5340u | kUnwind; return; } goto L_003D5340; } }
L_003D551C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003D5530:
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D558C; } }
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D5560; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003D556C; } }
L_003D5560:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 2u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 3;
L_003D556C:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_003D559C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_003D5584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_003D55A4; } }
L_003D558C:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D556Cu | kUnwind; return; } goto L_003D556C; } }
L_003D559C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D5584u | kUnwind; return; } goto L_003D5584; } }
L_003D55A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D55B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = c.r[3].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    st32((c.r[29].w[0] + 64u), 0u);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 72u), 0u);  if (t) { goto L_003D560C; } }
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 44u), c.f[0]);  if (t) { goto L_003D562C; } }
L_003D560C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], c.r[16].w[0] + 16u);
    set32(c.r[8], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5628u); set32(c.r[9], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0087(c, 10u, depth + 1u); else { c.pc = 0x0041C180u; return; } if (c.pc != 0x003D5628u) [[unlikely]] return; }
L_003D5628:
    st32((c.r[16].w[0] + 48u), c.f[20]);
    c.budget -= 1;
L_003D562C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003D5640:
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D5698; } }
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[13], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D5678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[4].w[0] + 4u));  if (t) { goto L_003D5680; } }
L_003D5678:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[12], c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.budget -= 2;
L_003D5680:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D569C; } }
    c.f[0] = c.f[1];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D569C; } }
L_003D5698:
    c.f[0] = c.f[12];
    c.budget -= 1;
L_003D569C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D56B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[9] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[7] = ld32((c.r[6].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[8] = ld32((c.r[6].w[0] + 8u));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[9]);
    c.f[4] = 0u;
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[7]);
    fpu_compare(c, fp::key(c.f[4]) == fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[8]);  if (t) { goto L_003D571C; } }
    fpu_compare(c, fp::key(c.f[4]) == fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D571C; } }
    fpu_compare(c, fp::key(c.f[4]) == fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D571C; } }
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[8].w[0]), c.f[9]);
    st32((c.r[8].w[0] + 4u), c.f[7]);
    st32((c.r[8].w[0] + 8u), c.f[8]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 12u), c.f[0]);  if (t) { goto L_003D5954; } }
L_003D571C:
    c.f[6] = ld32((c.r[7].w[0]));
    c.f[4] = ld32((c.r[7].w[0] + 8u));
    c.f[5] = ld32((c.r[7].w[0] + 4u));
    c.f[11] = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[6], c.f[9]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[8]);
    c.f[8] = fp::ee::mul(c.fcr31, c.f[6], c.f[12]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[5], c.f[7]);
    c.f[10] = 0u;
    c.f[6] = fp::ee::mul(c.fcr31, c.f[4], c.f[12]);
    c.facc = fp::ee::add(c.fcr31, c.f[10], c.f[11]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[7] = fp::ee::mul(c.fcr31, c.f[5], c.f[12]);
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[5] = fp::ee::sqrt(c.fcr31, c.f[4]);
    c.f[9] = ld32((c.r[4].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[9]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D5798; } }
    c.f[3] = ld32((c.r[6].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[8].w[0]), c.f[3]);
    st32((c.r[8].w[0] + 4u), c.f[2]);
    st32((c.r[8].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 12u), c.f[0]);  if (t) { goto L_003D5954; } }
L_003D5798:
    c.f[4] = fp::ee::mul(c.fcr31, c.f[2], c.f[7]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.facc = fp::ee::add(c.fcr31, c.f[10], c.f[4]);
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[8]);
    c.facc = fp::ee::add(c.fcr31, c.f[10], c.f[4]);
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[6]);
    c.f[8] = fp::ee::div(c.fcr31, c.f[4], c.f[5]);
    c.f[6] = c.f[5] ^ fp::kSign;
    c.f[5] = ld32((c.r[4].w[0] + 32u));
    c.f[7] = ld32((c.r[4].w[0] + 36u));
    c.f[4] = c.r[2].w[0];
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[6]);
    c.facc = fp::ee::add(c.fcr31, c.f[10], c.f[5]);
    c.f[5] = fp::ee::msub(c.fcr31, c.facc, c.f[7], c.f[8]);
    c.f[6] = fp::ee::mul(c.fcr31, c.f[5], c.f[12]);
    c.facc = fp::ee::add(c.fcr31, c.f[10], c.f[11]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[10], c.f[5]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[5] = fp::ee::sqrt(c.fcr31, c.f[5]);
    c.f[4] = fp::ee::div(c.fcr31, c.f[4], c.f[5]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[4]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    c.f[4] = c.f[6] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[9]));
    c.budget -= 29;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D5824; } }
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[10]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D5820; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[6] = c.f[9] ^ fp::kSign;  if (t) { goto L_003D5824; } }
L_003D5820:
    c.f[6] = c.f[9];
    c.budget -= 1;
L_003D5824:
    c.f[4] = 0u;
    fpu_compare(c, fp::key(c.f[13]) <= fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D5924; } }
    c.f[5] = c.f[6] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[13]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D5924; } }
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D5868; } }
    c.f[4] = c.f[13] ^ fp::kSign;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[4]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);  if (t) { goto L_003D5874; } }
L_003D5868:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[13]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[13]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[13]);
    c.budget -= 3;
L_003D5874:
    c.f[4] = c.f[13] & fp::kAbs;
    st32((c.r[9].w[0]), c.f[4]);
    c.budget -= 2;
L_003D587C:
    c.f[7] = ld32((c.r[5].w[0] + 4u));
    c.f[4] = ld32((c.r[5].w[0]));
    c.f[5] = ld32((c.r[5].w[0] + 8u));
    c.f[6] = fp::ee::add(c.fcr31, c.f[7], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    st32((c.r[8].w[0]), c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[5], c.f[3]);
    st32((c.r[8].w[0] + 4u), c.f[6]);
    st32((c.r[8].w[0] + 8u), c.f[2]);
    st32((c.r[8].w[0] + 12u), c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 40u));
    c.f[1] = ld32((c.r[8].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[4], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D593C; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D593C; } }
    c.f[1] = ld32((c.r[8].w[0] + 4u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[7], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D5944; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[7], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D5944; } }
    c.f[1] = ld32((c.r[8].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[5], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D594C; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[5], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D594C; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003D5918:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_003D5954; } }
L_003D5924:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[6]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[6]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[6]);
    c.f[4] = c.f[6] & fp::kAbs;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0]), c.f[4]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D587Cu | kUnwind; return; } goto L_003D587C; } }
L_003D593C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D5918u | kUnwind; return; } goto L_003D5918; } }
L_003D5944:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D5918u | kUnwind; return; } goto L_003D5918; } }
L_003D594C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D5918u | kUnwind; return; } goto L_003D5918; } }
L_003D5954:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D5960:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[13] = c.f[12];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003D59D8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D59D8; } }
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[17].w[0] + 16u), c.f[3]);
    st32((c.r[17].w[0] + 20u), c.f[2]);
    st32((c.r[17].w[0] + 24u), c.f[1]);
    st32((c.r[17].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    st32((c.r[8].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[8].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[8].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 12u), c.f[0]);  if (t) { goto L_003D5A18; } }
L_003D59D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] - 20412u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[17].w[0] + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D59F4u); set32(c.r[9], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0075(c, 83u, depth + 1u); else { c.pc = 0x003D56B0u; return; } if (c.pc != 0x003D59F4u) [[unlikely]] return; }
L_003D59F4:
    c.f[3] = ld32((c.r[16].w[0]));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[17].w[0] + 16u), c.f[3]);
    st32((c.r[17].w[0] + 20u), c.f[2]);
    st32((c.r[17].w[0] + 24u), c.f[1]);
    st32((c.r[17].w[0] + 28u), c.f[0]);
    c.budget -= 9;
L_003D5A18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D5A30:
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 4u);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003D5AC4; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003D5AB0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003D5A9C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003D5A88; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003D5A78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D5AD4; } }
L_003D5A78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_003D5AD4; } }
L_003D5A88:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 32u), c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_003D5AD4; } }
L_003D5A9C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40900000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 32u), c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_003D5AD4; } }
L_003D5AB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40F00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[4].w[0] + 32u), c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_003D5AD4; } }
L_003D5AC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[4].w[0] + 32u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 4;
L_003D5AD4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D5AE0:
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D5B38; } }
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D5B08; } }
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 1;
L_003D5B08:
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[1] = ld32((c.r[6].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D5B40; } }
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D5B48; } }
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 1;
L_003D5B30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D5B48; } }
L_003D5B38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D5B08u | kUnwind; return; } goto L_003D5B08; } }
L_003D5B40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D5B30u | kUnwind; return; } goto L_003D5B30; } }
L_003D5B48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D5B50:
    st32((c.r[4].w[0]), c.f[12]);
    st32((c.r[4].w[0] + 8u), c.f[13]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[13], c.f[13]);
    c.f[0] = 0u;
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[1]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.f[1] = ld32((c.r[4].w[0] + 28u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[14], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[13], c.f[0]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[14], c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 44u), c.f[14]);  c.pc = t; return; }
L_003D5BC0:
    st32((c.r[4].w[0]), c.f[12]);
    st32((c.r[4].w[0] + 8u), c.f[13]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[13], c.f[13]);
    c.f[1] = 0u;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[14], c.f[12]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[13]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[2]);
    st32((c.r[4].w[0] + 16u), c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[14]);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 12u));
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 44u), c.f[0]);  c.pc = t; return; }
L_003D5C40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5C60u); st32((c.r[4].w[0] + 40u), c.f[20]);  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003D5C60u) [[unlikely]] return; }
L_003D5C60:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5C6Cu); st32((c.r[16].w[0] + 24u), c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003D5C6Cu) [[unlikely]] return; }
L_003D5C6C:
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = ld32((c.r[16].w[0] + 28u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 32u), c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D5CB0:
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), 0u);  c.pc = t; return; }
L_003D5CD0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 28u), c.f[27]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.f[24] = ld32((c.r[4].w[0] + 96u));
    c.f[23] = ld32((c.r[4].w[0] + 104u));
    c.f[22] = ld32((c.r[4].w[0] + 112u));
    c.f[21] = ld32((c.r[4].w[0] + 116u));
    c.f[25] = ld32((c.r[29].w[0] + 108u));
    c.f[26] = c.f[12];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5D2Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003D5D2Cu) [[unlikely]] return; }
L_003D5D2C:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5D38u); c.f[12] = c.f[26];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003D5D38u) [[unlikely]] return; }
L_003D5D38:
    c.f[6] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.f[3] = ld32((c.r[18].w[0] + 116u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.facc = fp::ee::mul(c.fcr31, c.f[23], c.f[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[24], c.f[20]);
    set32(c.r[7], c.r[29].w[0] + 208u);
    c.f[5] = ld32((c.r[18].w[0] + 112u));
    set32(c.r[8], c.r[29].w[0] + 192u);
    c.f[4] = ld32((c.r[18].w[0] + 104u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[21], c.f[6]);
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[6]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.facc = fp::ee::mul(c.fcr31, c.f[23], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[24], c.f[0]);
    c.f[7] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[22]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[4], c.f[5]);
    st32((c.r[29].w[0] + 148u), c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[7]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[7]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.f[8] = ld32((c.r[17].w[0]));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[22]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[8]);
    c.f[1] = ld32((c.r[18].w[0] + 96u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[5]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[8]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[20] = fp::ee::sqrt(c.fcr31, c.f[0]);
    st32((c.r[29].w[0] + 144u), c.f[1]);
    c.budget -= 44;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5DE8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D5DE8u) [[unlikely]] return; }
L_003D5DE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D5FA4; } }
    c.f[2] = ld32((c.r[29].w[0] + 212u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.f[3] = ld32((c.r[18].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[16], c.r[18].w[0] + 16u);
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.f[4] = ld32((c.r[29].w[0] + 216u));
    c.f[5] = ld32((c.r[18].w[0] + 24u));
    c.f[6] = c.r[2].w[0];
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    st32((c.r[29].w[0] + 136u), c.f[4]);
    st32((c.r[29].w[0] + 132u), c.f[2]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[6]));
    c.budget -= 27;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D5E80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[6] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[6]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D5E7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D5E80; } }
L_003D5E7C:
    c.f[6] = c.f[0];
    c.budget -= 1;
L_003D5E80:
    c.f[26] = fp::ee::mul(c.fcr31, c.f[26], c.f[6]);
    c.f[27] = ld32((c.r[18].w[0] + 64u));
    c.f[24] = ld32((c.r[18].w[0] + 72u));
    c.f[23] = ld32((c.r[18].w[0] + 80u));
    c.f[22] = ld32((c.r[18].w[0] + 84u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5E9Cu); c.f[12] = c.f[26];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003D5E9Cu) [[unlikely]] return; }
L_003D5E9C:
    c.f[21] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5EA8u); c.f[12] = c.f[26];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003D5EA8u) [[unlikely]] return; }
L_003D5EA8:
    c.facc = fp::ee::mul(c.fcr31, c.f[24], c.f[21]);
    set32(c.r[3], c.r[29].w[0] + 180u);
    c.f[1] = c.f[0] ^ fp::kSign;
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[27], c.f[1]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[23]);
    set32(c.r[6], c.r[29].w[0] + 176u);
    set32(c.r[7], c.r[29].w[0] + 192u);
    c.facc = fp::ee::mul(c.fcr31, c.f[24], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[27], c.f[21]);
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[23]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[22], c.f[2]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[29].w[0] + 188u), c.f[25]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 184u), c.f[2]);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5F0Cu); set32(c.r[8], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x003EBA00u; return; } if (c.pc != 0x003D5F0Cu) [[unlikely]] return; }
L_003D5F0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D5FA4; } }
    c.f[3] = ld32((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.f[2] = ld32((c.r[29].w[0] + 164u));
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.f[5] = ld32((c.r[16].w[0] + 8u));
    c.f[4] = ld32((c.r[29].w[0] + 168u));
    c.f[6] = c.r[2].w[0];
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    st32((c.r[29].w[0] + 120u), c.f[4]);
    st32((c.r[29].w[0] + 116u), c.f[2]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[6]));
    c.budget -= 26;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D5FA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[6] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[6]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D5F9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D5FA0; } }
L_003D5F9C:
    c.f[6] = c.f[0];
    c.budget -= 1;
L_003D5FA0:
    c.f[26] = fp::ee::mul(c.fcr31, c.f[26], c.f[6]);
    c.budget -= 1;
L_003D5FA4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[26]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D6008; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[26]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D5FDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D6000; } }
L_003D5FDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[26]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D5FFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D6000; } }
L_003D5FFC:
    c.f[0] = c.f[26];
    c.budget -= 1;
L_003D6000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D6050; } }
L_003D6008:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[26]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D6028; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D6050; } }
L_003D6028:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBA830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[26]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D604C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D6050; } }
L_003D604C:
    c.f[0] = c.f[26];
    c.budget -= 1;
L_003D6050:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003D6090:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003D60A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40F00000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[13] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D60BCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 33u, depth + 1u); else { c.pc = 0x003BC780u; return; } if (c.pc != 0x003D60BCu) [[unlikely]] return; }
L_003D60BC:
    c.f[9] = ld32((c.r[16].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.f[2] = ld32((c.r[16].w[0] + 240u));
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[8] = ld32((c.r[16].w[0] + 116u));
    set32(c.r[4], 0u + 1u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::ee::sub(c.fcr31, c.f[9], c.f[2]);
    st32((c.r[29].w[0] + 44u), c.f[2]);
    c.f[3] = ld32((c.r[16].w[0] + 248u));
    c.f[2] = ld32((c.r[29].w[0] + 44u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[8], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[5], c.f[5]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.f[2] = fp::ee::sqrt(c.fcr31, c.f[2]);
    st32((c.r[29].w[0] + 40u), c.f[5]);
    c.f[4] = ld32((c.r[16].w[0] + 264u));
    c.f[3] = ld32((c.r[16].w[0] + 268u));
    c.f[13] = fp::ee::mul(c.fcr31, c.f[2], c.f[4]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[13], c.f[1]);
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[1]));
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[6] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);  if (t) { goto L_003D611C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D611C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D6148; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[13], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[5]));
    c.budget -= 6;
L_003D613C:
    c.budget -= 2;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_003D6148; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D6148:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D61C8; } }
    c.f[1] = ld32((c.r[16].w[0] + 240u));
    c.f[2] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[9]);
    c.f[9] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[9]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[4] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);  if (t) { goto L_003D6178; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[9] = c.f[1];  if (t) { goto L_003D618C; } }
L_003D6178:
    c.f[0] = ld32((c.r[16].w[0] + 244u));
    fpu_compare(c, fp::key(c.f[9]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D618C; } }
    c.f[9] = c.f[0];
    c.budget -= 1;
L_003D618C:
    c.f[0] = ld32((c.r[16].w[0] + 248u));
    c.f[8] = fp::ee::add(c.fcr31, c.f[8], c.f[4]);
    fpu_compare(c, fp::key(c.f[8]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D61C0; } }
    c.f[0] = ld32((c.r[16].w[0] + 252u));
    fpu_compare(c, fp::key(c.f[8]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D61B4; } }
    c.f[8] = c.f[0];
    c.budget -= 1;
L_003D61B4:
    st32((c.r[16].w[0] + 112u), c.f[9]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), c.f[8]);  if (t) { goto L_003D62E4; } }
L_003D61C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[8] = c.f[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D61B4u | kUnwind; return; } goto L_003D61B4; } }
L_003D61C8:
    c.f[12] = ld32((c.r[29].w[0] + 40u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[13]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 36u), 0u);  if (t) { goto L_003D6220; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D6200; } }
    c.f[14] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D61F8u); set32(c.r[5], c.r[29].w[0] + 36u);  if (depth < kMaxDepth) unit_0075(c, 114u, depth + 1u); else { c.pc = 0x003D6300u; return; } if (c.pc != 0x003D61F8u) [[unlikely]] return; }
L_003D61F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[6] = ld32((c.r[16].w[0] + 240u));  if (t) { goto L_003D6260; } }
L_003D6200:
    c.f[12] = ld32((c.r[29].w[0] + 44u));
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.f[13] = c.f[6];
    set32(c.r[5], c.r[29].w[0] + 36u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6218u); c.f[14] = c.f[0];  if (depth < kMaxDepth) unit_0075(c, 114u, depth + 1u); else { c.pc = 0x003D6300u; return; } if (c.pc != 0x003D6218u) [[unlikely]] return; }
L_003D6218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D625C; } }
L_003D6220:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D624C; } }
    c.f[12] = ld32((c.r[29].w[0] + 44u));
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.f[13] = c.f[6];
    set32(c.r[5], c.r[29].w[0] + 36u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6244u); c.f[14] = c.f[0];  if (depth < kMaxDepth) unit_0075(c, 114u, depth + 1u); else { c.pc = 0x003D6300u; return; } if (c.pc != 0x003D6244u) [[unlikely]] return; }
L_003D6244:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D625C; } }
L_003D624C:
    c.f[14] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D625Cu); set32(c.r[5], c.r[29].w[0] + 36u);  if (depth < kMaxDepth) unit_0075(c, 114u, depth + 1u); else { c.pc = 0x003D6300u; return; } if (c.pc != 0x003D625Cu) [[unlikely]] return; }
L_003D625C:
    c.f[6] = ld32((c.r[16].w[0] + 240u));
    c.budget -= 1;
L_003D6260:
    c.f[5] = ld32((c.r[29].w[0] + 44u));
    c.f[3] = ld32((c.r[29].w[0] + 36u));
    c.f[2] = ld32((c.r[16].w[0] + 264u));
    c.f[7] = ld32((c.r[16].w[0] + 248u));
    c.f[4] = ld32((c.r[29].w[0] + 40u));
    c.f[1] = ld32((c.r[16].w[0] + 268u));
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[6]);
    c.f[0] = 0u;
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.f[9] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[9]) < fp::key(c.f[6]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[8] = fp::ee::add(c.fcr31, c.f[4], c.f[7]);  if (t) { goto L_003D62A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[9] = c.f[6];  if (t) { goto L_003D62B4; } }
L_003D62A0:
    c.f[0] = ld32((c.r[16].w[0] + 244u));
    fpu_compare(c, fp::key(c.f[9]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D62B4; } }
    c.f[9] = c.f[0];
    c.budget -= 1;
L_003D62B4:
    c.f[8] = fp::ee::add(c.fcr31, c.f[8], c.f[2]);
    fpu_compare(c, fp::key(c.f[8]) < fp::key(c.f[7]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D62DC; } }
    c.f[0] = ld32((c.r[16].w[0] + 252u));
    fpu_compare(c, fp::key(c.f[8]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D61B4u | kUnwind; return; } goto L_003D61B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[8] = c.f[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D61B4u | kUnwind; return; } goto L_003D61B4; } }
L_003D62DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[8] = c.f[7];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D61B4u | kUnwind; return; } goto L_003D61B4; } }
L_003D62E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D6300:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[13], c.f[12]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[14]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[14]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D6368; } }
L_003D631C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[14]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D6384; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D6384; } }
    c.f[0] = c.f[1] ^ fp::kSign;
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 3;
L_003D6348:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D6358; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[13]);  if (t) { goto L_003D6360; } }
L_003D6358:
    c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[14]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 2;
L_003D6360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D638C; } }
L_003D6368:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D631Cu | kUnwind; return; } goto L_003D631C; } }
    c.f[0] = c.f[1] ^ fp::kSign;
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6348u | kUnwind; return; } goto L_003D6348; } }
L_003D6384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6348u | kUnwind; return; } goto L_003D6348; } }
L_003D638C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D63A0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[13]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = ld32((c.r[29].w[0] + 156u));
    c.f[21] = ld32((c.r[29].w[0] + 124u));
    c.f[22] = ld32((c.r[29].w[0] + 188u));
    c.f[23] = ld32((c.r[29].w[0] + 140u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 28;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003D6414; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D6414:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D6438; } }
    c.f[0] = 0u;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[13]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003D6438; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D6438:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D645C; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 384u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D645C; } }
    c.f[12] = ld32((c.r[19].w[0] + 324u));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003D645C:
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 176u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D689C; } }
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[13]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D667C; } }
L_003D6478:
    c.f[0] = c.f[13] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D689C; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 13u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D689C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D64A4u);  if (depth < kMaxDepth) unit_006F(c, 33u, depth + 1u); else { c.pc = 0x003BC780u; return; } if (c.pc != 0x003D64A4u) [[unlikely]] return; }
L_003D64A4:
    c.f[22] = ld32((c.r[19].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C10000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D64CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D64F4; } }
L_003D64CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D64EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D64F0; } }
L_003D64EC:
    c.f[1] = c.f[22];
    c.budget -= 1;
L_003D64F0:
    c.budget -= 1;
L_003D64F4:
    c.f[23] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[27] = ld32((c.r[19].w[0] + 64u));
    c.f[26] = ld32((c.r[19].w[0] + 72u));
    c.f[25] = ld32((c.r[19].w[0] + 84u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6510u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003D6510u) [[unlikely]] return; }
L_003D6510:
    c.f[24] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D651Cu); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003D651Cu) [[unlikely]] return; }
L_003D651C:
    c.facc = fp::ee::mul(c.fcr31, c.f[26], c.f[24]);
    set32(c.r[2], c.r[29].w[0] + 164u);
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[27], c.f[1]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[22]);
    c.facc = fp::ee::mul(c.fcr31, c.f[26], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[27], c.f[24]);
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[22]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[25], c.f[2]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[29].w[0] + 172u), c.f[21]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 168u), c.f[2]);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 24;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D657Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D657Cu) [[unlikely]] return; }
L_003D657C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D659C; } }
    c.f[12] = c.f[23];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6598u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0075(c, 98u, depth + 1u); else { c.pc = 0x003D5CD0u; return; } if (c.pc != 0x003D6598u) [[unlikely]] return; }
L_003D6598:
    c.f[23] = c.f[0];
    c.budget -= 1;
L_003D659C:
    c.f[22] = ld32((c.r[19].w[0] + 96u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D65A8u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003D65A8u) [[unlikely]] return; }
L_003D65A8:
    c.f[21] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D65B4u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003D65B4u) [[unlikely]] return; }
L_003D65B4:
    c.f[2] = ld32((c.r[19].w[0] + 104u));
    c.f[3] = ld32((c.r[19].w[0] + 96u));
    c.f[1] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[21]);
    st32((c.r[19].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[21]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[1]);
    st32((c.r[19].w[0] + 104u), c.f[0]);
    c.f[22] = ld32((c.r[19].w[0] + 64u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D65E8u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003D65E8u) [[unlikely]] return; }
L_003D65E8:
    c.f[12] = c.f[23];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D65F4u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003D65F4u) [[unlikely]] return; }
L_003D65F4:
    c.f[4] = ld32((c.r[19].w[0] + 72u));
    c.f[6] = ld32((c.r[19].w[0] + 64u));
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[5] = ld32((c.r[18].w[0] + 4u));
    c.f[2] = ld32((c.r[18].w[0] + 8u));
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[21]);
    st32((c.r[19].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 72u));
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[21]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[3]);
    st32((c.r[19].w[0] + 72u), c.f[0]);
    c.f[6] = ld32((c.r[19].w[0] + 80u));
    c.f[0] = ld32((c.r[19].w[0] + 64u));
    c.f[4] = ld32((c.r[19].w[0] + 68u));
    c.f[3] = ld32((c.r[19].w[0] + 72u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[6]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[6]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[6]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[17].w[0] + 4u), c.f[4]);
    st32((c.r[17].w[0] + 8u), c.f[2]);
    st32((c.r[17].w[0] + 12u), c.f[20]);
    c.f[0] = ld32((c.r[19].w[0] + 84u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.budget -= 31;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[17].w[0] + 4u), c.f[0]);  if (t) { goto L_003D6884; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003D6674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_003D68A0; } }
L_003D667C:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6478u | kUnwind; return; } goto L_003D6478; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6698u);  if (depth < kMaxDepth) unit_006F(c, 33u, depth + 1u); else { c.pc = 0x003BC780u; return; } if (c.pc != 0x003D6698u) [[unlikely]] return; }
L_003D6698:
    c.f[20] = ld32((c.r[19].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C10000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D66C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D66E8; } }
L_003D66C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D66E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D66E4; } }
L_003D66E0:
    c.f[1] = c.f[20];
    c.budget -= 1;
L_003D66E4:
    c.budget -= 1;
L_003D66E8:
    c.f[21] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[27] = ld32((c.r[19].w[0] + 64u));
    c.f[26] = ld32((c.r[19].w[0] + 72u));
    c.f[25] = ld32((c.r[19].w[0] + 84u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6704u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003D6704u) [[unlikely]] return; }
L_003D6704:
    c.f[24] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6710u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003D6710u) [[unlikely]] return; }
L_003D6710:
    c.facc = fp::ee::mul(c.fcr31, c.f[26], c.f[24]);
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[27], c.f[1]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.facc = fp::ee::mul(c.fcr31, c.f[26], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[27], c.f[24]);
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[25], c.f[2]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[29].w[0] + 204u), c.f[23]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 200u), c.f[2]);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 24;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6770u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D6770u) [[unlikely]] return; }
L_003D6770:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D6790; } }
    c.f[12] = c.f[21];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D678Cu); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0075(c, 98u, depth + 1u); else { c.pc = 0x003D5CD0u; return; } if (c.pc != 0x003D678Cu) [[unlikely]] return; }
L_003D678C:
    c.f[21] = c.f[0];
    c.budget -= 1;
L_003D6790:
    c.f[23] = ld32((c.r[19].w[0] + 96u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D679Cu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003D679Cu) [[unlikely]] return; }
L_003D679C:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D67A8u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003D67A8u) [[unlikely]] return; }
L_003D67A8:
    c.f[2] = ld32((c.r[19].w[0] + 104u));
    c.f[3] = ld32((c.r[19].w[0] + 96u));
    c.f[1] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    st32((c.r[19].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[23], c.f[1]);
    st32((c.r[19].w[0] + 104u), c.f[0]);
    c.f[23] = ld32((c.r[19].w[0] + 64u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D67DCu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003D67DCu) [[unlikely]] return; }
L_003D67DC:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D67E8u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003D67E8u) [[unlikely]] return; }
L_003D67E8:
    c.f[4] = ld32((c.r[19].w[0] + 72u));
    c.f[6] = ld32((c.r[19].w[0] + 64u));
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[5] = ld32((c.r[18].w[0] + 4u));
    c.f[2] = ld32((c.r[18].w[0] + 8u));
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[20]);
    st32((c.r[19].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 72u));
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[23], c.f[3]);
    st32((c.r[19].w[0] + 72u), c.f[0]);
    c.f[6] = ld32((c.r[19].w[0] + 80u));
    c.f[0] = ld32((c.r[19].w[0] + 64u));
    c.f[4] = ld32((c.r[19].w[0] + 68u));
    c.f[3] = ld32((c.r[19].w[0] + 72u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[6]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[6]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[6]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[17].w[0] + 4u), c.f[4]);
    st32((c.r[17].w[0] + 8u), c.f[2]);
    st32((c.r[17].w[0] + 12u), c.f[22]);
    c.f[0] = ld32((c.r[19].w[0] + 84u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.budget -= 31;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[17].w[0] + 4u), c.f[0]);  if (t) { goto L_003D686C; } }
L_003D6864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6674u | kUnwind; return; } goto L_003D6674; } }
L_003D686C:
    set32(c.r[4], c.r[19].w[0] + 8u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D687Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_009C(c, 44u, depth + 1u); else { c.pc = 0x00470560u; return; } if (c.pc != 0x003D687Cu) [[unlikely]] return; }
L_003D687C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6864u | kUnwind; return; } goto L_003D6864; } }
L_003D6884:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[19].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6894u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 44u, depth + 1u); else { c.pc = 0x00470560u; return; } if (c.pc != 0x003D6894u) [[unlikely]] return; }
L_003D6894:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6674u | kUnwind; return; } goto L_003D6674; } }
L_003D689C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003D68A0:
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003D68E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull + 0ull;
    c.f[0] = 0u;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], 0u + 1u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[13]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003D6914; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D6914:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D6938; } }
    c.f[0] = 0u;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[13]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003D6938; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D6938:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D695C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 384u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D695C; } }
    c.f[12] = ld32((c.r[17].w[0] + 328u));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003D695C:
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[13]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D69A0; } }
L_003D6968:
    c.f[0] = c.f[13] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D69F4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 15u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D69F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D698Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 106u, depth + 1u); else { c.pc = 0x003D60A0u; return; } if (c.pc != 0x003D698Cu) [[unlikely]] return; }
L_003D698C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003D69DC; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003D6998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003D69F8; } }
L_003D69A0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6968u | kUnwind; return; } goto L_003D6968; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D69B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 106u, depth + 1u); else { c.pc = 0x003D60A0u; return; } if (c.pc != 0x003D69B4u) [[unlikely]] return; }
L_003D69B4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003D69C4; } }
L_003D69BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6998u | kUnwind; return; } goto L_003D6998; } }
L_003D69C4:
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D69D4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_009C(c, 44u, depth + 1u); else { c.pc = 0x00470560u; return; } if (c.pc != 0x003D69D4u) [[unlikely]] return; }
L_003D69D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D69BCu | kUnwind; return; } goto L_003D69BC; } }
L_003D69DC:
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D69ECu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_009C(c, 44u, depth + 1u); else { c.pc = 0x00470560u; return; } if (c.pc != 0x003D69ECu) [[unlikely]] return; }
L_003D69EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6998u | kUnwind; return; } goto L_003D6998; } }
L_003D69F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003D69F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D6A10:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6A50u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D6A50u) [[unlikely]] return; }
L_003D6A50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D6A88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 24140u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003D6A78; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003D6A78; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003D6A78:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D6A90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D6CB4; } }
L_003D6A88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D6CB4; } }
L_003D6A90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6A9Cu); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_0039(c, 226u, depth + 1u); else { c.pc = 0x002E7BF0u; return; } if (c.pc != 0x003D6A9Cu) [[unlikely]] return; }
L_003D6A9C:
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D6B7C; } }
L_003D6AB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.r[3].d[0] = ld8((c.r[3].w[0] - 15878u));
    c.f[20] = ld32((c.r[2].w[0] + 8u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D6AD0; } }
    c.f[20] = c.f[20] ^ fp::kSign;
    c.budget -= 1;
L_003D6AD0:
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D6AE0; } }
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 1;
L_003D6AE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6AFCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 141u, depth + 1u); else { c.pc = 0x003D68E0u; return; } if (c.pc != 0x003D6AFCu) [[unlikely]] return; }
L_003D6AFC:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6B20u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x003D63A0u; return; } if (c.pc != 0x003D6B20u) [[unlikely]] return; }
L_003D6B20:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D6B34; } }
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003D6B34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D6B40; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003D6B40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6B4Cu); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_0039(c, 226u, depth + 1u); else { c.pc = 0x002E7BF0u; return; } if (c.pc != 0x003D6B4Cu) [[unlikely]] return; }
L_003D6B4C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 29u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D6B88; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 49u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D6B88; } }
L_003D6B64:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D6B68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D6B74; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003D6B74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003D6CB4; } }
L_003D6B7C:
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6AB0u | kUnwind; return; } goto L_003D6AB0; } }
L_003D6B88:
    c.f[2] = ld32((c.r[18].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.f[1] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.f[3] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    st8((c.r[19].w[0] + 49u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    set32(c.r[2], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[0]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6C08u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003D6C08u) [[unlikely]] return; }
L_003D6C08:
    c.f[12] = c.f[20];
    st32((c.r[29].w[0] + 116u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6C18u); st32((c.r[29].w[0] + 112u), c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003D6C18u) [[unlikely]] return; }
L_003D6C18:
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6C38u); set32(c.r[7], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D6C38u) [[unlikely]] return; }
L_003D6C38:
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x402C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[4], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6C64u); c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D6C64u) [[unlikely]] return; }
L_003D6C64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D6C70; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D6C70:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003D6C8C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D6C7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6B64u | kUnwind; return; } goto L_003D6B64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6B68u | kUnwind; return; } goto L_003D6B68; } }
L_003D6C8C:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[25], ld32((c.r[25].w[0] + 120u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6CACu); set32(c.r[8], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D6CACu) [[unlikely]] return; }
L_003D6CAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6C7Cu | kUnwind; return; } goto L_003D6C7C; } }
L_003D6CB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003D6CE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003D6CF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003D6D00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[12]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.f[0] = 0u;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.f[2]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[0]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6D8Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003D6D8Cu) [[unlikely]] return; }
L_003D6D8C:
    c.f[12] = c.f[20];
    st32((c.r[29].w[0] + 116u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6D9Cu); st32((c.r[29].w[0] + 112u), c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003D6D9Cu) [[unlikely]] return; }
L_003D6D9C:
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6DBCu); set32(c.r[7], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D6DBCu) [[unlikely]] return; }
L_003D6DBC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003D6DD4; } }
L_003D6DC4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003D6E0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D6E30; } }
L_003D6DD4:
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x402C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6DFCu); set32(c.r[6], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D6DFCu) [[unlikely]] return; }
L_003D6DFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6DC4u | kUnwind; return; } goto L_003D6DC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6DC4u | kUnwind; return; } goto L_003D6DC4; } }
L_003D6E0C:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[25], ld32((c.r[25].w[0] + 120u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6E2Cu); set32(c.r[8], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D6E2Cu) [[unlikely]] return; }
L_003D6E2C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003D6E30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003D6E50:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 20368u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6E84u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0039(c, 226u, depth + 1u); else { c.pc = 0x002E7BF0u; return; } if (c.pc != 0x003D6E84u) [[unlikely]] return; }
L_003D6E84:
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D7038; } }
L_003D6E98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.r[3].d[0] = ld8((c.r[3].w[0] - 15878u));
    c.f[20] = ld32((c.r[2].w[0] + 8u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D6EB8; } }
    c.f[20] = c.f[20] ^ fp::kSign;
    c.budget -= 1;
L_003D6EB8:
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D6EC8; } }
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 1;
L_003D6EC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6EE4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 141u, depth + 1u); else { c.pc = 0x003D68E0u; return; } if (c.pc != 0x003D6EE4u) [[unlikely]] return; }
L_003D6EE4:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6F08u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x003D63A0u; return; } if (c.pc != 0x003D6F08u) [[unlikely]] return; }
L_003D6F08:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D6F1C; } }
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003D6F1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D7044; } }
L_003D6F24:
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    c.r[7].d[0] = 0ull | 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.f[3] = c.r[2].w[0];
    c.r[7].d[0] = c.r[7].d[0] | 32768ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[4] = ld32((c.r[4].w[0] + 180u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.f[1] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = 0u;
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.f[2] = c.r[2].w[0];
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    set32(c.r[2], c.f[1]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.f[4] = c.r[6].w[0];
    c.f[4] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[4]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    set32(c.r[2], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[1]);
    c.budget -= 47;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6FE0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003D6FE0u) [[unlikely]] return; }
L_003D6FE0:
    c.f[12] = c.f[20];
    st32((c.r[29].w[0] + 116u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6FF0u); st32((c.r[29].w[0] + 112u), c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003D6FF0u) [[unlikely]] return; }
L_003D6FF0:
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7010u); set32(c.r[7], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D7010u) [[unlikely]] return; }
L_003D7010:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[25], ld32((c.r[25].w[0] + 120u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7030u); set32(c.r[8], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D7030u) [[unlikely]] return; }
L_003D7030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_003D7070; } }
L_003D7038:
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6E98u | kUnwind; return; } goto L_003D6E98; } }
L_003D7044:
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 50u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[19].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[19].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 28u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6F24u | kUnwind; return; } goto L_003D6F24; } }
L_003D7070:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003D7090:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D70A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D70B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D70C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D70D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D70E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D70F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D7100:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D7110:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.f[21] = c.f[12];  if (t) { goto L_003D7224; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28916u)));
    c.f[20] = 0u;
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[4].w[0] + 1u);
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[18].d[0] = 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 28892u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == c.r[4].d[0]; set32(c.r[20], ld32((c.r[2].w[0])));  if (t) { goto L_003D720C; } }
L_003D7170:
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7184u); c.r[21].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x003D7184u) [[unlikely]] return; }
L_003D7184:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D71AC; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D71AC; } }
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D71AC:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_003D71C4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D71C4; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D71C4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003D7218; } }
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[21], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D71E8; } }
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    c.f[20] = c.f[0];
    c.budget -= 2;
L_003D71E8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[18].d[0] = 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 28892u)));
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[2], ld32((c.r[28].w[0] - 28916u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[20], ld32((c.r[3].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7170u | kUnwind; return; } goto L_003D7170; } }
L_003D720C:
    st32((c.r[28].w[0] - 28916u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003D7228; } }
L_003D7218:
    st32((c.r[28].w[0] - 28916u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003D7228; } }
L_003D7224:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D7228:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003D7260:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.f[21] = c.f[12];  if (t) { goto L_003D734C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28920u)));
    c.f[20] = 0u;
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[4].w[0] + 1u);
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[17].d[0] = 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 28900u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[17].d[0] == c.r[4].d[0]; set32(c.r[19], ld32((c.r[2].w[0])));  if (t) { goto L_003D7334; } }
L_003D72B8:
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D72C4u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x003D72C4u) [[unlikely]] return; }
L_003D72C4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[4].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7340; } }
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[21], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D7310; } }
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    c.f[20] = c.f[0];
    c.budget -= 2;
L_003D7310:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[17].d[0] = 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 28900u)));
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[2], ld32((c.r[28].w[0] - 28920u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[19], ld32((c.r[3].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D72B8u | kUnwind; return; } goto L_003D72B8; } }
L_003D7334:
    st32((c.r[28].w[0] - 28920u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003D7350; } }
L_003D7340:
    st32((c.r[28].w[0] - 28920u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003D7350; } }
L_003D734C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D7350:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003D7380:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7450; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 28924u)));
    c.f[1] = 0u;
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003D73AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[28].w[0] - 28888u)));  if (t) { goto L_003D73B4; } }
L_003D73AC:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[28].w[0] - 28888u)));
    c.budget -= 2;
L_003D73B4:
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[9], ld32((c.r[3].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
L_003D73C4:
    set32(c.r[4], ld32((c.r[9].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[4].d[0] = c.r[5].d[0] << 42;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003D73EC; } }
    c.r[4].d[0] = c.r[5].d[0] << 45;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003D73EC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D7444; } }
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D7410; } }
    c.r[2].d[0] = c.r[9].d[0] + 0ull;
    c.f[1] = c.f[0];
    c.budget -= 2;
L_003D7410:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_003D7424; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[7].w[0] << 2);  if (t) { goto L_003D742C; } }
L_003D7424:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[7].w[0] << 2);
    c.budget -= 2;
L_003D742C:
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[3].d[0]; set32(c.r[9], ld32((c.r[4].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D73C4u | kUnwind; return; } goto L_003D73C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28924u), c.r[7].w[0]);  if (t) { goto L_003D7454; } }
L_003D7444:
    st32((c.r[28].w[0] - 28924u), c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_003D7454; } }
L_003D7450:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D7454:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D7460:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D749C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28928u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D7484; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_003D748C; } }
L_003D7484:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.budget -= 2;
L_003D748C:
    set32(c.r[2], ld32((c.r[28].w[0] - 28880u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_003D74A0; } }
L_003D749C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D74A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D74B0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7E78; } }
    c.f[1] = ld32((c.r[28].w[0] - 32272u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D750C; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[28].w[0] - 29239u));  if (t) { goto L_003D7528; } }
L_003D750C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29239u));
    c.budget -= 7;
L_003D7528:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D753C; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29240u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003D753C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7624; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28648u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003D7624; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28644u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7E20; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28932u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7B9C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 28932u), c.r[2].w[0]);  if (t) { goto L_003D7B9C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28180u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7E40; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003D758C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28900u)));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 34u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 34u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[5].w[0] + 28u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D75C0u); c.r[4].d[0] = ld8((c.r[5].w[0] + 4u));  if (depth < kMaxDepth) unit_001A(c, 272u, depth + 1u); else { c.pc = 0x0026A8F0u; return; } if (c.pc != 0x003D75C0u) [[unlikely]] return; }
L_003D75C0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D758Cu | kUnwind; return; } goto L_003D758C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003D75D8:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D760Cu); c.r[4].d[0] = ld8((c.r[5].w[0] + 4u));  if (depth < kMaxDepth) unit_001A(c, 272u, depth + 1u); else { c.pc = 0x0026A8F0u; return; } if (c.pc != 0x003D760Cu) [[unlikely]] return; }
L_003D760C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D75D8u | kUnwind; return; } goto L_003D75D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D7B9C; } }
L_003D7624:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28644u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D7BAC; } }
L_003D7630:
    set32(c.r[2], ld32((c.r[28].w[0] - 28596u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D7BBC; } }
L_003D763C:
    set32(c.r[2], ld32((c.r[28].w[0] - 28588u)));
    c.budget -= 1;
L_003D7640:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D780C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7654u); set32(c.r[4], c.r[4].w[0] - 3744u);  if (depth < kMaxDepth) unit_006F(c, 52u, depth + 1u); else { c.pc = 0x003BD0B0u; return; } if (c.pc != 0x003D7654u) [[unlikely]] return; }
L_003D7654:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D76B4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28588u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D780C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7C3C; } }
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003D7C08; } }
L_003D768C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D7690:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003D7694:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D76A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D76A4u); set32(c.r[4], ld32((c.r[28].w[0] - 28588u)));  if (depth < kMaxDepth) unit_0085(c, 173u, depth + 1u); else { c.pc = 0x00417080u; return; } if (c.pc != 0x003D76A4u) [[unlikely]] return; }
L_003D76A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D76ACu); set32(c.r[4], ld32((c.r[28].w[0] - 28588u)));  if (depth < kMaxDepth) unit_0085(c, 191u, depth + 1u); else { c.pc = 0x004173A0u; return; } if (c.pc != 0x003D76ACu) [[unlikely]] return; }
L_003D76AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D780C; } }
L_003D76B4:
    set32(c.r[4], ld32((c.r[28].w[0] - 28588u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7C78; } }
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003D7C44; } }
L_003D76D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D76DC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003D76E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D780C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28588u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.f[2] = ld32((c.r[3].w[0] + 12u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[3].w[0] + 12u);  if (t) { goto L_003D7C80; } }
    st32((c.r[2].w[0]), c.f[1]);
    c.r[7].d[0] = ld8((c.r[29].w[0] + 200u));
    c.budget -= 2;
L_003D7720:
    set32(c.r[3], 0u - 2u);
    c.r[5].d[0] = ld16((c.r[28].w[0] - 29038u));
    c.r[6].d[0] = 0ull & 1ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29036u)));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    st32((c.r[29].w[0] + 192u), 0u);
    st32((c.r[29].w[0] + 196u), 0u);
    st32((c.r[29].w[0] + 204u), 0u);
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[6].d[0] = c.r[3].d[0] | c.r[6].d[0];
    set32(c.r[3], c.r[5].w[0] << 2);
    st8((c.r[29].w[0] + 200u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7770u); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003D7770u) [[unlikely]] return; }
L_003D7770:
    c.r[6].d[0] = ld16((c.r[28].w[0] - 29038u));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 29036u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[4].d[0] = c.r[5].d[0] ^ 0ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003D77F0; } }
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 2;
L_003D77B4:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_003D77CC; } }
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0])));  if (t) { goto L_003D77F4; } }
L_003D77CC:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D77B4u | kUnwind; return; } goto L_003D77B4; } }
    c.budget -= 1;
L_003D77F0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D77F4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003D780C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7804u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0085(c, 200u, depth + 1u); else { c.pc = 0x004174E0u; return; } if (c.pc != 0x003D7804u) [[unlikely]] return; }
L_003D7804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D780Cu); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0085(c, 173u, depth + 1u); else { c.pc = 0x00417080u; return; } if (c.pc != 0x003D780Cu) [[unlikely]] return; }
L_003D780C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7818u); set32(c.r[4], c.r[4].w[0] - 1808u);  if (depth < kMaxDepth) unit_0012(c, 43u, depth + 1u); else { c.pc = 0x00248E40u; return; } if (c.pc != 0x003D7818u) [[unlikely]] return; }
L_003D7818:
    set32(c.r[6], c.r[29].w[0] + 128u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 2;
L_003D7820:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[6].w[0]), c.r[4].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7820u | kUnwind; return; } goto L_003D7820; } }
    set32(c.r[2], c.r[29].w[0] + 188u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[4] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[4]);
    c.f[0] = c.f[0] & fp::kAbs;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D7880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[29].w[0] + 128u);  if (t) { goto L_003D7978; } }
L_003D7880:
    set32(c.r[16], c.r[29].w[0] + 140u);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D7974; } }
    set32(c.r[15], c.r[29].w[0] + 156u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D7974; } }
    set32(c.r[14], c.r[29].w[0] + 172u);
    c.f[0] = ld32((c.r[14].w[0]));
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D7974; } }
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[13]);
    set32(c.r[5], c.r[29].w[0] + 104u);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[12]);
    set32(c.r[8], c.r[29].w[0] + 80u);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[4]);
    set32(c.r[10], c.r[29].w[0] + 96u);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[11]);
    set32(c.r[9], c.r[29].w[0] + 88u);
    set32(c.r[6], c.r[29].w[0] + 84u);
    set32(c.r[7], c.r[29].w[0] + 100u);
    c.f[9] = 0u;
    set32(c.r[3], c.r[29].w[0] + 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[13]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[12]);
    c.f[10] = ld32((c.r[8].w[0]));
    c.f[18] = ld32((c.r[5].w[0]));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[4]);
    c.f[11] = ld32((c.r[9].w[0]));
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.f[12] = ld32((c.r[10].w[0]));
    c.f[8] = ld32((c.r[6].w[0]));
    c.f[7] = ld32((c.r[4].w[0]));
    c.f[16] = ld32((c.r[7].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[10], c.f[18]);
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.f[5] = ld32((c.r[29].w[0] + 64u));
    c.f[17] = fp::ee::msub(c.fcr31, c.facc, c.f[11], c.f[12]);
    c.facc = fp::ee::mul(c.fcr31, c.f[8], c.f[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x37270000u);
    c.f[14] = fp::ee::msub(c.fcr31, c.facc, c.f[11], c.f[16]);
    c.r[4].d[0] = c.r[4].d[0] | 50604ull;
    c.facc = fp::ee::mul(c.fcr31, c.f[10], c.f[16]);
    c.f[13] = fp::ee::msub(c.fcr31, c.facc, c.f[8], c.f[12]);
    c.facc = fp::ee::mul(c.fcr31, c.f[5], c.f[14]);
    c.f[6] = ld32((c.r[5].w[0]));
    c.facc = fp::ee::msub(c.fcr31, c.facc, c.f[7], c.f[17]);
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[13]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 41;
    { const bool t = !(c.fcr31 & kFpuCondition); st128((c.r[29].w[0] + 112u) & ~15u, c.r[11]);  if (t) { goto L_003D7C90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[29].w[0] + 224u);  if (t) { goto L_003D797C; } }
L_003D7974:
    set32(c.r[3], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_003D7978:
    set32(c.r[6], c.r[29].w[0] + 224u);
    c.budget -= 1;
L_003D797C:
    set32(c.r[5], 0u + 8u);
    c.budget -= 1;
L_003D7980:
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[6].w[0]), c.r[4].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7980u | kUnwind; return; } goto L_003D7980; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].d[0] = ld8((c.r[2].w[0] - 22911u));
    c.f[4] = ld32((c.r[29].w[0] + 272u));
    c.f[8] = ld32((c.r[29].w[0] + 276u));
    c.f[9] = ld32((c.r[29].w[0] + 280u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] - 22576u);  if (t) { goto L_003D7DBC; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28576u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D79E0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D79E0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 28576u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 31672u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003D79E0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 31672u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7A60; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    set32(c.r[4], c.r[4].w[0] + 1024u);
    c.f[3] = ld32((c.r[28].w[0] - 28684u));
    c.f[2] = ld32((c.r[29].w[0] + 224u));
    c.f[1] = ld32((c.r[29].w[0] + 228u));
    c.f[7] = ld32((c.r[2].w[0] + 32u));
    set32(c.r[5], c.r[2].w[0] + 32u);
    c.f[6] = ld32((c.r[2].w[0] + 36u));
    c.f[5] = ld32((c.r[2].w[0] + 40u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[7]);
    st32((c.r[6].w[0] + 20u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[6].w[0] + 12u), c.f[2]);
    st32((c.r[6].w[0] + 16u), c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[7]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[8], c.f[6]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[9], c.f[5]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    st32((c.r[6].w[0] + 4u), c.f[1]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7A58u); st32((c.r[6].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_0084(c, 535u, depth + 1u); else { c.pc = 0x00413EE0u; return; } if (c.pc != 0x003D7A58u) [[unlikely]] return; }
L_003D7A58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D7AA0; } }
L_003D7A60:
    c.f[2] = ld32((c.r[29].w[0] + 224u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[1] = ld32((c.r[29].w[0] + 228u));
    set32(c.r[4], c.r[4].w[0] + 1024u);
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    set32(c.r[5], c.r[29].w[0] + 208u);
    st32((c.r[6].w[0]), c.f[4]);
    st32((c.r[29].w[0] + 208u), c.f[4]);
    st32((c.r[6].w[0] + 4u), c.f[8]);
    st32((c.r[29].w[0] + 212u), c.f[8]);
    st32((c.r[6].w[0] + 8u), c.f[9]);
    st32((c.r[29].w[0] + 216u), c.f[9]);
    st32((c.r[6].w[0] + 12u), c.f[2]);
    st32((c.r[6].w[0] + 16u), c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7AA0u); st32((c.r[6].w[0] + 20u), c.f[0]);  if (depth < kMaxDepth) unit_0084(c, 535u, depth + 1u); else { c.pc = 0x00413EE0u; return; } if (c.pc != 0x003D7AA0u) [[unlikely]] return; }
L_003D7AA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7AA8u);  if (depth < kMaxDepth) unit_009A(c, 17u, depth + 1u); else { c.pc = 0x00468690u; return; } if (c.pc != 0x003D7AA8u) [[unlikely]] return; }
L_003D7AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7AB0u);  if (depth < kMaxDepth) unit_0076(c, 18u, depth + 1u); else { c.pc = 0x003D8510u; return; } if (c.pc != 0x003D7AB0u) [[unlikely]] return; }
L_003D7AB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7ABCu); set32(c.r[4], c.r[4].w[0] + 496u);  if (depth < kMaxDepth) unit_00A0(c, 165u, depth + 1u); else { c.pc = 0x00482520u; return; } if (c.pc != 0x003D7ABCu) [[unlikely]] return; }
L_003D7ABC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7AC8u); set32(c.r[4], c.r[4].w[0] + 524u);  if (depth < kMaxDepth) unit_00A0(c, 165u, depth + 1u); else { c.pc = 0x00482520u; return; } if (c.pc != 0x003D7AC8u) [[unlikely]] return; }
L_003D7AC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7AD4u); set32(c.r[4], c.r[4].w[0] + 552u);  if (depth < kMaxDepth) unit_00A0(c, 165u, depth + 1u); else { c.pc = 0x00482520u; return; } if (c.pc != 0x003D7AD4u) [[unlikely]] return; }
L_003D7AD4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7AE0u); set32(c.r[4], c.r[4].w[0] + 580u);  if (depth < kMaxDepth) unit_00A0(c, 165u, depth + 1u); else { c.pc = 0x00482520u; return; } if (c.pc != 0x003D7AE0u) [[unlikely]] return; }
L_003D7AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7AE8u);  if (depth < kMaxDepth) unit_001D(c, 134u, depth + 1u); else { c.pc = 0x00277090u; return; } if (c.pc != 0x003D7AE8u) [[unlikely]] return; }
L_003D7AE8:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 2304u);
    c.budget -= 3;
L_003D7AF4:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7B7C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7B7C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 16u);  if (t) { goto L_003D7DCC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7E08; } }
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003D7DD4; } }
L_003D7B38:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D7B3C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003D7B40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7E10; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 16u);  if (t) { goto L_003D7B74; } }
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.budget -= 8;
L_003D7B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7B7Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0085(c, 118u, depth + 1u); else { c.pc = 0x00416580u; return; } if (c.pc != 0x003D7B7Cu) [[unlikely]] return; }
L_003D7B7C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7AF4u | kUnwind; return; } goto L_003D7AF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7B94u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 182u, depth + 1u); else { c.pc = 0x00486780u; return; } if (c.pc != 0x003D7B94u) [[unlikely]] return; }
L_003D7B94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D7BA4; } }
L_003D7B9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7BA4u);  if (depth < kMaxDepth) unit_001D(c, 134u, depth + 1u); else { c.pc = 0x00277090u; return; } if (c.pc != 0x003D7BA4u) [[unlikely]] return; }
L_003D7BA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003D7E88; } }
L_003D7BAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7BB4u);  if (depth < kMaxDepth) unit_001D(c, 135u, depth + 1u); else { c.pc = 0x002770A0u; return; } if (c.pc != 0x003D7BB4u) [[unlikely]] return; }
L_003D7BB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 28644u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7630u | kUnwind; return; } goto L_003D7630; } }
L_003D7BBC:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 28596u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D763Cu | kUnwind; return; } goto L_003D763C; } }
    c.r[4].d[0] = ld8((c.r[28].w[0] - 28592u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 752u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[9], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7C00u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_001C(c, 69u, depth + 1u); else { c.pc = 0x002708F0u; return; } if (c.pc != 0x003D7C00u) [[unlikely]] return; }
L_003D7C00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 28588u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7640u | kUnwind; return; } goto L_003D7640; } }
L_003D7C08:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D768Cu | kUnwind; return; } goto L_003D768C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7C1Cu); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x003D7C1Cu) [[unlikely]] return; }
L_003D7C1C:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 24u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7690u | kUnwind; return; } goto L_003D7690; } }
L_003D7C3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7694u | kUnwind; return; } goto L_003D7694; } }
L_003D7C44:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D76D8u | kUnwind; return; } goto L_003D76D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7C58u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x003D7C58u) [[unlikely]] return; }
L_003D7C58:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 24u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D76DCu | kUnwind; return; } goto L_003D76DC; } }
L_003D7C78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D76E0u | kUnwind; return; } goto L_003D76E0; } }
L_003D7C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7C88u);  if (depth < kMaxDepth) unit_0085(c, 165u, depth + 1u); else { c.pc = 0x00416F50u; return; } if (c.pc != 0x003D7C88u) [[unlikely]] return; }
L_003D7C88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = ld8((c.r[29].w[0] + 200u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7720u | kUnwind; return; } goto L_003D7720; } }
L_003D7C90:
    st32((c.r[2].w[0]), c.f[4]);
    set32(c.r[10], c.r[29].w[0] + 144u);
    c.f[4] = fp::ee::div(c.fcr31, c.f[4], c.f[3]);
    set32(c.r[9], c.r[29].w[0] + 160u);
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[8], c.r[29].w[0] + 132u);
    set32(c.r[7], c.r[29].w[0] + 148u);
    set32(c.r[6], c.r[29].w[0] + 164u);
    set32(c.r[5], c.r[29].w[0] + 136u);
    set32(c.r[2], c.r[29].w[0] + 168u);
    c.f[15] = fp::ee::mul(c.fcr31, c.f[4], c.f[14]);
    c.f[14] = fp::ee::mul(c.fcr31, c.f[4], c.f[13]);
    c.f[3] = c.f[4] ^ fp::kSign;
    c.f[13] = fp::ee::mul(c.fcr31, c.f[3], c.f[17]);
    c.f[2] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[10].w[0]), c.f[13]);
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[9].w[0]), c.f[14]);
    st32((c.r[29].w[0] + 128u), c.f[15]);
    c.f[13] = fp::ee::mul(c.fcr31, c.f[13], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[9], c.f[13]);
    c.f[13] = fp::ee::madd(c.fcr31, c.facc, c.f[15], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[9], c.f[13]);
    c.f[13] = fp::ee::madd(c.fcr31, c.facc, c.f[14], c.f[0]);
    c.f[13] = c.f[13] ^ fp::kSign;
    st32((c.r[29].w[0] + 176u), c.f[13]);
    c.f[13] = fp::ee::mul(c.fcr31, c.f[7], c.f[18]);
    c.facc = fp::ee::add(c.fcr31, c.f[9], c.f[13]);
    c.f[14] = fp::ee::msub(c.fcr31, c.facc, c.f[6], c.f[16]);
    c.f[13] = fp::ee::mul(c.fcr31, c.f[5], c.f[18]);
    c.facc = fp::ee::add(c.fcr31, c.f[9], c.f[13]);
    c.f[15] = fp::ee::mul(c.fcr31, c.f[3], c.f[14]);
    c.f[14] = fp::ee::msub(c.fcr31, c.facc, c.f[6], c.f[12]);
    c.f[13] = fp::ee::mul(c.fcr31, c.f[5], c.f[16]);
    c.facc = fp::ee::add(c.fcr31, c.f[9], c.f[13]);
    c.f[12] = fp::ee::msub(c.fcr31, c.facc, c.f[7], c.f[12]);
    c.f[14] = fp::ee::mul(c.fcr31, c.f[4], c.f[14]);
    c.f[13] = fp::ee::mul(c.fcr31, c.f[3], c.f[12]);
    c.f[12] = fp::ee::mul(c.fcr31, c.f[14], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[9], c.f[12]);
    c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[15], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[9], c.f[12]);
    c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[13], c.f[0]);
    c.f[12] = c.f[12] ^ fp::kSign;
    st32((c.r[29].w[0] + 180u), c.f[12]);
    c.f[12] = fp::ee::mul(c.fcr31, c.f[7], c.f[11]);
    c.f[11] = fp::ee::mul(c.fcr31, c.f[5], c.f[11]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[8]);
    c.facc = fp::ee::add(c.fcr31, c.f[9], c.f[12]);
    c.f[8] = fp::ee::msub(c.fcr31, c.facc, c.f[6], c.f[8]);
    c.facc = fp::ee::add(c.fcr31, c.f[9], c.f[11]);
    c.f[6] = fp::ee::msub(c.fcr31, c.facc, c.f[6], c.f[10]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[6]);
    c.f[8] = fp::ee::mul(c.fcr31, c.f[4], c.f[8]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[4].w[0]), c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[9], c.f[5]);
    c.f[3] = fp::ee::msub(c.fcr31, c.facc, c.f[7], c.f[10]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[9], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[9], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0]), c.f[9]);
    st32((c.r[15].w[0]), c.f[9]);
    st32((c.r[14].w[0]), c.f[9]);
    st32((c.r[8].w[0]), c.f[15]);
    st32((c.r[7].w[0]), c.f[14]);
    st32((c.r[6].w[0]), c.f[13]);
    st32((c.r[5].w[0]), c.f[8]);
    st32((c.r[2].w[0]), c.f[3]);
    c.budget -= 75;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 184u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7978u | kUnwind; return; } goto L_003D7978; } }
L_003D7DBC:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 31672u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 28576u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D79E0u | kUnwind; return; } goto L_003D79E0; } }
L_003D7DCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7B40u | kUnwind; return; } goto L_003D7B40; } }
L_003D7DD4:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7B38u | kUnwind; return; } goto L_003D7B38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7DE8u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x003D7DE8u) [[unlikely]] return; }
L_003D7DE8:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7B3Cu | kUnwind; return; } goto L_003D7B3C; } }
L_003D7E08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7B40u | kUnwind; return; } goto L_003D7B40; } }
L_003D7E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7E18u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x003D7E18u) [[unlikely]] return; }
L_003D7E18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 32u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7B7Cu | kUnwind; return; } goto L_003D7B7C; } }
L_003D7E20:
    set32(c.r[2], ld32((c.r[28].w[0] - 28180u)));
    st8((c.r[28].w[0] - 28644u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[28].w[0] - 28932u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7B9Cu | kUnwind; return; } goto L_003D7B9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7E38u);  if (depth < kMaxDepth) unit_001D(c, 137u, depth + 1u); else { c.pc = 0x002770C0u; return; } if (c.pc != 0x003D7E38u) [[unlikely]] return; }
L_003D7E38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7B9Cu | kUnwind; return; } goto L_003D7B9C; } }
L_003D7E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7E48u);  if (depth < kMaxDepth) unit_001D(c, 137u, depth + 1u); else { c.pc = 0x002770C0u; return; } if (c.pc != 0x003D7E48u) [[unlikely]] return; }
L_003D7E48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27504u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7B9Cu | kUnwind; return; } goto L_003D7B9C; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29239u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7B9Cu | kUnwind; return; } goto L_003D7B9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7E70u); set32(c.r[4], 0u + 126u);  if (depth < kMaxDepth) unit_0077(c, 30u, depth + 1u); else { c.pc = 0x003DC400u; return; } if (c.pc != 0x003D7E70u) [[unlikely]] return; }
L_003D7E70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7B9Cu | kUnwind; return; } goto L_003D7B9C; } }
L_003D7E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7E80u);  if (depth < kMaxDepth) unit_001D(c, 134u, depth + 1u); else { c.pc = 0x00277090u; return; } if (c.pc != 0x003D7E80u) [[unlikely]] return; }
L_003D7E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7BA4u | kUnwind; return; } goto L_003D7BA4; } }
L_003D7E88:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_003D7EA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 28604u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003D7F1C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28868u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[28].w[0] - 28604u), 0u);  if (t) { goto L_003D7F1C; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D7F14; } }
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003D7EF4; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] << 42;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_003D7EF8; } }
L_003D7EF4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D7EF8:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_003D7EFC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D7F1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7F0Cu);  if (depth < kMaxDepth) unit_0085(c, 211u, depth + 1u); else { c.pc = 0x00417750u; return; } if (c.pc != 0x003D7F0Cu) [[unlikely]] return; }
L_003D7F0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003D7F20; } }
L_003D7F14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7EFCu | kUnwind; return; } goto L_003D7EFC; } }
L_003D7F1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D7F20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D7F30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0076(c, 4u, depth); } }
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(15ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D7F60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0076(c, 5u, depth); } }
L_003D7F60:
    c.r[17].d[0] = ld8((c.r[4].w[0] + 220u));
    set32(c.r[16], c.r[5].w[0] - 15u);
    c.r[2].d[0] = ld16((c.r[28].w[0] - 28998u));
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
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7F98u); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003D7F98u) [[unlikely]] return; }
L_003D7F98:
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
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0076(c, 2u, depth); } }
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 2;
L_003D7FDC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_003D7FF4; } }
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { [[clang::musttail]] return unit_0076(c, 3u, depth); } }
L_003D7FF4:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    [[clang::musttail]] return unit_0076(c, 1u, depth);
}

}

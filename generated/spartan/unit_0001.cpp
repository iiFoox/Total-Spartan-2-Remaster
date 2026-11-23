#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0001[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0,
    0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 41,
    0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96,
    0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    146, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 173, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0,
    0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0001(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00204000;
    case 2u: goto L_00204004;
    case 3u: goto L_00204020;
    case 4u: goto L_00204040;
    case 5u: goto L_002040D4;
    case 6u: goto L_00204204;
    case 7u: goto L_002042F0;
    case 8u: goto L_002043B8;
    case 9u: goto L_0020456C;
    case 10u: goto L_00204590;
    case 11u: goto L_0020463C;
    case 12u: goto L_00204640;
    case 13u: goto L_00204678;
    case 14u: goto L_002046B0;
    case 15u: goto L_00204748;
    case 16u: goto L_00204798;
    case 17u: goto L_00204818;
    case 18u: goto L_002049BC;
    case 19u: goto L_00204A00;
    case 20u: goto L_00204A64;
    case 21u: goto L_00204A78;
    case 22u: goto L_00204A8C;
    case 23u: goto L_00204AA0;
    case 24u: goto L_00204AB4;
    case 25u: goto L_00204AC0;
    case 26u: goto L_00204AF8;
    case 27u: goto L_00204B30;
    case 28u: goto L_00204BA0;
    case 29u: goto L_00204BA8;
    case 30u: goto L_00204C5C;
    case 31u: goto L_00204D08;
    case 32u: goto L_00204D90;
    case 33u: goto L_00204DE8;
    case 34u: goto L_00204E00;
    case 35u: goto L_00204E14;
    case 36u: goto L_00204E24;
    case 37u: goto L_00204E48;
    case 38u: goto L_00204E50;
    case 39u: goto L_00204E64;
    case 40u: goto L_00204E70;
    case 41u: goto L_00204E7C;
    case 42u: goto L_00204E88;
    case 43u: goto L_00204E94;
    case 44u: goto L_00204EA8;
    case 45u: goto L_00204EB4;
    case 46u: goto L_00204F00;
    case 47u: goto L_00204F68;
    case 48u: goto L_00204FA8;
    case 49u: goto L_00204FC0;
    case 50u: goto L_002050DC;
    case 51u: goto L_002050F0;
    case 52u: goto L_00205108;
    case 53u: goto L_00205134;
    case 54u: goto L_00205168;
    case 55u: goto L_002051AC;
    case 56u: goto L_002051C0;
    case 57u: goto L_002051D8;
    case 58u: goto L_00205250;
    case 59u: goto L_002052B4;
    case 60u: goto L_002052F8;
    case 61u: goto L_00205310;
    case 62u: goto L_0020542C;
    case 63u: goto L_0020545C;
    case 64u: goto L_00205490;
    case 65u: goto L_002054D4;
    case 66u: goto L_002054D8;
    case 67u: goto L_00205550;
    case 68u: goto L_002055A4;
    case 69u: goto L_002055AC;
    case 70u: goto L_002055B4;
    case 71u: goto L_002055BC;
    case 72u: goto L_002055CC;
    case 73u: goto L_00205610;
    case 74u: goto L_00205634;
    case 75u: goto L_002056B0;
    case 76u: goto L_00205730;
    case 77u: goto L_002057AC;
    case 78u: goto L_002057B0;
    case 79u: goto L_00205810;
    case 80u: goto L_00205838;
    case 81u: goto L_00205898;
    case 82u: goto L_002058A0;
    case 83u: goto L_002058C0;
    case 84u: goto L_00205938;
    case 85u: goto L_002059A0;
    case 86u: goto L_00205A00;
    case 87u: goto L_00205AC4;
    case 88u: goto L_00205B18;
    case 89u: goto L_00205B54;
    case 90u: goto L_00205BB8;
    case 91u: goto L_00205BD8;
    case 92u: goto L_00205C78;
    case 93u: goto L_00205CA0;
    case 94u: goto L_00205D10;
    case 95u: goto L_00205D7C;
    case 96u: goto L_00205DFC;
    case 97u: goto L_00205E18;
    case 98u: goto L_00205E48;
    case 99u: goto L_00205EB8;
    case 100u: goto L_00205F18;
    case 101u: goto L_00205FC4;
    case 102u: goto L_00205FD4;
    case 103u: goto L_00205FFC;
    case 104u: goto L_0020602C;
    case 105u: goto L_00206080;
    case 106u: goto L_00206090;
    case 107u: goto L_002060D8;
    case 108u: goto L_00206134;
    case 109u: goto L_00206180;
    case 110u: goto L_00206270;
    case 111u: goto L_002062B4;
    case 112u: goto L_00206380;
    case 113u: goto L_002063D8;
    case 114u: goto L_00206430;
    case 115u: goto L_002064F0;
    case 116u: goto L_00206510;
    case 117u: goto L_0020672C;
    case 118u: goto L_002067E4;
    case 119u: goto L_00206868;
    case 120u: goto L_0020689C;
    case 121u: goto L_0020691C;
    case 122u: goto L_00206940;
    case 123u: goto L_002069A8;
    case 124u: goto L_00206A10;
    case 125u: goto L_00206A34;
    case 126u: goto L_00206A9C;
    case 127u: goto L_00206AD0;
    case 128u: goto L_00206B14;
    case 129u: goto L_00206B50;
    case 130u: goto L_00206BFC;
    case 131u: goto L_00206C80;
    case 132u: goto L_00206C94;
    case 133u: goto L_00206CD0;
    case 134u: goto L_00206D00;
    case 135u: goto L_00206D3C;
    case 136u: goto L_00206D74;
    case 137u: goto L_00206DC0;
    case 138u: goto L_00206DF4;
    case 139u: goto L_00206E20;
    case 140u: goto L_00206E40;
    case 141u: goto L_00206E48;
    case 142u: goto L_00206E74;
    case 143u: goto L_00206EA0;
    case 144u: goto L_00206F10;
    case 145u: goto L_00206F38;
    case 146u: goto L_00206F80;
    case 147u: goto L_00206F88;
    case 148u: goto L_00206F9C;
    case 149u: goto L_00206FD4;
    case 150u: goto L_00207004;
    case 151u: goto L_00207030;
    case 152u: goto L_0020705C;
    case 153u: goto L_002070B4;
    case 154u: goto L_002070C0;
    case 155u: goto L_002070D4;
    case 156u: goto L_00207118;
    case 157u: goto L_00207144;
    case 158u: goto L_00207170;
    case 159u: goto L_002071AC;
    case 160u: goto L_002071BC;
    case 161u: goto L_00207240;
    case 162u: goto L_00207380;
    case 163u: goto L_002073E0;
    case 164u: goto L_00207410;
    case 165u: goto L_002074A8;
    case 166u: goto L_002074C8;
    case 167u: goto L_00207524;
    case 168u: goto L_0020752C;
    case 169u: goto L_00207568;
    case 170u: goto L_002076D0;
    case 171u: goto L_002076D8;
    case 172u: goto L_002076E0;
    case 173u: goto L_002076E8;
    case 174u: goto L_002076F0;
    case 175u: goto L_00207718;
    case 176u: goto L_00207794;
    case 177u: goto L_002077AC;
    case 178u: goto L_002077EC;
    case 179u: goto L_0020783C;
    case 180u: goto L_00207964;
    case 181u: goto L_00207974;
    case 182u: goto L_00207A00;
    case 183u: goto L_00207A40;
    case 184u: goto L_00207B50;
    case 185u: goto L_00207BD0;
    case 186u: goto L_00207C30;
    case 187u: goto L_00207CB4;
    case 188u: goto L_00207D20;
    case 189u: goto L_00207DE8;
    case 190u: goto L_00207DF0;
    case 191u: goto L_00207E04;
    case 192u: goto L_00207E34;
    case 193u: goto L_00207E48;
    case 194u: goto L_00207E60;
    case 195u: goto L_00207E80;
    case 196u: goto L_00207E90;
    case 197u: goto L_00207EA4;
    case 198u: goto L_00207ED0;
    default: bad_entry(c, 0x00204000u); return;
    }
L_00204000:
    c.budget -= 1;
L_00204004:
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00204020; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00204204; } }
L_00204020:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00204050; } }
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
L_00204040:
    c.budget -= 2;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00204050; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00204204; } }
L_00204050:
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020407C; } }
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020407C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00204204; } }
L_0020407C:
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002040A8; } }
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002040A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00204204; } }
L_002040A8:
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00204200; } }
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00204200; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00204204; } }
L_002040D4:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00204108; } }
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00204108; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00204204; } }
L_00204108:
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020413C; } }
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020413C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00204204; } }
L_0020413C:
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00204170; } }
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00204170; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00204204; } }
L_00204170:
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002041A0; } }
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002041A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00204204; } }
L_002041A0:
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002041D0; } }
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002041D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00204204; } }
L_002041D0:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00204200; } }
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00204200; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00204204; } }
L_00204200:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00204204:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00204218; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020456C; } }
L_00204218:
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[6] = c.r[2].w[0];
    set32(c.r[12], ld32((c.r[4].w[0] + 64u)));
    c.f[5] = ld32((c.r[6].w[0] + 4u));
    c.f[4] = ld32((c.r[6].w[0] + 8u));
    set32(c.r[2], c.r[29].w[0] + 128u);
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[29].w[0] + 128u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = c.f[6];
    st32((c.r[29].w[0] + 144u), c.f[5]);
    st32((c.r[29].w[0] + 160u), c.f[4]);
    st32((c.r[29].w[0] + 132u), c.f[3]);
    st32((c.r[29].w[0] + 148u), c.f[2]);
    st32((c.r[29].w[0] + 164u), c.f[1]);
    c.vu0.vf[31] = c.r[16];
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[29]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[28]);
    c.r[3].d[0] = c.r[8].d[0] & 255ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 25;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0020428C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.r[24].d[0] = ld16((c.r[2].w[0] + 10u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[25].d[0] = ld16((c.r[2].w[0] + 4u));  if (t) { goto L_002042A0; } }
L_0020428C:
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[24].d[0] = ld16((c.r[3].w[0] + 8u));
    c.r[25].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 5;
L_002042A0:
    c.r[1].d[0] = c.r[25].d[0] < c.r[24].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002044E0; } }
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7F7F0000u);
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xB4000000u);
    set32(c.r[10], ld32((c.r[4].w[0] + 56u)));
    c.f[8] = c.r[2].w[0];
    set32(c.r[13], c.r[29].w[0] + 116u);
    c.f[9] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.f[7] = c.r[2].w[0];
    c.r[11].d[0] = c.r[3].d[0] | 65535ull;
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], c.r[29].w[0] + 112u);
    c.f[5] = 0u;
    c.budget -= 17;
L_002042F0:
    set32(c.r[9], c.r[25].w[0] << 1);
    set32(c.r[8], c.r[25].w[0] + 1u);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 1);
    c.r[9].d[0] = ld16((c.r[9].w[0]));
    set32(c.r[8], c.r[10].w[0] + c.r[8].w[0]);
    c.r[8].d[0] = ld16((c.r[8].w[0]));
    set32(c.r[19], c.r[9].w[0] << 4);
    set32(c.r[14], c.r[12].w[0] + c.r[19].w[0]);
    set32(c.r[20], c.r[8].w[0] << 4);
    c.f[1] = ld32((c.r[14].w[0]));
    set32(c.r[20], c.r[12].w[0] + c.r[20].w[0]);
    c.f[4] = ld32((c.r[20].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[12]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 188u), c.f[4]);  if (t) { goto L_00204348; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00204370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[14].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00204378; } }
L_00204348:
    c.f[1] = ld32((c.r[14].w[0] + 4u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[12]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00204370; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00204370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[14].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00204378; } }
L_00204370:
    c.r[14].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00204378:
    c.budget -= 2;
    { const bool t = c.r[14].d[0] != 0ull;  if (t) { goto L_002044D0; } }
    set32(c.r[14], c.r[12].w[0] + c.r[19].w[0]);
    set32(c.r[19], ld32((c.r[14].w[0] + 12u)));
    c.r[19].d[0] = c.r[19].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002044D0; } }
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.r[8].d[0] = c.r[8].d[0] & 65535ull;
    c.r[1].d[0] = c.r[9].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.f[13] = c.f[9];
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.f[11] = c.f[8];  if (t) { goto L_002044A8; } }
    set32(c.r[8], c.r[25].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] << 1);
    set32(c.r[19], c.r[10].w[0] + c.r[8].w[0]);
    c.budget -= 3;
L_002043B8:
    set32(c.r[8], c.r[9].w[0] << 4);
    set32(c.r[8], c.r[12].w[0] + c.r[8].w[0]);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mulabc4<0>(c.vu0, 15u, 30u, c.vu0.vf[1].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 29u, c.vu0.vf[1].w[1]);
    vu::maddbc4<1>(c.vu0, 15u, 2u, 28u, c.vu0.vf[1].w[2]);
    c.f[10] = ld32((c.r[8].w[0] + 12u));
    c.f[10] = fp::ee::add(c.fcr31, c.f[10], c.f[12]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[2]);
    c.f[1] = ld32((c.r[13].w[0]));
    c.f[4] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[10]);
    set32(c.r[21], c.f[4]);
    set32(c.r[20], c.f[1]);
    c.r[8].d[0] = c.r[21].d[0] & c.r[11].d[0];
    c.budget -= 17;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_00204410; } }
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_00204490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[13] = c.f[7];  if (t) { goto L_002044A8; } }
    c.budget -= 1;
L_00204410:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[4]);
    c.budget -= 6;
    { const bool t = c.r[21].sd[0] < 0;  if (t) { goto L_00204458; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[5]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00204440; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[13] = c.f[7];  if (t) { goto L_002044A8; } }
    c.budget -= 1;
L_00204440:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[11]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00204490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[11] = c.f[1];  if (t) { goto L_00204470; } }
    c.budget -= 1;
L_00204458:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[13]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00204490; } }
    c.f[13] = c.f[1];
    c.r[15].d[0] = c.r[9].d[0] + 0ull;
    c.r[16].d[0] = c.r[14].d[0] + 0ull;
    c.budget -= 3;
L_00204470:
    fpu_compare(c, fp::key(c.f[13]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002044A8; } }
    fpu_compare(c, fp::key(c.f[13]) <= fp::key(c.f[11]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00204490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[13] = c.f[7];  if (t) { goto L_002044A8; } }
L_00204490:
    c.r[8].d[0] = ld16((c.r[19].w[0]));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[8].d[0] = c.r[9].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002043B8u | kUnwind; return; } goto L_002043B8; } }
    c.budget -= 1;
L_002044A8:
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002044D0; } }
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[5]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002044D0; } }
    c.f[0] = c.f[13];
    c.r[18].d[0] = c.r[15].d[0] + 0ull;
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_002044D0:
    set32(c.r[25], c.r[25].w[0] + 1u);
    c.r[8].d[0] = c.r[25].d[0] < c.r[24].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002042F0u | kUnwind; return; } goto L_002042F0; } }
L_002044E0:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[6]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00204568; } }
    c.f[6] = ld32((c.r[6].w[0] + 4u));
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.f[4] = ld32((c.r[6].w[0] + 8u));
    set32(c.r[8], c.r[18].w[0] << 4);
    c.f[2] = ld32((c.r[6].w[0]));
    set32(c.r[2], 0u + 1u);
    st32((c.r[7].w[0] + 20u), c.f[0]);
    c.f[5] = ld32((c.r[5].w[0] + 4u));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[6] = fp::ee::mul(c.fcr31, c.f[6], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 108u));
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[6]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[7].w[0]), c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    st32((c.r[7].w[0] + 4u), c.f[5]);
    st32((c.r[7].w[0] + 8u), c.f[3]);
    st32((c.r[7].w[0] + 12u), c.f[1]);
    st32((c.r[7].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    st16((c.r[7].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] >> 16);
    st8((c.r[7].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st16((c.r[7].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0020456C; } }
L_00204568:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020456C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00204590:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00204830; } }
    c.f[0] = 0u;
    set32(c.r[3], c.r[4].w[0] + 16u);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[4].w[0] + 32u);  if (t) { goto L_00204838; } }
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002048D4; } }
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002048DC; } }
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002048E4; } }
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002048EC; } }
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002048F4; } }
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020463C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00204640; } }
L_0020463C:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00204640:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002048FC; } }
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[11], 0u - 1u);
    set32(c.r[7], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[10].d[0] = c.r[11].d[0] + 0ull;  if (t) { goto L_00204904; } }
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[8].d[0] = ld16((c.r[3].w[0] + 8u));
    c.r[9].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 5;
L_00204678:
    c.r[1].d[0] = c.r[9].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00204828; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[3], c.r[9].w[0] << 1);
    c.f[8] = ld32((c.r[5].w[0] + 4u));
    c.r[13].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[7] = ld32((c.r[5].w[0]));
    c.f[6] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = 0u;
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC61C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[5] = c.r[3].w[0];
    c.budget -= 11;
L_002046B0:
    c.r[12].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[5], c.r[12].w[0] << 4);
    set32(c.r[3], c.r[7].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[8]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00204914; } }
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[8]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00204920; } }
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[7]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00204928; } }
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[7]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00204930; } }
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00204938; } }
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00204740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[13].d[0] + 0ull;  if (t) { goto L_00204748; } }
    c.budget -= 1;
L_00204740:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00204748:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00204818; } }
    set32(c.r[3], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00204818; } }
    set32(c.r[5], c.r[9].w[0] + 1u);
    set32(c.r[24], c.r[12].w[0] + 2u);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.r[15].d[0] = c.r[13].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.r[12].d[0] = ld16((c.r[5].w[0]));
    c.f[10] = c.f[5];
    c.r[1].d[0] = c.r[24].d[0] < c.r[12].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.f[9] = c.f[5];  if (t) { goto L_00204948; } }
    set32(c.r[5], c.r[24].w[0] << 4);
    set32(c.r[14], c.r[7].w[0] + c.r[5].w[0]);
    c.budget -= 3;
L_00204798:
    c.f[0] = ld32((c.r[14].w[0] + 12u));
    c.f[1] = ld32((c.r[14].w[0] + 4u));
    c.f[3] = ld32((c.r[14].w[0]));
    c.f[4] = ld32((c.r[14].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[8]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[7]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[6]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00204940; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[10]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002047E8; } }
    c.f[9] = c.f[10];
    c.r[10].d[0] = c.r[11].d[0] + 0ull;
    c.f[10] = c.f[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = c.r[24].d[0] + 0ull;  if (t) { goto L_00204800; } }
L_002047E8:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[9]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00204800; } }
    c.f[9] = c.f[0];
    c.r[10].d[0] = c.r[24].d[0] + 0ull;
    c.budget -= 3;
L_00204800:
    set32(c.r[24], c.r[24].w[0] + 1u);
    c.r[5].d[0] = c.r[24].d[0] < c.r[12].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[14], c.r[14].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204798u | kUnwind; return; } goto L_00204798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00204948; } }
L_00204818:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002046B0u | kUnwind; return; } goto L_002046B0; } }
L_00204828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002049F4; } }
L_00204830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002049F4; } }
L_00204838:
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002048B4; } }
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002048BC; } }
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020487C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204640u | kUnwind; return; } goto L_00204640; } }
L_0020487C:
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002048C4; } }
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002048CC; } }
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020463Cu | kUnwind; return; } goto L_0020463C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204640u | kUnwind; return; } goto L_00204640; } }
L_002048B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204640u | kUnwind; return; } goto L_00204640; } }
L_002048BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204640u | kUnwind; return; } goto L_00204640; } }
L_002048C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204640u | kUnwind; return; } goto L_00204640; } }
L_002048CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204640u | kUnwind; return; } goto L_00204640; } }
L_002048D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204640u | kUnwind; return; } goto L_00204640; } }
L_002048DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204640u | kUnwind; return; } goto L_00204640; } }
L_002048E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204640u | kUnwind; return; } goto L_00204640; } }
L_002048EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204640u | kUnwind; return; } goto L_00204640; } }
L_002048F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204640u | kUnwind; return; } goto L_00204640; } }
L_002048FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002049F4; } }
L_00204904:
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.r[8].d[0] = ld16((c.r[2].w[0] + 10u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = ld16((c.r[2].w[0] + 4u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204678u | kUnwind; return; } goto L_00204678; } }
L_00204914:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[13].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204748u | kUnwind; return; } goto L_00204748; } }
    c.budget -= 1;
L_00204920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[13].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204748u | kUnwind; return; } goto L_00204748; } }
L_00204928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[13].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204748u | kUnwind; return; } goto L_00204748; } }
L_00204930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[13].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204748u | kUnwind; return; } goto L_00204748; } }
L_00204938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[13].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204748u | kUnwind; return; } goto L_00204748; } }
L_00204940:
    c.r[15].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00204948:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204818u | kUnwind; return; } goto L_00204818; } }
    set32(c.r[4], c.r[11].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F340000u);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65012ull;
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002049EC; } }
    set32(c.r[2], c.r[10].w[0] << 4);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.f[2] = ld32((c.r[4].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002049B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[10].w[0] << 4);  if (t) { goto L_002049C0; } }
L_002049B8:
    c.r[10].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 1;
L_002049BC:
    set32(c.r[4], c.r[10].w[0] << 4);
    c.budget -= 1;
L_002049C0:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    st32((c.r[6].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    st16((c.r[6].w[0] + 24u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] >> 16);
    st8((c.r[6].w[0] + 28u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st16((c.r[6].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002049F4; } }
L_002049EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = c.r[11].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002049BCu | kUnwind; return; } goto L_002049BC; } }
L_002049F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00204A00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00204AB4; } }
    c.r[3].d[0] = ld16((c.r[5].w[0] + 1494u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00204AB4; } }
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00204A80; } }
    c.r[2].d[0] = c.r[3].d[0] & 48ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00204A94; } }
    c.r[2].d[0] = c.r[3].d[0] & 192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00204AA8; } }
    c.r[2].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00204A6C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204A64u); set32(c.r[4], c.r[4].w[0] - 15936u);  if (depth < kMaxDepth) unit_0091(c, 170u, depth + 1u); else { c.pc = 0x00446A80u; return; } if (c.pc != 0x00204A64u) [[unlikely]] return; }
L_00204A64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00204AB8; } }
L_00204A6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204A78u); set32(c.r[4], c.r[4].w[0] - 15952u);  if (depth < kMaxDepth) unit_0091(c, 170u, depth + 1u); else { c.pc = 0x00446A80u; return; } if (c.pc != 0x00204A78u) [[unlikely]] return; }
L_00204A78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00204AB4; } }
L_00204A80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204A8Cu); set32(c.r[4], c.r[4].w[0] - 15088u);  if (depth < kMaxDepth) unit_0091(c, 170u, depth + 1u); else { c.pc = 0x00446A80u; return; } if (c.pc != 0x00204A8Cu) [[unlikely]] return; }
L_00204A8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00204AB4; } }
L_00204A94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204AA0u); set32(c.r[4], c.r[4].w[0] - 15088u);  if (depth < kMaxDepth) unit_0091(c, 170u, depth + 1u); else { c.pc = 0x00446A80u; return; } if (c.pc != 0x00204AA0u) [[unlikely]] return; }
L_00204AA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00204AB4; } }
L_00204AA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204AB4u); set32(c.r[4], c.r[4].w[0] - 14240u);  if (depth < kMaxDepth) unit_0091(c, 170u, depth + 1u); else { c.pc = 0x00446A80u; return; } if (c.pc != 0x00204AB4u) [[unlikely]] return; }
L_00204AB4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00204AB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00204AC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 63u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00204DF0; } }
    set32(c.r[3], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00204DF0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 29840u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00204D10; } }
L_00204AF8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00204BF0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 808u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00204D30; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00204D30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00204D30; } }
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.budget -= 1;
L_00204B30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC61C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00204BA8; } }
    c.r[10].d[0] = ld16((c.r[16].w[0] + 544u));
    set32(c.r[8], 0u - 3u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[6], 0u - 17u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[4], c.r[16].w[0] + 544u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[16].w[0] + 544u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[16].w[0] + 544u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[16].w[0] + 544u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[16].w[0] + 544u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204BA0u); st16((c.r[16].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 161u, depth + 1u); else { c.pc = 0x00289C10u; return; } if (c.pc != 0x00204BA0u) [[unlikely]] return; }
L_00204BA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00204DF4; } }
L_00204BA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 536u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00204DF0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 536u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 536u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00204DF0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 524u));
    set32(c.r[4], 0u - 2u);
    c.r[5].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 524u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 525u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 525u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
L_00204BF0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00204C60; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 525u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00204C60; } }
    c.f[0] = ld32((c.r[16].w[0] + 508u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[13] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 60u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[12] = ld32((c.r[2].w[0] - 24096u));
    st32((c.r[29].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 416u));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 420u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 424u));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 428u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204C5Cu); st32((c.r[29].w[0] + 44u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 63u, depth + 1u); else { c.pc = 0x00201680u; return; } if (c.pc != 0x00204C5Cu) [[unlikely]] return; }
L_00204C5C:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00204C60:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00204D40; } }
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = ld32((c.r[16].w[0] + 508u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00204DF0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 531u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00204D98; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00204DF0; } }
    c.r[9].d[0] = ld16((c.r[16].w[0] + 544u));
    set32(c.r[7], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[5], 0u - 17u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[4], c.r[16].w[0] + 544u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[16].w[0] + 544u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[16].w[0] + 544u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[16].w[0] + 544u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[16].w[0] + 544u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204D08u); st16((c.r[16].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 272u, depth + 1u); else { c.pc = 0x0028AB40u; return; } if (c.pc != 0x00204D08u) [[unlikely]] return; }
L_00204D08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00204DF0; } }
L_00204D10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC0E00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[0] = c.r[4].w[0];
    set32(c.r[4], 0u + 1u);
    c.f[0] = c.f[0] & fp::kAbs;
    st8((c.r[28].w[0] - 29840u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 24096u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204AF8u | kUnwind; return; } goto L_00204AF8; } }
L_00204D30:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204BA8u | kUnwind; return; } goto L_00204BA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 36u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204B30u | kUnwind; return; } goto L_00204B30; } }
L_00204D40:
    c.r[9].d[0] = ld16((c.r[16].w[0] + 544u));
    set32(c.r[7], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[5], 0u - 17u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[4], c.r[16].w[0] + 544u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[16].w[0] + 544u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[16].w[0] + 544u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[16].w[0] + 544u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[16].w[0] + 544u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204D90u); st16((c.r[16].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 266u, depth + 1u); else { c.pc = 0x0028AA90u; return; } if (c.pc != 0x00204D90u) [[unlikely]] return; }
L_00204D90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204D08u | kUnwind; return; } goto L_00204D08; } }
L_00204D98:
    c.r[9].d[0] = ld16((c.r[16].w[0] + 544u));
    set32(c.r[7], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[5], 0u - 17u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[4], c.r[16].w[0] + 544u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[16].w[0] + 544u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[16].w[0] + 544u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[16].w[0] + 544u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[16].w[0] + 544u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204DE8u); st16((c.r[16].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 272u, depth + 1u); else { c.pc = 0x0028AB40u; return; } if (c.pc != 0x00204DE8u) [[unlikely]] return; }
L_00204DE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204D08u | kUnwind; return; } goto L_00204D08; } }
L_00204DF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00204DF4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00204E00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204E14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 25u, depth + 1u); else { c.pc = 0x00204AC0u; return; } if (c.pc != 0x00204E14u) [[unlikely]] return; }
L_00204E14:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00204EBC; } }
L_00204E24:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 526u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204E48u); st8((c.r[16].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0001(c, 19u, depth + 1u); else { c.pc = 0x00204A00u; return; } if (c.pc != 0x00204E48u) [[unlikely]] return; }
L_00204E48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204E50u); set32(c.r[4], c.r[16].w[0] + 752u);  if (depth < kMaxDepth) unit_0001(c, 75u, depth + 1u); else { c.pc = 0x002056B0u; return; } if (c.pc != 0x00204E50u) [[unlikely]] return; }
L_00204E50:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00204E9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204E64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 288u, depth + 1u); else { c.pc = 0x002A3600u; return; } if (c.pc != 0x00204E64u) [[unlikely]] return; }
L_00204E64:
    set32(c.r[4], ld32((c.r[16].w[0] + 1556u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204E70u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 183u, depth + 1u); else { c.pc = 0x002AAE00u; return; } if (c.pc != 0x00204E70u) [[unlikely]] return; }
L_00204E70:
    set32(c.r[4], ld32((c.r[16].w[0] + 1556u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204E7Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 58u, depth + 1u); else { c.pc = 0x00205250u; return; } if (c.pc != 0x00204E7Cu) [[unlikely]] return; }
L_00204E7C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1564u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204E88u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 171u, depth + 1u); else { c.pc = 0x002AAAB0u; return; } if (c.pc != 0x00204E88u) [[unlikely]] return; }
L_00204E88:
    set32(c.r[4], ld32((c.r[16].w[0] + 1564u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204E94u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 46u, depth + 1u); else { c.pc = 0x00204F00u; return; } if (c.pc != 0x00204E94u) [[unlikely]] return; }
L_00204E94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00204EB4; } }
L_00204E9C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1556u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204EA8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 58u, depth + 1u); else { c.pc = 0x00205250u; return; } if (c.pc != 0x00204EA8u) [[unlikely]] return; }
L_00204EA8:
    set32(c.r[4], ld32((c.r[16].w[0] + 1564u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204EB4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 46u, depth + 1u); else { c.pc = 0x00204F00u; return; } if (c.pc != 0x00204EB4u) [[unlikely]] return; }
L_00204EB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00204EF0; } }
L_00204EBC:
    c.f[2] = ld32((c.r[16].w[0] + 508u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[4] = ld32((c.r[16].w[0] + 40u));
    c.f[3] = ld32((c.r[16].w[0] + 44u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[1]);
    st32((c.r[16].w[0] + 40u), c.f[4]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 44u), c.f[3]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204E24u | kUnwind; return; } goto L_00204E24; } }
L_00204EF0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00204F00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    c.f[23] = ld32((c.r[5].w[0] + 112u));
    c.f[24] = ld32((c.r[5].w[0] + 116u));
    c.f[25] = ld32((c.r[5].w[0] + 120u));
    c.f[20] = ld32((c.r[5].w[0] + 32u));
    c.f[21] = ld32((c.r[5].w[0] + 36u));
    c.f[22] = ld32((c.r[5].w[0] + 40u));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 25;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00205120; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00204F68:
    set32(c.r[3], ld32((c.r[17].w[0] + 128u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[3].w[0] + c.r[18].w[0]);
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[20]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002051F8; } }
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002051F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002051F8; } }
L_00204FA8:
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00204FC0; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_00204FC0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00204FE0; } }
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00204FE0; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_00204FE0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00205000; } }
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00205000; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_00205000:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00205020; } }
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00205020; } }
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_00205020:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00205108; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[23]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00205038; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00205038:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00205054; } }
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[23]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00205054; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00205054:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00205070; } }
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[25]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00205070; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00205070:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020508C; } }
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[25]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0020508C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020508C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002050A8; } }
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[24]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002050A8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002050A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002050C4; } }
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[24]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002050C4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002050C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002050E8; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002050DCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_009C(c, 13u, depth + 1u); else { c.pc = 0x004701B0u; return; } if (c.pc != 0x002050DCu) [[unlikely]] return; }
L_002050DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00205108; } }
    c.budget -= 1;
L_002050E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002050F0u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_009C(c, 43u, depth + 1u); else { c.pc = 0x00470540u; return; } if (c.pc != 0x002050F0u) [[unlikely]] return; }
L_002050F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00205108; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205108u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_009C(c, 13u, depth + 1u); else { c.pc = 0x004701B0u; return; } if (c.pc != 0x00205108u) [[unlikely]] return; }
L_00205108:
    set32(c.r[3], ld32((c.r[17].w[0] + 132u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204F68u | kUnwind; return; } goto L_00204F68; } }
    c.budget -= 1;
L_00205120:
    set32(c.r[3], ld32((c.r[17].w[0] + 140u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002051F0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00205134:
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[20], c.r[3].w[0] + c.r[18].w[0]);
    c.f[1] = ld32((c.r[20].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[21]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00205208; } }
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00205208; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00205208; } }
    c.budget -= 1;
L_00205168:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[24]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00205178; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00205178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00205194; } }
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[24]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00205194; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00205194:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002051B8; } }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002051ACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_009C(c, 13u, depth + 1u); else { c.pc = 0x004701B0u; return; } if (c.pc != 0x002051ACu) [[unlikely]] return; }
L_002051AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002051D8; } }
    c.budget -= 1;
L_002051B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002051C0u); set32(c.r[4], ld32((c.r[20].w[0])));  if (depth < kMaxDepth) unit_009C(c, 43u, depth + 1u); else { c.pc = 0x00470540u; return; } if (c.pc != 0x002051C0u) [[unlikely]] return; }
L_002051C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002051D8; } }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002051D8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_009C(c, 13u, depth + 1u); else { c.pc = 0x004701B0u; return; } if (c.pc != 0x002051D8u) [[unlikely]] return; }
L_002051D8:
    set32(c.r[3], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00205134u | kUnwind; return; } goto L_00205134; } }
    c.budget -= 1;
L_002051F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00205218; } }
L_002051F8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204FC0u | kUnwind; return; } goto L_00204FC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204FA8u | kUnwind; return; } goto L_00204FA8; } }
L_00205208:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002051D8u | kUnwind; return; } goto L_002051D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00205168u | kUnwind; return; } goto L_00205168; } }
L_00205218:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00205250:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    c.f[23] = ld32((c.r[5].w[0] + 112u));
    c.f[24] = ld32((c.r[5].w[0] + 116u));
    c.f[25] = ld32((c.r[5].w[0] + 120u));
    c.f[20] = ld32((c.r[5].w[0] + 32u));
    c.f[21] = ld32((c.r[5].w[0] + 36u));
    c.f[22] = ld32((c.r[5].w[0] + 40u));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 24;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00205448; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002052B4:
    set32(c.r[3], ld32((c.r[19].w[0] + 128u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[3].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[9].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[23]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002054F8; } }
    c.f[0] = ld32((c.r[9].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[23]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002054F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002054F8; } }
    c.budget -= 1;
L_002052F8:
    c.f[0] = ld32((c.r[9].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[25]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00205310; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_00205310:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00205330; } }
    c.f[0] = ld32((c.r[9].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[25]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00205330; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_00205330:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00205350; } }
    c.f[0] = ld32((c.r[9].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[24]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00205350; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_00205350:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00205370; } }
    c.f[0] = ld32((c.r[9].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[24]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00205370; } }
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_00205370:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00205430; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_00205388; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00205388:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002053A4; } }
    c.f[0] = ld32((c.r[9].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002053A4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002053A4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002053C0; } }
    c.f[0] = ld32((c.r[9].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002053C0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002053C0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002053DC; } }
    c.f[0] = ld32((c.r[9].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002053DC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002053DC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002053F8; } }
    c.f[0] = ld32((c.r[9].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002053F8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002053F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00205414; } }
    c.f[0] = ld32((c.r[9].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_00205414; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00205414:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00205430; } }
    set32(c.r[4], ld32((c.r[9].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020542Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 13u, depth + 1u); else { c.pc = 0x004701B0u; return; } if (c.pc != 0x0020542Cu) [[unlikely]] return; }
L_0020542C:
    c.budget -= 1;
L_00205430:
    set32(c.r[3], ld32((c.r[19].w[0] + 132u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002052B4u | kUnwind; return; } goto L_002052B4; } }
    c.budget -= 1;
L_00205448:
    set32(c.r[3], ld32((c.r[19].w[0] + 140u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002054F0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020545C:
    set32(c.r[3], ld32((c.r[19].w[0] + 136u)));
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[24]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00205508; } }
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[24]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00205508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00205508; } }
    c.budget -= 1;
L_00205490:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002054A0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002054A0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002054BC; } }
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002054BC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002054BC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002054D8; } }
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002054D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 13u, depth + 1u); else { c.pc = 0x004701B0u; return; } if (c.pc != 0x002054D4u) [[unlikely]] return; }
L_002054D4:
    c.budget -= 1;
L_002054D8:
    set32(c.r[3], ld32((c.r[19].w[0] + 140u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020545Cu | kUnwind; return; } goto L_0020545C; } }
    c.budget -= 1;
L_002054F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00205518; } }
L_002054F8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00205310u | kUnwind; return; } goto L_00205310; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002052F8u | kUnwind; return; } goto L_002052F8; } }
L_00205508:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002054D8u | kUnwind; return; } goto L_002054D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00205490u | kUnwind; return; } goto L_00205490; } }
L_00205518:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00205550:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 212u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00205658; } }
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00205658; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002055A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00205660; } }
L_002055AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002055B4u); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_0001(c, 34u, depth + 1u); else { c.pc = 0x00204E00u; return; } if (c.pc != 0x002055B4u) [[unlikely]] return; }
L_002055B4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_00205678; } }
L_002055BC:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.r[1].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00205650; } }
L_002055CC:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], c.r[17].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] - c.r[17].w[0]);
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[16], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00205638; } }
    c.r[3].d[0] = c.r[5].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00205638; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205610u);  if (depth < kMaxDepth) unit_0001(c, 34u, depth + 1u); else { c.pc = 0x00204E00u; return; } if (c.pc != 0x00205610u) [[unlikely]] return; }
L_00205610:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 528u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00205638; } }
    st8((c.r[4].w[0] + 528u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205634u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x00205634u) [[unlikely]] return; }
L_00205634:
    c.budget -= 1;
L_00205638:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002055CCu | kUnwind; return; } goto L_002055CC; } }
    c.budget -= 1;
L_00205650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00205698; } }
L_00205658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002055A4u | kUnwind; return; } goto L_002055A4; } }
L_00205660:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 20400u));
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] - 20412u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002055ACu | kUnwind; return; } goto L_002055AC; } }
L_00205678:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 20400u));
    c.f[0] = ld32((c.r[4].w[0] - 20404u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 20412u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002055BCu | kUnwind; return; } goto L_002055BC; } }
L_00205698:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002056B0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[23] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[23]);
    st32((c.r[4].w[0] + 24u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 280u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00205F90; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.f[3] = ld32((c.r[16].w[0] + 32u));  if (t) { goto L_00205DCC; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00205DCC; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[23]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[23]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 5;
L_00205730:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 57u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00205748; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00205764; } }
L_00205748:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_00205764:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002057AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00205DD8; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00205DD8; } }
L_002057AC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 49u)));
    c.budget -= 1;
L_002057B0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00205F98; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00205F98; } }
    c.f[1] = ld32((c.r[16].w[0] + 44u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[23]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 44u), c.f[1]);  if (t) { goto L_00205F98; } }
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = ld32((c.r[16].w[0] + 44u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00205F98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00205F98; } }
L_00205810:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[23]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 28u), c.f[1]);  if (t) { goto L_00205A04; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 3;
L_00205838:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 92u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002059E8; } }
    set32(c.r[18], ld32((c.r[3].w[0] + 1360u)));
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_002059E8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 260u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 56u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00205890; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00205FB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00205898; } }
L_00205890:
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 2;
L_00205898:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00205FE0; } }
L_002058A0:
    set32(c.r[4], ld32((c.r[18].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] + 8u);  if (t) { goto L_00205918; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 16384u);
    c.budget -= 4;
L_002058C0:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00205908; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_00205908; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00205918; } }
L_00205908:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002058C0u | kUnwind; return; } goto L_002058C0; } }
L_00205918:
    set32(c.r[4], ld32((c.r[3].w[0] + 200u)));
    c.r[4].d[0] = c.r[4].d[0] | 16384ull;
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 8;
L_00205938:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002059A8; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 16384u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00206008; } }
    c.budget -= 1;
L_002059A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002059D8; } }
L_002059A8:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_002059C0; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002059C0:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00205938u | kUnwind; return; } goto L_00205938; } }
    breakpoint(c, 0x002059D0u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002059D8:
    st32((c.r[9].w[0]), c.r[17].w[0]);
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002059E8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00205838u | kUnwind; return; } goto L_00205838; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 272u));  if (t) { goto L_00205A08; } }
L_00205A00:
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 1;
L_00205A04:
    c.f[0] = ld32((c.r[16].w[0] + 272u));
    c.budget -= 1;
L_00205A08:
    c.f[3] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00205CB8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.f[2] = ld32((c.r[16].w[0] + 256u));
    c.f[1] = ld32((c.r[16].w[0] + 260u));
    c.f[0] = ld32((c.r[16].w[0] + 264u));
    c.f[4] = ld32((c.r[4].w[0] + 32u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 220u));
    c.f[5] = ld32((c.r[4].w[0] + 36u));
    c.f[6] = ld32((c.r[4].w[0] + 40u));
    c.f[20] = fp::ee::sub(c.fcr31, c.f[4], c.f[2]);
    c.f[21] = fp::ee::sub(c.fcr31, c.f[5], c.f[1]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.f[22] = fp::ee::sub(c.fcr31, c.f[6], c.f[0]);  if (t) { goto L_00205C18; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 61u));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[4].w[0] + 92u);  if (t) { goto L_00205C18; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_00205A98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] & 1ull;  if (t) { goto L_00205AA4; } }
L_00205A98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 3;
L_00205AA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00206010; } }
    c.r[2].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00205AC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);  if (t) { goto L_00205AC8; } }
L_00205AC0:
    c.f[1] = 0u;
    c.budget -= 1;
L_00205AC4:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    c.budget -= 1;
L_00205AC8:
    set32(c.r[2], c.r[5].w[0] + 2u);
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00205AEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_00205AF8; } }
L_00205AEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
L_00205AF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00206024; } }
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00205B14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[1]);  if (t) { goto L_00205B1C; } }
L_00205B14:
    c.f[2] = 0u;
    c.budget -= 1;
L_00205B18:
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    c.budget -= 1;
L_00205B1C:
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[7], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[6]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[5], c.f[0]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 120u), c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[2].w[0] + 1072u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205B54u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0040(c, 81u, depth + 1u); else { c.pc = 0x00302070u; return; } if (c.pc != 0x00205B54u) [[unlikely]] return; }
L_00205B54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00205C18; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 61u));
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    c.f[2] = ld32((c.r[4].w[0] + 100u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[4].w[0] + 92u);  if (t) { goto L_00205C14; } }
    st32((c.r[3].w[0] + 12u), 0u);
    set32(c.r[5], c.r[3].w[0] + 8u);
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00206038; } }
L_00205BB8:
    c.f[1] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F950000u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00206048; } }
L_00205BD8:
    c.f[1] = ld32((c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3EA80000u);
    c.r[4].d[0] = c.r[4].d[0] | 62915ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[2] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00205C18; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44F90000u);
    c.r[3].d[0] = c.r[3].d[0] | 62833ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_00205C18; } }
L_00205C14:
    st32((c.r[3].w[0] + 8u), c.f[1]);
    c.budget -= 1;
L_00205C18:
    c.f[0] = ld32((c.r[28].w[0] - 31752u));
    c.facc = fp::ee::mul(c.fcr31, c.f[21], c.f[21]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[20]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[22]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00205CB8; } }
    c.f[0] = ld32((c.r[16].w[0] + 272u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F950000u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[3] = c.r[3].w[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.f[4] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EA80000u);
    c.r[3].d[0] = c.r[3].d[0] | 62915ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[23]);
    st32((c.r[16].w[0] + 272u), c.f[0]);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44F90000u);
    c.f[5] = 0u;
    c.r[4].d[0] = c.r[3].d[0] | 62833ull;
    c.budget -= 17;
L_00205C78:
    c.r[5].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[16].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[5]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[6].w[0] + 104u);  if (t) { goto L_00206058; } }
    c.budget -= 1;
L_00205CA0:
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00205C78u | kUnwind; return; } goto L_00205C78; } }
    c.budget -= 1;
L_00205CB8:
    set32(c.r[3], ld32((c.r[16].w[0] + 280u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00206118; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 292u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002060D0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 284u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002060D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 61u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[17], c.r[2].w[0] + 92u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205D10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 270u, depth + 1u); else { c.pc = 0x00392490u; return; } if (c.pc != 0x00205D10u) [[unlikely]] return; }
L_00205D10:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00205D60; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[18].d[0];  if (t) { goto L_00205D60; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 19u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[17].w[0] + 19u);  if (t) { goto L_00205D48; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 277u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00205D48; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00205D48:
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00205D60:
    set32(c.r[8], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00206118; } }
    c.r[6].d[0] = ld8((c.r[17].w[0] + 19u));
    c.r[5].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[7], c.r[17].w[0] + 19u);  if (t) { goto L_002060E0; } }
L_00205D7C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00206118; } }
    c.r[4].d[0] = ld8((c.r[8].w[0] + 1057u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00206118; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00205DB0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 277u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00205DB0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00205DB0:
    c.r[5].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00206118; } }
L_00205DCC:
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00205730u | kUnwind; return; } goto L_00205730; } }
L_00205DD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[10], 0u + 10u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.budget -= 9;
L_00205DFC:
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 92u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00205F70; } }
L_00205E18:
    set32(c.r[8], ld32((c.r[6].w[0] + 1360u)));
    c.r[5].d[0] = ld8((c.r[8].w[0]));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00205F60; } }
    set32(c.r[5], c.r[8].w[0] + 8u);
    set32(c.r[8], ld32((c.r[8].w[0] + 208u)));
    c.r[8].d[0] = c.r[8].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00205EA0; } }
    c.r[11].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
L_00205E48:
    c.r[8].d[0] = ld8((c.r[9].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_00205E90; } }
    set32(c.r[8], ld32((c.r[9].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[4].d[0];  if (t) { goto L_00205E90; } }
    set32(c.r[8], c.r[11].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[11].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[5].w[0] + c.r[8].w[0]);
    st8((c.r[8].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[8].w[0] + 12u), c.r[3].w[0]);
    st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 213u)));
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 213u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { goto L_00205EA0; } }
    c.budget -= 1;
L_00205E90:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[8].d[0] = c.r[11].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00205E48u | kUnwind; return; } goto L_00205E48; } }
L_00205EA0:
    set32(c.r[8], ld32((c.r[5].w[0] + 200u)));
    c.r[8].d[0] = c.r[8].d[0] | c.r[4].d[0];
    st32((c.r[5].w[0] + 200u), c.r[8].w[0]);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.r[8].d[0] = c.r[12].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 6;
L_00205EB8:
    c.r[11].d[0] = c.r[12].d[0] << 56;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[13], c.r[5].w[0] + c.r[9].w[0]);
    c.r[9].d[0] = ld8((c.r[13].w[0] + 8u));
    c.r[9].d[0] = 0ull < c.r[9].d[0] ? 1ull : 0ull;
    c.r[9].d[0] = c.r[9].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_00205F20; } }
    st8((c.r[13].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[8], c.r[11].w[0] + 1u);
    st8((c.r[13].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st32((c.r[13].w[0] + 16u), 0u);
    st32((c.r[13].w[0] + 12u), c.r[4].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 213u)));
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[5].w[0] + 213u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[5].w[0] + 214u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 12;
    { const bool t = c.r[8].d[0] == c.r[10].d[0];  if (t) { goto L_00205F88; } }
    c.budget -= 1;
L_00205F18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00205F50; } }
L_00205F20:
    set32(c.r[9], c.r[12].w[0] + 1u);
    c.r[12].d[0] = c.r[9].d[0] << 56;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[12].d[0] != c.r[10].d[0];  if (t) { goto L_00205F38; } }
    c.r[12].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00205F38:
    c.r[9].d[0] = c.r[12].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00205EB8u | kUnwind; return; } goto L_00205EB8; } }
    breakpoint(c, 0x00205F48u);
    c.r[13].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00205F50:
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[13].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[13].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00205F60:
    set32(c.r[6], ld32((c.r[6].w[0] + 1048u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00205E18u | kUnwind; return; } goto L_00205E18; } }
    c.budget -= 1;
L_00205F70:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[5].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00205DFCu | kUnwind; return; } goto L_00205DFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 49u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002057B0u | kUnwind; return; } goto L_002057B0; } }
L_00205F88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00205F18u | kUnwind; return; } goto L_00205F18; } }
L_00205F90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002057ACu | kUnwind; return; } goto L_002057AC; } }
L_00205F98:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00205A00u | kUnwind; return; } goto L_00205A00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 28u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00205810u | kUnwind; return; } goto L_00205810; } }
L_00205FB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205FC4u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x00205FC4u) [[unlikely]] return; }
L_00205FC4:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00205FD4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00205FD4u) [[unlikely]] return; }
L_00205FD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00205898u | kUnwind; return; } goto L_00205898; } }
    c.budget -= 1;
L_00205FE0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002058A0u | kUnwind; return; } goto L_002058A0; } }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 6u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205FFCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0065(c, 198u, depth + 1u); else { c.pc = 0x00397460u; return; } if (c.pc != 0x00205FFCu) [[unlikely]] return; }
L_00205FFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002058A0u | kUnwind; return; } goto L_002058A0; } }
    c.budget -= 1;
L_00206008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002059A0u | kUnwind; return; } goto L_002059A0; } }
L_00206010:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F350000u);
    c.r[2].d[0] = c.r[2].d[0] | 1266ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00205AC4u | kUnwind; return; } goto L_00205AC4; } }
L_00206024:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F350000u);
    c.r[2].d[0] = c.r[2].d[0] | 1266ull;
    c.budget -= 2;
L_0020602C:
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00205B18u | kUnwind; return; } goto L_00205B18; } }
L_00206038:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 53u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00205BB8u | kUnwind; return; } goto L_00205BB8; } }
L_00206048:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 54u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00205BD8u | kUnwind; return; } goto L_00205BD8; } }
L_00206058:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[23]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[5]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0]), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00205CA0u | kUnwind; return; } goto L_00205CA0; } }
    st32((c.r[3].w[0]), c.f[5]);
    c.f[1] = ld32((c.r[6].w[0] + 100u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[6].w[0] + 100u);  if (t) { goto L_002060B0; } }
    c.budget -= 1;
L_00206080:
    c.f[1] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002060C0; } }
L_00206090:
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00205CA0u | kUnwind; return; } goto L_00205CA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00205CA0u | kUnwind; return; } goto L_00205CA0; } }
    c.budget -= 1;
L_002060B0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 53u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00206080u | kUnwind; return; } goto L_00206080; } }
L_002060C0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 54u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00206090u | kUnwind; return; } goto L_00206090; } }
L_002060D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002060D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 118u, depth + 1u); else { c.pc = 0x00395D10u; return; } if (c.pc != 0x002060D8u) [[unlikely]] return; }
L_002060D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 61u));  if (t) { goto L_0020611C; } }
L_002060E0:
    c.r[4].d[0] = ld8((c.r[8].w[0] + 1057u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00205D7Cu | kUnwind; return; } goto L_00205D7C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00206118; } }
    c.r[4].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 277u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_00206118:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 61u));
    c.budget -= 1;
L_0020611C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 61u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 61u));
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0020613C; } }
L_00206134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00206144; } }
L_0020613C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 61u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00206134u | kUnwind; return; } goto L_00206134; } }
L_00206144:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00206180:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[28].w[0] - 32640u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[3].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], c.r[6].w[0] + 2592u);
    c.f[1] = c.r[7].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], c.r[29].w[0]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc4<0>(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc4<1>(c.vu0, 15u, 9u, 7u, c.vu0.vf[0].w[3]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[9]);
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
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
    c.budget -= 42;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0020622C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020622C:
    c.r[1].d[0] = c.r[5].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0020623C; } }
    set32(c.r[5], 0u + 255u);
    c.budget -= 1;
L_0020623C:
    set32(c.r[3], 0u + 255u);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    st32((c.r[4].w[0] + 24u), c.f[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00206270:
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[18]);
    ld128((c.r[8].w[0] + 16u) & ~15u, c.vu0.vf[19]);
    ld128((c.r[8].w[0] + 32u) & ~15u, c.vu0.vf[20]);
    ld128((c.r[8].w[0] + 48u) & ~15u, c.vu0.vf[21]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[22]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.vu0.vf[23]);
    c.r[8].d[0] = ld16((c.r[5].w[0] + 40u));
    vu::set_vi(c.vu0, 10u, c.r[8].w[0]);
    c.r[8].d[0] = ld16((c.r[5].w[0] + 88u));
    vu::set_vi(c.vu0, 11u, c.r[8].w[0]);
    vcallms(c, 3144u);
    c.r[8].d[0] = ld16((c.r[5].w[0] + 136u));
    vu::set_vi(c.vu0, 12u, c.r[8].w[0]);
    c.r[8].d[0] = ld16((c.r[5].w[0] + 184u));
    vu::set_vi(c.vu0, 13u, c.r[8].w[0]);
    vcallms(c, 2792u);
    set32(c.r[5], c.r[5].w[0] + 96u);
    c.budget -= 17;
L_002062B4:
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[24]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.vu0.vf[25]);
    c.r[8].d[0] = ld16((c.r[5].w[0] + 136u));
    vu::set_vi(c.vu0, 10u, c.r[8].w[0]);
    c.r[8].d[0] = ld16((c.r[5].w[0] + 184u));
    vu::set_vi(c.vu0, 11u, c.r[8].w[0]);
    vcallms(c, 2968u);
    c.r[8] = c.vu0.vf[22];
    mmi::pminw(c.r[8], c.r[8], c.r[9]);
    st128((c.r[6].w[0] + 16u) & ~15u, c.r[8]);
    set32(c.r[3], ld32((c.r[6].w[0] + 44u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[10].d[0];
    st32((c.r[6].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 96u);
    set32(c.r[7], c.r[7].w[0] - 2u);
    c.r[8] = c.vu0.vf[23];
    mmi::pminw(c.r[8], c.r[8], c.r[9]);
    st128((c.r[6].w[0] + 64u) & ~15u, c.r[8]);
    set32(c.r[3], ld32((c.r[6].w[0] + 92u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[10].d[0];
    st32((c.r[6].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 23;
    { const bool t = c.r[7].sd[0] <= 0; set32(c.r[6], c.r[6].w[0] + 96u);  if (t) { goto L_0020636C; } }
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[22]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.vu0.vf[23]);
    c.r[8].d[0] = ld16((c.r[5].w[0] + 136u));
    vu::set_vi(c.vu0, 12u, c.r[8].w[0]);
    c.r[8].d[0] = ld16((c.r[5].w[0] + 184u));
    vu::set_vi(c.vu0, 13u, c.r[8].w[0]);
    vcallms(c, 2792u);
    c.r[8] = c.vu0.vf[24];
    mmi::pminw(c.r[8], c.r[8], c.r[9]);
    st128((c.r[6].w[0] + 16u) & ~15u, c.r[8]);
    set32(c.r[3], ld32((c.r[6].w[0] + 44u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[10].d[0];
    st32((c.r[6].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 96u);
    set32(c.r[7], c.r[7].w[0] - 2u);
    c.r[8] = c.vu0.vf[25];
    mmi::pminw(c.r[8], c.r[8], c.r[9]);
    st128((c.r[6].w[0] + 64u) & ~15u, c.r[8]);
    set32(c.r[3], ld32((c.r[6].w[0] + 92u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[10].d[0];
    st32((c.r[6].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 23;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002062B4u | kUnwind; return; } goto L_002062B4; } }
L_0020636C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00206380:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 40u));
    vu::set_vi(c.vu0, 10u, c.r[3].w[0]);
    vcallms(c, 2624u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[23]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 88u));
    vu::set_vi(c.vu0, 10u, c.r[3].w[0]);
    vcallms(c, 2664u);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[28]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 136u));
    vu::set_vi(c.vu0, 11u, c.r[3].w[0]);
    vcallms(c, 2728u);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[25]);
    ld128((c.r[5].w[0] + 96u) & ~15u, c.vu0.vf[23]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 184u));
    vu::set_vi(c.vu0, 10u, c.r[3].w[0]);
    vcallms(c, 2664u);
    set32(c.r[5], c.r[5].w[0] + 48u);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 184u));
    vu::set_vi(c.vu0, 11u, c.r[3].w[0]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[5].w[0] + 96u) & ~15u, c.vu0.vf[28]);
    c.budget -= 22;
L_002063D8:
    vcallms(c, 2728u);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 232u));
    vu::set_vi(c.vu0, 10u, c.r[3].w[0]);
    ld128((c.r[5].w[0] + 80u) & ~15u, c.vu0.vf[25]);
    ld128((c.r[5].w[0] + 144u) & ~15u, c.vu0.vf[23]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[15]);
    st128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[22]);
    set32(c.r[6], c.r[6].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] + 96u);
    vcallms(c, 2664u);
    set32(c.r[7], c.r[7].w[0] - 2u);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 184u));
    vu::set_vi(c.vu0, 11u, c.r[3].w[0]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[5].w[0] + 96u) & ~15u, c.vu0.vf[28]);
    st128((c.r[6].w[0] - 48u) & ~15u, c.vu0.vf[14]);
    c.budget -= 18;
    { const bool t = c.r[7].sd[0] > 0; st128((c.r[6].w[0] - 16u) & ~15u, c.vu0.vf[27]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002063D8u | kUnwind; return; } goto L_002063D8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00206430:
    set32(c.r[29], c.r[29].w[0] - 480u);
    set32(c.r[3], 0u + 255u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[2], 0u + 128u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st32((c.r[29].w[0] + 412u), c.r[2].w[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[2].w[0] + 64u);
    st32((c.r[29].w[0] + 236u), c.r[5].w[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[4].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[29].w[0] + 400u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 404u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 408u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 232u), c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[6], 0u + 16u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[29].w[0] + 231u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[8].w[0] << 13);
    c.r[2].d[0] = c.r[8].d[0] ^ 1ull;
    set32(c.r[23], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[20], c.r[23].w[0] + 3888u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 13);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[22], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    st8((c.r[22].w[0] + 3890u), static_cast<std::uint8_t>(0u));
    c.budget -= 48;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002064F0u); st8((c.r[22].w[0] + 3891u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_0018(c, 83u, depth + 1u); else { c.pc = 0x00260C90u; return; } if (c.pc != 0x002064F0u) [[unlikely]] return; }
L_002064F0:
    st8((c.r[29].w[0] + 208u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 231u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00206554; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 9092u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 476u), 0u);  if (t) { goto L_00206520; } }
L_00206510:
    set32(c.r[2], ld32((c.r[29].w[0] + 476u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 476u), c.r[2].w[0]);
    c.budget -= 4;
L_00206520:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] << 55;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00206510u | kUnwind; return; } goto L_00206510; } }
    set32(c.r[3], c.r[30].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[2].w[0] - 11232u), c.r[3].w[0]);
    st32((c.r[2].w[0] - 11248u), c.r[16].w[0]);
    st32((c.r[2].w[0] - 11136u), c.r[19].w[0]);
    set32(c.r[3], 0u + 256u);
    st32((c.r[2].w[0] - 11264u), c.r[3].w[0]);
    c.budget -= 8;
L_00206554:
    set32(c.r[5], ld32((c.r[21].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[3].d[0] = c.r[2].d[0] << 4;
    set32(c.r[17], ld32((c.r[29].w[0] + 236u)));
    c.f[2] = ld32((c.r[29].w[0] + 364u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[1] = ld32((c.r[29].w[0] + 380u));
    c.r[3].d[0] = c.r[3].d[0] | 108ull;
    c.f[0] = ld32((c.r[29].w[0] + 396u));
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], c.r[2].w[0] + 9920u);
    set32(c.r[4], c.r[5].w[0] << 1);
    st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st8((c.r[29].w[0] + 192u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] << 6);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 284u), c.f[2]);
    st32((c.r[29].w[0] + 268u), c.f[1]);
    st32((c.r[29].w[0] + 252u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 896u));
    c.f[2] = ld32((c.r[4].w[0] + 900u));
    c.f[1] = ld32((c.r[4].w[0] + 904u));
    c.f[0] = ld32((c.r[4].w[0] + 908u));
    c.f[6] = ld32((c.r[4].w[0] + 888u));
    c.f[5] = ld32((c.r[4].w[0] + 884u));
    c.f[4] = ld32((c.r[4].w[0] + 880u));
    st32((c.r[29].w[0] + 288u), c.f[3]);
    st32((c.r[29].w[0] + 292u), c.f[2]);
    st32((c.r[29].w[0] + 296u), c.f[1]);
    st32((c.r[29].w[0] + 300u), c.f[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    st32((c.r[29].w[0] + 464u), c.f[6]);
    st32((c.r[29].w[0] + 460u), c.f[5]);
    st32((c.r[29].w[0] + 456u), c.f[4]);
    st32((c.r[29].w[0] + 352u), c.f[4]);
    st32((c.r[29].w[0] + 272u), c.f[4]);
    st32((c.r[29].w[0] + 356u), c.f[5]);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.f[4] = ld32((c.r[4].w[0] + 880u));
    c.f[3] = ld32((c.r[4].w[0] + 896u));
    c.f[2] = ld32((c.r[4].w[0] + 900u));
    c.f[1] = ld32((c.r[4].w[0] + 904u));
    c.f[0] = ld32((c.r[4].w[0] + 908u));
    st32((c.r[29].w[0] + 276u), c.f[5]);
    c.f[5] = ld32((c.r[4].w[0] + 884u));
    st32((c.r[29].w[0] + 360u), c.f[6]);
    st32((c.r[29].w[0] + 280u), c.f[6]);
    c.f[6] = ld32((c.r[4].w[0] + 888u));
    st32((c.r[29].w[0] + 304u), c.f[3]);
    st32((c.r[29].w[0] + 308u), c.f[2]);
    st32((c.r[29].w[0] + 312u), c.f[1]);
    st32((c.r[29].w[0] + 316u), c.f[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    st32((c.r[29].w[0] + 444u), c.f[5]);
    st32((c.r[29].w[0] + 448u), c.f[6]);
    st32((c.r[29].w[0] + 440u), c.f[4]);
    st32((c.r[29].w[0] + 368u), c.f[4]);
    st32((c.r[29].w[0] + 256u), c.f[4]);
    st32((c.r[29].w[0] + 372u), c.f[5]);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.f[4] = ld32((c.r[4].w[0] + 880u));
    c.f[3] = ld32((c.r[4].w[0] + 896u));
    c.f[2] = ld32((c.r[4].w[0] + 900u));
    c.f[1] = ld32((c.r[4].w[0] + 904u));
    c.f[0] = ld32((c.r[4].w[0] + 908u));
    st32((c.r[29].w[0] + 260u), c.f[5]);
    c.f[5] = ld32((c.r[4].w[0] + 884u));
    st32((c.r[29].w[0] + 376u), c.f[6]);
    st32((c.r[29].w[0] + 264u), c.f[6]);
    c.f[6] = ld32((c.r[4].w[0] + 888u));
    st32((c.r[29].w[0] + 320u), c.f[3]);
    st32((c.r[29].w[0] + 324u), c.f[2]);
    st32((c.r[29].w[0] + 328u), c.f[1]);
    st32((c.r[29].w[0] + 332u), c.f[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 16u)));
    st32((c.r[29].w[0] + 428u), c.f[5]);
    st32((c.r[29].w[0] + 432u), c.f[6]);
    st32((c.r[29].w[0] + 424u), c.f[4]);
    st32((c.r[29].w[0] + 384u), c.f[4]);
    st32((c.r[29].w[0] + 240u), c.f[4]);
    st32((c.r[29].w[0] + 388u), c.f[5]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[29].w[0] + 244u), c.f[5]);
    st32((c.r[29].w[0] + 392u), c.f[6]);
    st32((c.r[29].w[0] + 248u), c.f[6]);
    st32((c.r[29].w[0] + 336u), c.f[3]);
    st32((c.r[29].w[0] + 340u), c.f[2]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(82ll) ? 1ull : 0ull;
    st32((c.r[29].w[0] + 344u), c.f[1]);
    c.budget -= 109;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[29].w[0] + 348u), c.f[0]);  if (t) { goto L_00206710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 81u);  if (t) { goto L_00206718; } }
L_00206710:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 176u));
    st8((c.r[29].w[0] + 192u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00206718:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[29].w[0] + 472u), 0u);
    set32(c.r[4], ld32((c.r[2].w[0] + 9092u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00206738; } }
L_0020672C:
    set32(c.r[2], ld32((c.r[29].w[0] + 472u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 472u), c.r[2].w[0]);
    c.budget -= 3;
L_00206738:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] << 55;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020672Cu | kUnwind; return; } goto L_0020672C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] + 2656u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[8]);
    set32(c.r[2], c.r[17].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[4].w[0] - 11232u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    st32((c.r[4].w[0] - 11248u), c.r[2].w[0]);
    st32((c.r[4].w[0] - 11136u), c.r[23].w[0]);
    set32(c.r[2], 0u + 256u);
    st32((c.r[4].w[0] - 11264u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 231u));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00206848; } }
    set32(c.r[2], c.r[29].w[0] + 352u);
    vu::set_vi(c.vu0, 1u, 0u);
    set32(c.r[8], 0u + 96u);
    vu::set_vi(c.vu0, 2u, c.r[8].w[0]);
    vu::set_vi(c.vu0, 3u, c.vu0.vi[2] + c.vu0.vi[1]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[27]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[28]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[29]);
    ld128((c.r[19].w[0] + 48u) & ~15u, c.vu0.vf[24]);
    ld128((c.r[19].w[0]) & ~15u, c.r[8]);
    ld128((c.r[19].w[0] + 16u) & ~15u, c.r[9]);
    ld128((c.r[19].w[0] + 32u) & ~15u, c.r[10]);
    ld128((c.r[19].w[0] + 48u) & ~15u, c.vu0.vf[14]);
    ld128((c.r[19].w[0] + 112u) & ~15u, c.vu0.vf[26]);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[21]);
    ld128((c.r[19].w[0] + 16u) & ~15u, c.vu0.vf[22]);
    ld128((c.r[19].w[0] + 32u) & ~15u, c.vu0.vf[23]);
    ld128((c.r[19].w[0] + 48u) & ~15u, c.vu0.vf[24]);
    vu::sub4<1>(c.vu0, 14u, 14u, 14u, 14u);
    c.budget -= 19;
L_002067E4:
    c.r[11] = c.vu0.vf[14];
    mmi::pextlw(c.r[12], c.r[9], c.r[8]);
    mmi::pextuw(c.r[13], c.r[9], c.r[8]);
    mmi::pextlw(c.r[14], c.r[11], c.r[10]);
    mmi::pextuw(c.r[15], c.r[11], c.r[10]);
    mmi::pcpyld(c.r[8], c.r[14], c.r[12]);
    mmi::pcpyud(c.r[9], c.r[12], c.r[14]);
    mmi::pcpyld(c.r[10], c.r[15], c.r[13]);
    c.vu0.vf[16] = c.r[8];
    c.vu0.vf[17] = c.r[9];
    c.vu0.vf[18] = c.r[10];
    vcallms(c, 2344u);
    set32(c.r[19], c.r[19].w[0] + 64u);
    set32(c.r[30], c.r[30].w[0] - 1u);
    ld128((c.r[19].w[0] + 112u) & ~15u, c.vu0.vf[26]);
    ld128((c.r[19].w[0]) & ~15u, c.r[8]);
    ld128((c.r[19].w[0] + 16u) & ~15u, c.r[9]);
    ld128((c.r[19].w[0] + 32u) & ~15u, c.r[10]);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[21]);
    ld128((c.r[19].w[0] + 16u) & ~15u, c.vu0.vf[22]);
    ld128((c.r[19].w[0] + 32u) & ~15u, c.vu0.vf[23]);
    ld128((c.r[19].w[0] + 48u) & ~15u, c.vu0.vf[24]);
    c.budget -= 25;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002067E4u | kUnwind; return; } goto L_002067E4; } }
L_00206848:
    st8((c.r[20].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 16u);
    st8((c.r[20].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[18], c.r[18].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 9092u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 468u), 0u);  if (t) { goto L_00206878; } }
L_00206868:
    set32(c.r[2], ld32((c.r[29].w[0] + 468u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 468u), c.r[2].w[0]);
    c.budget -= 4;
L_00206878:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] << 55;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00206868u | kUnwind; return; } goto L_00206868; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] - 2672u), c.r[4].w[0]);  if (t) { goto L_002069D8; } }
L_0020689C:
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[17], c.r[2].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(82ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002068B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 81u);  if (t) { goto L_002068C0; } }
L_002068B8:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[29].w[0] + 192u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002068C0:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[8], c.r[2].w[0] << 8);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[9], 0u + 257u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[3].w[0] - 11232u), c.r[2].w[0]);
    set32(c.r[6], c.r[20].w[0] + 32u);
    set32(c.r[2], c.r[18].w[0] << 1);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[5], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] - 11248u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    st32((c.r[3].w[0] - 11136u), c.r[22].w[0]);
    st32((c.r[3].w[0] - 12288u), c.r[8].w[0]);
    st32((c.r[3].w[0] - 11264u), c.r[9].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020691Cu); st32((c.r[3].w[0] - 2672u), 0u);  if (depth < kMaxDepth) unit_0001(c, 112u, depth + 1u); else { c.pc = 0x00206380u; return; } if (c.pc != 0x0020691Cu) [[unlikely]] return; }
L_0020691C:
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[9]);
    set32(c.r[10], ld32((c.r[21].w[0] + 20u)));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], c.r[20].w[0] + 32u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206940u); set32(c.r[8], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0001(c, 110u, depth + 1u); else { c.pc = 0x00206270u; return; } if (c.pc != 0x00206940u) [[unlikely]] return; }
L_00206940:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 176u));
    c.r[5].d[0] = c.r[16].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[7].d[0] = ld8((c.r[29].w[0] + 208u));
    c.r[2].d[0] = c.r[2].d[0] + 0ull;
    st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[2].d[0] << 46;
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] << 47;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] + 9056u);
    set32(c.r[2], 0u + 1042u);
    st64((c.r[20].w[0] + 16u), c.r[3].d[0]);
    st64((c.r[20].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[6], c.r[3].w[0] + 2u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002069A8u); st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0018(c, 86u, depth + 1u); else { c.pc = 0x00260D50u; return; } if (c.pc != 0x002069A8u) [[unlikely]] return; }
L_002069A8:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[23].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[20], c.r[22].w[0] + 3888u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[18], c.r[18].w[0] + c.r[17].w[0]);
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    st32((c.r[21].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[4], c.r[4].w[0] << 13);
    set32(c.r[22], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 12;
L_002069D8:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 192u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020689Cu | kUnwind; return; } goto L_0020689C; } }
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[2].w[0] - 12288u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    st32((c.r[2].w[0] - 2672u), 0u);
    set32(c.r[6], c.r[20].w[0] + 32u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206A10u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 112u, depth + 1u); else { c.pc = 0x00206380u; return; } if (c.pc != 0x00206A10u) [[unlikely]] return; }
L_00206A10:
    set32(c.r[10], ld32((c.r[21].w[0] + 20u)));
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[9]);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], c.r[20].w[0] + 32u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206A34u); set32(c.r[8], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0001(c, 110u, depth + 1u); else { c.pc = 0x00206270u; return; } if (c.pc != 0x00206A34u) [[unlikely]] return; }
L_00206A34:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[5].d[0] = c.r[16].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[7].d[0] = ld8((c.r[29].w[0] + 208u));
    c.r[3].d[0] = c.r[2].d[0] << 47;
    set32(c.r[2], 0u + 16384u);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], 0u + 1042u);
    st64((c.r[20].w[0] + 16u), c.r[5].d[0]);
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    st64((c.r[20].w[0] + 24u), c.r[4].d[0]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[3].w[0] + 2u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206A9Cu); set32(c.r[4], c.r[4].w[0] + 9056u);  if (depth < kMaxDepth) unit_0018(c, 98u, depth + 1u); else { c.pc = 0x00261000u; return; } if (c.pc != 0x00206A9Cu) [[unlikely]] return; }
L_00206A9C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 480u);  c.pc = t; return; }
L_00206AD0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[22], c.r[29].w[0] + 152u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], c.r[29].w[0] + 148u);
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    c.budget -= 17;
L_00206B14:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] + 9920u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[19], c.r[4].w[0] + 848u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 952u));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00206B6C; } }
    c.budget -= 1;
L_00206B50:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00206B14u | kUnwind; return; } goto L_00206B14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00206C48; } }
L_00206B6C:
    c.f[5] = ld32((c.r[21].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = ld32((c.r[19].w[0] + 4u));
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.f[3] = ld32((c.r[21].w[0]));
    c.f[2] = ld32((c.r[19].w[0]));
    c.f[7] = ld32((c.r[21].w[0] + 8u));
    c.f[6] = ld32((c.r[19].w[0] + 8u));
    c.f[1] = 0u;
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[4], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[6], c.f[2]);
    st32((c.r[16].w[0]), c.f[1]);
    st32((c.r[22].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206BFCu); set32(c.r[4], c.r[2].w[0] + 848u);  if (depth < kMaxDepth) unit_0018(c, 231u, depth + 1u); else { c.pc = 0x002634B0u; return; } if (c.pc != 0x00206BFCu) [[unlikely]] return; }
L_00206BFC:
    c.f[5] = ld32((c.r[19].w[0] + 88u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[3].w[0];
    c.f[0] = ld32((c.r[19].w[0] + 64u));
    c.f[1] = ld32((c.r[19].w[0] + 68u));
    c.f[2] = ld32((c.r[19].w[0] + 72u));
    c.f[3] = ld32((c.r[19].w[0] + 76u));
    c.f[5] = fp::ee::div(c.fcr31, c.f[20], c.f[5]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[5]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[4]);
    st32((c.r[19].w[0] + 52u), c.f[1]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    st32((c.r[19].w[0] + 56u), c.f[2]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 60u), c.f[3]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00206B50u | kUnwind; return; } goto L_00206B50; } }
    c.budget -= 1;
L_00206C48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00206C80:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 100u));
    set32(c.r[5], c.r[3].w[0] - 1u);
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00206CD8; } }
L_00206C94:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00206CD8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00206C94u | kUnwind; return; } goto L_00206C94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[28].w[0] - 29832u));  if (t) { goto L_00206CDC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00206CD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00206CEC; } }
L_00206CD8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29832u));
    c.budget -= 1;
L_00206CDC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00206CEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00206CD0u | kUnwind; return; } goto L_00206CD0; } }
L_00206CEC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00206D00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 100u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[9].d[0] = 0ull + 0ull;
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    set32(c.r[3], c.r[8].w[0] - 1u);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);  if (t) { goto L_00206E00; } }
L_00206D3C:
    c.r[2].d[0] = c.r[9].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00206E00; } }
    set32(c.r[2], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[9].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00206D3Cu | kUnwind; return; } goto L_00206D3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[28].w[0] - 29832u));  if (t) { goto L_00206E04; } }
L_00206D74:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[9].d[0] & 255ull;  if (t) { goto L_00206D8C; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00206D8C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00206D8C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00206DC8; } }
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[9], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206DC0u); set32(c.r[4], c.r[4].w[0] - 224u);  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x00206DC0u) [[unlikely]] return; }
L_00206DC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] & 255ull;  if (t) { goto L_00206DF8; } }
L_00206DC8:
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[9], 0u + 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206DF4u); set32(c.r[4], c.r[4].w[0] - 224u);  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x00206DF4u) [[unlikely]] return; }
L_00206DF4:
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 1;
L_00206DF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00206E14; } }
L_00206E00:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29832u));
    c.budget -= 1;
L_00206E04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00206D74u | kUnwind; return; } goto L_00206D74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00206D74u | kUnwind; return; } goto L_00206D74; } }
L_00206E14:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00206E20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st32((c.r[28].w[0] - 29820u), 0u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29824u));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 29836u), 0u);  if (t) { goto L_00206E48; } }
L_00206E40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00206E94; } }
L_00206E48:
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] - 16528u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00206E74u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00206E74u) [[unlikely]] return; }
L_00206E74:
    set32(c.r[4], ld32((c.r[28].w[0] - 29820u)));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29824u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 29820u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00206E48u | kUnwind; return; } goto L_00206E48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00206E40u | kUnwind; return; } goto L_00206E40; } }
L_00206E94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00206EA0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 48u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00206EFC; } }
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[3] = ld32((c.r[4].w[0] + 4u));
    c.f[6] = ld32((c.r[5].w[0]));
    c.f[5] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00206EFC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[3].w[0]);  if (t) { goto L_00206F00; } }
L_00206EFC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00206F00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00206F10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00207010; } }
    set32(c.r[16], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00206FE8; } }
L_00206F38:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00206FD8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00206F90; } }
    set32(c.r[17], ld32((c.r[28].w[0] - 29604u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00206FF0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206F80u); set32(c.r[5], c.r[2].w[0] + 288u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x00206F80u) [[unlikely]] return; }
L_00206F80:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[28].w[0] - 29836u), c.r[2].w[0]);
    c.budget -= 2;
L_00206F88:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_00206F90:
    set32(c.r[4], c.r[16].w[0] + 3504u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206F9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 162u, depth + 1u); else { c.pc = 0x00207380u; return; } if (c.pc != 0x00206F9Cu) [[unlikely]] return; }
L_00206F9C:
    set32(c.r[4], ld32((c.r[16].w[0] + 344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 811u));
    set32(c.r[3], c.r[3].w[0] - 18576u);
    set32(c.r[5], ld32((c.r[16].w[0] + 348u)));
    set32(c.r[6], c.r[16].w[0] + 432u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1564u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[7].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206FD4u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 134u, depth + 1u); else { c.pc = 0x00206D00u; return; } if (c.pc != 0x00206FD4u) [[unlikely]] return; }
L_00206FD4:
    c.budget -= 1;
L_00206FD8:
    set32(c.r[16], ld32((c.r[16].w[0] + 1552u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00206F38u | kUnwind; return; } goto L_00206F38; } }
    c.budget -= 1;
L_00206FE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00207010; } }
L_00206FF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 368u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207004u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x00207004u) [[unlikely]] return; }
L_00207004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00206F88u | kUnwind; return; } goto L_00206F88; } }
    c.budget -= 1;
L_00207010:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00207030:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00207150; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00207128; } }
L_0020705C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00207118; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002070C8; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 100u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[3].w[0] - 18928u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00207130; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 288u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002070B4u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002070B4u) [[unlikely]] return; }
L_002070B4:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[28].w[0] - 29836u), c.r[2].w[0]);
    c.budget -= 3;
L_002070C0:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002070C8:
    set32(c.r[4], c.r[16].w[0] + 3504u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002070D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 162u, depth + 1u); else { c.pc = 0x00207380u; return; } if (c.pc != 0x002070D4u) [[unlikely]] return; }
L_002070D4:
    c.r[7].d[0] = ld8((c.r[18].w[0] + 100u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 530u));
    set32(c.r[4], c.r[4].w[0] - 18576u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 811u));
    set32(c.r[6], c.r[16].w[0] + 432u);
    set32(c.r[5], ld32((c.r[16].w[0] + 348u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 57;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[7].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207118u); c.r[8].d[0] = c.r[2].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0001(c, 134u, depth + 1u); else { c.pc = 0x00206D00u; return; } if (c.pc != 0x00207118u) [[unlikely]] return; }
L_00207118:
    set32(c.r[16], ld32((c.r[16].w[0] + 1552u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020705Cu | kUnwind; return; } goto L_0020705C; } }
    c.budget -= 1;
L_00207128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00207150; } }
L_00207130:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 368u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207144u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x00207144u) [[unlikely]] return; }
L_00207144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002070C0u | kUnwind; return; } goto L_002070C0; } }
    c.budget -= 1;
L_00207150:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00207170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = ld8((c.r[28].w[0] - 31800u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 11168u));
    c.r[4].d[0] = ld8((c.r[28].w[0] - 29244u));
    set32(c.r[3], c.r[7].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00207238; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00207238; } }
L_002071AC:
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002071BCu); set32(c.r[6], c.r[6].w[0] - 14736u);  if (depth < kMaxDepth) unit_0029(c, 129u, depth + 1u); else { c.pc = 0x002A5020u; return; } if (c.pc != 0x002071BCu) [[unlikely]] return; }
L_002071BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00207200; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00207350; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00207348; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00207348; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 1u);
    c.f[0] = ld32((c.r[3].w[0] + 11176u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { goto L_00207350; } }
L_00207200:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00207368; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020735C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020735C; } }
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00207368; } }
L_00207238:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002071ACu | kUnwind; return; } goto L_002071AC; } }
L_00207240:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29244u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[28].w[0] - 29244u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00207370; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = ld32((c.r[28].w[0] - 29672u));
    c.f[1] = c.r[3].w[0];
    c.f[5] = 0u;
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[4] = ld32((c.r[4].w[0] + 36u));
    c.f[3] = ld32((c.r[4].w[0] + 116u));
    c.f[2] = ld32((c.r[4].w[0] + 40u));
    c.f[1] = ld32((c.r[4].w[0] + 120u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 22;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00207370; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00207300; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = ld32((c.r[3].w[0] - 20412u));
    c.f[3] = c.r[4].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[4].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 8u), c.f[1]);  if (t) { goto L_00207370; } }
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00207340; } }
L_00207300:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = ld32((c.r[3].w[0] - 20412u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[4] = c.r[4].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[1] = ld32((c.r[4].w[0] + 11176u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[0] = ld32((c.r[3].w[0] + 11176u));
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[2]);
    c.f[2] = fp::ee::msub(c.fcr31, c.facc, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 8u), c.f[2]);  if (t) { goto L_00207370; } }
    st32((c.r[16].w[0] + 8u), c.f[1]);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00207340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00207374; } }
L_00207348:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 2;
L_00207350:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00207240u | kUnwind; return; } goto L_00207240; } }
L_0020735C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[0] = ld32((c.r[3].w[0] + 11176u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 3;
L_00207368:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00207240u | kUnwind; return; } goto L_00207240; } }
L_00207370:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00207374:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00207380:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002077D4; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1577u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002073D0; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_002073D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_002073E0:
    c.f[2] = ld32((c.r[2].w[0] + 56u));
    c.f[1] = ld32((c.r[2].w[0] + 52u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    st32((c.r[29].w[0] + 120u), c.f[2]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002077E0; } }
L_00207410:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 14752u)));
    c.f[20] = ld32((c.r[20].w[0] + 8u));
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    set32(c.r[2], c.r[19].w[0] + 1u);
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29752u)));
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
    set32(c.r[5], c.f[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] >> 4);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[2].w[0] + 268u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 276u));
    c.budget -= 34;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00207510; } }
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00207510; } }
L_002074A8:
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 14640u)));
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 140u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002074C8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0001(c, 143u, depth + 1u); else { c.pc = 0x00206EA0u; return; } if (c.pc != 0x002074C8u) [[unlikely]] return; }
L_002074C8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002074FC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 140u)));
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 128u), c.r[4].w[0]);  if (t) { goto L_00207510; } }
L_002074FC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002074A8u | kUnwind; return; } goto L_002074A8; } }
    c.budget -= 1;
L_00207510:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10496u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207524u); set32(c.r[6], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0001(c, 143u, depth + 1u); else { c.pc = 0x00206EA0u; return; } if (c.pc != 0x00207524u) [[unlikely]] return; }
L_00207524:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002077F4; } }
L_0020752C:
    c.r[4].d[0] = ld8((c.r[20].w[0] + 36u));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002078C4; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 37u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00207790; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 11184u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00204000u < 16384u) { entry = entries_0001[(t - 0x00204000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00207568:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 36u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002075CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[2].w[0] - 20412u));
    c.f[2] = ld32((c.r[20].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[20].w[0] + 32u), c.f[1]);  if (t) { goto L_0020760C; } }
    c.r[4].d[0] = ld8((c.r[20].w[0] + 36u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[20].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 32u), c.f[0]);  if (t) { goto L_0020760C; } }
L_002075CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[2] = ld32((c.r[20].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] - 20412u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[20].w[0] + 32u), c.f[1]);  if (t) { goto L_0020760C; } }
    c.r[4].d[0] = ld8((c.r[20].w[0] + 36u));
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[20].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[20].w[0] + 32u), c.f[0]);
    c.budget -= 7;
L_0020760C:
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] - 14672u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], ld32((c.r[28].w[0] - 31792u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 9920u);
    c.f[9] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[4], c.r[4].w[0] + 9924u);
    set32(c.r[3], c.r[3].w[0] + 9928u);
    set32(c.r[2], c.r[2].w[0] + 9932u);
    c.f[8] = ld32((c.r[6].w[0]));
    c.f[4] = ld32((c.r[20].w[0] + 16u));
    c.f[7] = ld32((c.r[6].w[0] + 4u));
    c.f[2] = ld32((c.r[20].w[0] + 20u));
    c.f[3] = 0u;
    c.f[6] = ld32((c.r[6].w[0] + 8u));
    c.f[5] = ld32((c.r[6].w[0] + 12u));
    c.f[1] = ld32((c.r[20].w[0] + 24u));
    c.f[0] = ld32((c.r[20].w[0] + 28u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[8]);
    set32(c.r[6], c.r[7].w[0] << 2);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[8]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[9]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[7]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[7]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[9]);
    st32((c.r[5].w[0]), c.f[4]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[6]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[6]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[9]);
    st32((c.r[4].w[0]), c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[5]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[5]);
    st32((c.r[3].w[0]), c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[9]);
    c.budget -= 49;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.f[0]);  if (t) { goto L_00207790; } }
L_002076D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002076D8u); set32(c.r[4], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0053(c, 77u, depth + 1u); else { c.pc = 0x0034D100u; return; } if (c.pc != 0x002076D8u) [[unlikely]] return; }
L_002076D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[28].w[0] - 31792u)));  if (t) { goto L_00207794; } }
L_002076E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002076E8u); set32(c.r[4], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0053(c, 74u, depth + 1u); else { c.pc = 0x0034CE50u; return; } if (c.pc != 0x002076E8u) [[unlikely]] return; }
L_002076E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00207790; } }
L_002076F0:
    c.r[2].d[0] = c.r[4].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00207814; } }
    c.f[4] = ld32((c.r[20].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[7] = ld32((c.r[20].w[0] + 20u));
    c.f[6] = ld32((c.r[20].w[0] + 24u));
    c.f[0] = ld32((c.r[20].w[0] + 28u));
    c.f[9] = c.r[2].w[0];
    c.budget -= 6;
L_00207718:
    set32(c.r[8], ld32((c.r[28].w[0] - 31792u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[1] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], c.r[7].w[0] + 9920u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[6], c.r[6].w[0] + 9924u);
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 9928u);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] + 9932u);
    set32(c.r[8], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0]), c.f[4]);
    st32((c.r[2].w[0]), c.f[7]);
    set32(c.r[3], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0]), c.f[6]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[9]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 30;
L_00207790:
    set32(c.r[6], ld32((c.r[28].w[0] - 31792u)));
    c.budget -= 1;
L_00207794:
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002078D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 14648u)));
    c.budget -= 2;
L_002077AC:
    c.r[3].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[2], c.r[19].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 128u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002077ACu | kUnwind; return; } goto L_002077AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002078D0; } }
L_002077D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 11104u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002073E0u | kUnwind; return; } goto L_002073E0; } }
L_002077E0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002077ECu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0001(c, 158u, depth + 1u); else { c.pc = 0x00207170u; return; } if (c.pc != 0x002077ECu) [[unlikely]] return; }
L_002077EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00207410u | kUnwind; return; } goto L_00207410; } }
L_002077F4:
    set32(c.r[4], ld32((c.r[29].w[0] + 140u)));
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 128u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020752Cu | kUnwind; return; } goto L_0020752C; } }
L_00207814:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[2].w[0] - 20412u));
    c.f[2] = ld32((c.r[20].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[20].w[0] + 32u), c.f[1]);  if (t) { goto L_002078A0; } }
L_0020783C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 14672u);
    c.f[8] = ld32((c.r[2].w[0]));
    c.f[4] = ld32((c.r[20].w[0] + 16u));
    c.f[7] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = ld32((c.r[20].w[0] + 20u));
    c.f[9] = ld32((c.r[20].w[0] + 32u));
    c.f[6] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = ld32((c.r[20].w[0] + 24u));
    c.f[3] = 0u;
    c.f[5] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = ld32((c.r[20].w[0] + 28u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[8]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[8]);
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[9]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[7]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[7]);
    c.f[7] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[9]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[6]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[6]);
    c.f[6] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[9]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[5]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[5]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[9]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00207718u | kUnwind; return; } goto L_00207718; } }
L_002078A0:
    st32((c.r[20].w[0] + 32u), c.f[0]);
    c.r[2].d[0] = 0ull & 1ull;
    c.r[4].d[0] = ld8((c.r[20].w[0] + 36u));
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020783Cu | kUnwind; return; } goto L_0020783C; } }
L_002078C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[2].w[0] - 14688u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00207794u | kUnwind; return; } goto L_00207794; } }
L_002078D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[3] = ld32((c.r[2].w[0] - 14704u));
    set32(c.r[5], ld32((c.r[3].w[0] - 14752u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[8], c.r[8].w[0] + 10816u);
    set32(c.r[7], c.r[7].w[0] + 10820u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[5].w[0] << 1);
    c.f[2] = ld32((c.r[2].w[0] - 14700u));
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[10], c.r[5].w[0] << 6);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[9], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[3], c.r[3].w[0] + 10824u);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[20], c.f[3]);
    set32(c.r[8], c.r[7].w[0] + c.r[10].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[4], c.r[4].w[0] - 224u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], c.r[29].w[0] + 112u);
    c.f[1] = ld32((c.r[2].w[0] - 14696u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[20], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[2].w[0] - 14692u));
    st32((c.r[9].w[0]), c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + 10828u);
    st32((c.r[8].w[0]), c.f[2]);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207964u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0001(c, 127u, depth + 1u); else { c.pc = 0x00206AD0u; return; } if (c.pc != 0x00207964u) [[unlikely]] return; }
L_00207964:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207974u); set32(c.r[4], c.r[4].w[0] - 224u);  if (depth < kMaxDepth) unit_0001(c, 109u, depth + 1u); else { c.pc = 0x00206180u; return; } if (c.pc != 0x00207974u) [[unlikely]] return; }
L_00207974:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00207A00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[25].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[29].w[0] + 36u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[25], c.r[25].w[0] + 2592u);
    set32(c.r[16], c.r[16].w[0] + 2656u);
    set32(c.r[24], c.r[29].w[0] + 40u);
    set32(c.r[15], c.r[29].w[0] + 44u);
    set32(c.r[11], 0u + 3u);
    set32(c.r[12], 0u + 2u);
    set32(c.r[14], 0u + 1u);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[13], 0u + 4u);  if (t) { goto L_00207B30; } }
L_00207A40:
    set32(c.r[7], c.r[4].w[0] << 5);
    set32(c.r[17], c.r[5].w[0] + c.r[7].w[0]);
    vu::set_vi(c.vu0, 2u, c.vu0.vi[0] & c.vu0.vi[0]);
    vu::set_vi(c.vu0, 3u, c.vu0.vi[0] + -1);
    vu::set_vi(c.vu0, 6u, c.vu0.vi[0] & c.vu0.vi[0]);
    set32(c.r[8], 0u + 63u);
    vu::set_vi(c.vu0, 4u, c.r[8].w[0]);
    ld128((c.r[25].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[25].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[25].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[25].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[8]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[9]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[25]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[10]);
    vu::add4<1>(c.vu0, 4u, 10u, 9u, 25u);
    vcallms(c, 1304u);
    set32(c.r[8], c.vu0.vi[2]);
    st32((c.r[24].w[0]), c.r[8].w[0]);
    set32(c.r[9], c.vu0.vi[3]);
    st32((c.r[15].w[0]), c.r[9].w[0]);
    set32(c.r[10], c.vu0.vi[6]);
    st32((c.r[3].w[0]), c.r[10].w[0]);
    c.r[7].d[0] = c.r[9].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.budget -= 30;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00207AC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00207B28; } }
L_00207AC0:
    c.r[7].d[0] = c.r[10].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00207AD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[14].w[0]));  if (t) { goto L_00207B28; } }
L_00207AD8:
    c.r[8].d[0] = c.r[8].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_00207AF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[13].w[0]));  if (t) { goto L_00207B28; } }
L_00207AF0:
    c.r[7].d[0] = c.r[8].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00207B08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[14].w[0]));  if (t) { goto L_00207B28; } }
    c.budget -= 1;
L_00207B08:
    c.r[7].d[0] = c.r[8].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00207B20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[12].w[0]));  if (t) { goto L_00207B28; } }
    c.budget -= 1;
L_00207B20:
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.budget -= 2;
L_00207B28:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_00207B30:
    c.r[7].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00207A40u | kUnwind; return; } goto L_00207A40; } }
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00207B50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[2] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[4] = ld32((c.r[4].w[0] + 308u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 324u));
    set32(c.r[6], 0u + 1u);
    c.f[5] = ld32((c.r[4].w[0] + 304u));
    c.f[3] = ld32((c.r[4].w[0] + 312u));
    c.f[1] = ld32((c.r[4].w[0] + 320u));
    c.f[6] = ld32((c.r[4].w[0] + 328u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[5], c.f[2]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[4]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[5]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[6], c.f[2]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 32u), c.f[5]);
    st32((c.r[29].w[0] + 36u), c.f[4]);
    st32((c.r[29].w[0] + 48u), c.f[1]);
    st32((c.r[29].w[0] + 40u), c.f[3]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207BD0u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0001(c, 182u, depth + 1u); else { c.pc = 0x00207A00u; return; } if (c.pc != 0x00207BD0u) [[unlikely]] return; }
L_00207BD0:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 60u));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00207C00; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 523u));
    set32(c.r[3], 0u - 33u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00207C20; } }
L_00207C00:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 33u);
    set32(c.r[4], c.r[2].w[0] << 5);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_00207C20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00207C30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[5] = c.r[2].w[0];
    c.f[3] = ld32((c.r[4].w[0] + 304u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 320u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[2] = ld32((c.r[4].w[0] + 308u));
    set32(c.r[6], 0u + 1u);
    c.f[1] = ld32((c.r[4].w[0] + 312u));
    c.f[6] = ld32((c.r[4].w[0] + 328u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[3], c.f[5]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[2], c.f[5]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[1], c.f[5]);
    c.f[1] = ld32((c.r[4].w[0] + 324u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[4]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 224u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 32u), c.f[4]);
    st32((c.r[29].w[0] + 36u), c.f[3]);
    st32((c.r[29].w[0] + 40u), c.f[2]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207CB4u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0001(c, 182u, depth + 1u); else { c.pc = 0x00207A00u; return; } if (c.pc != 0x00207CB4u) [[unlikely]] return; }
L_00207CB4:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 60u));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00207CE4; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 523u));
    set32(c.r[3], 0u - 33u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00207D04; } }
L_00207CE4:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 33u);
    set32(c.r[4], c.r[2].w[0] << 5);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_00207D04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00207D20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[6] = ld32((c.r[29].w[0] + 44u));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00207E0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[4] = ld32((c.r[2].w[0] + 2436u));
    c.f[5] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[3] = ld32((c.r[16].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[2] = ld32((c.r[2].w[0] + 2440u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[2].w[0] + 2432u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 432u), c.f[0]);
    st32((c.r[16].w[0] + 436u), c.f[4]);
    st32((c.r[16].w[0] + 440u), c.f[2]);
    st32((c.r[16].w[0] + 444u), c.f[6]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29676u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[28].w[0] - 29676u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 24;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] + 32u);  if (t) { goto L_00207E2C; } }
    c.f[2] = ld32((c.r[16].w[0] + 108u));
    set32(c.r[4], c.r[16].w[0] + 240u);
    c.f[1] = ld32((c.r[16].w[0] + 100u));
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 240u), c.f[1]);
    st32((c.r[16].w[0] + 272u), c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 248u), c.f[0]);
    st32((c.r[16].w[0] + 280u), c.f[1]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[16].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207DE8u); st32((c.r[16].w[0] + 296u), c.f[0]);  if (depth < kMaxDepth) unit_0001(c, 198u, depth + 1u); else { c.pc = 0x00207ED0u; return; } if (c.pc != 0x00207DE8u) [[unlikely]] return; }
L_00207DE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207DF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 186u, depth + 1u); else { c.pc = 0x00207C30u; return; } if (c.pc != 0x00207DF0u) [[unlikely]] return; }
L_00207DF0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00207E3C; } }
L_00207E04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00207E54; } }
L_00207E0C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 5);
    set32(c.r[3], 0u - 33u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00207E50; } }
L_00207E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207E34u);  if (depth < kMaxDepth) unit_0001(c, 186u, depth + 1u); else { c.pc = 0x00207C30u; return; } if (c.pc != 0x00207E34u) [[unlikely]] return; }
L_00207E34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00207E50; } }
L_00207E3C:
    set32(c.r[4], c.r[16].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207E48u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0011(c, 309u, depth + 1u); else { c.pc = 0x00246BB0u; return; } if (c.pc != 0x00207E48u) [[unlikely]] return; }
L_00207E48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00207E04u | kUnwind; return; } goto L_00207E04; } }
L_00207E50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00207E54:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00207E60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29824u));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00207E88; } }
L_00207E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00207EC0; } }
L_00207E88:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[16], c.r[16].w[0] - 15472u);
    c.budget -= 2;
L_00207E90:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00207EA4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00207EA4u) [[unlikely]] return; }
L_00207EA4:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29824u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00207E90u | kUnwind; return; } goto L_00207E90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00207E80u | kUnwind; return; } goto L_00207E80; } }
L_00207EC0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00207ED0:
    set32(c.r[29], c.r[29].w[0] - 480u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 142u));
    c.r[4].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { goto L_00207F7C; } }
    c.r[4].d[0] = c.r[5].d[0] << 61;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00207F7C; } }
    c.f[3] = ld32((c.r[16].w[0] + 120u));
    set32(c.r[7], ld32((c.r[16].w[0] + 104u)));
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.r[6].d[0] = ld16((c.r[16].w[0] + 140u));
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.f[2] = ld32((c.r[16].w[0] + 96u));
    set32(c.r[5], ld32((c.r[7].w[0] + 8u)));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[3], c.f[1]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 12u)));
    c.f[4] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);  if (t) { [[clang::musttail]] return unit_0002(c, 2u, depth); } }
L_00207F7C:
    set32(c.r[9], ld32((c.r[16].w[0] + 116u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 140u));
    c.f[1] = ld32((c.r[16].w[0] + 120u));
    set32(c.r[6], ld32((c.r[16].w[0] + 104u)));
    c.f[0] = 0u;
    c.f[2] = c.r[4].w[0];
    c.f[3] = c.r[9].w[0];
    set32(c.r[5], c.r[5].w[0] << 2);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 12u)));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.f[4] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[9].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[8], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    mmi::mult(c, 1, c.r[8].w[0], c.r[9].w[0]);
    c.r[6].d[0] = c.lo.d[1];
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[7], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.budget -= 33;
    [[clang::musttail]] return unit_0002(c, 1u, depth);
}

}

#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003B[4096] = {
    1, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 44, 45, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 49, 50,
    0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0,
    0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0,
    0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 109, 0, 110, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0,
    0, 177, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0,
    0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0,
    0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0,
    203, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210,
    0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0,
};

void unit_003B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002EC000;
    case 2u: goto L_002EC004;
    case 3u: goto L_002EC010;
    case 4u: goto L_002EC04C;
    case 5u: goto L_002EC0A4;
    case 6u: goto L_002EC0E0;
    case 7u: goto L_002EC0F0;
    case 8u: goto L_002EC13C;
    case 9u: goto L_002EC154;
    case 10u: goto L_002EC15C;
    case 11u: goto L_002EC184;
    case 12u: goto L_002EC194;
    case 13u: goto L_002EC1E0;
    case 14u: goto L_002EC240;
    case 15u: goto L_002EC300;
    case 16u: goto L_002EC33C;
    case 17u: goto L_002EC390;
    case 18u: goto L_002EC3CC;
    case 19u: goto L_002EC3EC;
    case 20u: goto L_002EC438;
    case 21u: goto L_002EC440;
    case 22u: goto L_002EC454;
    case 23u: goto L_002EC4C0;
    case 24u: goto L_002EC4D4;
    case 25u: goto L_002EC520;
    case 26u: goto L_002EC538;
    case 27u: goto L_002EC5E0;
    case 28u: goto L_002EC614;
    case 29u: goto L_002EC698;
    case 30u: goto L_002EC6A8;
    case 31u: goto L_002EC6C0;
    case 32u: goto L_002EC7AC;
    case 33u: goto L_002EC854;
    case 34u: goto L_002EC8E4;
    case 35u: goto L_002EC980;
    case 36u: goto L_002ECA4C;
    case 37u: goto L_002ECAD0;
    case 38u: goto L_002ECAF0;
    case 39u: goto L_002ECB00;
    case 40u: goto L_002ECB10;
    case 41u: goto L_002ECB20;
    case 42u: goto L_002ECB40;
    case 43u: goto L_002ECB90;
    case 44u: goto L_002ECC84;
    case 45u: goto L_002ECC88;
    case 46u: goto L_002ECC8C;
    case 47u: goto L_002ECCB0;
    case 48u: goto L_002ECCF4;
    case 49u: goto L_002ECCF8;
    case 50u: goto L_002ECCFC;
    case 51u: goto L_002ECD14;
    case 52u: goto L_002ECD88;
    case 53u: goto L_002ECD94;
    case 54u: goto L_002ECDF4;
    case 55u: goto L_002ECE04;
    case 56u: goto L_002ECEA8;
    case 57u: goto L_002ECEB4;
    case 58u: goto L_002ECEC0;
    case 59u: goto L_002ECED0;
    case 60u: goto L_002ECF14;
    case 61u: goto L_002ECF9C;
    case 62u: goto L_002ECFB4;
    case 63u: goto L_002ED0D0;
    case 64u: goto L_002ED0E0;
    case 65u: goto L_002ED10C;
    case 66u: goto L_002ED134;
    case 67u: goto L_002ED17C;
    case 68u: goto L_002ED1B0;
    case 69u: goto L_002ED1F0;
    case 70u: goto L_002ED364;
    case 71u: goto L_002ED388;
    case 72u: goto L_002ED404;
    case 73u: goto L_002ED418;
    case 74u: goto L_002ED440;
    case 75u: goto L_002ED4AC;
    case 76u: goto L_002ED538;
    case 77u: goto L_002ED550;
    case 78u: goto L_002ED590;
    case 79u: goto L_002ED5C4;
    case 80u: goto L_002ED62C;
    case 81u: goto L_002ED868;
    case 82u: goto L_002ED888;
    case 83u: goto L_002ED8E0;
    case 84u: goto L_002ED8EC;
    case 85u: goto L_002ED94C;
    case 86u: goto L_002ED9B4;
    case 87u: goto L_002EDA10;
    case 88u: goto L_002EDA80;
    case 89u: goto L_002EDAC0;
    case 90u: goto L_002EDB90;
    case 91u: goto L_002EDBC8;
    case 92u: goto L_002EDC1C;
    case 93u: goto L_002EDC30;
    case 94u: goto L_002EDC40;
    case 95u: goto L_002EDC50;
    case 96u: goto L_002EDC70;
    case 97u: goto L_002EDCD8;
    case 98u: goto L_002EDD00;
    case 99u: goto L_002EDD50;
    case 100u: goto L_002EDDC8;
    case 101u: goto L_002EDDF0;
    case 102u: goto L_002EDE40;
    case 103u: goto L_002EDEB4;
    case 104u: goto L_002EDF60;
    case 105u: goto L_002EDF80;
    case 106u: goto L_002EDF94;
    case 107u: goto L_002EDFD0;
    case 108u: goto L_002EDFE8;
    case 109u: goto L_002EDFEC;
    case 110u: goto L_002EDFF4;
    case 111u: goto L_002EE048;
    case 112u: goto L_002EE050;
    case 113u: goto L_002EE128;
    case 114u: goto L_002EE208;
    case 115u: goto L_002EE250;
    case 116u: goto L_002EE2A0;
    case 117u: goto L_002EE2D4;
    case 118u: goto L_002EE2EC;
    case 119u: goto L_002EE310;
    case 120u: goto L_002EE340;
    case 121u: goto L_002EE360;
    case 122u: goto L_002EE370;
    case 123u: goto L_002EE450;
    case 124u: goto L_002EE470;
    case 125u: goto L_002EE490;
    case 126u: goto L_002EE578;
    case 127u: goto L_002EE5C8;
    case 128u: goto L_002EE828;
    case 129u: goto L_002EE838;
    case 130u: goto L_002EE8CC;
    case 131u: goto L_002EEB18;
    case 132u: goto L_002EEB40;
    case 133u: goto L_002EEE30;
    case 134u: goto L_002EEE40;
    case 135u: goto L_002EEE50;
    case 136u: goto L_002EEE68;
    case 137u: goto L_002EEE74;
    case 138u: goto L_002EEEA0;
    case 139u: goto L_002EEF08;
    case 140u: goto L_002EEF18;
    case 141u: goto L_002EEF50;
    case 142u: goto L_002EEFB0;
    case 143u: goto L_002EEFD0;
    case 144u: goto L_002EEFE8;
    case 145u: goto L_002EF044;
    case 146u: goto L_002EF090;
    case 147u: goto L_002EF0C8;
    case 148u: goto L_002EF110;
    case 149u: goto L_002EF124;
    case 150u: goto L_002EF1A8;
    case 151u: goto L_002EF1F8;
    case 152u: goto L_002EF270;
    case 153u: goto L_002EF4F0;
    case 154u: goto L_002EF6D0;
    case 155u: goto L_002EF750;
    case 156u: goto L_002EF790;
    case 157u: goto L_002EF7AC;
    case 158u: goto L_002EF7EC;
    case 159u: goto L_002EF840;
    case 160u: goto L_002EF85C;
    case 161u: goto L_002EF880;
    case 162u: goto L_002EF8B0;
    case 163u: goto L_002EF8D0;
    case 164u: goto L_002EFA50;
    case 165u: goto L_002EFA70;
    case 166u: goto L_002EFA90;
    case 167u: goto L_002EFAA4;
    case 168u: goto L_002EFAB0;
    case 169u: goto L_002EFABC;
    case 170u: goto L_002EFAC4;
    case 171u: goto L_002EFADC;
    case 172u: goto L_002EFAE8;
    case 173u: goto L_002EFB18;
    case 174u: goto L_002EFB48;
    case 175u: goto L_002EFB5C;
    case 176u: goto L_002EFB74;
    case 177u: goto L_002EFB84;
    case 178u: goto L_002EFB88;
    case 179u: goto L_002EFBA4;
    case 180u: goto L_002EFBC0;
    case 181u: goto L_002EFC00;
    case 182u: goto L_002EFC68;
    case 183u: goto L_002EFC74;
    case 184u: goto L_002EFC88;
    case 185u: goto L_002EFCC0;
    case 186u: goto L_002EFCF0;
    case 187u: goto L_002EFD20;
    case 188u: goto L_002EFD30;
    case 189u: goto L_002EFD48;
    case 190u: goto L_002EFD64;
    case 191u: goto L_002EFD90;
    case 192u: goto L_002EFDD0;
    case 193u: goto L_002EFDF8;
    case 194u: goto L_002EFE1C;
    case 195u: goto L_002EFE28;
    case 196u: goto L_002EFE50;
    case 197u: goto L_002EFE64;
    case 198u: goto L_002EFE80;
    case 199u: goto L_002EFE90;
    case 200u: goto L_002EFEB4;
    case 201u: goto L_002EFEC4;
    case 202u: goto L_002EFEF4;
    case 203u: goto L_002EFF00;
    case 204u: goto L_002EFF0C;
    case 205u: goto L_002EFF18;
    case 206u: goto L_002EFF24;
    case 207u: goto L_002EFF30;
    case 208u: goto L_002EFF3C;
    case 209u: goto L_002EFF6C;
    case 210u: goto L_002EFF7C;
    case 211u: goto L_002EFF88;
    case 212u: goto L_002EFFA4;
    case 213u: goto L_002EFFAC;
    case 214u: goto L_002EFFBC;
    case 215u: goto L_002EFFCC;
    case 216u: goto L_002EFFF8;
    default: bad_entry(c, 0x002EC000u); return;
    }
L_002EC000:
    c.budget -= 1;
L_002EC004:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 3;
L_002EC010:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EC164; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EC04C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EC04C:
    c.f[2] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    set32(c.r[3], c.r[29].w[0] + 152u);
    c.f[0] = 0u;
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0]), c.f[2]);  if (t) { goto L_002EC16C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EC0A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EC0A4:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EC174; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EC0E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EC0E0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 220u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC0F0u); set32(c.r[6], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_002E(c, 277u, depth + 1u); else { c.pc = 0x002BBA30u; return; } if (c.pc != 0x002EC0F0u) [[unlikely]] return; }
L_002EC0F0:
    set32(c.r[4], ld32((c.r[29].w[0] + 220u)));
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC13Cu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00203760u; return; } if (c.pc != 0x002EC13Cu) [[unlikely]] return; }
L_002EC13C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EC17C; } }
    c.r[2].d[0] = 0ull < c.r[21].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EC184; } }
L_002EC154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EC210; } }
L_002EC15C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 128u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC010u | kUnwind; return; } goto L_002EC010; } }
L_002EC164:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC04Cu | kUnwind; return; } goto L_002EC04C; } }
L_002EC16C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC0A4u | kUnwind; return; } goto L_002EC0A4; } }
L_002EC174:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC0E0u | kUnwind; return; } goto L_002EC0E0; } }
L_002EC17C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002EC210; } }
L_002EC184:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 220u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC194u); set32(c.r[6], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_002E(c, 274u, depth + 1u); else { c.pc = 0x002BB7F0u; return; } if (c.pc != 0x002EC194u) [[unlikely]] return; }
L_002EC194:
    set32(c.r[4], ld32((c.r[29].w[0] + 220u)));
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC1E0u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00203760u; return; } if (c.pc != 0x002EC1E0u) [[unlikely]] return; }
L_002EC1E0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EC1F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002EC210; } }
L_002EC1F8:
    c.r[2].d[0] = 0ull < c.r[21].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC184u | kUnwind; return; } goto L_002EC184; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC154u | kUnwind; return; } goto L_002EC154; } }
L_002EC210:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_002EC240:
    set32(c.r[29], c.r[29].w[0] - 336u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.f[6] = ld32((c.r[5].w[0]));
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[5] = ld32((c.r[6].w[0]));
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[3] = ld32((c.r[6].w[0] + 8u));
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[29].w[0] + 248u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[29].w[0] + 224u)));
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 232u)));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 234u)));
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st8((c.r[29].w[0] + 207u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0] + 200u), c.r[9].w[0]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.f[20] = c.f[12];
    st32((c.r[29].w[0] + 240u), c.f[2]);
    c.budget -= 39;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0]), c.f[1]);  if (t) { goto L_002EC474; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EC300; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    c.budget -= 3;
L_002EC300:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EC47C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EC33C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EC33C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 264u);
    c.f[0] = 0u;
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0]), c.f[2]);  if (t) { goto L_002EC484; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EC390; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EC390:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EC48C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EC3CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EC3CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.f[21] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 332u);
    set32(c.r[6], c.r[29].w[0] + 328u);
    set32(c.r[20], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC3ECu); st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002E(c, 277u, depth + 1u); else { c.pc = 0x002BBA30u; return; } if (c.pc != 0x002EC3ECu) [[unlikely]] return; }
L_002EC3EC:
    set32(c.r[4], ld32((c.r[29].w[0] + 332u)));
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 328u)));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 207u)));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC438u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 170u, depth + 1u); else { c.pc = 0x00203F80u; return; } if (c.pc != 0x002EC438u) [[unlikely]] return; }
L_002EC438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EC494; } }
L_002EC440:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EC4C0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_002EC454:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EC460; } }
    st32((c.r[2].w[0]), c.r[20].w[0]);
    c.budget -= 1;
L_002EC460:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 176u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EC580; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EC5A4; } }
L_002EC474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 240u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC300u | kUnwind; return; } goto L_002EC300; } }
L_002EC47C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC33Cu | kUnwind; return; } goto L_002EC33C; } }
L_002EC484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC390u | kUnwind; return; } goto L_002EC390; } }
L_002EC48C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC3CCu | kUnwind; return; } goto L_002EC3CC; } }
L_002EC494:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    ld128((c.r[21].w[0]) & ~15u, c.r[3]);
    st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[21] = ld32((c.r[21].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 28u)));
    set32(c.r[17], ld32((c.r[21].w[0] + 16u)));
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 24u)));
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 26u)));
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 236u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC440u | kUnwind; return; } goto L_002EC440; } }
L_002EC4C0:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 332u);
    set32(c.r[6], c.r[29].w[0] + 328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC4D4u); set32(c.r[20], c.r[20].w[0] + 1u);  if (depth < kMaxDepth) unit_002E(c, 274u, depth + 1u); else { c.pc = 0x002BB7F0u; return; } if (c.pc != 0x002EC4D4u) [[unlikely]] return; }
L_002EC4D4:
    set32(c.r[4], ld32((c.r[29].w[0] + 332u)));
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 328u)));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 207u)));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC520u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 170u, depth + 1u); else { c.pc = 0x00203F80u; return; } if (c.pc != 0x002EC520u) [[unlikely]] return; }
L_002EC520:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EC540; } }
    c.f[0] = ld32((c.r[21].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EC558; } }
L_002EC538:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002EC540:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC4C0u | kUnwind; return; } goto L_002EC4C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 200u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC454u | kUnwind; return; } goto L_002EC454; } }
L_002EC558:
    ld128((c.r[21].w[0]) & ~15u, c.r[2]);
    c.f[21] = ld32((c.r[21].w[0] + 20u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 28u)));
    set32(c.r[17], ld32((c.r[21].w[0] + 16u)));
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 24u)));
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 26u)));
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[29].w[0] + 236u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC538u | kUnwind; return; } goto L_002EC538; } }
L_002EC580:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[4]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 236u)));
    set32(c.r[2], 0u + 1u);
    st128((c.r[21].w[0]) & ~15u, c.r[4]);
    st32((c.r[21].w[0] + 16u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 20u), c.f[21]);
    st16((c.r[21].w[0] + 24u), static_cast<std::uint16_t>(c.r[18].w[0]));
    st16((c.r[21].w[0] + 26u), static_cast<std::uint16_t>(c.r[19].w[0]));
    st8((c.r[21].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_002EC5A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_002EC5E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002EC698; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 14928u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EC6A0; } }
    set32(c.r[9], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002EC614:
    c.r[6].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 65u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[3], 0u - 129u);
    set32(c.r[4], c.r[6].w[0] << 7);
    set32(c.r[2], 0u - 2u);
    c.r[8].d[0] = ld8((c.r[9].w[0] + 523u));
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    st8((c.r[9].w[0] + 523u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[9].w[0] + 523u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[9].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 524u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 524u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 220u));
    c.budget -= 23;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EC68C; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 212u)));
    set32(c.r[2], 0u - 17u);
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[3], c.r[6].w[0] << 4);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_002EC68C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC698u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x002EC698u) [[unlikely]] return; }
L_002EC698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EC6B0; } }
L_002EC6A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC6A8u); set32(c.r[4], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x002EC6A8u) [[unlikely]] return; }
L_002EC6A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], ld32((c.r[16].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC614u | kUnwind; return; } goto L_002EC614; } }
L_002EC6B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EC6C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 278u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 380u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ECAD8; } }
    set32(c.r[3], 0u + 277u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ECA34; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002ECA28; } }
    set32(c.r[3], 0u + 275u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002EC96C; } }
    set32(c.r[3], 0u + 274u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002EC960; } }
    set32(c.r[3], 0u + 273u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002EC8D0; } }
    set32(c.r[3], 0u + 272u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002EC830; } }
    set32(c.r[3], 0u + 271u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002EC740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECAE0; } }
L_002EC740:
    c.r[9].d[0] = ld8((c.r[16].w[0] + 524u));
    set32(c.r[7], 0u - 2u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[6], c.r[3].w[0] << 6);
    set32(c.r[5], 0u - 65u);
    set32(c.r[3], 0u - 129u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 524u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 536u), static_cast<std::uint8_t>(0u));
    set32(c.r[8], ld32((c.r[17].w[0] + 4u)));
    c.r[7].d[0] = ld8((c.r[8].w[0] + 523u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0] + 523u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[8].w[0] + 523u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[8].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 26;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ECAE8; } }
    set32(c.r[3], 0u + 272u);
    c.budget -= 1;
L_002EC7AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
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
    set32(c.r[6], 0u + 1u);
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
    c.budget -= 33;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_002ECAE0; } }
L_002EC830:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 220u));
    set32(c.r[3], 0u + 76u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002ECB28; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ECAF8; } }
    set32(c.r[3], 0u + 273u);
    c.budget -= 1;
L_002EC854:
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
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { goto L_002ECAE0; } }
L_002EC8D0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ECB08; } }
    set32(c.r[3], 0u + 274u);
    c.budget -= 1;
L_002EC8E4:
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
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { goto L_002ECAE0; } }
L_002EC960:
    st32((c.r[16].w[0] + 360u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 356u), 0u);  if (t) { goto L_002ECAE0; } }
L_002EC96C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ECB18; } }
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002EC980:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 360u), 0u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[7], 0u - 2u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], 0u - 5u);
    st32((c.r[16].w[0] + 356u), c.r[3].w[0]);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 382u));
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
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
    c.budget -= 42;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002ECAE0; } }
L_002ECA28:
    st32((c.r[16].w[0] + 360u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 356u), 0u);  if (t) { goto L_002ECAE0; } }
L_002ECA34:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ECA4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECA4Cu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002ECA4Cu) [[unlikely]] return; }
L_002ECA4C:
    set32(c.r[2], 0u + 278u);
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
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECAD0u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0020(c, 40u, depth + 1u); else { c.pc = 0x00280530u; return; } if (c.pc != 0x002ECAD0u) [[unlikely]] return; }
L_002ECAD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECAE0; } }
L_002ECAD8:
    st32((c.r[16].w[0] + 360u), 0u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.budget -= 2;
L_002ECAE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002ECB2C; } }
L_002ECAE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECAF0u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002ECAF0u) [[unlikely]] return; }
L_002ECAF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 272u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC7ACu | kUnwind; return; } goto L_002EC7AC; } }
L_002ECAF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECB00u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002ECB00u) [[unlikely]] return; }
L_002ECB00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 273u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC854u | kUnwind; return; } goto L_002EC854; } }
L_002ECB08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECB10u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002ECB10u) [[unlikely]] return; }
L_002ECB10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 274u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC8E4u | kUnwind; return; } goto L_002EC8E4; } }
L_002ECB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECB20u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002ECB20u) [[unlikely]] return; }
L_002ECB20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC980u | kUnwind; return; } goto L_002EC980; } }
L_002ECB28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002ECB2C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002ECB40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 16u));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002ECC10; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002ECC10; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ECDFC; } }
    set32(c.r[3], 0u + 273u);
    c.budget -= 1;
L_002ECB90:
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
    set32(c.r[6], c.f[0]);
    set32(c.r[4], 0u - 2u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 356u), c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[4], c.r[4].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[4].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 32;
L_002ECC10:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 16u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002ECDE0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.f[6] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 36u));
    c.f[0] = ld32((c.r[3].w[0] + 508u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[6]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[3].w[0] + 32u);  if (t) { goto L_002ECE0C; } }
    c.f[1] = ld32((c.r[3].w[0] + 52u));
    c.f[0] = ld32((c.r[28].w[0] - 28940u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002ECD94; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ED114; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ED154; } }
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ED11C; } }
L_002ECC84:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ECC88:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_002ECC8C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ECCB8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ECD14; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECCB0u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 99u, depth + 1u); else { c.pc = 0x004160C0u; return; } if (c.pc != 0x002ECCB0u) [[unlikely]] return; }
L_002ECCB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_002ECD18; } }
L_002ECCB8:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ECD14; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ED15C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ED19C; } }
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ED164; } }
L_002ECCF4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ECCF8:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_002ECCFC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ECD14; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECD14u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 118u, depth + 1u); else { c.pc = 0x00416580u; return; } if (c.pc != 0x002ECD14u) [[unlikely]] return; }
L_002ECD14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_002ECD18:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[0] = ld32((c.r[3].w[0] - 24112u));
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002ECD94; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 808u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002ECD5C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002ECD5C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ECD5C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002ECD94; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ECD88; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 762u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECD88u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x002805A0u; return; } if (c.pc != 0x002ECD88u) [[unlikely]] return; }
L_002ECD88:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECD94u); set32(c.r[4], ld32((c.r[2].w[0] + 1356u)));  if (depth < kMaxDepth) unit_00A2(c, 17u, depth + 1u); else { c.pc = 0x004882F0u; return; } if (c.pc != 0x002ECD94u) [[unlikely]] return; }
L_002ECD94:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ECDE0; } }
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0400000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002ECDE0; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 212u)));
    c.r[3].d[0] = 0ull & 1ull;
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], 0u - 17u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_002ECDE0:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ED1A4; } }
L_002ECDF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002ED1D4; } }
L_002ECDFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECE04u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002ECE04u) [[unlikely]] return; }
L_002ECE04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 273u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ECB90u | kUnwind; return; } goto L_002ECB90; } }
L_002ECE0C:
    c.f[4] = ld32((c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[2] = ld32((c.r[2].w[0] + 2432u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[3] = ld32((c.r[3].w[0] + 2436u));
    set32(c.r[4], c.r[29].w[0] + 68u);
    st32((c.r[29].w[0] + 64u), c.f[4]);
    c.f[4] = ld32((c.r[29].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[5] = ld32((c.r[5].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44610000u);
    c.f[1] = ld32((c.r[2].w[0] + 2440u));
    c.f[0] = c.r[3].w[0];
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[2]);
    st32((c.r[4].w[0]), c.f[5]);
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 48u), c.f[4]);
    st32((c.r[29].w[0] + 72u), c.f[2]);
    c.f[5] = ld32((c.r[5].w[0] + 12u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[29].w[0] + 76u), c.f[5]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 508u));
    st32((c.r[4].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 36;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 56u), c.f[2]);  if (t) { goto L_002ECEA8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECEA8u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_007D(c, 21u, depth + 1u); else { c.pc = 0x003F41B0u; return; } if (c.pc != 0x002ECEA8u) [[unlikely]] return; }
L_002ECEA8:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECEB4u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0035(c, 52u, depth + 1u); else { c.pc = 0x002D4990u; return; } if (c.pc != 0x002ECEB4u) [[unlikely]] return; }
L_002ECEB4:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECEC0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 210u, depth + 1u); else { c.pc = 0x002DA7B0u; return; } if (c.pc != 0x002ECEC0u) [[unlikely]] return; }
L_002ECEC0:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ED0C8; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002ECED0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ECEF8; } }
    c.r[3].d[0] = c.r[4].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
L_002ECEF8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ECF90; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ED0D8; } }
    set32(c.r[3], 0u + 277u);
    c.budget -= 1;
L_002ECF14:
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
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { goto L_002ED02C; } }
L_002ECF90:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ED0E8; } }
L_002ECF9C:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ED104; } }
    set32(c.r[3], 0u + 275u);
    c.budget -= 1;
L_002ECFB4:
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
L_002ED02C:
    set32(c.r[9], ld32((c.r[17].w[0] + 4u)));
    c.r[7].d[0] = 0ull & 1ull;
    set32(c.r[10], 0u - 65u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[5], 0u - 129u);
    set32(c.r[6], c.r[7].w[0] << 7);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], 0u - 2u);
    c.r[8].d[0] = ld8((c.r[9].w[0] + 523u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[10].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[11].d[0];
    st8((c.r[9].w[0] + 523u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[9], ld32((c.r[17].w[0] + 4u)));
    c.r[8].d[0] = ld8((c.r[9].w[0] + 523u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[10].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[11].d[0];
    st8((c.r[9].w[0] + 523u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[9].w[0] + 523u));
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[9].w[0] + 523u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 524u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[5].w[0] + 524u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 31;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ECD94u | kUnwind; return; } goto L_002ECD94; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 212u)));
    set32(c.r[3], 0u - 17u);
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[4], c.r[7].w[0] << 4);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ECD94u | kUnwind; return; } goto L_002ECD94; } }
L_002ED0C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED0D0u); set32(c.r[4], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x002ED0D0u) [[unlikely]] return; }
L_002ED0D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ECED0u | kUnwind; return; } goto L_002ECED0; } }
L_002ED0D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED0E0u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002ED0E0u) [[unlikely]] return; }
L_002ED0E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 277u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ECF14u | kUnwind; return; } goto L_002ECF14; } }
L_002ED0E8:
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ECF9Cu | kUnwind; return; } goto L_002ECF9C; } }
L_002ED104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED10Cu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002ED10Cu) [[unlikely]] return; }
L_002ED10C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 275u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ECFB4u | kUnwind; return; } goto L_002ECFB4; } }
L_002ED114:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ECC8Cu | kUnwind; return; } goto L_002ECC8C; } }
L_002ED11C:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[17].w[0] + 20u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ECC84u | kUnwind; return; } goto L_002ECC84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED134u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x002ED134u) [[unlikely]] return; }
L_002ED134:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ECC88u | kUnwind; return; } goto L_002ECC88; } }
L_002ED154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ECC8Cu | kUnwind; return; } goto L_002ECC8C; } }
L_002ED15C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ECCFCu | kUnwind; return; } goto L_002ECCFC; } }
L_002ED164:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[17].w[0] + 20u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ECCF4u | kUnwind; return; } goto L_002ECCF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED17Cu); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x002ED17Cu) [[unlikely]] return; }
L_002ED17C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ECCF8u | kUnwind; return; } goto L_002ECCF8; } }
L_002ED19C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ECCFCu | kUnwind; return; } goto L_002ECCFC; } }
L_002ED1A4:
    c.f[13] = ld32((c.r[4].w[0] + 56u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED1B0u); c.f[12] = ld32((c.r[4].w[0] + 48u));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x002ED1B0u) [[unlikely]] return; }
L_002ED1B0:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002ED1CC; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 404u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002ED1CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ECDF4u | kUnwind; return; } goto L_002ECDF4; } }
L_002ED1D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002ED1F0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = 0ull & 1ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.f[3] = c.r[30].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.f[1] = ld32((c.r[6].w[0]));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[20], 0u - 5u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[21], c.r[22].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], 0u - 9u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[18], c.r[22].w[0] << 3);
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[15], 0u - 17u);
    c.r[24].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[13], 0u - 33u);
    set32(c.r[14], c.r[22].w[0] << 5);
    set32(c.r[11], 0u - 2049u);
    set32(c.r[12], c.r[22].w[0] << 11);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[10], 0u + 55u);
    set32(c.r[9], c.r[9].w[0] - 14928u);
    set32(c.r[8], 0u - 2u);
    set32(c.r[3], 0u - 65u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[20].d[0];
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[2].d[0] = c.r[2].d[0] | c.r[21].d[0];
    set32(c.r[23], 0u - 3u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    c.r[19].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[2], c.r[22].w[0] << 1);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.r[6].d[0] = c.r[19].d[0] & c.r[25].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[18].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[18].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[6], 0u - 1u);
    c.r[15].d[0] = c.r[18].d[0] & c.r[15].d[0];
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
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    c.r[9].d[0] = ld8((c.r[4].w[0] + 28u));
    c.r[8].d[0] = c.r[9].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[22].d[0];
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 32u), 0u);
    c.r[8].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[3].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[20].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[21].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[23].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[5].w[0] + 48u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41180000u);
    st32((c.r[5].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[5].w[0] + 56u), c.f[2]);
    st32((c.r[5].w[0] + 60u), c.f[0]);
    c.budget -= 93;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED364u); set32(c.r[5], 0u + 34u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x002ED364u) [[unlikely]] return; }
L_002ED364:
    set32(c.r[2], ld32((c.r[16].w[0] + 344u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1096u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ED448; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ED438; } }
    set32(c.r[2], 0u + 271u);
    c.budget -= 1;
L_002ED388:
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
    st32((c.r[16].w[0] + 372u), c.f[0]);
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 31;
L_002ED404:
    set32(c.r[2], ld32((c.r[16].w[0] + 212u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 368u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ED540; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 1;
L_002ED418:
    set32(c.r[3], 0u - 17u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002ED558; } }
L_002ED438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED440u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002ED440u) [[unlikely]] return; }
L_002ED440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 271u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED388u | kUnwind; return; } goto L_002ED388; } }
L_002ED448:
    c.r[8].d[0] = ld8((c.r[16].w[0] + 524u));
    set32(c.r[6], 0u - 2u);
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], c.r[2].w[0] << 6);
    set32(c.r[4], 0u - 65u);
    set32(c.r[2], 0u - 129u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 524u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 536u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 523u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 24;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ED530; } }
    set32(c.r[2], 0u + 272u);
    c.budget -= 1;
L_002ED4AC:
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
    set32(c.r[5], 0u + 1u);
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
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.budget -= 33;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED404u | kUnwind; return; } goto L_002ED404; } }
L_002ED530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED538u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002ED538u) [[unlikely]] return; }
L_002ED538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 272u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED4ACu | kUnwind; return; } goto L_002ED4AC; } }
L_002ED540:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 752u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED550u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 98u, depth + 1u); else { c.pc = 0x00395750u; return; } if (c.pc != 0x002ED550u) [[unlikely]] return; }
L_002ED550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 212u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED418u | kUnwind; return; } goto L_002ED418; } }
L_002ED558:
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
L_002ED590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[25].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 33u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull < c.r[14].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[10].d[0] = c.r[3].d[0] & 255ull;
    c.r[8].d[0] = c.r[14].d[0] << 56;
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 13;
L_002ED5C4:
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[10].d[0] != 0ull; c.r[9].d[0] = c.r[15].d[0] & 255ull;  if (t) { goto L_002ED5E8; } }
    c.r[9].d[0] = c.r[9].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_002ED5E8; } }
    c.r[11].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_002ED5E8:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_002ED5F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED5C4u | kUnwind; return; } goto L_002ED5C4; } }
L_002ED5F8:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_002ED9F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[4] = c.r[3].w[0];
    set32(c.r[12], 0u + 10u);
    c.f[3] = 0u;
    set32(c.r[11], 0u + 124u);
    c.r[3].d[0] = c.r[14].d[0] << 56;
    set32(c.r[10], 0u - 90u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[13], 0u + 13u);
    c.budget -= 11;
L_002ED62C:
    c.r[17].d[0] = c.r[15].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[13].d[0]; c.r[24].d[0] = 0ull + 0ull;  if (t) { goto L_002ED87C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[12].d[0];  if (t) { goto L_002ED87C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[11].d[0];  if (t) { goto L_002ED928; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[10].d[0];  if (t) { goto L_002ED6E8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[15].d[0] = c.r[17].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull;  if (t) { goto L_002ED930; } }
    c.r[1].d[0] = c.r[17].sd[0] < 79ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002ED930; } }
    c.budget -= 2;
    { const bool t = c.r[25].sd[0] < 0;  if (t) { goto L_002ED688; } }
    c.f[0] = c.r[25].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002ED6A4; } }
L_002ED688:
    set32(c.r[17], c.r[25].w[0] >> 1);
    c.r[15].d[0] = c.r[25].d[0] & 1ull;
    c.r[17].d[0] = c.r[17].d[0] | c.r[15].d[0];
    c.f[0] = c.r[17].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002ED6A4:
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002ED6C4; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[25], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[24].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_002ED6DC; } }
L_002ED6C4:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[4]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[25], c.f[0]);
    c.r[25].d[0] = c.r[25].d[0] | c.r[9].d[0];
    c.r[24].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 6;
L_002ED6DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED858; } }
    c.budget -= 1;
L_002ED6E8:
    c.r[17].d[0] = c.r[15].d[0] & 255ull;
    c.r[15].d[0] = 0ull < c.r[14].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_002ED704; } }
    c.r[15].d[0] = c.r[17].d[0] & 255ull;
    c.r[15].d[0] = c.r[15].d[0] ^ c.r[3].d[0];
    c.r[15].d[0] = c.r[15].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_002ED704:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_002ED7B8; } }
    c.r[15].d[0] = c.r[17].d[0] & 255ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], c.r[15].w[0] << 1);
    set32(c.r[17], c.r[4].w[0] + c.r[17].w[0]);
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 46u)));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 46u)));
    c.f[0] = c.r[15].w[0];
    c.f[1] = c.r[17].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[12], c.f[0]);
    c.budget -= 16;
    { const bool t = c.r[25].sd[0] < 0;  if (t) { goto L_002ED758; } }
    c.f[0] = c.r[25].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002ED774; } }
L_002ED758:
    set32(c.r[17], c.r[25].w[0] >> 1);
    c.r[15].d[0] = c.r[25].d[0] & 1ull;
    c.r[17].d[0] = c.r[17].d[0] | c.r[15].d[0];
    c.f[0] = c.r[17].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002ED774:
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002ED798; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[25], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED7AC; } }
L_002ED798:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[4]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[25], c.f[0]);
    c.r[25].d[0] = c.r[25].d[0] | c.r[9].d[0];
    c.budget -= 5;
L_002ED7AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED858; } }
    c.budget -= 1;
L_002ED7B8:
    c.r[15].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[17], c.r[15].w[0] << 1);
    set32(c.r[17], c.r[4].w[0] + c.r[17].w[0]);
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 46u)));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 46u)));
    c.f[0] = c.r[15].w[0];
    c.f[1] = c.r[17].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[12], c.f[0]);
    c.budget -= 15;
    { const bool t = c.r[25].sd[0] < 0;  if (t) { goto L_002ED800; } }
    c.f[0] = c.r[25].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002ED81C; } }
L_002ED800:
    set32(c.r[17], c.r[25].w[0] >> 1);
    c.r[15].d[0] = c.r[25].d[0] & 1ull;
    c.r[17].d[0] = c.r[17].d[0] | c.r[15].d[0];
    c.f[0] = c.r[17].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002ED81C:
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002ED840; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[25], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED854; } }
L_002ED840:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[4]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[25], c.f[0]);
    c.r[25].d[0] = c.r[25].d[0] | c.r[9].d[0];
    c.budget -= 5;
L_002ED854:
    c.budget -= 1;
L_002ED858:
    c.r[1].d[0] = c.r[6].d[0] < c.r[25].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002ED938; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_002ED868:
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED62Cu | kUnwind; return; } goto L_002ED62C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] - c.r[5].w[0]);  if (t) { goto L_002ED9F8; } }
L_002ED87C:
    set32(c.r[3], c.r[2].w[0] - c.r[5].w[0]);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_002ED888:
    set32(c.r[8], ld32((c.r[7].w[0])));
    c.r[3].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ED908; } }
    set32(c.r[3], c.r[5].w[0] + c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[3].w[0] - 1u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 33u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_002ED8C8; } }
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[8].d[0] = c.r[8].d[0] & 255ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_002ED8C8; } }
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_002ED8C8:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_002ED908; } }
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED888u | kUnwind; return; } goto L_002ED888; } }
L_002ED8E0:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002ED9FC; } }
L_002ED8EC:
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ED9FC; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);  if (t) { goto L_002EDA00; } }
L_002ED908:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[3], 0u + 13u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED8ECu | kUnwind; return; } goto L_002ED8EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED8E0u | kUnwind; return; } goto L_002ED8E0; } }
L_002ED928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED868u | kUnwind; return; } goto L_002ED868; } }
L_002ED930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED868u | kUnwind; return; } goto L_002ED868; } }
L_002ED938:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002ED9E8; } }
    set32(c.r[2], c.r[16].w[0] - c.r[5].w[0]);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002ED94C:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 33u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[2].w[0] - 1u));
    c.r[2].d[0] = 0ull < c.r[9].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[8].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 9;
    { const bool t = c.r[8].d[0] != 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_002ED988; } }
    c.r[2].d[0] = c.r[9].d[0] << 56;
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_002ED988; } }
    c.r[10].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_002ED988:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_002ED9A0; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED94Cu | kUnwind; return; } goto L_002ED94C; } }
L_002ED9A0:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[6].d[0] = c.r[8].d[0] & 255ull;
    c.r[4].d[0] = c.r[9].d[0] << 56;
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
L_002ED9B4:
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002ED9D0; } }
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_002ED9D0; } }
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_002ED9D0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002ED9E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED9B4u | kUnwind; return; } goto L_002ED9B4; } }
L_002ED9E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED9FC; } }
L_002ED9E8:
    c.budget -= 2;
    { const bool t = c.r[24].d[0] == 0ull;  if (t) { goto L_002ED9F4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_002ED9F4:
    set32(c.r[3], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_002ED9F8:
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_002ED9FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 1;
L_002EDA00:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EDA10:
    set32(c.r[29], c.r[29].w[0] - 912u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[25]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st8((c.r[29].w[0] + 207u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.f[24] = c.f[12];
    c.f[23] = c.f[13];
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDA80u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x002EDA80u) [[unlikely]] return; }
L_002EDA80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EDA90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002EE258; } }
L_002EDA90:
    set32(c.r[3], ld32((c.r[19].w[0] + 30248u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[2], ld32((c.r[19].w[0] + 30236u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[4], c.r[29].w[0] + 500u);
    set32(c.r[5], c.r[5].w[0] - 7328u);
    set32(c.r[6], c.r[6].w[0] - 7408u);
    set32(c.r[7], 0u + 12u);
    set32(c.r[8], 0u + 32u);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDAC0u); set32(c.r[21], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0002(c, 183u, depth + 1u); else { c.pc = 0x0020B3F0u; return; } if (c.pc != 0x002EDAC0u) [[unlikely]] return; }
L_002EDAC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[22], c.r[29].w[0] + 492u);
    c.f[22] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[23], c.r[29].w[0] + 488u);
    st32((c.r[29].w[0] + 496u), c.r[21].w[0]);
    st32((c.r[22].w[0]), 0u);
    st32((c.r[23].w[0]), 0u);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; st8((c.r[29].w[0] + 480u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002EDAF0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002EDB0C; } }
L_002EDAF0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002EDB0C:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0; c.f[21] = fp::ee::add(c.fcr31, c.f[22], c.f[0]);  if (t) { goto L_002EDB20; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002EDB3C; } }
L_002EDB20:
    set32(c.r[3], c.r[20].w[0] >> 1);
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002EDB3C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 207u));
    c.f[20] = fp::ee::add(c.fcr31, c.f[24], c.f[0]);
    c.r[5].d[0] = ld8((c.r[30].w[0]));
    c.r[4].d[0] = ld8((c.r[30].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[30].w[0] + 2u));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[30].w[0] + 3u));
    st8((c.r[19].w[0] + 35u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[19].w[0] + 36u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[19].w[0] + 37u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 38u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[30], c.r[29].w[0] + 904u);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 35u));
    st8((c.r[19].w[0] + 39u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 36u));
    st8((c.r[19].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 37u));
    st8((c.r[19].w[0] + 41u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 38u));
    st8((c.r[19].w[0] + 42u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 44u), static_cast<std::uint16_t>(0u));
    c.budget -= 21;
L_002EDB90:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EDF88; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[22], c.f[24]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EDF88; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 33u)));
    c.r[2].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 5;
L_002EDBC8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_002EDBE8; } }
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002EDBE8; } }
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002EDBE8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002EDBF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EDBC8u | kUnwind; return; } goto L_002EDBC8; } }
L_002EDBF8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EDC48; } }
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 908u);
    c.f[12] = c.f[24];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDC1Cu); c.r[20].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 78u, depth + 1u); else { c.pc = 0x002ED590u; return; } if (c.pc != 0x002EDC1Cu) [[unlikely]] return; }
L_002EDC1C:
    set32(c.r[6], ld32((c.r[29].w[0] + 908u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDC30u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x002EDC30u) [[unlikely]] return; }
L_002EDC30:
    set32(c.r[3], ld32((c.r[29].w[0] + 908u)));
    set32(c.r[2], c.r[3].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[2].w[0] + 224u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002EDC78; } }
L_002EDC40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[22] = fp::ee::add(c.fcr31, c.f[22], c.f[20]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EDB90u | kUnwind; return; } goto L_002EDB90; } }
L_002EDC48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EDC58; } }
L_002EDC50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002EE258; } }
L_002EDC58:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[4], c.r[29].w[0] + 500u);
    set32(c.r[5], c.r[5].w[0] - 7408u);
    set32(c.r[6], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDC70u); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x002EDC70u) [[unlikely]] return; }
L_002EDC70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EDC50u | kUnwind; return; } goto L_002EDC50; } }
L_002EDC78:
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    set32(c.r[2], c.r[29].w[0] + 212u);
    c.f[2] = ld32((c.r[17].w[0]));
    set32(c.r[3], 0u + 2u);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[2].w[0]), c.f[22]);
    set32(c.r[2], c.r[29].w[0] + 216u);
    st32((c.r[2].w[0]), c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 220u);
    st32((c.r[29].w[0] + 208u), c.f[2]);
    c.budget -= 12;
    { const bool t = c.r[21].d[0] == c.r[3].d[0]; st32((c.r[2].w[0]), c.f[0]);  if (t) { goto L_002EDDB8; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002EDCC8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_002EDE98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EDE98; } }
    c.budget -= 1;
L_002EDCC8:
    set32(c.r[20], c.r[29].w[0] + 224u);
    c.f[25] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDCD8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x002EDCD8u) [[unlikely]] return; }
L_002EDCD8:
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[3].w[0] + 224u);
    c.r[1].d[0] = c.r[2].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EDD60; } }
    c.f[0] = c.f[25];
    set32(c.r[4], 0u + 124u);
    set32(c.r[5], 0u - 90u);
    c.budget -= 4;
L_002EDD00:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002EDF08; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002EDD50; } }
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 46u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 46u)));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[25]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[24], c.f[1]);
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[25] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    c.budget -= 15;
L_002EDD50:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EDD00u | kUnwind; return; } goto L_002EDD00; } }
L_002EDD60:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002EDD78; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002EDD94; } }
L_002EDD78:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002EDD94:
    c.f[2] = fp::ee::sub(c.fcr31, c.f[0], c.f[25]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 208u), c.f[0]);  if (t) { goto L_002EDE98; } }
L_002EDDB8:
    set32(c.r[20], c.r[29].w[0] + 224u);
    c.f[25] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDDC8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x002EDDC8u) [[unlikely]] return; }
L_002EDDC8:
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[3].w[0] + 224u);
    c.r[1].d[0] = c.r[2].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EDE50; } }
    c.f[0] = c.f[25];
    set32(c.r[4], 0u + 124u);
    set32(c.r[5], 0u - 90u);
    c.budget -= 4;
L_002EDDF0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002EDF30; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002EDE40; } }
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 46u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 46u)));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[25]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[24], c.f[1]);
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[25] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    c.budget -= 15;
L_002EDE40:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EDDF0u | kUnwind; return; } goto L_002EDDF0; } }
L_002EDE50:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002EDE68; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002EDE84; } }
L_002EDE68:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002EDE84:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[25]);
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.budget -= 5;
L_002EDE98:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    set32(c.r[7], c.r[29].w[0] + 896u);
    c.f[12] = c.f[24];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDEB4u); c.f[13] = c.f[23];  if (depth < kMaxDepth) unit_003B(c, 122u, depth + 1u); else { c.pc = 0x002EE370u; return; } if (c.pc != 0x002EDEB4u) [[unlikely]] return; }
L_002EDEB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EDF58; } }
    set32(c.r[6], ld32((c.r[30].w[0])));
    set32(c.r[2], c.r[29].w[0] + 900u);
    set32(c.r[4], ld32((c.r[22].w[0])));
    set32(c.r[5], ld32((c.r[23].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 896u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[22].w[0]), c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] + 1u);
    st32((c.r[23].w[0]), c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[4].w[0] + 500u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EDC40u | kUnwind; return; } goto L_002EDC40; } }
L_002EDF08:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EDD50u | kUnwind; return; } goto L_002EDD50; } }
    c.r[1].d[0] = c.r[3].sd[0] < 79ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EDD50u | kUnwind; return; } goto L_002EDD50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[25] = fp::ee::add(c.fcr31, c.f[25], c.f[24]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EDD50u | kUnwind; return; } goto L_002EDD50; } }
L_002EDF30:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EDE40u | kUnwind; return; } goto L_002EDE40; } }
    c.r[1].d[0] = c.r[3].sd[0] < 79ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EDE40u | kUnwind; return; } goto L_002EDE40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[25] = fp::ee::add(c.fcr31, c.f[25], c.f[24]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EDE40u | kUnwind; return; } goto L_002EDE40; } }
L_002EDF58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EDF68; } }
L_002EDF60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002EE258; } }
L_002EDF68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[4], c.r[29].w[0] + 500u);
    set32(c.r[5], c.r[5].w[0] - 7408u);
    set32(c.r[6], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDF80u); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x002EDF80u) [[unlikely]] return; }
L_002EDF80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EDF60u | kUnwind; return; } goto L_002EDF60; } }
L_002EDF88:
    set32(c.r[5], ld32((c.r[19].w[0] + 564u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 404u);
    c.budget -= 3;
L_002EDF94:
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(72ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EDFA8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002EDFA8:
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 1156u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_002EE058; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(72ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EDF94u | kUnwind; return; } goto L_002EDF94; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_002EDFD0:
    st32((c.r[29].w[0] + 484u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 484u);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002EE070; } }
L_002EDFE8:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EDFEC:
    set32(c.r[5], c.r[19].w[0] + 572u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_002EDFF4:
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002EE010; } }
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 572u), c.r[6].w[0]);  if (t) { goto L_002EE020; } }
L_002EE010:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(72ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EDFF4u | kUnwind; return; } goto L_002EDFF4; } }
L_002EE020:
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[3].w[0] + 576u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 572u)));  if (t) { goto L_002EE238; } }
    set32(c.r[4], c.r[2].w[0] + 2036u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE048u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 15u, depth + 1u); else { c.pc = 0x0031C390u; return; } if (c.pc != 0x002EE048u) [[unlikely]] return; }
L_002EE048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE238; } }
L_002EE050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EE258; } }
L_002EE058:
    st32((c.r[19].w[0] + 564u), c.r[5].w[0]);
    set32(c.r[3], c.r[5].w[0] - 1u);
    set32(c.r[2], ld32((c.r[19].w[0] + 568u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 568u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EDFD0u | kUnwind; return; } goto L_002EDFD0; } }
L_002EE070:
    set32(c.r[3], 0u + 404u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 480u));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[29].w[0] + 500u);
    set32(c.r[9], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[5], c.r[7].w[0] + 12u);
    st8((c.r[9].w[0] + 1148u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[9].w[0] + 1148u);
    set32(c.r[8], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] + 20u);
    set32(c.r[6], c.r[2].w[0] + 12u);
    set32(c.r[10], c.r[3].w[0] + 404u);
    c.r[1].d[0] = c.r[6].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    st32((c.r[9].w[0] + 1152u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 488u)));
    st32((c.r[9].w[0] + 1156u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 492u)));
    st32((c.r[9].w[0] + 1160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 496u)));
    st32((c.r[9].w[0] + 1164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0])));
    st32((c.r[9].w[0] + 1168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[9].w[0] + 1172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 27;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[9].w[0] + 1176u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EDFE8u | kUnwind; return; } goto L_002EDFE8; } }
    set32(c.r[9], c.r[3].w[0] + 32u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x2AAA0000u);
    set32(c.r[8], c.r[10].w[0] - c.r[9].w[0]);
    c.r[7].d[0] = c.r[7].d[0] | 43691ull;
    set32(c.r[8], c.r[8].w[0] + 11u);
    set32(c.r[2], c.r[3].w[0] + 308u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[8].w[0]);
    set32(c.r[8], c.r[8].w[0] >> 31);
    c.r[7].d[0] = c.hi.d[0];
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 1));
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[1].d[0] = c.r[7].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002EE1F8; } }
    c.r[1].d[0] = c.r[10].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002EE1F8; } }
L_002EE128:
    set32(c.r[7], ld32((c.r[5].w[0])));
    st32((c.r[6].w[0]), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[6].w[0] + 4u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[6].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[6].w[0] + 12u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[6].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 20u)));
    st32((c.r[6].w[0] + 20u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 24u)));
    st32((c.r[6].w[0] + 24u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 28u)));
    st32((c.r[6].w[0] + 28u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 32u)));
    st32((c.r[6].w[0] + 32u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 36u)));
    st32((c.r[6].w[0] + 36u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 40u)));
    st32((c.r[6].w[0] + 40u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 44u)));
    st32((c.r[6].w[0] + 44u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 48u)));
    st32((c.r[6].w[0] + 48u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 52u)));
    st32((c.r[6].w[0] + 52u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 56u)));
    st32((c.r[6].w[0] + 56u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 60u)));
    st32((c.r[6].w[0] + 60u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 64u)));
    st32((c.r[6].w[0] + 64u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 68u)));
    st32((c.r[6].w[0] + 68u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 72u)));
    st32((c.r[6].w[0] + 72u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 76u)));
    st32((c.r[6].w[0] + 76u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 80u)));
    st32((c.r[6].w[0] + 80u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 84u)));
    st32((c.r[6].w[0] + 84u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 88u)));
    st32((c.r[6].w[0] + 88u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 92u)));
    st32((c.r[6].w[0] + 92u), c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] + 96u);
    c.r[7].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 52;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EE128u | kUnwind; return; } goto L_002EE128; } }
L_002EE1F8:
    set32(c.r[3], c.r[3].w[0] + 404u);
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EDFE8u | kUnwind; return; } goto L_002EDFE8; } }
L_002EE208:
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[6].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 12u);
    c.r[2].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EE208u | kUnwind; return; } goto L_002EE208; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EDFECu | kUnwind; return; } goto L_002EDFEC; } }
L_002EE238:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[4], c.r[29].w[0] + 500u);
    set32(c.r[5], c.r[5].w[0] - 7408u);
    set32(c.r[6], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE250u); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x002EE250u) [[unlikely]] return; }
L_002EE250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EE050u | kUnwind; return; } goto L_002EE050; } }
L_002EE258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 912u);  c.pc = t; return; }
L_002EE2A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002EE2EC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[5], c.r[5].w[0] - 7408u);
    set32(c.r[6], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE2D4u); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x002EE2D4u) [[unlikely]] return; }
L_002EE2D4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002EE2EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE2ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002EE2ECu) [[unlikely]] return; }
L_002EE2EC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EE310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002EE340; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002EE340; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE340u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002EE340u) [[unlikely]] return; }
L_002EE340:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EE360:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_002EE370:
    set32(c.r[29], c.r[29].w[0] - 272u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[24] = ld32((c.r[6].w[0]));
    set32(c.r[21], ld32((c.r[4].w[0] + 30244u)));
    c.f[27] = c.f[12];
    set32(c.r[18], ld32((c.r[4].w[0] + 30248u)));
    c.f[0] = c.f[27];
    c.f[22] = ld32((c.r[6].w[0] + 4u));
    c.f[23] = ld32((c.r[6].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 34;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = c.f[13];  if (t) { goto L_002EE408; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_002EE424; } }
L_002EE408:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 7;
L_002EE424:
    set32(c.r[3], c.r[18].w[0] << 3);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 30236u)));
    c.f[26] = fp::ee::mul(c.fcr31, c.f[0], c.f[27]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 396u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE450u); set32(c.r[22], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x002EE450u) [[unlikely]] return; }
L_002EE450:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    st32((c.r[17].w[0] + 4u), c.r[21].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[18].w[0]);  if (t) { goto L_002EE4A0; } }
    set32(c.r[3], 0u - 90u);
    set32(c.r[4], 0u + 124u);
    c.budget -= 2;
L_002EE470:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002EE850; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002EE490; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_002EE490:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EE470u | kUnwind; return; } goto L_002EE470; } }
L_002EE4A0:
    set32(c.r[5], ld32((c.r[20].w[0] + 30248u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 30244u)));
    set32(c.r[3], 0u + 900u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EE860; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EEDD8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    set32(c.r[18], c.r[29].w[0] + 269u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[17], c.r[29].w[0] + 271u);  if (t) { goto L_002EE500; } }
    c.f[0] = fp::cvt_w_s(c.f[20]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_002EE51C; } }
L_002EE500:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 7;
L_002EE51C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[27]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[23].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_002EE544; } }
    c.f[0] = fp::cvt_w_s(c.f[27]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_002EE560; } }
L_002EE544:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[27], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 7;
L_002EE560:
    set32(c.r[3], c.r[16].w[0] << 16);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[16].d[0] | c.r[3].d[0];
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    set32(c.r[3], c.r[4].w[0] << 16);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[3]);
    c.budget -= 6;
L_002EE578:
    set32(c.r[4], ld32((c.r[20].w[0] + 30248u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 30236u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + 328u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    set32(c.r[3], c.r[4].w[0] + 260u);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[21], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_002EEDC8; } }
    c.f[0] = 0u;
    c.f[20] = fp::ee::add(c.fcr31, c.f[22], c.f[0]);
    c.f[21] = fp::ee::add(c.fcr31, c.f[23], c.f[0]);
    c.budget -= 5;
L_002EE5C8:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], 0u + 124u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002EE868; } }
    set32(c.r[2], 0u - 90u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002EE880; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    set32(c.r[3], 0u + 78u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002EE7D8; } }
    set32(c.r[3], 0u + 77u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002EE7D8; } }
    set32(c.r[3], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002EE7D8; } }
    set32(c.r[3], 0u + 75u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002EE7D8; } }
    set32(c.r[3], 0u + 74u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002EE7D8; } }
    set32(c.r[3], 0u + 73u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002EE7D8; } }
    set32(c.r[3], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002EE7D8; } }
    set32(c.r[3], 0u + 71u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002EE7D8; } }
    set32(c.r[3], 0u + 70u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002EE7D8; } }
    set32(c.r[3], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002EE7D8; } }
    set32(c.r[3], 0u + 68u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002EE7D8; } }
    set32(c.r[3], 0u + 67u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002EE7D8; } }
    set32(c.r[3], 0u + 66u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002EE7D8; } }
    set32(c.r[3], 0u + 65u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002EE7D8; } }
    set32(c.r[3], 0u + 54u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002EE7B8; } }
    set32(c.r[3], 0u + 53u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002EE798; } }
    set32(c.r[3], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002EE778; } }
    set32(c.r[3], 0u + 51u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002EE758; } }
    set32(c.r[3], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002EE738; } }
    set32(c.r[3], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002EE718; } }
    set32(c.r[3], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002EE6F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE830; } }
L_002EE6F0:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 39u));
    st8((c.r[20].w[0] + 35u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 40u));
    st8((c.r[20].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 41u));
    st8((c.r[20].w[0] + 37u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 42u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 38u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002EE830; } }
    c.budget -= 1;
L_002EE718:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 42u));
    set32(c.r[2], 0u + 128u);
    st8((c.r[20].w[0] + 35u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0] + 37u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EE830; } }
    c.budget -= 1;
L_002EE738:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 42u));
    set32(c.r[2], 0u + 128u);
    st8((c.r[20].w[0] + 35u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0] + 36u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 37u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EE830; } }
    c.budget -= 1;
L_002EE758:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 42u));
    set32(c.r[2], 0u + 128u);
    st8((c.r[20].w[0] + 35u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0] + 37u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EE830; } }
    c.budget -= 1;
L_002EE778:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 42u));
    set32(c.r[2], 0u + 128u);
    st8((c.r[20].w[0] + 35u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0] + 37u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EE830; } }
    c.budget -= 1;
L_002EE798:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 42u));
    set32(c.r[2], 0u + 128u);
    st8((c.r[20].w[0] + 35u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0] + 37u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EE830; } }
    c.budget -= 1;
L_002EE7B8:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 42u));
    set32(c.r[2], 0u + 128u);
    st8((c.r[20].w[0] + 35u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 36u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 37u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EE830; } }
    c.budget -= 1;
L_002EE7D8:
    set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EE828; } }
    set32(c.r[2], c.r[2].w[0] - 65u);
    set32(c.r[4], c.r[3].w[0] + 2036u);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[27], c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 244u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[24], c.f[0]);
    st32((c.r[2].w[0]), c.f[20]);
    set32(c.r[2], c.r[29].w[0] + 248u);
    st32((c.r[29].w[0] + 240u), c.f[0]);
    st32((c.r[2].w[0]), c.f[21]);
    c.r[7].d[0] = ld8((c.r[20].w[0] + 42u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE828u); c.f[12] = c.f[27];  if (depth < kMaxDepth) unit_0047(c, 18u, depth + 1u); else { c.pc = 0x0031C3F0u; return; } if (c.pc != 0x002EE828u) [[unlikely]] return; }
L_002EE828:
    c.f[24] = fp::ee::add(c.fcr31, c.f[24], c.f[27]);
    c.budget -= 2;
L_002EE830:
    set32(c.r[19], c.r[19].w[0] + 2u);
    c.budget -= 2;
L_002EE838:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EE5C8u | kUnwind; return; } goto L_002EE5C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EEDC8; } }
    c.budget -= 1;
L_002EE850:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EE490u | kUnwind; return; } goto L_002EE490; } }
L_002EE860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EEDDC; } }
L_002EE868:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 44u));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] ^ 32768ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EE838u | kUnwind; return; } goto L_002EE838; } }
    c.budget -= 1;
L_002EE880:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[30], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 46u)));
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] + 46u)));
    set32(c.r[4], c.r[29].w[0] + 268u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[27], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE8CCu); c.f[25] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0041(c, 38u, depth + 1u); else { c.pc = 0x00304780u; return; } if (c.pc != 0x002EE8CCu) [[unlikely]] return; }
L_002EE8CC:
    set32(c.r[4], ld32((c.r[20].w[0] + 30244u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = ld8((c.r[20].w[0] + 35u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[25]);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[24], c.f[0]);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 36u));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 37u));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 38u));
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] + 47u)));
    c.f[1] = ld32((c.r[28].w[0] - 29636u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 46u)));
    c.f[3] = c.r[5].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[27]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[3], c.f[2]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[22], c.f[2]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[26]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 31;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[2] = fp::ee::add(c.fcr31, c.f[4], c.f[26]);  if (t) { goto L_002EEB60; } }
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[27], c.f[1]);
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EE968; } }
    c.f[5] = c.f[1];
    c.budget -= 1;
L_002EE968:
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002EE980; } }
    c.f[1] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_002EE99C; } }
L_002EE980:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[1] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_002EE99C:
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002EE9B4; } }
    c.f[1] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_002EE9D0; } }
L_002EE9B4:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_002EE9D0:
    c.f[3] = fp::ee::div(c.fcr31, c.f[5], c.f[27]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[2] = c.r[5].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[4], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EEA0C; } }
    c.f[1] = fp::cvt_w_s(c.f[2]);
    set32(c.r[8], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[8].d[0] & 255ull;  if (t) { goto L_002EEA28; } }
L_002EEA0C:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[1]);
    c.r[8].d[0] = c.r[8].d[0] | c.r[3].d[0];
    c.r[8].d[0] = c.r[8].d[0] & 255ull;
    c.budget -= 7;
L_002EEA28:
    c.r[7].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[5], c.r[21].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[6], c.r[22].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[4].w[0];
    c.f[4] = c.r[3].w[0];
    set32(c.r[4], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[3] = ld32((c.r[28].w[0] - 29636u));
    set32(c.r[2], c.r[3].w[0] + 12u);
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[5]));
    st32((c.r[3].w[0]), c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[5]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[21]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[23].w[0]));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 268u));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[29].w[0] + 270u);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 12u));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[4]);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.budget -= 37;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0] + 12u), c.r[4].w[0]);  if (t) { goto L_002EEACC; } }
    c.f[0] = fp::cvt_w_s(c.f[5]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_002EEAE8; } }
L_002EEACC:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[5], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 7;
L_002EEAE8:
    c.r[6].d[0] = c.r[4].d[0] & 65535ull;
    c.r[5].d[0] = ld16((c.r[20].w[0] + 44u));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 12;
L_002EEB18:
    set32(c.r[2], ld32((c.r[20].w[0] + 30244u)));
    c.f[24] = fp::ee::add(c.fcr31, c.f[24], c.f[25]);
    set32(c.r[4], c.r[20].w[0] + 30244u);
    set32(c.r[3], c.r[20].w[0] + 30248u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[20].w[0] + 30244u), c.r[2].w[0]);  if (t) { goto L_002EED98; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002EEB40:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EEDC8; } }
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EE838u | kUnwind; return; } goto L_002EE838; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EEDDC; } }
L_002EEB60:
    c.f[1] = ld32((c.r[28].w[0] - 32240u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EED40; } }
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[27], c.f[1]);
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EEB90; } }
    c.f[5] = c.f[1];
    c.budget -= 1;
L_002EEB90:
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002EEBA8; } }
    c.f[1] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_002EEBC4; } }
L_002EEBA8:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[1] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_002EEBC4:
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002EEBDC; } }
    c.f[1] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_002EEBF8; } }
L_002EEBDC:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_002EEBF8:
    c.f[3] = fp::ee::div(c.fcr31, c.f[5], c.f[27]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[2] = c.r[5].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[4], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EEC34; } }
    c.f[1] = fp::cvt_w_s(c.f[2]);
    set32(c.r[8], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[8].d[0] & 255ull;  if (t) { goto L_002EEC50; } }
L_002EEC34:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[1]);
    c.r[8].d[0] = c.r[8].d[0] | c.r[3].d[0];
    c.r[8].d[0] = c.r[8].d[0] & 255ull;
    c.budget -= 7;
L_002EEC50:
    c.r[7].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[5], c.r[21].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[6], c.r[22].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[4].w[0];
    c.f[4] = c.r[3].w[0];
    set32(c.r[4], c.r[7].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[3] = ld32((c.r[28].w[0] - 32240u));
    set32(c.r[2], c.r[3].w[0] + 12u);
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[5]));
    st32((c.r[3].w[0]), c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[4], c.f[5]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[21]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[23].w[0]));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 268u));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[29].w[0] + 270u);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 12u));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[4]);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.budget -= 37;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0] + 12u), c.r[4].w[0]);  if (t) { goto L_002EECF4; } }
    c.f[0] = fp::cvt_w_s(c.f[5]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_002EED10; } }
L_002EECF4:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[5], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 7;
L_002EED10:
    c.r[6].d[0] = c.r[4].d[0] & 65535ull;
    c.r[5].d[0] = ld16((c.r[20].w[0] + 44u));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EEB18u | kUnwind; return; } goto L_002EEB18; } }
L_002EED40:
    set32(c.r[3], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[22].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[16].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[4]);
    st32((c.r[4].w[0] + 8u), c.f[21]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[23].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 268u));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 270u);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 44u));
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EEB18u | kUnwind; return; } goto L_002EEB18; } }
L_002EED98:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(57ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EEDC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EEB40u | kUnwind; return; } goto L_002EEB40; } }
    c.budget -= 1;
L_002EEDC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EEB40u | kUnwind; return; } goto L_002EEB40; } }
L_002EEDC8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EE578u | kUnwind; return; } goto L_002EE578; } }
    c.budget -= 1;
L_002EEDD8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002EEDDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
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
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_002EEE30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    st32((c.r[28].w[0] - 29636u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 32240u), c.r[3].w[0]);  c.pc = t; return; }
L_002EEE40:
    st32((c.r[28].w[0] - 29636u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 32240u), c.f[13]);  c.pc = t; return; }
L_002EEE50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_002EEE68:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEE74u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 138u, depth + 1u); else { c.pc = 0x002EEEA0u; return; } if (c.pc != 0x002EEE74u) [[unlikely]] return; }
L_002EEE74:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(72ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EEE68u | kUnwind; return; } goto L_002EEE68; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EEEA0:
    set32(c.r[29], c.r[29].w[0] - 1072u);
    set32(c.r[6], 0u - 1u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002EF718; } }
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[4].w[0] + 572u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[4].w[0] + 576u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_002EF718; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EEF08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEF08u); set32(c.r[4], c.r[3].w[0] + 2036u);  if (depth < kMaxDepth) unit_0047(c, 12u, depth + 1u); else { c.pc = 0x0031C2F0u; return; } if (c.pc != 0x002EEF08u) [[unlikely]] return; }
L_002EEF08:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[3], 0u + 404u);
    c.budget -= 4;
L_002EEF18:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(72ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EEFB0; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 568u)));
    c.r[1].d[0] = c.r[6].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EEFB0; } }
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[7].w[0] + c.r[16].w[0]);
    set32(c.r[9], c.r[7].w[0] + 1148u);
    set32(c.r[7], ld32((c.r[7].w[0] + 1156u)));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002EEF58; } }
    c.budget -= 1;
L_002EEF50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EEF18u | kUnwind; return; } goto L_002EEF18; } }
L_002EEF58:
    set32(c.r[11], ld32((c.r[9].w[0] + 20u)));
    set32(c.r[8], c.r[7].w[0] - 1u);
    set32(c.r[10], ld32((c.r[9].w[0] + 24u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[9].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[9], ld32((c.r[7].w[0] + 20u)));
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[4].w[0]), c.r[10].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0] + 28u)));
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EEF50u | kUnwind; return; } goto L_002EEF50; } }
    c.budget -= 1;
L_002EEFB0:
    set32(c.r[6], ld32((c.r[16].w[0] + 568u)));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[6].w[0] - 1u);
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002EF000; } }
    set32(c.r[7], c.r[29].w[0] + 208u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002EEFD0:
    set32(c.r[5], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.r[1].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002EF070; } }
    c.budget -= 1;
L_002EEFE8:
    set32(c.r[6], ld32((c.r[16].w[0] + 568u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[4], c.r[6].w[0] - 1u);
    c.r[4].d[0] = c.r[8].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EEFD0u | kUnwind; return; } goto L_002EEFD0; } }
L_002EF000:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EEFB0u | kUnwind; return; } goto L_002EEFB0; } }
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[29].w[0] + 208u);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], 0u + 404u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 1168u)));
    set32(c.r[30], c.r[3].w[0] + 1148u);
    set32(c.r[4], ld32((c.r[3].w[0] + 1172u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1160u)));
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.budget -= 15;
L_002EF044:
    set32(c.r[4], ld32((c.r[7].w[0])));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002EF248; } }
    c.r[1].d[0] = c.r[20].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EF248; } }
    set32(c.r[7], c.r[7].w[0] + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF044u | kUnwind; return; } goto L_002EF044; } }
    c.budget -= 1;
L_002EF070:
    st32((c.r[7].w[0]), c.r[5].w[0]);
    st32((c.r[7].w[0] + 12u), c.r[4].w[0]);
    c.r[9].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[7].w[0] + 20u)));
    st32((c.r[7].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 20u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EEFE8u | kUnwind; return; } goto L_002EEFE8; } }
L_002EF090:
    set32(c.r[3], c.r[20].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[4], 0u + 404u);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[29].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 216u)));
    set32(c.r[9], ld32((c.r[6].w[0] + 208u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1160u)));
    c.r[1].d[0] = 0ull < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002EF1F8; } }
    set32(c.r[8], 0u - 1u);
    c.budget -= 1;
L_002EF0C8:
    set32(c.r[6], ld32((c.r[16].w[0] + 30236u)));
    set32(c.r[4], c.r[9].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[4].w[0] >> 4);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[7], c.r[5].w[0] << 3);
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[5], c.r[4].w[0] << 4);
    c.r[4].d[0] = c.r[3].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld16((c.r[6].w[0] + 6u));
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[5].w[0] + 12u), c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF0C8u | kUnwind; return; } goto L_002EF0C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EF1F8; } }
L_002EF110:
    c.r[1].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002EF498; } }
    set32(c.r[25], 0u + 404u);
    c.budget -= 1;
L_002EF124:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002EF150; } }
    set32(c.r[3], c.r[20].w[0] << 1);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0] + 208u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_002EF168; } }
    c.budget -= 1;
L_002EF150:
    set32(c.r[3], c.r[20].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0] + 212u)));
    c.budget -= 6;
L_002EF168:
    set32(c.r[3], c.r[20].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[15], c.r[3].w[0] + 208u);
    set32(c.r[3], ld32((c.r[15].w[0] + 8u)));
    set32(c.r[14], ld32((c.r[15].w[0])));
    mmi::mult(c, 0, c.r[3].w[0], c.r[25].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[13], ld32((c.r[6].w[0] + 1160u)));
    set32(c.r[4], c.r[6].w[0] + 1148u);
    set32(c.r[6], ld32((c.r[6].w[0] + 1156u)));
    c.r[1].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[14].w[0] - c.r[18].w[0]);  if (t) { goto L_002EF260; } }
L_002EF1A8:
    set32(c.r[6], c.r[5].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[9], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[8], ld32((c.r[9].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[9].w[0] + 24u)));
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] - c.r[3].w[0]);
    set32(c.r[8], c.r[6].w[0] >> 4);
    c.r[6].d[0] = c.r[6].d[0] & 15ull;
    st32((c.r[9].w[0] + 20u), c.r[8].w[0]);
    st32((c.r[9].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.r[6].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF1A8u | kUnwind; return; } goto L_002EF1A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ull < c.r[13].d[0] ? 1ull : 0ull;  if (t) { goto L_002EF264; } }
L_002EF1F8:
    set32(c.r[5], ld32((c.r[16].w[0] + 30248u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 30244u)));
    set32(c.r[4], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[5], c.r[3].w[0] >> 4);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    st32((c.r[16].w[0] + 30248u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 30244u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[30].w[0] + 12u), 0u);
    st32((c.r[30].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 568u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 568u), c.r[3].w[0]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_002EF71C; } }
L_002EF248:
    set32(c.r[3], ld32((c.r[16].w[0] + 568u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF110u | kUnwind; return; } goto L_002EF110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF090u | kUnwind; return; } goto L_002EF090; } }
L_002EF260:
    c.r[1].d[0] = 0ull < c.r[13].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002EF264:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002EF478; } }
    c.budget -= 1;
L_002EF270:
    set32(c.r[4], ld32((c.r[16].w[0] + 30236u)));
    set32(c.r[5], c.r[14].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[5].w[0] >> 4);
    c.r[9].d[0] = c.r[5].d[0] & 15ull;
    set32(c.r[5], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[12], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] >> 4);
    c.r[10].d[0] = c.r[5].d[0] & 15ull;
    set32(c.r[11], c.r[3].w[0] << 3);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[12], c.r[4].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[4].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = ld16((c.r[12].w[0] + 6u));
    set32(c.r[8], c.r[9].w[0] << 4);
    c.r[22].d[0] = ld16((c.r[11].w[0] + 6u));
    set32(c.r[6], c.r[10].w[0] << 4);
    set32(c.r[23], ld32((c.r[12].w[0])));
    set32(c.r[5], c.r[9].w[0] << 2);
    set32(c.r[4], ld32((c.r[11].w[0])));
    set32(c.r[3], c.r[10].w[0] << 2);
    c.r[21].d[0] = c.r[17].d[0] < c.r[13].d[0] ? 1ull : 0ull;
    set32(c.r[24], c.r[24].w[0] << 4);
    set32(c.r[22], c.r[22].w[0] << 4);
    set32(c.r[23], c.r[23].w[0] + c.r[24].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[22].w[0]);
    set32(c.r[23], c.r[23].w[0] + c.r[8].w[0]);
    set32(c.r[22], ld32((c.r[23].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[23].d[0] = ld16((c.r[4].w[0] + 12u));
    set32(c.r[22], c.r[22].w[0] >> 16);
    c.r[22].d[0] = c.r[22].d[0] & 65535ull;
    st32((c.r[4].w[0] + 12u), c.r[23].w[0]);
    set32(c.r[23], c.r[22].w[0] << 16);
    set32(c.r[22], ld32((c.r[4].w[0] + 12u)));
    c.r[22].d[0] = c.r[22].d[0] | c.r[23].d[0];
    st32((c.r[4].w[0] + 12u), c.r[22].w[0]);
    c.r[24].d[0] = ld16((c.r[12].w[0] + 6u));
    set32(c.r[23], ld32((c.r[12].w[0])));
    c.r[22].d[0] = ld16((c.r[11].w[0] + 6u));
    set32(c.r[4], ld32((c.r[11].w[0])));
    set32(c.r[24], c.r[24].w[0] << 4);
    set32(c.r[23], c.r[23].w[0] + c.r[24].w[0]);
    set32(c.r[23], c.r[23].w[0] + c.r[8].w[0]);
    set32(c.r[22], c.r[22].w[0] << 4);
    c.r[24].d[0] = ld16((c.r[23].w[0] + 12u));
    set32(c.r[4], c.r[4].w[0] + c.r[22].w[0]);
    set32(c.r[23], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[22], ld32((c.r[23].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[22].d[0] & c.r[4].d[0];
    st32((c.r[23].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[23].w[0] + 12u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[24].d[0];
    st32((c.r[23].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[12].w[0])));
    c.r[24].d[0] = ld16((c.r[12].w[0] + 6u));
    set32(c.r[23], ld32((c.r[11].w[0])));
    c.r[22].d[0] = ld16((c.r[11].w[0] + 6u));
    set32(c.r[4], c.r[4].w[0] + 260u);
    set32(c.r[24], c.r[24].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[24].w[0]);
    set32(c.r[23], c.r[23].w[0] + 260u);
    set32(c.r[22], c.r[22].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[22], c.r[23].w[0] + c.r[22].w[0]);
    c.r[23].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[22], c.r[22].w[0] + c.r[3].w[0]);
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[23].w[0]));
    c.r[23].d[0] = ld8((c.r[4].w[0] + 1u));
    st8((c.r[22].w[0] + 1u), static_cast<std::uint8_t>(c.r[23].w[0]));
    c.r[23].d[0] = ld8((c.r[4].w[0] + 2u));
    st8((c.r[22].w[0] + 2u), static_cast<std::uint8_t>(c.r[23].w[0]));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 3u));
    st8((c.r[22].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[24].d[0] = ld16((c.r[12].w[0] + 6u));
    set32(c.r[23], ld32((c.r[12].w[0])));
    c.r[22].d[0] = ld16((c.r[11].w[0] + 6u));
    set32(c.r[4], ld32((c.r[11].w[0])));
    set32(c.r[24], c.r[24].w[0] << 4);
    set32(c.r[23], c.r[23].w[0] + c.r[24].w[0]);
    set32(c.r[23], c.r[23].w[0] + c.r[8].w[0]);
    set32(c.r[22], c.r[22].w[0] << 4);
    c.f[0] = ld32((c.r[23].w[0]));
    set32(c.r[4], c.r[4].w[0] + c.r[22].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[23].w[0] + 4u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[23].w[0] + 8u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    set32(c.r[23], ld32((c.r[12].w[0])));
    set32(c.r[6], ld32((c.r[11].w[0])));
    c.r[22].d[0] = ld16((c.r[12].w[0] + 6u));
    c.r[4].d[0] = ld16((c.r[11].w[0] + 6u));
    set32(c.r[23], c.r[23].w[0] + 396u);
    set32(c.r[6], c.r[6].w[0] + 396u);
    set32(c.r[22], c.r[23].w[0] + c.r[22].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[9], c.r[22].w[0] + c.r[9].w[0]);
    c.r[6].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[4], c.r[4].w[0] + c.r[10].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[10], ld32((c.r[12].w[0])));
    c.r[9].d[0] = ld16((c.r[12].w[0] + 6u));
    set32(c.r[4], ld32((c.r[11].w[0])));
    c.r[6].d[0] = ld16((c.r[11].w[0] + 6u));
    set32(c.r[10], c.r[10].w[0] + 328u);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[4].w[0] + 328u);
    set32(c.r[4], c.r[10].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[9].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[12].w[0] + 6u));
    set32(c.r[3], ld32((c.r[12].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 130;
    { const bool t = c.r[21].d[0] != 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF270u | kUnwind; return; } goto L_002EF270; } }
L_002EF478:
    set32(c.r[3], c.r[18].w[0] + c.r[13].w[0]);
    st32((c.r[15].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[13].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 568u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[15].w[0]), c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF124u | kUnwind; return; } goto L_002EF124; } }
L_002EF498:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    set32(c.r[5], c.r[3].w[0] - c.r[7].w[0]);
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF1F8u | kUnwind; return; } goto L_002EF1F8; } }
    c.r[1].d[0] = c.r[5].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[23], c.r[5].w[0] - 8u);  if (t) { goto L_002EF6B8; } }
    c.r[1].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002EF4DC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EF4DC; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002EF4DC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EF6B8; } }
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
L_002EF4F0:
    set32(c.r[8], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[10], c.r[6].w[0] + 1u);
    set32(c.r[9], c.r[8].w[0] >> 4);
    set32(c.r[11], ld32((c.r[16].w[0] + 30236u)));
    set32(c.r[12], c.r[9].w[0] << 3);
    c.r[8].d[0] = c.r[8].d[0] & 15ull;
    set32(c.r[9], c.r[6].w[0] + 2u);
    set32(c.r[10], c.r[10].w[0] + c.r[4].w[0]);
    set32(c.r[13], c.r[9].w[0] + c.r[4].w[0]);
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[9], c.r[10].w[0] >> 4);
    c.r[10].d[0] = c.r[10].d[0] & 15ull;
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[12], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[20], c.r[10].w[0] << 4);
    c.r[11].d[0] = ld16((c.r[12].w[0] + 6u));
    set32(c.r[10], ld32((c.r[12].w[0])));
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[12], c.r[13].w[0] >> 4);
    set32(c.r[11], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[19], c.r[12].w[0] << 3);
    set32(c.r[8], c.r[11].w[0] + c.r[8].w[0]);
    c.r[12].d[0] = c.r[13].d[0] & 15ull;
    set32(c.r[11], c.r[6].w[0] + 5u);
    set32(c.r[18], c.r[12].w[0] << 4);
    st32((c.r[8].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[12], c.r[6].w[0] + 3u);
    set32(c.r[11], c.r[11].w[0] + c.r[4].w[0]);
    set32(c.r[14], c.r[12].w[0] + c.r[4].w[0]);
    set32(c.r[12], c.r[6].w[0] + 4u);
    set32(c.r[13], c.r[14].w[0] >> 4);
    set32(c.r[12], c.r[12].w[0] + c.r[4].w[0]);
    c.r[10].d[0] = c.r[14].d[0] & 15ull;
    set32(c.r[8], c.r[12].w[0] >> 4);
    set32(c.r[25], c.r[10].w[0] << 4);
    set32(c.r[24], c.r[8].w[0] << 3);
    set32(c.r[10], c.r[6].w[0] + 6u);
    c.r[8].d[0] = c.r[12].d[0] & 15ull;
    set32(c.r[17], c.r[13].w[0] << 3);
    set32(c.r[15], c.r[8].w[0] << 4);
    set32(c.r[12], c.r[11].w[0] >> 4);
    set32(c.r[8], ld32((c.r[16].w[0] + 30236u)));
    c.r[11].d[0] = c.r[11].d[0] & 15ull;
    set32(c.r[14], c.r[12].w[0] << 3);
    set32(c.r[13], c.r[11].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] + c.r[4].w[0]);
    set32(c.r[11], c.r[10].w[0] >> 4);
    set32(c.r[12], c.r[11].w[0] << 3);
    c.r[10].d[0] = c.r[10].d[0] & 15ull;
    set32(c.r[11], c.r[10].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[22].d[0] = ld16((c.r[8].w[0] + 6u));
    set32(c.r[21], ld32((c.r[8].w[0])));
    set32(c.r[22], c.r[22].w[0] << 4);
    set32(c.r[21], c.r[21].w[0] + c.r[22].w[0]);
    set32(c.r[8], c.r[6].w[0] + 7u);
    set32(c.r[20], c.r[21].w[0] + c.r[20].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[4].w[0]);
    st32((c.r[20].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[9], c.r[8].w[0] >> 4);
    set32(c.r[20], ld32((c.r[16].w[0] + 30236u)));
    set32(c.r[10], c.r[9].w[0] << 3);
    c.r[8].d[0] = c.r[8].d[0] & 15ull;
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[9], c.r[8].w[0] << 4);
    c.r[8].d[0] = c.r[6].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    set32(c.r[19], c.r[20].w[0] + c.r[19].w[0]);
    c.r[20].d[0] = ld16((c.r[19].w[0] + 6u));
    set32(c.r[19], ld32((c.r[19].w[0])));
    set32(c.r[20], c.r[20].w[0] << 4);
    set32(c.r[19], c.r[19].w[0] + c.r[20].w[0]);
    set32(c.r[18], c.r[19].w[0] + c.r[18].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 30236u)));
    set32(c.r[17], c.r[18].w[0] + c.r[17].w[0]);
    c.r[18].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[17], ld32((c.r[17].w[0])));
    set32(c.r[18], c.r[18].w[0] << 4);
    set32(c.r[17], c.r[17].w[0] + c.r[18].w[0]);
    set32(c.r[17], c.r[17].w[0] + c.r[25].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 30236u)));
    set32(c.r[17], c.r[17].w[0] + c.r[24].w[0]);
    c.r[18].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[17], ld32((c.r[17].w[0])));
    set32(c.r[18], c.r[18].w[0] << 4);
    set32(c.r[17], c.r[17].w[0] + c.r[18].w[0]);
    set32(c.r[15], c.r[17].w[0] + c.r[15].w[0]);
    st32((c.r[15].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[15], ld32((c.r[16].w[0] + 30236u)));
    set32(c.r[14], c.r[15].w[0] + c.r[14].w[0]);
    c.r[15].d[0] = ld16((c.r[14].w[0] + 6u));
    set32(c.r[14], ld32((c.r[14].w[0])));
    set32(c.r[15], c.r[15].w[0] << 4);
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    set32(c.r[13], c.r[14].w[0] + c.r[13].w[0]);
    st32((c.r[13].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[13], ld32((c.r[16].w[0] + 30236u)));
    set32(c.r[12], c.r[13].w[0] + c.r[12].w[0]);
    c.r[13].d[0] = ld16((c.r[12].w[0] + 6u));
    set32(c.r[12], ld32((c.r[12].w[0])));
    set32(c.r[13], c.r[13].w[0] << 4);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[11], c.r[12].w[0] + c.r[11].w[0]);
    st32((c.r[11].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[11], ld32((c.r[16].w[0] + 30236u)));
    set32(c.r[10], c.r[11].w[0] + c.r[10].w[0]);
    c.r[11].d[0] = ld16((c.r[10].w[0] + 6u));
    set32(c.r[10], ld32((c.r[10].w[0])));
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    c.budget -= 114;
    { const bool t = c.r[8].d[0] != 0ull; st32((c.r[9].w[0] + 12u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF4F0u | kUnwind; return; } goto L_002EF4F0; } }
L_002EF6B8:
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF1F8u | kUnwind; return; } goto L_002EF1F8; } }
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    set32(c.r[9], 0u - 1u);
    set32(c.r[10], c.r[3].w[0] + c.r[7].w[0]);
    c.budget -= 3;
L_002EF6D0:
    set32(c.r[7], ld32((c.r[16].w[0] + 30236u)));
    set32(c.r[3], c.r[6].w[0] + c.r[10].w[0]);
    set32(c.r[4], c.r[3].w[0] >> 4);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[8], c.r[4].w[0] << 3);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    set32(c.r[4], c.r[3].w[0] << 4);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[8].d[0] = ld16((c.r[7].w[0] + 6u));
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 12u), c.r[9].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF6D0u | kUnwind; return; } goto L_002EF6D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF1F8u | kUnwind; return; } goto L_002EF1F8; } }
L_002EF718:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_002EF71C:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1072u);  c.pc = t; return; }
L_002EF750:
    set32(c.r[6], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_002EF784; } }
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 576u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_002EF784; } }
    set32(c.r[2], 0u + 404u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 1156u)));  if (t) { goto L_002EF788; } }
L_002EF784:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EF788:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EF790:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 404u);
    c.budget -= 7;
L_002EF7AC:
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 1156u), 0u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(72ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF7ACu | kUnwind; return; } goto L_002EF7AC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[4], 0u - 1u);
    st32((c.r[16].w[0] + 564u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 568u), 0u);
    set32(c.r[5], c.r[16].w[0] + 572u);
    st32((c.r[16].w[0] + 30248u), 0u);
    st32((c.r[16].w[0] + 30244u), 0u);
    st32((c.r[29].w[0] + 60u), c.r[4].w[0]);
    c.budget -= 9;
L_002EF7EC:
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(72ll) ? 1ull : 0ull;
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 28u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 36u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 44u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 60u), c.r[4].w[0]);
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF7ECu | kUnwind; return; } goto L_002EF7EC; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EF840:
    set32(c.r[2], ld32((c.r[16].w[0] + 30236u)));
    set32(c.r[3], c.r[17].w[0] << 3);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF85Cu); set32(c.r[4], c.r[4].w[0] + 3856u);  if (depth < kMaxDepth) unit_0041(c, 39u, depth + 1u); else { c.pc = 0x00304850u; return; } if (c.pc != 0x002EF85Cu) [[unlikely]] return; }
L_002EF85C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(57ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF840u | kUnwind; return; } goto L_002EF840; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EF880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002EF8B0; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002EF8B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF8B0u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002EF8B0u) [[unlikely]] return; }
L_002EF8B0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EF8D0:
    set32(c.r[29], c.r[29].w[0] - 368u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), c.r[16].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[10].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] < 0; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002EF914; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002EF930; } }
L_002EF914:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_002EF930:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002EF948; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002EF964; } }
L_002EF948:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002EF964:
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002EF99C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002EF9B8; } }
L_002EF99C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_002EF9B8:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002EF9D0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002EF9EC; } }
L_002EF9D0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002EF9EC:
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[2], 0u + 5u);
    st32((c.r[18].w[0] + 28u), c.r[4].w[0]);
    c.budget -= 22;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st8((c.r[18].w[0] + 32u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_002EFA4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002EFC7C; } }
L_002EFA4C:
    st8((c.r[18].w[0] + 33u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002EFA50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[4], c.r[18].w[0] + 572u);
    set32(c.r[5], c.r[5].w[0] - 736u);
    set32(c.r[6], c.r[6].w[0] - 1920u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFA70u); set32(c.r[8], 0u + 72u);  if (depth < kMaxDepth) unit_0002(c, 183u, depth + 1u); else { c.pc = 0x0020B3F0u; return; } if (c.pc != 0x002EFA70u) [[unlikely]] return; }
L_002EFA70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[4], c.r[18].w[0] + 1148u);
    set32(c.r[5], c.r[5].w[0] - 832u);
    set32(c.r[6], c.r[6].w[0] - 7520u);
    set32(c.r[7], 0u + 404u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFA90u); set32(c.r[8], 0u + 72u);  if (depth < kMaxDepth) unit_0002(c, 183u, depth + 1u); else { c.pc = 0x0020B3F0u; return; } if (c.pc != 0x002EFA90u) [[unlikely]] return; }
L_002EFA90:
    st32((c.r[18].w[0] + 30236u), 0u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    st32((c.r[18].w[0] + 30240u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFAA4u); st32((c.r[18].w[0] + 560u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x002EFAA4u) [[unlikely]] return; }
L_002EFAA4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFAB0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002EFAB0u) [[unlikely]] return; }
L_002EFAB0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFABCu); set32(c.r[4], c.r[29].w[0] + 364u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002EFABCu) [[unlikely]] return; }
L_002EFABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFAC4u); set32(c.r[4], c.r[29].w[0] + 364u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002EFAC4u) [[unlikely]] return; }
L_002EFAC4:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFADCu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EFADCu) [[unlikely]] return; }
L_002EFADC:
    set32(c.r[4], c.r[29].w[0] + 364u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFAE8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002EFAE8u) [[unlikely]] return; }
L_002EFAE8:
    set32(c.r[16], c.r[29].w[0] + 340u);
    set32(c.r[3], ld32((c.r[29].w[0] + 328u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[5].w[0] + 512u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EFB50; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[18].w[0] + 46u);
    set32(c.r[17], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFB18u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002EFB18u) [[unlikely]] return; }
L_002EFB18:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 512u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_002EFB68; } }
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[6], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[17].w[0] + c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFB48u); set32(c.r[5], c.r[2].w[0] + 46u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EFB48u) [[unlikely]] return; }
L_002EFB48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 320u);  if (t) { goto L_002EFB6C; } }
L_002EFB50:
    set32(c.r[4], c.r[18].w[0] + 46u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFB5Cu); set32(c.r[6], 0u + 512u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002EFB5Cu) [[unlikely]] return; }
L_002EFB5C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 512u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EFB68:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 1;
L_002EFB6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFB74u);  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x002EFB74u) [[unlikely]] return; }
L_002EFB74:
    set32(c.r[4], c.r[18].w[0] + 30236u);
    set32(c.r[5], 0u + 57u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFB84u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 79u, depth + 1u); else { c.pc = 0x002F0810u; return; } if (c.pc != 0x002EFB84u) [[unlikely]] return; }
L_002EFB84:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EFB88:
    set32(c.r[2], ld32((c.r[18].w[0] + 30236u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[6], ld32((c.r[18].w[0] + 560u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 3856u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFBA4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0041(c, 49u, depth + 1u); else { c.pc = 0x00304960u; return; } if (c.pc != 0x002EFBA4u) [[unlikely]] return; }
L_002EFBA4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(57ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EFB88u | kUnwind; return; } goto L_002EFB88; } }
    st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 404u);
    c.budget -= 3;
L_002EFBC0:
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 1156u), 0u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(72ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EFBC0u | kUnwind; return; } goto L_002EFBC0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 352u)));
    set32(c.r[4], 0u - 1u);
    st32((c.r[18].w[0] + 564u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 568u), 0u);
    set32(c.r[5], c.r[18].w[0] + 572u);
    st32((c.r[18].w[0] + 30248u), 0u);
    st32((c.r[18].w[0] + 30244u), 0u);
    st32((c.r[29].w[0] + 356u), c.r[4].w[0]);
    c.budget -= 9;
L_002EFC00:
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(72ll) ? 1ull : 0ull;
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 28u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 36u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 44u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 60u), c.r[4].w[0]);
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EFC00u | kUnwind; return; } goto L_002EFC00; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 46u)));
    set32(c.r[2], 0u - 51u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EFC90; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EFC90; } }
L_002EFC68:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFC74u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002EFC74u) [[unlikely]] return; }
L_002EFC74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002EFC9C; } }
L_002EFC7C:
    set32(c.r[4], c.r[18].w[0] + 33u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFC88u); set32(c.r[5], c.r[5].w[0] - 12128u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002EFC88u) [[unlikely]] return; }
L_002EFC88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EFA50u | kUnwind; return; } goto L_002EFA50; } }
L_002EFC90:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 46u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EFC68u | kUnwind; return; } goto L_002EFC68; } }
L_002EFC9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_002EFCC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 7328u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 7408u);
    set32(c.r[4], c.r[16].w[0] + 20u);
    set32(c.r[7], 0u + 12u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFCF0u); set32(c.r[8], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 183u, depth + 1u); else { c.pc = 0x0020B3F0u; return; } if (c.pc != 0x002EFCF0u) [[unlikely]] return; }
L_002EFCF0:
    st32((c.r[16].w[0] + 16u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EFD20:
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_002EFD30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_002EFD48:
    set32(c.r[2], ld32((c.r[17].w[0] + 30236u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[6], ld32((c.r[17].w[0] + 560u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 3856u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFD64u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0041(c, 49u, depth + 1u); else { c.pc = 0x00304960u; return; } if (c.pc != 0x002EFD64u) [[unlikely]] return; }
L_002EFD64:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(57ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EFD48u | kUnwind; return; } goto L_002EFD48; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EFD90:
    set32(c.r[29], c.r[29].w[0] - 1472u);
    set32(c.r[3], 0u + 5u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[28].w[0] - 32256u);
    set32(c.r[4], c.r[29].w[0] + 1456u);
    c.budget -= 16;
L_002EFDD0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EFDD0u | kUnwind; return; } goto L_002EFDD0; } }
    set32(c.r[5], c.r[28].w[0] - 32248u);
    set32(c.r[4], c.r[29].w[0] + 1448u);
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
L_002EFDF8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EFDF8u | kUnwind; return; } goto L_002EFDF8; } }
    c.r[16].d[0] = ld8((c.r[20].w[0]));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002EFE1C:
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { [[clang::musttail]] return unit_003C(c, 2u, depth); } }
L_002EFE28:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EFE1Cu | kUnwind; return; } goto L_002EFE1C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { goto L_002EFECC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFE50u); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002EFE50u) [[unlikely]] return; }
L_002EFE50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 32u, depth); } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[29].w[0] + 1184u);
    set32(c.r[4], c.r[4].w[0] - 22000u);
    c.budget -= 3;
L_002EFE64:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EFE64u | kUnwind; return; } goto L_002EFE64; } }
L_002EFE80:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 1184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFE90u); set32(c.r[5], c.r[5].w[0] - 12112u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002EFE90u) [[unlikely]] return; }
L_002EFE90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 19120u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16000u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFEB4u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002EFEB4u) [[unlikely]] return; }
L_002EFEB4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFEC4u); set32(c.r[5], c.r[5].w[0] - 12106u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002EFEC4u) [[unlikely]] return; }
L_002EFEC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 384u);  if (t) { goto L_002EFEF8; } }
L_002EFECC:
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + 16000u);
    set32(c.r[4], c.r[29].w[0] + 1184u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFEF4u); set32(c.r[5], c.r[5].w[0] - 12104u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x002EFEF4u) [[unlikely]] return; }
L_002EFEF4:
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 1;
L_002EFEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF00u); set32(c.r[5], c.r[29].w[0] + 1184u);  if (depth < kMaxDepth) unit_0042(c, 75u, depth + 1u); else { c.pc = 0x003088D0u; return; } if (c.pc != 0x002EFF00u) [[unlikely]] return; }
L_002EFF00:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF0Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 75u, depth + 1u); else { c.pc = 0x003088D0u; return; } if (c.pc != 0x002EFF0Cu) [[unlikely]] return; }
L_002EFF0C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF18u); set32(c.r[5], c.r[29].w[0] + 1456u);  if (depth < kMaxDepth) unit_0042(c, 75u, depth + 1u); else { c.pc = 0x003088D0u; return; } if (c.pc != 0x002EFF18u) [[unlikely]] return; }
L_002EFF18:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF24u); set32(c.r[5], c.r[29].w[0] + 1184u);  if (depth < kMaxDepth) unit_0042(c, 75u, depth + 1u); else { c.pc = 0x003088D0u; return; } if (c.pc != 0x002EFF24u) [[unlikely]] return; }
L_002EFF24:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF30u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 75u, depth + 1u); else { c.pc = 0x003088D0u; return; } if (c.pc != 0x002EFF30u) [[unlikely]] return; }
L_002EFF30:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF3Cu); set32(c.r[5], c.r[29].w[0] + 1448u);  if (depth < kMaxDepth) unit_0042(c, 75u, depth + 1u); else { c.pc = 0x003088D0u; return; } if (c.pc != 0x002EFF3Cu) [[unlikely]] return; }
L_002EFF3C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 39u, depth); } }
    set32(c.r[2], c.r[22].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_002EFFAC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002EFFAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF6Cu); set32(c.r[4], c.r[18].w[0] + 30236u);  if (depth < kMaxDepth) unit_0038(c, 306u, depth + 1u); else { c.pc = 0x002E19B0u; return; } if (c.pc != 0x002EFF6Cu) [[unlikely]] return; }
L_002EFF6C:
    set32(c.r[4], c.r[18].w[0] + 30236u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 35u, depth); } }
    set32(c.r[4], c.r[18].w[0] + 1148u);
    c.budget -= 1;
L_002EFF7C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 37u, depth); } }
    set32(c.r[4], c.r[18].w[0] + 572u);
    c.budget -= 1;
L_002EFF88:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EFFA4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[6], 0u + 8u);
    set32(c.r[5], c.r[5].w[0] - 1920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFFA4u); set32(c.r[7], 0u + 72u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x002EFFA4u) [[unlikely]] return; }
L_002EFFA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFFACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002EFFACu) [[unlikely]] return; }
L_002EFFAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFFBCu); set32(c.r[4], c.r[4].w[0] + 3376u);  if (depth < kMaxDepth) unit_001B(c, 91u, depth + 1u); else { c.pc = 0x0026CD90u; return; } if (c.pc != 0x002EFFBCu) [[unlikely]] return; }
L_002EFFBC:
    c.r[18].d[0] = c.r[2].d[0] << 56;
    set32(c.r[4], 0u + 30252u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFFCCu); c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002EFFCCu) [[unlikely]] return; }
L_002EFFCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EFFF8; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[6].d[0] = c.r[18].d[0] << 56;
    set32(c.r[8], 0u + 16u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[10], 0u + 256u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFFF8u); c.r[9].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 163u, depth + 1u); else { c.pc = 0x002EF8D0u; return; } if (c.pc != 0x002EFFF8u) [[unlikely]] return; }
L_002EFFF8:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    c.budget -= 2;
    [[clang::musttail]] return unit_003C(c, 1u, depth);
}

}

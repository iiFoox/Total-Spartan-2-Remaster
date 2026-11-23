#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003C[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0,
    12, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 17, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0,
    0, 22, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29,
    30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 37, 0,
    0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0,
    0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_003C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002F0000;
    case 2u: goto L_002F0028;
    case 3u: goto L_002F003C;
    case 4u: goto L_002F0050;
    case 5u: goto L_002F0070;
    case 6u: goto L_002F0080;
    case 7u: goto L_002F00A4;
    case 8u: goto L_002F00B4;
    case 9u: goto L_002F00BC;
    case 10u: goto L_002F00E8;
    case 11u: goto L_002F00F4;
    case 12u: goto L_002F0100;
    case 13u: goto L_002F010C;
    case 14u: goto L_002F0118;
    case 15u: goto L_002F0124;
    case 16u: goto L_002F0130;
    case 17u: goto L_002F0138;
    case 18u: goto L_002F0144;
    case 19u: goto L_002F014C;
    case 20u: goto L_002F0164;
    case 21u: goto L_002F0174;
    case 22u: goto L_002F0184;
    case 23u: goto L_002F0194;
    case 24u: goto L_002F019C;
    case 25u: goto L_002F01B4;
    case 26u: goto L_002F01C4;
    case 27u: goto L_002F01D4;
    case 28u: goto L_002F01E4;
    case 29u: goto L_002F01FC;
    case 30u: goto L_002F0200;
    case 31u: goto L_002F0208;
    case 32u: goto L_002F0230;
    case 33u: goto L_002F023C;
    case 34u: goto L_002F0244;
    case 35u: goto L_002F0268;
    case 36u: goto L_002F0270;
    case 37u: goto L_002F0278;
    case 38u: goto L_002F028C;
    case 39u: goto L_002F0294;
    case 40u: goto L_002F02C0;
    case 41u: goto L_002F02F8;
    case 42u: goto L_002F0314;
    case 43u: goto L_002F0360;
    case 44u: goto L_002F03C0;
    case 45u: goto L_002F03F0;
    case 46u: goto L_002F040C;
    case 47u: goto L_002F0418;
    case 48u: goto L_002F0428;
    case 49u: goto L_002F0448;
    case 50u: goto L_002F0450;
    case 51u: goto L_002F0484;
    case 52u: goto L_002F04B0;
    case 53u: goto L_002F04CC;
    case 54u: goto L_002F04D8;
    case 55u: goto L_002F04EC;
    case 56u: goto L_002F0510;
    case 57u: goto L_002F052C;
    case 58u: goto L_002F0560;
    case 59u: goto L_002F0588;
    case 60u: goto L_002F05B4;
    case 61u: goto L_002F05E0;
    case 62u: goto L_002F05F4;
    case 63u: goto L_002F0620;
    case 64u: goto L_002F0648;
    case 65u: goto L_002F0670;
    case 66u: goto L_002F0690;
    case 67u: goto L_002F069C;
    case 68u: goto L_002F06D0;
    case 69u: goto L_002F06E0;
    case 70u: goto L_002F0720;
    case 71u: goto L_002F074C;
    case 72u: goto L_002F0750;
    case 73u: goto L_002F0768;
    case 74u: goto L_002F077C;
    case 75u: goto L_002F07AC;
    case 76u: goto L_002F07D0;
    case 77u: goto L_002F07E8;
    case 78u: goto L_002F0800;
    case 79u: goto L_002F0810;
    case 80u: goto L_002F0834;
    case 81u: goto L_002F0854;
    case 82u: goto L_002F0870;
    case 83u: goto L_002F0880;
    case 84u: goto L_002F08B0;
    case 85u: goto L_002F08D0;
    case 86u: goto L_002F0C74;
    case 87u: goto L_002F0C9C;
    case 88u: goto L_002F0DA0;
    case 89u: goto L_002F0FD0;
    case 90u: goto L_002F1338;
    case 91u: goto L_002F1354;
    case 92u: goto L_002F1450;
    case 93u: goto L_002F15C0;
    case 94u: goto L_002F1958;
    case 95u: goto L_002F1988;
    case 96u: goto L_002F1A70;
    case 97u: goto L_002F1C10;
    case 98u: goto L_002F1D58;
    case 99u: goto L_002F1F00;
    case 100u: goto L_002F2270;
    case 101u: goto L_002F2338;
    case 102u: goto L_002F2510;
    case 103u: goto L_002F286C;
    case 104u: goto L_002F2930;
    case 105u: goto L_002F2A60;
    case 106u: goto L_002F2DA4;
    case 107u: goto L_002F2E60;
    case 108u: goto L_002F3040;
    case 109u: goto L_002F33B4;
    case 110u: goto L_002F33D0;
    case 111u: goto L_002F34A0;
    case 112u: goto L_002F3610;
    case 113u: goto L_002F39C8;
    case 114u: goto L_002F3A04;
    case 115u: goto L_002F3AC8;
    case 116u: goto L_002F3C40;
    case 117u: goto L_002F3CDC;
    case 118u: goto L_002F3D80;
    default: bad_entry(c, 0x002F0000u); return;
    }
L_002F0000:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002F0010; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_002F0020; } }
L_002F0010:
    set32(c.r[22], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[22].w[0] + 1u);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
L_002F0020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_002F029C; } }
L_002F0028:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_002F00C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F003Cu); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002F003Cu) [[unlikely]] return; }
L_002F003C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F01F0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[29].w[0] + 1184u);
    set32(c.r[4], c.r[4].w[0] - 22000u);
    c.budget -= 3;
L_002F0050:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0050u | kUnwind; return; } goto L_002F0050; } }
    c.budget -= 1;
L_002F0070:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 1184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0080u); set32(c.r[5], c.r[5].w[0] - 12112u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F0080u) [[unlikely]] return; }
L_002F0080:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 19120u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16000u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00A4u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F00A4u) [[unlikely]] return; }
L_002F00A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00B4u); set32(c.r[5], c.r[5].w[0] - 12106u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F00B4u) [[unlikely]] return; }
L_002F00B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F00E8; } }
L_002F00BC:
    c.budget -= 1;
L_002F00C0:
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + 16000u);
    set32(c.r[4], c.r[29].w[0] + 1184u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00E8u); set32(c.r[5], c.r[5].w[0] - 12104u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x002F00E8u) [[unlikely]] return; }
L_002F00E8:
    set32(c.r[4], c.r[29].w[0] + 928u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00F4u); set32(c.r[5], c.r[29].w[0] + 1184u);  if (depth < kMaxDepth) unit_0042(c, 75u, depth + 1u); else { c.pc = 0x003088D0u; return; } if (c.pc != 0x002F00F4u) [[unlikely]] return; }
L_002F00F4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0100u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 75u, depth + 1u); else { c.pc = 0x003088D0u; return; } if (c.pc != 0x002F0100u) [[unlikely]] return; }
L_002F0100:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F010Cu); set32(c.r[5], c.r[29].w[0] + 1456u);  if (depth < kMaxDepth) unit_0042(c, 75u, depth + 1u); else { c.pc = 0x003088D0u; return; } if (c.pc != 0x002F010Cu) [[unlikely]] return; }
L_002F010C:
    set32(c.r[4], c.r[29].w[0] + 672u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0118u); set32(c.r[5], c.r[29].w[0] + 1184u);  if (depth < kMaxDepth) unit_0042(c, 75u, depth + 1u); else { c.pc = 0x003088D0u; return; } if (c.pc != 0x002F0118u) [[unlikely]] return; }
L_002F0118:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0124u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 75u, depth + 1u); else { c.pc = 0x003088D0u; return; } if (c.pc != 0x002F0124u) [[unlikely]] return; }
L_002F0124:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0130u); set32(c.r[5], c.r[29].w[0] + 1448u);  if (depth < kMaxDepth) unit_0042(c, 75u, depth + 1u); else { c.pc = 0x003088D0u; return; } if (c.pc != 0x002F0130u) [[unlikely]] return; }
L_002F0130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0138u); set32(c.r[4], c.r[29].w[0] + 640u);  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x002F0138u) [[unlikely]] return; }
L_002F0138:
    set32(c.r[4], c.r[29].w[0] + 1468u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0144u); set32(c.r[5], c.r[29].w[0] + 928u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002F0144u) [[unlikely]] return; }
L_002F0144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F014Cu); set32(c.r[4], c.r[29].w[0] + 1468u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002F014Cu) [[unlikely]] return; }
L_002F014C:
    set32(c.r[4], c.r[29].w[0] + 640u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0164u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0164u) [[unlikely]] return; }
L_002F0164:
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 1468u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0174u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002F0174u) [[unlikely]] return; }
L_002F0174:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002F0188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0184u); set32(c.r[4], c.r[29].w[0] + 640u);  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x002F0184u) [[unlikely]] return; }
L_002F0184:
    c.budget -= 1;
L_002F0188:
    set32(c.r[4], c.r[29].w[0] + 1464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0194u); set32(c.r[5], c.r[29].w[0] + 672u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002F0194u) [[unlikely]] return; }
L_002F0194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F019Cu); set32(c.r[4], c.r[29].w[0] + 1464u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002F019Cu) [[unlikely]] return; }
L_002F019C:
    set32(c.r[4], c.r[29].w[0] + 640u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F01B4u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F01B4u) [[unlikely]] return; }
L_002F01B4:
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 1464u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F01C4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002F01C4u) [[unlikely]] return; }
L_002F01C4:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002F01D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F01D4u); set32(c.r[4], c.r[29].w[0] + 640u);  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x002F01D4u) [[unlikely]] return; }
L_002F01D4:
    c.budget -= 1;
L_002F01D8:
    set32(c.r[4], c.r[29].w[0] + 640u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F01E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002F01E4u) [[unlikely]] return; }
L_002F01E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EFE28u | kUnwind; return; } [[clang::musttail]] return unit_003B(c, 195u, depth); } }
    c.budget -= 1;
L_002F01F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F01FCu); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002F01FCu) [[unlikely]] return; }
L_002F01FC:
    set32(c.r[4], c.r[2].w[0] + 36u);
    c.budget -= 1;
L_002F0200:
    set32(c.r[5], c.r[29].w[0] + 1184u);
    c.budget -= 2;
L_002F0208:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0208u | kUnwind; return; } goto L_002F0208; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0070u | kUnwind; return; } goto L_002F0070; } }
    c.budget -= 1;
L_002F0230:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F023Cu); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002F023Cu) [[unlikely]] return; }
L_002F023C:
    set32(c.r[4], c.r[2].w[0] + 36u);
    set32(c.r[5], c.r[29].w[0] + 1184u);
    c.budget -= 2;
L_002F0244:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0244u | kUnwind; return; } goto L_002F0244; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EFE80u | kUnwind; return; } [[clang::musttail]] return unit_003B(c, 198u, depth); } }
L_002F0268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0270u);  if (depth < kMaxDepth) unit_0038(c, 306u, depth + 1u); else { c.pc = 0x002E19B0u; return; } if (c.pc != 0x002F0270u) [[unlikely]] return; }
L_002F0270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[18].w[0] + 1148u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EFF7Cu | kUnwind; return; } [[clang::musttail]] return unit_003B(c, 210u, depth); } }
L_002F0278:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[6], 0u + 404u);
    set32(c.r[5], c.r[5].w[0] - 7520u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F028Cu); set32(c.r[7], 0u + 72u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x002F028Cu) [[unlikely]] return; }
L_002F028C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[18].w[0] + 572u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EFF88u | kUnwind; return; } [[clang::musttail]] return unit_003B(c, 211u, depth); } }
L_002F0294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[20].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EFFACu | kUnwind; return; } [[clang::musttail]] return unit_003B(c, 213u, depth); } }
L_002F029C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1472u);  c.pc = t; return; }
L_002F02C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], c.r[6].w[0] << 2);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[20] = 0u;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F02F8u); c.f[21] = c.f[12];  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x002F02F8u) [[unlikely]] return; }
L_002F02F8:
    set32(c.r[6], c.r[17].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[17].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F0370; } }
    c.f[0] = c.f[20];
    set32(c.r[4], 0u + 124u);
    set32(c.r[5], 0u - 90u);
    c.budget -= 3;
L_002F0314:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002F0378; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002F0360; } }
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 46u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 46u)));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[21], c.f[1]);
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    c.budget -= 14;
L_002F0360:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0314u | kUnwind; return; } goto L_002F0314; } }
L_002F0370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[20];  if (t) { goto L_002F03A0; } }
L_002F0378:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0360u | kUnwind; return; } goto L_002F0360; } }
    c.r[1].d[0] = c.r[3].sd[0] < 79ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0360u | kUnwind; return; } goto L_002F0360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[21]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0360u | kUnwind; return; } goto L_002F0360; } }
L_002F03A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F03C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002F0470; } }
    c.r[19].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002F03F0:
    set32(c.r[18], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002F0458; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002F0450; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F040Cu); set32(c.r[4], c.r[18].w[0] + 30236u);  if (depth < kMaxDepth) unit_0038(c, 306u, depth + 1u); else { c.pc = 0x002E19B0u; return; } if (c.pc != 0x002F040Cu) [[unlikely]] return; }
L_002F040C:
    set32(c.r[4], c.r[18].w[0] + 30236u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F0508; } }
L_002F0418:
    set32(c.r[4], c.r[18].w[0] + 1148u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F0518; } }
    c.budget -= 1;
L_002F0428:
    set32(c.r[4], c.r[18].w[0] + 572u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F0448; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[6], 0u + 8u);
    set32(c.r[5], c.r[5].w[0] - 1920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0448u); set32(c.r[7], 0u + 72u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x002F0448u) [[unlikely]] return; }
L_002F0448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0450u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002F0450u) [[unlikely]] return; }
L_002F0450:
    st32((c.r[19].w[0] + 8u), 0u);
    c.budget -= 2;
L_002F0458:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F03F0u | kUnwind; return; } goto L_002F03F0; } }
    c.budget -= 1;
L_002F0470:
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002F04D0; } }
L_002F0484:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[3].w[0] + 28u);  if (t) { goto L_002F04B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F04B0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F04B0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F04B0u) [[unlikely]] return; }
L_002F04B0:
    st32((c.r[18].w[0]), 0u);
    c.budget -= 2;
L_002F04B8:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0484u | kUnwind; return; } goto L_002F0484; } }
L_002F04CC:
    c.budget -= 1;
L_002F04D0:
    st32((c.r[17].w[0] + 24u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002F04D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F04F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F04ECu);  if (depth < kMaxDepth) unit_003B(c, 156u, depth + 1u); else { c.pc = 0x002EF790u; return; } if (c.pc != 0x002F04ECu) [[unlikely]] return; }
L_002F04EC:
    c.budget -= 1;
L_002F04F0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F04D8u | kUnwind; return; } goto L_002F04D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0538; } }
L_002F0508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0510u);  if (depth < kMaxDepth) unit_0038(c, 306u, depth + 1u); else { c.pc = 0x002E19B0u; return; } if (c.pc != 0x002F0510u) [[unlikely]] return; }
L_002F0510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0418u | kUnwind; return; } goto L_002F0418; } }
L_002F0518:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[5], c.r[5].w[0] - 7520u);
    set32(c.r[6], 0u + 404u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F052Cu); set32(c.r[7], 0u + 72u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x002F052Cu) [[unlikely]] return; }
L_002F052C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0428u | kUnwind; return; } goto L_002F0428; } }
    c.budget -= 1;
L_002F0538:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F0560:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002F05D8; } }
L_002F0588:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[3].w[0] + 28u);  if (t) { goto L_002F05C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F05B8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F05B4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F05B4u) [[unlikely]] return; }
L_002F05B4:
    c.budget -= 1;
L_002F05B8:
    st32((c.r[18].w[0]), 0u);
    c.budget -= 2;
L_002F05C0:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0588u | kUnwind; return; } goto L_002F0588; } }
    c.budget -= 1;
L_002F05D8:
    st32((c.r[17].w[0] + 24u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002F05E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F05F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F05F4u);  if (depth < kMaxDepth) unit_003B(c, 156u, depth + 1u); else { c.pc = 0x002EF790u; return; } if (c.pc != 0x002F05F4u) [[unlikely]] return; }
L_002F05F4:
    c.budget -= 1;
L_002F05F8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F05E0u | kUnwind; return; } goto L_002F05E0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F0620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0648u); set32(c.r[16], c.r[2].w[0] + 28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0648u) [[unlikely]] return; }
L_002F0648:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F0670:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_002F0690:
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
L_002F069C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[6].w[0] + 8u), 0u);
    c.r[3].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F069Cu | kUnwind; return; } goto L_002F069C; } }
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_002F06D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F0700; } }
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_002F06E0:
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F06E0u | kUnwind; return; } goto L_002F06E0; } }
    c.budget -= 1;
L_002F0700:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  c.pc = t; return; }
L_002F0720:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] + 3856u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F074Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0041(c, 46u, depth + 1u); else { c.pc = 0x00304910u; return; } if (c.pc != 0x002F074Cu) [[unlikely]] return; }
L_002F074C:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F0750:
    set32(c.r[16], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F0790; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002F0768:
    set32(c.r[2], ld32((c.r[16].w[0] + 30236u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 3856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F077Cu); set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0041(c, 44u, depth + 1u); else { c.pc = 0x003048E0u; return; } if (c.pc != 0x002F077Cu) [[unlikely]] return; }
L_002F077C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(57ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0768u | kUnwind; return; } goto L_002F0768; } }
    c.budget -= 1;
L_002F0790:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0750u | kUnwind; return; } goto L_002F0750; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F07ACu); set32(c.r[4], c.r[4].w[0] + 3856u);  if (depth < kMaxDepth) unit_0041(c, 45u, depth + 1u); else { c.pc = 0x00304900u; return; } if (c.pc != 0x002F07ACu) [[unlikely]] return; }
L_002F07AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002F07D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F07F0; } }
L_002F07E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002F0808; } }
L_002F07F0:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0800u); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_003B(c, 138u, depth + 1u); else { c.pc = 0x002EEEA0u; return; } if (c.pc != 0x002F0800u) [[unlikely]] return; }
L_002F0800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F07E8u | kUnwind; return; } goto L_002F07E8; } }
L_002F0808:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F0810:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0834u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002F0834u) [[unlikely]] return; }
L_002F0834:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2160u);
    set32(c.r[6], c.r[6].w[0] + 6640u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0854u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x002F0854u) [[unlikely]] return; }
L_002F0854:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F0870:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_002F0880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F08B0; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F08B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F08B0u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002F08B0u) [[unlikely]] return; }
L_002F08B0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F08D0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 248u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 244u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st8((c.r[29].w[0] + 243u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 252u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 26;
    { const bool t = c.r[2].d[0] != 0ull; c.f[26] = c.f[12];  if (t) { goto L_002F0940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F0F80; } }
L_002F0940:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 16u);
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[26]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[2].w[0] + 32u);  if (t) { goto L_002F0A80; } }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[4] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F0994; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F0994; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F0BBC; } }
L_002F0994:
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F09C8; } }
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F09C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F0BBC; } }
L_002F09C8:
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F09FC; } }
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F09FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F0BBC; } }
L_002F09FC:
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0A28; } }
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0A28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F0BBC; } }
L_002F0A28:
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0A54; } }
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0A54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F0BBC; } }
L_002F0A54:
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0BB8; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0BB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F0BBC; } }
L_002F0A80:
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.f[4] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[26]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F0AB8; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F0AB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F0BBC; } }
L_002F0AB8:
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[26]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F0AF0; } }
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F0AF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F0BBC; } }
L_002F0AF0:
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[26]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F0B28; } }
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F0B28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F0BBC; } }
L_002F0B28:
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[26]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0B58; } }
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0B58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F0BBC; } }
L_002F0B58:
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[26]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0B88; } }
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0B88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F0BBC; } }
L_002F0B88:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[26]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0BB8; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0BB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F0BBC; } }
L_002F0BB8:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002F0BBC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F0BD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F0F80; } }
L_002F0BD0:
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[4] = ld32((c.r[21].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[3].w[0];
    c.f[3] = ld32((c.r[21].w[0] + 8u));
    c.f[21] = 0u;
    set32(c.r[3], c.r[29].w[0] + 288u);
    c.f[25] = c.f[20];
    set32(c.r[22], ld32((c.r[2].w[0] + 64u)));
    st32((c.r[29].w[0] + 288u), c.f[0]);
    st32((c.r[29].w[0] + 304u), c.f[4]);
    st32((c.r[29].w[0] + 320u), c.f[3]);
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 292u), c.f[2]);
    st32((c.r[29].w[0] + 308u), c.f[1]);
    st32((c.r[29].w[0] + 324u), c.f[0]);
    c.vu0.vf[31] = c.r[20];
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[29]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[28]);
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[19].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 8u));
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 31;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);  if (t) { goto L_002F0ED0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xB4000000u);
    set32(c.r[23], c.r[29].w[0] + 276u);
    c.f[24] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7F7F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[23] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[16].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[22] = c.r[2].w[0];
    c.budget -= 10;
L_002F0C74:
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[3], c.r[19].w[0] << 1);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[30], c.r[2].w[0] << 4);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[17], c.r[22].w[0] + c.r[30].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0C9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 115u, depth + 1u); else { c.pc = 0x0033EAD0u; return; } if (c.pc != 0x002F0C9Cu) [[unlikely]] return; }
L_002F0C9C:
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[26]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0CD8; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0D08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002F0D10; } }
L_002F0CD8:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[26]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F0D08; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F0D08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002F0D10; } }
L_002F0D08:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002F0D10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F0EB8; } }
    set32(c.r[2], c.r[22].w[0] + c.r[30].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F0EB8; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 243u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F0D60; } }
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F0EB8; } }
L_002F0D60:
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F0EB8; } }
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.f[4] = c.f[24];
    set32(c.r[7], c.r[2].w[0] + 2u);
    set32(c.r[2], c.r[19].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[1].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.f[3] = c.f[23];  if (t) { goto L_002F0E90; } }
    set32(c.r[3], c.r[29].w[0] + 272u);
    c.budget -= 1;
L_002F0DA0:
    set32(c.r[2], c.r[7].w[0] << 4);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mulabc4<0>(c.vu0, 15u, 30u, c.vu0.vf[1].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 29u, c.vu0.vf[1].w[1]);
    vu::maddbc4<1>(c.vu0, 15u, 2u, 28u, c.vu0.vf[1].w[2]);
    c.f[2] = ld32((c.r[2].w[0] + 12u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[26]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[2]);
    c.f[0] = ld32((c.r[23].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 272u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    set32(c.r[6], c.f[1]);
    set32(c.r[5], c.f[0]);
    c.r[2].d[0] = c.r[6].d[0] & c.r[16].d[0];
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F0DF8; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002F0E78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = c.f[22];  if (t) { goto L_002F0E90; } }
    c.budget -= 1;
L_002F0DF8:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 6;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_002F0E40; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0E28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = c.f[22];  if (t) { goto L_002F0E90; } }
    c.budget -= 1;
L_002F0E28:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0E78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = c.f[0];  if (t) { goto L_002F0E58; } }
    c.budget -= 1;
L_002F0E40:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F0E78; } }
    c.f[4] = c.f[0];
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_002F0E58:
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[25]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0E90; } }
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F0E78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = c.f[22];  if (t) { goto L_002F0E90; } }
L_002F0E78:
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0DA0u | kUnwind; return; } goto L_002F0DA0; } }
    c.budget -= 1;
L_002F0E90:
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[25]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0EB8; } }
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F0EB8; } }
    c.f[25] = c.f[4];
    st32((c.r[29].w[0] + 236u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 232u), c.r[20].w[0]);
    c.budget -= 4;
L_002F0EB8:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0C74u | kUnwind; return; } goto L_002F0C74; } }
    c.budget -= 1;
L_002F0ED0:
    fpu_compare(c, fp::key(c.f[25]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0F7C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 248u)));
    c.f[3] = ld32((c.r[21].w[0] + 8u));
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    c.f[5] = ld32((c.r[21].w[0] + 4u));
    c.f[1] = ld32((c.r[21].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 268u));
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[25]);
    set32(c.r[5], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    c.f[3] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[25]);
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[4] = ld32((c.r[3].w[0] + 4u));
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[25]);
    set32(c.r[3], ld32((c.r[29].w[0] + 244u)));
    st32((c.r[2].w[0] + 20u), c.f[25]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    set32(c.r[2], 0u + 1u);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    st32((c.r[3].w[0]), c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[4]);
    st32((c.r[3].w[0] + 8u), c.f[3]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    st32((c.r[3].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 244u)));
    st16((c.r[3].w[0] + 24u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] >> 16);
    st8((c.r[3].w[0] + 28u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    set32(c.r[3], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 40;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 26u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_002F0F80; } }
L_002F0F7C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F0F80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_002F0FD0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st8((c.r[29].w[0] + 223u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 24;
    { const bool t = c.r[2].d[0] != 0ull; c.f[25] = c.f[12];  if (t) { goto L_002F1038; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F1574; } }
L_002F1038:
    c.f[0] = 0u;
    set32(c.r[3], c.r[22].w[0] + 16u);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[25]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[22].w[0] + 32u);  if (t) { goto L_002F1160; } }
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[4] = ld32((c.r[30].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F107C; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F107C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F1290; } }
L_002F107C:
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = ld32((c.r[30].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F10AC; } }
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F10AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F1290; } }
L_002F10AC:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[30].w[0]));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F10DC; } }
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F10DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F1290; } }
L_002F10DC:
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1108; } }
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1108; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F1290; } }
L_002F1108:
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1134; } }
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1134; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F1290; } }
L_002F1134:
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F128C; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F128C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F1290; } }
L_002F1160:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[4] = ld32((c.r[30].w[0] + 4u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[25]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1194; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1194; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F1290; } }
L_002F1194:
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = ld32((c.r[30].w[0] + 8u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[25]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F11C8; } }
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F11C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F1290; } }
L_002F11C8:
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[30].w[0]));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[25]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F11FC; } }
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F11FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F1290; } }
L_002F11FC:
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[25]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F122C; } }
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F122C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F1290; } }
L_002F122C:
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[25]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F125C; } }
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F125C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F1290; } }
L_002F125C:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[25]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F128C; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F128C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F1290; } }
L_002F128C:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002F1290:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F12A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F1574; } }
L_002F12A4:
    c.f[5] = ld32((c.r[21].w[0]));
    set32(c.r[18], ld32((c.r[22].w[0] + 64u)));
    c.f[4] = ld32((c.r[21].w[0] + 4u));
    set32(c.r[2], c.r[29].w[0] + 240u);
    c.f[3] = ld32((c.r[21].w[0] + 8u));
    c.f[2] = ld32((c.r[30].w[0]));
    c.f[1] = ld32((c.r[30].w[0] + 4u));
    c.f[0] = ld32((c.r[30].w[0] + 8u));
    c.f[21] = 0u;
    st32((c.r[29].w[0] + 240u), c.f[5]);
    st32((c.r[29].w[0] + 256u), c.f[4]);
    st32((c.r[29].w[0] + 272u), c.f[3]);
    st32((c.r[29].w[0] + 244u), c.f[2]);
    st32((c.r[29].w[0] + 260u), c.f[1]);
    st32((c.r[29].w[0] + 276u), c.f[0]);
    c.vu0.vf[31] = c.r[4];
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[29]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[28]);
    set32(c.r[2], ld32((c.r[22].w[0] + 48u)));
    c.r[20].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 8u));
    c.r[1].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 25;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  if (t) { goto L_002F1570; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xB4000000u);
    set32(c.r[19], c.r[29].w[0] + 228u);
    c.f[24] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7F7F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[23] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[17].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[22] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 12;
L_002F1338:
    set32(c.r[2], ld32((c.r[22].w[0] + 56u)));
    set32(c.r[3], c.r[20].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[23].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[16], c.r[23].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1354u); set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_004F(c, 115u, depth + 1u); else { c.pc = 0x0033EAD0u; return; } if (c.pc != 0x002F1354u) [[unlikely]] return; }
L_002F1354:
    set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[30].w[0] + 4u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[25]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1390; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F13C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002F13C8; } }
    c.budget -= 1;
L_002F1390:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[25]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F13C0; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F13C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002F13C8; } }
L_002F13C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002F13C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1558; } }
    set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1558; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 223u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F1418; } }
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1558; } }
L_002F1418:
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F1558; } }
    set32(c.r[2], c.r[20].w[0] + 1u);
    set32(c.r[7], c.r[23].w[0] + 2u);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], ld32((c.r[22].w[0] + 56u)));
    c.f[4] = c.f[24];
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[1].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.f[3] = c.f[23];  if (t) { goto L_002F1538; } }
    set32(c.r[3], c.r[29].w[0] + 224u);
    c.budget -= 1;
L_002F1450:
    set32(c.r[2], c.r[7].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mulabc4<0>(c.vu0, 15u, 30u, c.vu0.vf[1].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 29u, c.vu0.vf[1].w[1]);
    vu::maddbc4<1>(c.vu0, 15u, 2u, 28u, c.vu0.vf[1].w[2]);
    c.f[2] = ld32((c.r[2].w[0] + 12u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[25]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[2]);
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 224u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    set32(c.r[6], c.f[1]);
    set32(c.r[5], c.f[0]);
    c.r[2].d[0] = c.r[6].d[0] & c.r[17].d[0];
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F14A8; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002F1520; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = c.f[22];  if (t) { goto L_002F1538; } }
    c.budget -= 1;
L_002F14A8:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 6;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_002F14F0; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F14D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = c.f[22];  if (t) { goto L_002F1538; } }
    c.budget -= 1;
L_002F14D8:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1520; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = c.f[0];  if (t) { goto L_002F1500; } }
    c.budget -= 1;
L_002F14F0:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1520; } }
    c.f[4] = c.f[0];
    c.budget -= 1;
L_002F1500:
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1538; } }
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1520; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = c.f[22];  if (t) { goto L_002F1538; } }
L_002F1520:
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1450u | kUnwind; return; } goto L_002F1450; } }
    c.budget -= 1;
L_002F1538:
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1558; } }
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F1574; } }
L_002F1558:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1338u | kUnwind; return; } goto L_002F1338; } }
    c.budget -= 1;
L_002F1570:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F1574:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_002F15C0:
    set32(c.r[29], c.r[29].w[0] - 384u);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 264u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 268u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 26;
    { const bool t = c.r[2].d[0] != 0ull; c.f[27] = c.f[12];  if (t) { goto L_002F1630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F1EA4; } }
L_002F1630:
    c.f[0] = 0u;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + 16u);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[27]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[2].w[0] + 32u);  if (t) { goto L_002F175C; } }
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[4] = ld32((c.r[21].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1678; } }
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F188C; } }
L_002F1678:
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = ld32((c.r[21].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F16A8; } }
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F16A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F188C; } }
L_002F16A8:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[21].w[0]));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F16D8; } }
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F16D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F188C; } }
L_002F16D8:
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1704; } }
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1704; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F188C; } }
L_002F1704:
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1730; } }
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F188C; } }
L_002F1730:
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1888; } }
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F188C; } }
L_002F175C:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[4] = ld32((c.r[21].w[0] + 4u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[27]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1790; } }
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1790; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F188C; } }
L_002F1790:
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = ld32((c.r[21].w[0] + 8u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[27]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F17C4; } }
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F17C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F188C; } }
L_002F17C4:
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[21].w[0]));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[27]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F17F8; } }
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F17F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F188C; } }
L_002F17F8:
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[27]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1828; } }
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1828; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F188C; } }
L_002F1828:
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[27]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1858; } }
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F188C; } }
L_002F1858:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[27]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1888; } }
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F188C; } }
L_002F1888:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002F188C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F18A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F1EA4; } }
L_002F18A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    c.f[5] = ld32((c.r[20].w[0]));
    c.f[4] = ld32((c.r[20].w[0] + 4u));
    st32((c.r[29].w[0] + 256u), 0u);
    c.f[3] = ld32((c.r[20].w[0] + 8u));
    set32(c.r[3], c.r[29].w[0] + 336u);
    c.f[2] = ld32((c.r[21].w[0]));
    c.f[1] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    set32(c.r[18], ld32((c.r[2].w[0] + 64u)));
    c.f[26] = 0u;
    st32((c.r[29].w[0] + 336u), c.f[5]);
    st32((c.r[29].w[0] + 352u), c.f[4]);
    st32((c.r[29].w[0] + 368u), c.f[3]);
    st32((c.r[29].w[0] + 340u), c.f[2]);
    st32((c.r[29].w[0] + 356u), c.f[1]);
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    st32((c.r[29].w[0] + 372u), c.f[0]);
    c.vu0.vf[31] = c.r[2];
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[29]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[28]);
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[22].d[0] = ld16((c.r[2].w[0]));
    c.r[17].d[0] = ld16((c.r[2].w[0] + 8u));
    c.r[1].d[0] = c.r[22].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 29;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 252u), c.r[22].w[0]);  if (t) { goto L_002F1DF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xB4000000u);
    c.r[23].d[0] = 0ull | 32768ull;
    c.f[25] = c.r[2].w[0];
    set32(c.r[30], c.r[29].w[0] + 324u);
    c.f[22] = c.f[26];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7F7F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[24] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[16].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[23] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xB7270000u);
    c.r[2].d[0] = c.r[2].d[0] | 50604ull;
    c.f[20] = c.r[2].w[0];
    c.budget -= 17;
L_002F1958:
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[3], c.r[22].w[0] << 1);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[2].w[0] << 4);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1988u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 115u, depth + 1u); else { c.pc = 0x0033EAD0u; return; } if (c.pc != 0x002F1988u) [[unlikely]] return; }
L_002F1988:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.f[2] = ld32((c.r[21].w[0] + 4u));
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[27]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F19C8; } }
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F19F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002F1A00; } }
    c.budget -= 1;
L_002F19C8:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[27]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F19F8; } }
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F19F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002F1A00; } }
L_002F19F8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002F1A00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1DE8; } }
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[23].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1DE8; } }
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F1DE8; } }
    set32(c.r[3], c.r[22].w[0] + 1u);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], ld32((c.r[29].w[0] + 268u)));
    c.f[2] = c.f[25];
    set32(c.r[2], c.r[2].w[0] + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.f[4] = c.f[24];  if (t) { goto L_002F1B58; } }
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 2;
L_002F1A70:
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mulabc4<0>(c.vu0, 15u, 30u, c.vu0.vf[1].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 29u, c.vu0.vf[1].w[1]);
    vu::maddbc4<1>(c.vu0, 15u, 2u, 28u, c.vu0.vf[1].w[2]);
    c.f[3] = ld32((c.r[3].w[0] + 12u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[27]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[2]);
    c.f[0] = ld32((c.r[30].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 320u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    set32(c.r[7], c.f[1]);
    set32(c.r[6], c.f[0]);
    c.r[3].d[0] = c.r[7].d[0] & c.r[16].d[0];
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F1AC8; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_002F1B40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = c.f[23];  if (t) { goto L_002F1B58; } }
    c.budget -= 1;
L_002F1AC8:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 6;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_002F1B10; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[22]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1AF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = c.f[23];  if (t) { goto L_002F1B58; } }
    c.budget -= 1;
L_002F1AF8:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1B40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = c.f[0];  if (t) { goto L_002F1B28; } }
    c.budget -= 1;
L_002F1B10:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1B40; } }
    c.f[2] = c.f[0];
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_002F1B28:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1B40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = c.f[23];  if (t) { goto L_002F1B58; } }
    c.budget -= 1;
L_002F1B40:
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1A70u | kUnwind; return; } goto L_002F1A70; } }
    c.budget -= 1;
L_002F1B58:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[26]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1DE8; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1DE8; } }
    c.f[5] = ld32((c.r[20].w[0] + 4u));
    set32(c.r[2], c.r[29].w[0] + 292u);
    c.f[4] = ld32((c.r[20].w[0] + 8u));
    set32(c.r[11], ld32((c.r[29].w[0] + 252u)));
    c.f[6] = ld32((c.r[20].w[0]));
    c.r[12].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[3] = ld32((c.r[21].w[0] + 8u));
    c.f[1] = ld32((c.r[21].w[0]));
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[2]);
    c.f[6] = fp::ee::mul(c.fcr31, c.f[6], c.f[2]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[2]);
    st32((c.r[2].w[0]), c.f[5]);
    set32(c.r[2], c.r[29].w[0] + 296u);
    st32((c.r[2].w[0]), c.f[4]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    set32(c.r[2], c.r[29].w[0] + 308u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[7] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    set32(c.r[2], c.r[29].w[0] + 312u);
    st32((c.r[2].w[0]), c.f[7]);
    c.r[2].d[0] = c.r[11].d[0] + 0ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0] + 288u), c.f[6]);
    c.budget -= 27;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 304u), c.f[1]);  if (t) { goto L_002F1DD0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 56u)));
    c.r[2].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[9], c.r[2].w[0] << 1);
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[10], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[7].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    set32(c.r[2], 0u + 1u);
    c.budget -= 13;
L_002F1C10:
    c.r[6].d[0] = ld16((c.r[10].w[0]));
    c.r[13].d[0] = 0ull | 65535ull;
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[4], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[14], ld32((c.r[4].w[0] + 8u)));
    c.r[13].d[0] = c.r[14].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] << 48;
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[13].d[0] == c.r[7].d[0];  if (t) { goto L_002F1DB8; } }
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[27]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1C58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002F1D00; } }
    c.budget -= 1;
L_002F1C58:
    c.f[3] = ld32((c.r[4].w[0] + 4u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[27]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1C78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002F1D00; } }
    c.budget -= 1;
L_002F1C78:
    c.f[3] = ld32((c.r[4].w[0] + 16u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[27]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1C98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002F1D00; } }
    c.budget -= 1;
L_002F1C98:
    c.f[3] = ld32((c.r[4].w[0] + 20u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[27]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1CB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002F1D00; } }
    c.budget -= 1;
L_002F1CB8:
    c.f[3] = ld32((c.r[4].w[0] + 24u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[27]);
    fpu_compare(c, fp::key(c.f[7]) < fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1CD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002F1D00; } }
    c.budget -= 1;
L_002F1CD8:
    c.f[3] = ld32((c.r[4].w[0] + 28u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[27], c.f[3]);
    fpu_compare(c, fp::key(c.f[7]) <= fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1CF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002F1D00; } }
    c.budget -= 1;
L_002F1CF8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002F1D00:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F1DB8; } }
    set32(c.r[4], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.r[4].d[0] = c.r[5].d[0] & c.r[23].d[0];
    c.r[4].d[0] = c.r[4].d[0] ^ 0ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F1DB8; } }
    c.r[4].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F1DB8; } }
    set32(c.r[4], c.r[6].w[0] + 2u);
    set32(c.r[5], c.r[8].w[0] + c.r[9].w[0]);
    c.r[6].d[0] = ld16((c.r[5].w[0] + 2u));
    c.r[1].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[12].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002F1DB0; } }
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[13], c.r[18].w[0] + c.r[5].w[0]);
    c.budget -= 3;
L_002F1D58:
    c.f[3] = ld32((c.r[13].w[0] + 12u));
    c.f[4] = ld32((c.r[13].w[0] + 4u));
    c.f[5] = ld32((c.r[13].w[0]));
    c.f[6] = ld32((c.r[13].w[0] + 8u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[27], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[1]);
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[7]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[20]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F1D8C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F1D8C:
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002F1DA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_002F1DB0; } }
L_002F1DA0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[5].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[13], c.r[13].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1D58u | kUnwind; return; } goto L_002F1D58; } }
L_002F1DB0:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { goto L_002F1DD0; } }
L_002F1DB8:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[4].d[0] = c.r[11].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    set32(c.r[10], c.r[10].w[0] + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1C10u | kUnwind; return; } goto L_002F1C10; } }
    c.budget -= 1;
L_002F1DD0:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { goto L_002F1DE8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.f[26] = c.f[2];
    st32((c.r[29].w[0] + 260u), c.r[19].w[0]);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    c.budget -= 4;
L_002F1DE8:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[2].d[0] = c.r[22].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1958u | kUnwind; return; } goto L_002F1958; } }
L_002F1DF8:
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F1EA0; } }
    c.f[3] = ld32((c.r[20].w[0] + 8u));
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    c.f[5] = ld32((c.r[20].w[0] + 4u));
    c.f[2] = ld32((c.r[21].w[0] + 8u));
    c.f[1] = ld32((c.r[20].w[0]));
    c.f[4] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 284u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[26]);
    set32(c.r[4], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    c.f[3] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[26]);
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[21].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 264u)));
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[26]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[2].w[0] + 20u), c.f[26]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0]), c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[4]);
    st32((c.r[3].w[0] + 8u), c.f[3]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    st32((c.r[3].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 264u)));
    st16((c.r[3].w[0] + 24u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] >> 16);
    st8((c.r[3].w[0] + 28u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    set32(c.r[3], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 39;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 26u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_002F1EA4; } }
L_002F1EA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F1EA4:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_002F1F00:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002F1F2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F24EC; } }
L_002F1F2C:
    c.f[0] = 0u;
    set32(c.r[3], c.r[4].w[0] + 16u);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[4].w[0] + 32u);  if (t) { goto L_002F2054; } }
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1F70; } }
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1F70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2184; } }
L_002F1F70:
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1FA0; } }
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1FA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2184; } }
L_002F1FA0:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1FD0; } }
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1FD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2184; } }
L_002F1FD0:
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1FFC; } }
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1FFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2184; } }
L_002F1FFC:
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2028; } }
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2028; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2184; } }
L_002F2028:
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2180; } }
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2180; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2184; } }
L_002F2054:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2088; } }
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2088; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2184; } }
L_002F2088:
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F20BC; } }
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F20BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2184; } }
L_002F20BC:
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F20F0; } }
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F20F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2184; } }
L_002F20F0:
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2120; } }
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2120; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2184; } }
L_002F2120:
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2150; } }
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2150; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2184; } }
L_002F2150:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2180; } }
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2180; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2184; } }
L_002F2180:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002F2184:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F2198; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F24EC; } }
L_002F2198:
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[6] = c.r[2].w[0];
    set32(c.r[11], ld32((c.r[4].w[0] + 64u)));
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
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F220C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.r[24].d[0] = ld16((c.r[2].w[0] + 10u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[25].d[0] = ld16((c.r[2].w[0] + 4u));  if (t) { goto L_002F2220; } }
L_002F220C:
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[24].d[0] = ld16((c.r[3].w[0] + 8u));
    c.r[25].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 5;
L_002F2220:
    c.r[1].d[0] = c.r[25].d[0] < c.r[24].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F2460; } }
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7F7F0000u);
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[7] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xB4000000u);
    c.f[8] = c.r[3].w[0];
    set32(c.r[9], ld32((c.r[4].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    set32(c.r[12], c.r[29].w[0] + 116u);
    c.f[5] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.f[4] = 0u;
    c.r[10].d[0] = c.r[3].d[0] | 65535ull;
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 112u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 17;
L_002F2270:
    set32(c.r[3], c.r[25].w[0] << 1);
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[15], c.r[3].w[0] << 4);
    set32(c.r[13], c.r[11].w[0] + c.r[15].w[0]);
    c.f[1] = ld32((c.r[13].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[12]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F22B0; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F22D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_002F22E0; } }
    c.budget -= 1;
L_002F22B0:
    c.f[1] = ld32((c.r[13].w[0] + 4u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[12]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F22D8; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F22D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_002F22E0; } }
L_002F22D8:
    c.r[13].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002F22E0:
    c.budget -= 2;
    { const bool t = c.r[13].d[0] != 0ull;  if (t) { goto L_002F2450; } }
    set32(c.r[13], c.r[11].w[0] + c.r[15].w[0]);
    set32(c.r[19], ld32((c.r[13].w[0] + 12u)));
    c.r[15].d[0] = c.r[19].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_002F2450; } }
    c.r[15].d[0] = c.r[19].d[0] & 8192ull;
    c.r[15].d[0] = c.r[15].d[0] ^ 0ull;
    c.r[15].d[0] = c.r[15].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[15].d[0] = c.r[15].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[15].d[0] != 0ull;  if (t) { goto L_002F2450; } }
    set32(c.r[15], c.r[3].w[0] + 2u);
    set32(c.r[3], c.r[25].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    c.r[19].d[0] = ld16((c.r[3].w[0]));
    c.f[13] = c.f[8];
    c.r[1].d[0] = c.r[15].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.f[11] = c.f[7];  if (t) { goto L_002F2428; } }
L_002F2338:
    set32(c.r[19], c.r[15].w[0] << 4);
    set32(c.r[19], c.r[11].w[0] + c.r[19].w[0]);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mulabc4<0>(c.vu0, 15u, 30u, c.vu0.vf[1].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 29u, c.vu0.vf[1].w[1]);
    vu::maddbc4<1>(c.vu0, 15u, 2u, 28u, c.vu0.vf[1].w[2]);
    c.f[10] = ld32((c.r[19].w[0] + 12u));
    c.f[10] = fp::ee::add(c.fcr31, c.f[10], c.f[12]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[2]);
    c.f[1] = ld32((c.r[12].w[0]));
    c.f[9] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[10]);
    set32(c.r[21], c.f[9]);
    set32(c.r[20], c.f[1]);
    c.r[19].d[0] = c.r[21].d[0] & c.r[10].d[0];
    c.budget -= 17;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_002F2390; } }
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_002F2410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[13] = c.f[5];  if (t) { goto L_002F2428; } }
    c.budget -= 1;
L_002F2390:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[9]);
    c.budget -= 6;
    { const bool t = c.r[21].sd[0] < 0;  if (t) { goto L_002F23D8; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F23C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[13] = c.f[5];  if (t) { goto L_002F2428; } }
    c.budget -= 1;
L_002F23C0:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[11]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[11] = c.f[1];  if (t) { goto L_002F23F0; } }
    c.budget -= 1;
L_002F23D8:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[13]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2410; } }
    c.f[13] = c.f[1];
    c.r[14].d[0] = c.r[15].d[0] + 0ull;
    c.r[16].d[0] = c.r[13].d[0] + 0ull;
    c.budget -= 3;
L_002F23F0:
    fpu_compare(c, fp::key(c.f[13]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2428; } }
    fpu_compare(c, fp::key(c.f[13]) <= fp::key(c.f[11]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[13] = c.f[5];  if (t) { goto L_002F2428; } }
L_002F2410:
    c.r[19].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[15], c.r[15].w[0] + 1u);
    c.r[19].d[0] = c.r[15].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F2338u | kUnwind; return; } goto L_002F2338; } }
    c.budget -= 1;
L_002F2428:
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2450; } }
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2450; } }
    c.f[0] = c.f[13];
    c.r[18].d[0] = c.r[14].d[0] + 0ull;
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_002F2450:
    set32(c.r[25], c.r[25].w[0] + 1u);
    c.r[3].d[0] = c.r[25].d[0] < c.r[24].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F2270u | kUnwind; return; } goto L_002F2270; } }
L_002F2460:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[6]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F24E8; } }
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
    { const bool t = 0ull == 0ull; st16((c.r[7].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002F24EC; } }
L_002F24E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F24EC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002F2510:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F2528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2A4C; } }
L_002F2528:
    c.f[0] = 0u;
    set32(c.r[3], c.r[4].w[0] + 16u);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[4].w[0] + 32u);  if (t) { goto L_002F2650; } }
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F256C; } }
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F256C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2780; } }
L_002F256C:
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F259C; } }
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F259C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2780; } }
L_002F259C:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F25CC; } }
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F25CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2780; } }
L_002F25CC:
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F25F8; } }
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F25F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2780; } }
L_002F25F8:
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2624; } }
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2624; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2780; } }
L_002F2624:
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F277C; } }
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F277C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2780; } }
L_002F2650:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2684; } }
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2684; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2780; } }
L_002F2684:
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F26B8; } }
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F26B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2780; } }
L_002F26B8:
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F26EC; } }
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F26EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2780; } }
L_002F26EC:
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F271C; } }
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F271C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2780; } }
L_002F271C:
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F274C; } }
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F274C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2780; } }
L_002F274C:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F277C; } }
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F277C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2780; } }
L_002F277C:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002F2780:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F2794; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2A4C; } }
L_002F2794:
    c.f[5] = ld32((c.r[6].w[0]));
    set32(c.r[8], ld32((c.r[4].w[0] + 64u)));
    c.f[4] = ld32((c.r[6].w[0] + 4u));
    set32(c.r[2], c.r[29].w[0] + 16u);
    c.f[3] = ld32((c.r[6].w[0] + 8u));
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 16u), c.f[5]);
    st32((c.r[29].w[0] + 32u), c.f[4]);
    st32((c.r[29].w[0] + 48u), c.f[3]);
    st32((c.r[29].w[0] + 20u), c.f[2]);
    st32((c.r[29].w[0] + 36u), c.f[1]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.vu0.vf[31] = c.r[10];
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[29]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[28]);
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F27FC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.r[10].d[0] = ld16((c.r[2].w[0] + 10u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = ld16((c.r[2].w[0] + 4u));  if (t) { goto L_002F2810; } }
L_002F27FC:
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[10].d[0] = ld16((c.r[3].w[0] + 8u));
    c.r[11].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 5;
L_002F2810:
    c.r[1].d[0] = c.r[11].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F2A48; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xB4000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7F7F0000u);
    c.f[7] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    set32(c.r[9], c.r[29].w[0] + 4u);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[6] = c.r[2].w[0];
    c.f[5] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[7].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[29].w[0]);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[4] = 0u;
    c.budget -= 20;
L_002F286C:
    set32(c.r[4], c.r[11].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[12].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[6], c.r[12].w[0] << 4);
    set32(c.r[4], c.r[8].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F28A8; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F28D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F28D8; } }
L_002F28A8:
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F28D0; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F28D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F28D8; } }
L_002F28D0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002F28D8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F2A38; } }
    set32(c.r[4], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    c.r[4].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F2A38; } }
    c.r[4].d[0] = c.r[6].d[0] & 8192ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 0ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F2A38; } }
    set32(c.r[4], c.r[11].w[0] + 1u);
    set32(c.r[14], c.r[12].w[0] + 2u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[6].w[0]));
    c.f[11] = c.f[7];
    c.r[1].d[0] = c.r[14].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.f[10] = c.f[6];  if (t) { goto L_002F2A18; } }
L_002F2930:
    set32(c.r[4], c.r[14].w[0] << 4);
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mulabc4<0>(c.vu0, 15u, 30u, c.vu0.vf[1].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 29u, c.vu0.vf[1].w[1]);
    vu::maddbc4<1>(c.vu0, 15u, 2u, 28u, c.vu0.vf[1].w[2]);
    c.f[9] = ld32((c.r[4].w[0] + 12u));
    c.f[9] = fp::ee::add(c.fcr31, c.f[9], c.f[12]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[2]);
    c.f[0] = ld32((c.r[9].w[0]));
    c.f[8] = ld32((c.r[29].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[9]);
    set32(c.r[13], c.f[8]);
    set32(c.r[12], c.f[0]);
    c.r[4].d[0] = c.r[13].d[0] & c.r[7].d[0];
    c.budget -= 17;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F2988; } }
    c.budget -= 2;
    { const bool t = c.r[12].sd[0] < 0;  if (t) { goto L_002F2A00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[11] = c.f[5];  if (t) { goto L_002F2A18; } }
    c.budget -= 1;
L_002F2988:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[8]);
    c.budget -= 6;
    { const bool t = c.r[13].sd[0] < 0;  if (t) { goto L_002F29D0; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F29B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[11] = c.f[5];  if (t) { goto L_002F2A18; } }
    c.budget -= 1;
L_002F29B8:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[10]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2A00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[10] = c.f[0];  if (t) { goto L_002F29E0; } }
    c.budget -= 1;
L_002F29D0:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[11]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2A00; } }
    c.f[11] = c.f[0];
    c.budget -= 1;
L_002F29E0:
    fpu_compare(c, fp::key(c.f[11]) <= fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2A18; } }
    fpu_compare(c, fp::key(c.f[11]) <= fp::key(c.f[10]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2A00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[11] = c.f[5];  if (t) { goto L_002F2A18; } }
L_002F2A00:
    c.r[4].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.r[4].d[0] = c.r[14].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F2930u | kUnwind; return; } goto L_002F2930; } }
    c.budget -= 1;
L_002F2A18:
    fpu_compare(c, fp::key(c.f[11]) < fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2A38; } }
    fpu_compare(c, fp::key(c.f[11]) < fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2A38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F2A4C; } }
L_002F2A38:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[4].d[0] = c.r[11].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F286Cu | kUnwind; return; } goto L_002F286C; } }
L_002F2A48:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F2A4C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F2A60:
    set32(c.r[29], c.r[29].w[0] - 192u);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002F2A90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F3014; } }
L_002F2A90:
    c.f[0] = 0u;
    set32(c.r[3], c.r[4].w[0] + 16u);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[4].w[0] + 32u);  if (t) { goto L_002F2BB8; } }
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2AD4; } }
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2AD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2CE8; } }
L_002F2AD4:
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2B04; } }
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2B04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2CE8; } }
L_002F2B04:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2B34; } }
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2B34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2CE8; } }
L_002F2B34:
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2B60; } }
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2B60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2CE8; } }
L_002F2B60:
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2B8C; } }
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2B8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2CE8; } }
L_002F2B8C:
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2CE4; } }
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2CE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2CE8; } }
L_002F2BB8:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2BEC; } }
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2BEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2CE8; } }
L_002F2BEC:
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2C20; } }
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2C20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2CE8; } }
L_002F2C20:
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2C54; } }
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2C54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2CE8; } }
L_002F2C54:
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2C84; } }
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2C84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2CE8; } }
L_002F2C84:
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2CB4; } }
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2CB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2CE8; } }
L_002F2CB4:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2CE4; } }
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2CE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2CE8; } }
L_002F2CE4:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002F2CE8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F2CFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F3014; } }
L_002F2CFC:
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[6] = c.r[2].w[0];
    set32(c.r[13], ld32((c.r[4].w[0] + 64u)));
    c.f[5] = ld32((c.r[6].w[0] + 4u));
    c.f[4] = ld32((c.r[6].w[0] + 8u));
    set32(c.r[2], c.r[29].w[0] + 144u);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[29].w[0] + 144u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[9] = 0u;
    c.f[0] = c.f[6];
    st32((c.r[29].w[0] + 160u), c.f[5]);
    st32((c.r[29].w[0] + 176u), c.f[4]);
    st32((c.r[29].w[0] + 148u), c.f[2]);
    st32((c.r[29].w[0] + 164u), c.f[3]);
    st32((c.r[29].w[0] + 180u), c.f[1]);
    c.vu0.vf[31] = c.r[13];
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[29]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[28]);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.r[16].d[0] = ld16((c.r[2].w[0] + 4u));
    c.r[12].d[0] = ld16((c.r[2].w[0] + 10u));
    c.r[1].d[0] = c.r[16].d[0] < c.r[12].d[0] ? 1ull : 0ull;
    c.budget -= 28;
    { const bool t = c.r[1].d[0] == 0ull; c.r[11].d[0] = ld16((c.r[2].w[0] + 8u));  if (t) { goto L_002F2F88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7F7F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xB4000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[9], ld32((c.r[4].w[0] + 56u)));
    c.f[7] = c.r[2].w[0];
    set32(c.r[14], c.r[29].w[0] + 132u);
    c.f[8] = c.r[3].w[0];
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[4] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[5]);
    c.r[10].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[2], c.r[29].w[0] + 128u);
    c.budget -= 14;
L_002F2DA4:
    set32(c.r[3], c.r[16].w[0] << 1);
    c.r[15].d[0] = c.r[16].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; c.r[3].d[0] = ld16((c.r[3].w[0]));  if (t) { goto L_002F2DC0; } }
    c.f[12] = c.f[9];
    c.budget -= 2;
L_002F2DC0:
    set32(c.r[20], c.r[3].w[0] << 4);
    set32(c.r[15], c.r[13].w[0] + c.r[20].w[0]);
    c.f[1] = ld32((c.r[15].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[12]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2DF0; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2E18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[15].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_002F2E20; } }
L_002F2DF0:
    c.f[1] = ld32((c.r[15].w[0] + 4u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[12]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2E18; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2E18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[15].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_002F2E20; } }
L_002F2E18:
    c.r[15].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002F2E20:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != 0ull;  if (t) { goto L_002F2F78; } }
    set32(c.r[15], c.r[13].w[0] + c.r[20].w[0]);
    set32(c.r[20], ld32((c.r[15].w[0] + 12u)));
    c.r[20].d[0] = c.r[20].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002F2F78; } }
    set32(c.r[25], c.r[3].w[0] + 2u);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    c.r[20].d[0] = ld16((c.r[3].w[0] + 2u));
    c.f[13] = c.f[8];
    c.r[1].d[0] = c.r[25].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.f[11] = c.f[7];  if (t) { goto L_002F2F50; } }
    c.budget -= 1;
L_002F2E60:
    set32(c.r[20], c.r[25].w[0] << 4);
    set32(c.r[20], c.r[13].w[0] + c.r[20].w[0]);
    ld128((c.r[20].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mulabc4<0>(c.vu0, 15u, 30u, c.vu0.vf[1].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 29u, c.vu0.vf[1].w[1]);
    vu::maddbc4<1>(c.vu0, 15u, 2u, 28u, c.vu0.vf[1].w[2]);
    c.f[10] = ld32((c.r[20].w[0] + 12u));
    c.f[10] = fp::ee::add(c.fcr31, c.f[10], c.f[12]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[2]);
    c.f[1] = ld32((c.r[14].w[0]));
    c.f[5] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[10]);
    set32(c.r[22], c.f[5]);
    set32(c.r[21], c.f[1]);
    c.r[20].d[0] = c.r[22].d[0] & c.r[10].d[0];
    c.budget -= 17;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_002F2EB8; } }
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] < 0;  if (t) { goto L_002F2F38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[13] = c.f[4];  if (t) { goto L_002F2F50; } }
    c.budget -= 1;
L_002F2EB8:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[5]);
    c.budget -= 6;
    { const bool t = c.r[22].sd[0] < 0;  if (t) { goto L_002F2F00; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[9]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2EE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[13] = c.f[4];  if (t) { goto L_002F2F50; } }
    c.budget -= 1;
L_002F2EE8:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[11]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2F38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[11] = c.f[1];  if (t) { goto L_002F2F18; } }
    c.budget -= 1;
L_002F2F00:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[13]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2F38; } }
    c.f[13] = c.f[1];
    c.r[24].d[0] = c.r[25].d[0] + 0ull;
    c.r[17].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 3;
L_002F2F18:
    fpu_compare(c, fp::key(c.f[13]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2F50; } }
    fpu_compare(c, fp::key(c.f[13]) <= fp::key(c.f[11]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2F38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[13] = c.f[4];  if (t) { goto L_002F2F50; } }
L_002F2F38:
    c.r[20].d[0] = ld16((c.r[3].w[0] + 2u));
    set32(c.r[25], c.r[25].w[0] + 1u);
    c.r[20].d[0] = c.r[25].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F2E60u | kUnwind; return; } goto L_002F2E60; } }
    c.budget -= 1;
L_002F2F50:
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2F78; } }
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[9]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2F78; } }
    c.f[0] = c.f[13];
    c.r[19].d[0] = c.r[24].d[0] + 0ull;
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_002F2F78:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < c.r[12].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F2DA4u | kUnwind; return; } goto L_002F2DA4; } }
L_002F2F88:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[6]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3010; } }
    c.f[6] = ld32((c.r[6].w[0] + 4u));
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.f[4] = ld32((c.r[6].w[0] + 8u));
    set32(c.r[8], c.r[19].w[0] << 4);
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
    c.f[1] = ld32((c.r[29].w[0] + 124u));
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[6]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[7].w[0]), c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    st32((c.r[7].w[0] + 4u), c.f[5]);
    st32((c.r[7].w[0] + 8u), c.f[3]);
    st32((c.r[7].w[0] + 12u), c.f[1]);
    st32((c.r[7].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    st16((c.r[7].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] >> 16);
    st8((c.r[7].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st16((c.r[7].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002F3014; } }
L_002F3010:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F3014:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002F3040:
    set32(c.r[29], c.r[29].w[0] - 288u);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 23;
    { const bool t = c.r[2].d[0] != 0ull; c.f[25] = c.f[12];  if (t) { goto L_002F30A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F35C4; } }
L_002F30A4:
    c.f[0] = 0u;
    set32(c.r[3], c.r[22].w[0] + 16u);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[25]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[22].w[0] + 32u);  if (t) { goto L_002F31CC; } }
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[4] = ld32((c.r[30].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F30E8; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F30E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F32FC; } }
L_002F30E8:
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = ld32((c.r[30].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3118; } }
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3118; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F32FC; } }
L_002F3118:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[30].w[0]));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3148; } }
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F32FC; } }
L_002F3148:
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3174; } }
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3174; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F32FC; } }
L_002F3174:
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F31A0; } }
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F31A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F32FC; } }
L_002F31A0:
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F32F8; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F32F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F32FC; } }
L_002F31CC:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[4] = ld32((c.r[30].w[0] + 4u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[25]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3200; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3200; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F32FC; } }
L_002F3200:
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = ld32((c.r[30].w[0] + 8u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[25]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3234; } }
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3234; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F32FC; } }
L_002F3234:
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[30].w[0]));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[25]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3268; } }
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F32FC; } }
L_002F3268:
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[25]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3298; } }
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F32FC; } }
L_002F3298:
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[25]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F32C8; } }
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F32C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F32FC; } }
L_002F32C8:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[25]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F32F8; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F32F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F32FC; } }
L_002F32F8:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002F32FC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F3310; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F35C4; } }
L_002F3310:
    c.f[5] = ld32((c.r[21].w[0]));
    set32(c.r[18], ld32((c.r[22].w[0] + 64u)));
    c.f[4] = ld32((c.r[21].w[0] + 4u));
    set32(c.r[2], c.r[29].w[0] + 240u);
    c.f[3] = ld32((c.r[21].w[0] + 8u));
    c.f[2] = ld32((c.r[30].w[0]));
    c.f[1] = ld32((c.r[30].w[0] + 4u));
    c.f[0] = ld32((c.r[30].w[0] + 8u));
    c.f[24] = 0u;
    st32((c.r[29].w[0] + 240u), c.f[5]);
    st32((c.r[29].w[0] + 256u), c.f[4]);
    st32((c.r[29].w[0] + 272u), c.f[3]);
    st32((c.r[29].w[0] + 244u), c.f[2]);
    st32((c.r[29].w[0] + 260u), c.f[1]);
    st32((c.r[29].w[0] + 276u), c.f[0]);
    c.vu0.vf[31] = c.r[4];
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[29]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[28]);
    set32(c.r[3], ld32((c.r[22].w[0] + 48u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 10u));
    c.r[20].d[0] = ld16((c.r[3].w[0] + 4u));
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 8u));
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.r[1].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 29;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F35C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7F7F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xB4000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[19], c.r[29].w[0] + 228u);
    c.f[22] = c.r[2].w[0];
    c.f[23] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[17].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[3].w[0];
    c.f[20] = c.r[2].w[0];
    c.budget -= 12;
L_002F33B4:
    set32(c.r[2], ld32((c.r[22].w[0] + 56u)));
    set32(c.r[3], c.r[20].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[23].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[16], c.r[23].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F33D0u); set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_004F(c, 115u, depth + 1u); else { c.pc = 0x0033EAD0u; return; } if (c.pc != 0x002F33D0u) [[unlikely]] return; }
L_002F33D0:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F33E8; } }
    c.f[25] = c.f[24];
    c.budget -= 2;
L_002F33E8:
    set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[30].w[0] + 4u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[25]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3420; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002F3458; } }
L_002F3420:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[25]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3450; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002F3458; } }
L_002F3450:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002F3458:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F35A8; } }
    set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F35A8; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 56u)));
    set32(c.r[3], c.r[20].w[0] << 1);
    set32(c.r[7], c.r[23].w[0] + 2u);
    c.f[4] = c.f[23];
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 2u));
    c.r[1].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.f[3] = c.f[22];  if (t) { goto L_002F3588; } }
    set32(c.r[3], c.r[29].w[0] + 224u);
    c.budget -= 2;
L_002F34A0:
    set32(c.r[2], c.r[7].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mulabc4<0>(c.vu0, 15u, 30u, c.vu0.vf[1].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 29u, c.vu0.vf[1].w[1]);
    vu::maddbc4<1>(c.vu0, 15u, 2u, 28u, c.vu0.vf[1].w[2]);
    c.f[2] = ld32((c.r[2].w[0] + 12u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[25]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[2]);
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 224u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    set32(c.r[6], c.f[1]);
    set32(c.r[5], c.f[0]);
    c.r[2].d[0] = c.r[6].d[0] & c.r[17].d[0];
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F34F8; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002F3570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = c.f[21];  if (t) { goto L_002F3588; } }
    c.budget -= 1;
L_002F34F8:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 6;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_002F3540; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[24]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = c.f[21];  if (t) { goto L_002F3588; } }
    c.budget -= 1;
L_002F3528:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = c.f[0];  if (t) { goto L_002F3550; } }
    c.budget -= 1;
L_002F3540:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3570; } }
    c.f[4] = c.f[0];
    c.budget -= 1;
L_002F3550:
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3588; } }
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = c.f[21];  if (t) { goto L_002F3588; } }
L_002F3570:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 2u));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F34A0u | kUnwind; return; } goto L_002F34A0; } }
    c.budget -= 1;
L_002F3588:
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F35A8; } }
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[24]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F35A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F35C4; } }
L_002F35A8:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F33B4u | kUnwind; return; } goto L_002F33B4; } }
    c.budget -= 1;
L_002F35C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F35C4:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_002F3610:
    set32(c.r[29], c.r[29].w[0] - 304u);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 220u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 23;
    { const bool t = c.r[2].d[0] != 0ull; c.f[25] = c.f[12];  if (t) { goto L_002F3674; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F3BEC; } }
L_002F3674:
    c.f[0] = 0u;
    set32(c.r[4], c.r[22].w[0] + 16u);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[25]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[22].w[0] + 32u);  if (t) { goto L_002F37A8; } }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[4] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F36BC; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F36BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F38E4; } }
L_002F36BC:
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F36F0; } }
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F36F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F38E4; } }
L_002F36F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3724; } }
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3724; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F38E4; } }
L_002F3724:
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3750; } }
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3750; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F38E4; } }
L_002F3750:
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F377C; } }
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F377C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F38E4; } }
L_002F377C:
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F38E0; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F38E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F38E4; } }
L_002F37A8:
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.f[4] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[25]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F37E0; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F37E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F38E4; } }
L_002F37E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[25]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3818; } }
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F38E4; } }
L_002F3818:
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[25]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3850; } }
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3850; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F38E4; } }
L_002F3850:
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[25]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3880; } }
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F38E4; } }
L_002F3880:
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[25]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F38B0; } }
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F38B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F38E4; } }
L_002F38B0:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[25]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F38E0; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F38E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F38E4; } }
L_002F38E0:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002F38E4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F38F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F3BEC; } }
L_002F38F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    c.f[5] = ld32((c.r[21].w[0]));
    c.f[4] = ld32((c.r[21].w[0] + 4u));
    set32(c.r[18], ld32((c.r[22].w[0] + 64u)));
    c.f[3] = ld32((c.r[21].w[0] + 8u));
    set32(c.r[3], c.r[29].w[0] + 240u);
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 240u), c.f[5]);
    st32((c.r[29].w[0] + 256u), c.f[4]);
    st32((c.r[29].w[0] + 272u), c.f[3]);
    st32((c.r[29].w[0] + 244u), c.f[2]);
    st32((c.r[29].w[0] + 260u), c.f[1]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    st32((c.r[29].w[0] + 276u), c.f[0]);
    c.vu0.vf[31] = c.r[2];
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[29]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[28]);
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F396C; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 48u)));
    c.r[20].d[0] = ld16((c.r[2].w[0] + 4u));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 10u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (t) { goto L_002F3984; } }
L_002F396C:
    set32(c.r[2], ld32((c.r[22].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 8u));
    c.r[20].d[0] = ld16((c.r[3].w[0]));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.budget -= 6;
L_002F3984:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[1].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F3BE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7F7F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xB4000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[19], c.r[29].w[0] + 228u);
    c.f[23] = c.r[2].w[0];
    c.f[24] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[17].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[22] = c.r[3].w[0];
    c.f[20] = c.r[2].w[0];
    c.f[21] = 0u;
    c.budget -= 13;
L_002F39C8:
    set32(c.r[4], ld32((c.r[22].w[0] + 56u)));
    set32(c.r[2], c.r[20].w[0] + 1u);
    set32(c.r[30], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[20].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[30].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[23].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[23].w[0] << 4);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3A04u); st32((c.r[29].w[0] + 300u), c.f[0]);  if (depth < kMaxDepth) unit_004F(c, 115u, depth + 1u); else { c.pc = 0x0033EAD0u; return; } if (c.pc != 0x002F3A04u) [[unlikely]] return; }
L_002F3A04:
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[25]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3A40; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3A70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002F3A78; } }
L_002F3A40:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[25]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3A70; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3A70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002F3A78; } }
L_002F3A70:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002F3A78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F3BD0; } }
    set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F3BD0; } }
    set32(c.r[3], ld32((c.r[22].w[0] + 56u)));
    set32(c.r[7], c.r[23].w[0] + 2u);
    c.f[4] = c.f[24];
    set32(c.r[2], c.r[3].w[0] + c.r[30].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[1].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.f[3] = c.f[23];  if (t) { goto L_002F3BB0; } }
    set32(c.r[2], c.r[20].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_002F3AC8:
    set32(c.r[2], c.r[7].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mulabc4<0>(c.vu0, 15u, 30u, c.vu0.vf[1].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 29u, c.vu0.vf[1].w[1]);
    vu::maddbc4<1>(c.vu0, 15u, 2u, 28u, c.vu0.vf[1].w[2]);
    c.f[2] = ld32((c.r[2].w[0] + 12u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[25]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[2]);
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 224u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    set32(c.r[6], c.f[1]);
    set32(c.r[5], c.f[0]);
    c.r[2].d[0] = c.r[6].d[0] & c.r[17].d[0];
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F3B20; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002F3B98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = c.f[22];  if (t) { goto L_002F3BB0; } }
    c.budget -= 1;
L_002F3B20:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 6;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_002F3B68; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3B50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = c.f[22];  if (t) { goto L_002F3BB0; } }
    c.budget -= 1;
L_002F3B50:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3B98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = c.f[0];  if (t) { goto L_002F3B78; } }
    c.budget -= 1;
L_002F3B68:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3B98; } }
    c.f[4] = c.f[0];
    c.budget -= 1;
L_002F3B78:
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3BB0; } }
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3B98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = c.f[22];  if (t) { goto L_002F3BB0; } }
L_002F3B98:
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F3AC8u | kUnwind; return; } goto L_002F3AC8; } }
    c.budget -= 1;
L_002F3BB0:
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3BD0; } }
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3BD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F3BEC; } }
L_002F3BD0:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F39C8u | kUnwind; return; } goto L_002F39C8; } }
    c.budget -= 1;
L_002F3BE8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F3BEC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_002F3C40:
    set32(c.r[29], c.r[29].w[0] - 1712u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 1712u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
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
    set32(c.r[2], ld32((c.r[4].w[0] + 116u)));
    c.f[24] = c.r[6].w[0];
    set32(c.r[4], c.r[29].w[0] + 688u);
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[8], c.r[4].w[0] + 16u);
    st32((c.r[4].w[0]), 0u);
    c.r[1].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 35;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[4].w[0] + 12u), c.r[6].w[0]);  if (t) { goto L_002F3DA0; } }
    set32(c.r[4], c.r[29].w[0] + 704u);
    c.r[1].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[29].w[0] + 1584u);  if (t) { goto L_002F3D70; } }
L_002F3CDC:
    st32((c.r[8].w[0]), 0u);
    st32((c.r[8].w[0] + 4u), 0u);
    st32((c.r[8].w[0] + 8u), 0u);
    st32((c.r[8].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 16u), 0u);
    st32((c.r[8].w[0] + 20u), 0u);
    st32((c.r[8].w[0] + 24u), 0u);
    st32((c.r[8].w[0] + 28u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 32u), 0u);
    st32((c.r[8].w[0] + 36u), 0u);
    st32((c.r[8].w[0] + 40u), 0u);
    st32((c.r[8].w[0] + 44u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 48u), 0u);
    st32((c.r[8].w[0] + 52u), 0u);
    st32((c.r[8].w[0] + 56u), 0u);
    st32((c.r[8].w[0] + 60u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 64u), 0u);
    st32((c.r[8].w[0] + 68u), 0u);
    st32((c.r[8].w[0] + 72u), 0u);
    st32((c.r[8].w[0] + 76u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 80u), 0u);
    st32((c.r[8].w[0] + 84u), 0u);
    st32((c.r[8].w[0] + 88u), 0u);
    st32((c.r[8].w[0] + 92u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 96u), 0u);
    st32((c.r[8].w[0] + 100u), 0u);
    st32((c.r[8].w[0] + 104u), 0u);
    st32((c.r[8].w[0] + 108u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 112u), 0u);
    st32((c.r[8].w[0] + 116u), 0u);
    st32((c.r[8].w[0] + 120u), 0u);
    st32((c.r[8].w[0] + 124u), c.r[6].w[0]);
    set32(c.r[8], c.r[8].w[0] + 128u);
    c.r[4].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 36;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F3CDCu | kUnwind; return; } goto L_002F3CDC; } }
    c.budget -= 1;
L_002F3D70:
    c.r[1].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F3DA0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_002F3D80:
    st32((c.r[8].w[0]), 0u);
    st32((c.r[8].w[0] + 4u), 0u);
    st32((c.r[8].w[0] + 8u), 0u);
    st32((c.r[8].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[8], c.r[8].w[0] + 16u);
    c.r[4].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F3D80u | kUnwind; return; } goto L_002F3D80; } }
L_002F3DA0:
    c.r[5].d[0] = ld8((c.r[21].w[0] + 142u));
    set32(c.r[19], ld32((c.r[21].w[0] + 112u)));
    c.r[4].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[20].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002F3E30; } }
    c.r[4].d[0] = c.r[5].d[0] << 61;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F3E30; } }
    c.f[3] = ld32((c.r[21].w[0] + 120u));
    set32(c.r[6], ld32((c.r[21].w[0] + 104u)));
    c.f[1] = ld32((c.r[21].w[0] + 128u));
    c.r[5].d[0] = ld16((c.r[21].w[0] + 140u));
    c.f[0] = ld32((c.r[21].w[0] + 132u));
    set32(c.r[3], ld32((c.r[21].w[0] + 136u)));
    set32(c.r[20], c.r[29].w[0] + 688u);
    c.f[2] = ld32((c.r[21].w[0] + 96u));
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[3], c.f[1]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 12u)));
    c.f[27] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[27], c.f[0]);  if (t) { goto L_002F3F0C; } }
L_002F3E30:
    c.f[2] = ld32((c.r[21].w[0] + 116u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.r[5].d[0] = ld16((c.r[21].w[0] + 140u));
    c.f[1] = ld32((c.r[21].w[0] + 120u));
    set32(c.r[7], ld32((c.r[21].w[0] + 104u)));
    c.f[0] = 0u;
    c.f[3] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.f[27] = fp::ee::div(c.fcr31, c.f[1], c.f[3]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[7], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[19], c.r[4].w[0] + c.r[5].w[0]);
    mmi::mult(c, 1, c.r[7].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[6], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[27], c.f[0]);
    st32((c.r[21].w[0] + 96u), c.f[3]);
    c.r[5].d[0] = ld8((c.r[21].w[0] + 142u));
    c.r[4].d[0] = c.r[5].d[0] << 61;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 44;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F3F0C; } }
    set32(c.r[4], 0u - 5u);
    c.r[6].d[0] = 0ull & 1ull;
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    set32(c.r[5], c.r[6].w[0] << 2);
    c.r[5].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[21].w[0] + 142u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], 0u - 2u);
    c.r[5].d[0] = ld8((c.r[21].w[0] + 142u));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[21].w[0] + 142u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 11;
L_002F3F0C:
    c.f[1] = ld32((c.r[21].w[0] + 52u));
    c.f[2] = ld32((c.r[21].w[0] + 100u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[21].w[0] + 52u), c.f[0]);
    set32(c.r[6], ld32((c.r[21].w[0] + 104u)));
    c.r[5].d[0] = ld16((c.r[21].w[0] + 140u));
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 12u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    mmi::mult(c, 1, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[4] = ld32((c.r[19].w[0] + 4u));
    c.f[6] = ld32((c.r[19].w[0] + 8u));
    c.f[8] = ld32((c.r[19].w[0] + 12u));
    set32(c.r[5], c.r[2].w[0] << 4);
    set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[5] = ld32((c.r[17].w[0] + 8u));
    c.f[7] = ld32((c.r[17].w[0] + 12u));
    c.f[23] = c.r[2].w[0];
    c.f[3] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 368u);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[4]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[5], c.f[6]);
    c.f[7] = fp::ee::sub(c.fcr31, c.f[7], c.f[8]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[27], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[27], c.f[2]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[27], c.f[5]);
    c.f[7] = fp::ee::mul(c.fcr31, c.f[27], c.f[7]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    c.f[7] = fp::ee::add(c.fcr31, c.f[8], c.f[7]);
    st32((c.r[20].w[0]), c.f[0]);
    st32((c.r[20].w[0] + 4u), c.f[2]);
    st32((c.r[20].w[0] + 8u), c.f[5]);
    st32((c.r[20].w[0] + 12u), c.f[7]);
    set32(c.r[4], ld32((c.r[21].w[0] + 108u)));
    st32((c.r[29].w[0] + 624u), c.f[0]);
    st32((c.r[29].w[0] + 628u), c.f[2]);
    st32((c.r[29].w[0] + 636u), c.f[7]);
    st32((c.r[29].w[0] + 632u), c.f[5]);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[20].w[0]));
    c.budget -= 61;
    [[clang::musttail]] return unit_003D(c, 1u, depth);
}

}

#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77,
    0, 78, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0,
    0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0,
    0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0,
    168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171,
    0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 176, 177, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 184, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0,
    195, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 205, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222,
    0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0,
    0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0,
    231, 0, 232, 0, 233, 0, 234, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 240, 0, 241, 0, 0, 0, 242, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 245, 246, 0, 0, 247, 0, 248, 0, 0, 0, 249,
};

void unit_006A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003A8000;
    case 2u: goto L_003A8048;
    case 3u: goto L_003A8080;
    case 4u: goto L_003A80BC;
    case 5u: goto L_003A80CC;
    case 6u: goto L_003A80E8;
    case 7u: goto L_003A8100;
    case 8u: goto L_003A8170;
    case 9u: goto L_003A81E4;
    case 10u: goto L_003A825C;
    case 11u: goto L_003A82C0;
    case 12u: goto L_003A8360;
    case 13u: goto L_003A839C;
    case 14u: goto L_003A83AC;
    case 15u: goto L_003A83C8;
    case 16u: goto L_003A83E0;
    case 17u: goto L_003A8450;
    case 18u: goto L_003A84C4;
    case 19u: goto L_003A853C;
    case 20u: goto L_003A85A0;
    case 21u: goto L_003A8630;
    case 22u: goto L_003A8640;
    case 23u: goto L_003A8650;
    case 24u: goto L_003A8660;
    case 25u: goto L_003A86A0;
    case 26u: goto L_003A86E0;
    case 27u: goto L_003A8708;
    case 28u: goto L_003A873C;
    case 29u: goto L_003A875C;
    case 30u: goto L_003A87D4;
    case 31u: goto L_003A8838;
    case 32u: goto L_003A8898;
    case 33u: goto L_003A88B0;
    case 34u: goto L_003A88CC;
    case 35u: goto L_003A88F0;
    case 36u: goto L_003A8958;
    case 37u: goto L_003A89CC;
    case 38u: goto L_003A8A30;
    case 39u: goto L_003A8AA0;
    case 40u: goto L_003A8AC8;
    case 41u: goto L_003A8B14;
    case 42u: goto L_003A8B24;
    case 43u: goto L_003A8B40;
    case 44u: goto L_003A8D40;
    case 45u: goto L_003A8E34;
    case 46u: goto L_003A8E4C;
    case 47u: goto L_003A8F30;
    case 48u: goto L_003A9014;
    case 49u: goto L_003A902C;
    case 50u: goto L_003A9110;
    case 51u: goto L_003A9290;
    case 52u: goto L_003A92B8;
    case 53u: goto L_003A9334;
    case 54u: goto L_003A93C8;
    case 55u: goto L_003A93DC;
    case 56u: goto L_003A9408;
    case 57u: goto L_003A9410;
    case 58u: goto L_003A94CC;
    case 59u: goto L_003A94FC;
    case 60u: goto L_003A9538;
    case 61u: goto L_003A95AC;
    case 62u: goto L_003A9610;
    case 63u: goto L_003A9698;
    case 64u: goto L_003A96A0;
    case 65u: goto L_003A971C;
    case 66u: goto L_003A977C;
    case 67u: goto L_003A97B0;
    case 68u: goto L_003A985C;
    case 69u: goto L_003A9890;
    case 70u: goto L_003A9908;
    case 71u: goto L_003A99F8;
    case 72u: goto L_003A9A88;
    case 73u: goto L_003A9AE0;
    case 74u: goto L_003A9B14;
    case 75u: goto L_003A9B24;
    case 76u: goto L_003A9BF0;
    case 77u: goto L_003A9BFC;
    case 78u: goto L_003A9C04;
    case 79u: goto L_003A9C10;
    case 80u: goto L_003A9C18;
    case 81u: goto L_003A9C44;
    case 82u: goto L_003A9C48;
    case 83u: goto L_003A9C50;
    case 84u: goto L_003A9C84;
    case 85u: goto L_003A9CCC;
    case 86u: goto L_003A9CD0;
    case 87u: goto L_003A9CD8;
    case 88u: goto L_003A9CF8;
    case 89u: goto L_003A9D38;
    case 90u: goto L_003A9D60;
    case 91u: goto L_003A9D74;
    case 92u: goto L_003A9E80;
    case 93u: goto L_003A9EE4;
    case 94u: goto L_003A9EF4;
    case 95u: goto L_003A9F0C;
    case 96u: goto L_003A9F38;
    case 97u: goto L_003A9F40;
    case 98u: goto L_003AA04C;
    case 99u: goto L_003AA0C4;
    case 100u: goto L_003AA184;
    case 101u: goto L_003AA1C0;
    case 102u: goto L_003AA228;
    case 103u: goto L_003AA238;
    case 104u: goto L_003AA274;
    case 105u: goto L_003AA2A4;
    case 106u: goto L_003AA2BC;
    case 107u: goto L_003AA2CC;
    case 108u: goto L_003AA2DC;
    case 109u: goto L_003AA2EC;
    case 110u: goto L_003AA2FC;
    case 111u: goto L_003AA340;
    case 112u: goto L_003AA350;
    case 113u: goto L_003AA398;
    case 114u: goto L_003AA3B8;
    case 115u: goto L_003AA3D8;
    case 116u: goto L_003AA480;
    case 117u: goto L_003AA498;
    case 118u: goto L_003AA4B4;
    case 119u: goto L_003AA4BC;
    case 120u: goto L_003AA560;
    case 121u: goto L_003AA590;
    case 122u: goto L_003AA5F4;
    case 123u: goto L_003AA630;
    case 124u: goto L_003AA63C;
    case 125u: goto L_003AA690;
    case 126u: goto L_003AA6D0;
    case 127u: goto L_003AA6F8;
    case 128u: goto L_003AA70C;
    case 129u: goto L_003AA75C;
    case 130u: goto L_003AA7A8;
    case 131u: goto L_003AA7E4;
    case 132u: goto L_003AA8C4;
    case 133u: goto L_003AAA2C;
    case 134u: goto L_003AAA4C;
    case 135u: goto L_003AAA54;
    case 136u: goto L_003AAA64;
    case 137u: goto L_003AAAE4;
    case 138u: goto L_003AAC8C;
    case 139u: goto L_003AACD0;
    case 140u: goto L_003AAD7C;
    case 141u: goto L_003AADC0;
    case 142u: goto L_003AADF0;
    case 143u: goto L_003AAE2C;
    case 144u: goto L_003AAEA0;
    case 145u: goto L_003AAEA8;
    case 146u: goto L_003AAEB8;
    case 147u: goto L_003AAEDC;
    case 148u: goto L_003AAEF8;
    case 149u: goto L_003AAF18;
    case 150u: goto L_003AAF38;
    case 151u: goto L_003AAFC8;
    case 152u: goto L_003AAFE0;
    case 153u: goto L_003AAFFC;
    case 154u: goto L_003AB0A0;
    case 155u: goto L_003AB0B4;
    case 156u: goto L_003AB104;
    case 157u: goto L_003AB114;
    case 158u: goto L_003AB178;
    case 159u: goto L_003AB2D4;
    case 160u: goto L_003AB30C;
    case 161u: goto L_003AB3B0;
    case 162u: goto L_003AB3F4;
    case 163u: goto L_003AB43C;
    case 164u: goto L_003AB48C;
    case 165u: goto L_003AB4B8;
    case 166u: goto L_003AB4CC;
    case 167u: goto L_003AB4E0;
    case 168u: goto L_003AB500;
    case 169u: goto L_003AB550;
    case 170u: goto L_003AB554;
    case 171u: goto L_003AB57C;
    case 172u: goto L_003AB5A0;
    case 173u: goto L_003AB614;
    case 174u: goto L_003AB678;
    case 175u: goto L_003AB6C8;
    case 176u: goto L_003AB78C;
    case 177u: goto L_003AB790;
    case 178u: goto L_003AB798;
    case 179u: goto L_003AB7A0;
    case 180u: goto L_003AB7D0;
    case 181u: goto L_003AB80C;
    case 182u: goto L_003AB818;
    case 183u: goto L_003AB8A4;
    case 184u: goto L_003AB8A8;
    case 185u: goto L_003AB8B0;
    case 186u: goto L_003AB8B8;
    case 187u: goto L_003AB8E8;
    case 188u: goto L_003AB900;
    case 189u: goto L_003AB94C;
    case 190u: goto L_003AB970;
    case 191u: goto L_003AB978;
    case 192u: goto L_003AB9FC;
    case 193u: goto L_003ABA58;
    case 194u: goto L_003ABA6C;
    case 195u: goto L_003ABA80;
    case 196u: goto L_003ABA88;
    case 197u: goto L_003ABA90;
    case 198u: goto L_003ABAAC;
    case 199u: goto L_003ABACC;
    case 200u: goto L_003ABB44;
    case 201u: goto L_003ABBA8;
    case 202u: goto L_003ABC0C;
    case 203u: goto L_003ABC28;
    case 204u: goto L_003ABC40;
    case 205u: goto L_003ABC48;
    case 206u: goto L_003ABC50;
    case 207u: goto L_003ABC58;
    case 208u: goto L_003ABC74;
    case 209u: goto L_003ABCB4;
    case 210u: goto L_003ABCBC;
    case 211u: goto L_003ABCC4;
    case 212u: goto L_003ABCCC;
    case 213u: goto L_003ABD04;
    case 214u: goto L_003ABD0C;
    case 215u: goto L_003ABD34;
    case 216u: goto L_003ABD4C;
    case 217u: goto L_003ABD54;
    case 218u: goto L_003ABD74;
    case 219u: goto L_003ABD90;
    case 220u: goto L_003ABDBC;
    case 221u: goto L_003ABDD0;
    case 222u: goto L_003ABDFC;
    case 223u: goto L_003ABE20;
    case 224u: goto L_003ABE3C;
    case 225u: goto L_003ABE58;
    case 226u: goto L_003ABE74;
    case 227u: goto L_003ABE88;
    case 228u: goto L_003ABE9C;
    case 229u: goto L_003ABEC0;
    case 230u: goto L_003ABEF8;
    case 231u: goto L_003ABF00;
    case 232u: goto L_003ABF08;
    case 233u: goto L_003ABF10;
    case 234u: goto L_003ABF18;
    case 235u: goto L_003ABF20;
    case 236u: goto L_003ABF2C;
    case 237u: goto L_003ABF38;
    case 238u: goto L_003ABF44;
    case 239u: goto L_003ABF50;
    case 240u: goto L_003ABF58;
    case 241u: goto L_003ABF60;
    case 242u: goto L_003ABF70;
    case 243u: goto L_003ABF80;
    case 244u: goto L_003ABFD0;
    case 245u: goto L_003ABFD4;
    case 246u: goto L_003ABFD8;
    case 247u: goto L_003ABFE4;
    case 248u: goto L_003ABFEC;
    case 249u: goto L_003ABFFC;
    default: bad_entry(c, 0x003A8000u); return;
    }
L_003A8000:
    st8((c.r[4].w[0] + 65u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 66u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st8((c.r[4].w[0] + 66u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 67u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 68u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 69u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 76u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 65u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[4].w[0] + 65u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8048u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003A8048u) [[unlikely]] return; }
L_003A8048:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    st32((c.r[16].w[0] + 72u), c.f[0]);
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A8080:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 56u);  if (t) { goto L_003A8124; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 284u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003A80F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A80BCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0069(c, 56u, depth + 1u); else { c.pc = 0x003A4FF0u; return; } if (c.pc != 0x003A80BCu) [[unlikely]] return; }
L_003A80BC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], c.r[2].w[0] + 752u);
    c.budget -= 4;
L_003A80CC:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] + 64u);
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003A8318; } }
    c.budget -= 1;
L_003A80E8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A80CCu | kUnwind; return; } goto L_003A80CC; } }
L_003A80F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8100u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003A8100u) [[unlikely]] return; }
L_003A8100:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    c.f[3] = c.r[4].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    st32((c.r[17].w[0] + 80u), c.f[0]);
    c.budget -= 9;
L_003A8124:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 65u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 6);
    set32(c.r[3], 0u - 65u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 65u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 68u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 69u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[17].w[0] + 36u)));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 284u));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A8304; } }
    st8((c.r[6].w[0] + 284u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[6].w[0] + 8u);
    st32((c.r[6].w[0] + 288u), 0u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 8192u);
    c.budget -= 6;
L_003A8170:
    c.r[3].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A81B8; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003A81B8; } }
    set32(c.r[4], c.r[8].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 213u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A81C8; } }
L_003A81B8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8170u | kUnwind; return; } goto L_003A8170; } }
L_003A81C8:
    set32(c.r[4], ld32((c.r[6].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 8u);  if (t) { goto L_003A8240; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 8192u);
    c.budget -= 3;
L_003A81E4:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003A822C; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_003A822C; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003A8240; } }
L_003A822C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A81E4u | kUnwind; return; } goto L_003A81E4; } }
    c.budget -= 1;
L_003A8240:
    set32(c.r[4], ld32((c.r[3].w[0] + 200u)));
    c.r[4].d[0] = c.r[4].d[0] | 8192ull;
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 7;
L_003A825C:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003A82C8; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 8192u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003A8338; } }
L_003A82C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A82FC; } }
L_003A82C8:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_003A82E0; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A82E0:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A825Cu | kUnwind; return; } goto L_003A825C; } }
    breakpoint(c, 0x003A82F0u);
    c.r[9].d[0] = 0ull + 0ull;
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003A82FC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A8304:
    st32((c.r[17].w[0] + 76u), 0u);
    st32((c.r[16].w[0]), 0u);
    st8((c.r[17].w[0] + 64u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), 0u);  if (t) { goto L_003A8340; } }
L_003A8318:
    st32((c.r[3].w[0]), 0u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 276u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A80E8u | kUnwind; return; } goto L_003A80E8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 276u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A80E8u | kUnwind; return; } goto L_003A80E8; } }
    c.budget -= 1;
L_003A8338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A82C0u | kUnwind; return; } goto L_003A82C0; } }
L_003A8340:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A8360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 56u);  if (t) { goto L_003A8404; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 284u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003A83D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A839Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0069(c, 56u, depth + 1u); else { c.pc = 0x003A4FF0u; return; } if (c.pc != 0x003A839Cu) [[unlikely]] return; }
L_003A839C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], c.r[2].w[0] + 752u);
    c.budget -= 4;
L_003A83AC:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] + 64u);
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003A85F0; } }
    c.budget -= 1;
L_003A83C8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A83ACu | kUnwind; return; } goto L_003A83AC; } }
L_003A83D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A83E0u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003A83E0u) [[unlikely]] return; }
L_003A83E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    c.f[3] = c.r[4].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    st32((c.r[17].w[0] + 80u), c.f[0]);
    c.budget -= 9;
L_003A8404:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 65u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 6);
    set32(c.r[3], 0u - 65u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 65u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 68u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 69u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[17].w[0] + 36u)));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 284u));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A85E4; } }
    st8((c.r[6].w[0] + 284u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[6].w[0] + 8u);
    st32((c.r[6].w[0] + 288u), 0u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 8192u);
    c.budget -= 6;
L_003A8450:
    c.r[3].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A8498; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003A8498; } }
    set32(c.r[4], c.r[8].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 213u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A84A8; } }
L_003A8498:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8450u | kUnwind; return; } goto L_003A8450; } }
L_003A84A8:
    set32(c.r[4], ld32((c.r[6].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 8u);  if (t) { goto L_003A8520; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 8192u);
    c.budget -= 3;
L_003A84C4:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003A850C; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_003A850C; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003A8520; } }
L_003A850C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A84C4u | kUnwind; return; } goto L_003A84C4; } }
    c.budget -= 1;
L_003A8520:
    set32(c.r[4], ld32((c.r[3].w[0] + 200u)));
    c.r[4].d[0] = c.r[4].d[0] | 8192ull;
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 7;
L_003A853C:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003A85A8; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 8192u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003A8610; } }
L_003A85A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A85DC; } }
L_003A85A8:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_003A85C0; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A85C0:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A853Cu | kUnwind; return; } goto L_003A853C; } }
    breakpoint(c, 0x003A85D0u);
    c.r[9].d[0] = 0ull + 0ull;
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003A85DC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A85E4:
    st32((c.r[17].w[0] + 76u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_003A8618; } }
L_003A85F0:
    st32((c.r[3].w[0]), 0u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 276u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A83C8u | kUnwind; return; } goto L_003A83C8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 276u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A83C8u | kUnwind; return; } goto L_003A83C8; } }
    c.budget -= 1;
L_003A8610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A85A0u | kUnwind; return; } goto L_003A85A0; } }
L_003A8618:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A8630:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A8640:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A8650:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7170u | kUnwind; return; } [[clang::musttail]] return unit_0069(c, 148u, depth); }
L_003A8660:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A8694; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8400u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_003A8694; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8544u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_003A8694; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8576u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003A8694:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003A86A0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A86D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8384u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_003A86D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8544u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_003A86D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8576u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003A86D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003A86E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A88A0; } }
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.budget -= 1;
L_003A8708:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003A88DC; } }
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003A88B8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_003A873C:
    set32(c.r[2], c.r[3].w[0] + 8u);
    set32(c.r[3], ld32((c.r[3].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A87B8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 16384u);
    c.budget -= 3;
L_003A875C:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A87A4; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003A87A4; } }
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 213u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A87B8; } }
L_003A87A4:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A875Cu | kUnwind; return; } goto L_003A875C; } }
    c.budget -= 1;
L_003A87B8:
    set32(c.r[3], ld32((c.r[2].w[0] + 200u)));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[2].w[0] + 200u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.r[3].d[0] = c.r[7].d[0] << 56;
    set32(c.r[5], 0u + 10u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
L_003A87D4:
    c.r[6].d[0] = c.r[7].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[8], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[8].w[0] + 8u));
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003A8840; } }
    st8((c.r[8].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 16384u);
    st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[6].w[0] + 1u);
    st32((c.r[8].w[0] + 16u), 0u);
    set32(c.r[3], 0u + 10u);
    st32((c.r[8].w[0] + 12u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 213u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003A88D4; } }
L_003A8838:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 56u)));  if (t) { goto L_003A8874; } }
L_003A8840:
    set32(c.r[4], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[4].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_003A8858; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A8858:
    c.r[4].d[0] = c.r[7].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A87D4u | kUnwind; return; } goto L_003A87D4; } }
    breakpoint(c, 0x003A8868u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
L_003A8874:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 15u);
    st32((c.r[8].w[0]), c.r[6].w[0]);
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8898u); st32((c.r[16].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003A8898u) [[unlikely]] return; }
L_003A8898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003A88E0; } }
L_003A88A0:
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A88B0u); st8((c.r[16].w[0] + 98u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 101u, depth + 1u); else { c.pc = 0x003AA1C0u; return; } if (c.pc != 0x003A88B0u) [[unlikely]] return; }
L_003A88B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 72u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8708u | kUnwind; return; } goto L_003A8708; } }
L_003A88B8:
    st32((c.r[16].w[0] + 76u), c.f[0]);
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 98u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A88CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 101u, depth + 1u); else { c.pc = 0x003AA1C0u; return; } if (c.pc != 0x003A88CCu) [[unlikely]] return; }
L_003A88CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A873Cu | kUnwind; return; } goto L_003A873C; } }
L_003A88D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8838u | kUnwind; return; } goto L_003A8838; } }
L_003A88DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003A88E0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A88F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A8ADC; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 220u));
    set32(c.r[2], 0u + 21u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003A8AA8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 344u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 312u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A8AA8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[2], c.r[3].w[0] + 8u);
    set32(c.r[3], ld32((c.r[3].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A89B0; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    c.budget -= 3;
L_003A8958:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A89A0; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003A89A0; } }
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    st8((c.r[5].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 213u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A89B0; } }
L_003A89A0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8958u | kUnwind; return; } goto L_003A8958; } }
L_003A89B0:
    set32(c.r[3], ld32((c.r[2].w[0] + 200u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[2].w[0] + 200u), c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.r[3].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
L_003A89CC:
    c.r[7].d[0] = c.r[8].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[9], c.r[2].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[9].w[0] + 8u));
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003A8A38; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 64u);
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[7].w[0] + 1u);
    st32((c.r[9].w[0] + 16u), 0u);
    set32(c.r[3], 0u + 10u);
    st32((c.r[9].w[0] + 12u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 213u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003A8AD4; } }
L_003A8A30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE60000u);  if (t) { goto L_003A8A6C; } }
L_003A8A38:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_003A8A50; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A8A50:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A89CCu | kUnwind; return; } goto L_003A89CC; } }
    breakpoint(c, 0x003A8A60u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.budget -= 3;
L_003A8A6C:
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[2].d[0] | 26214ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[9].w[0]), c.r[5].w[0]);
    c.f[0] = c.r[2].w[0];
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.f[1] = ld32((c.r[2].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003A8AC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8AA0u); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003A8AA0u) [[unlikely]] return; }
L_003A8AA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A8ACC; } }
L_003A8AA8:
    c.f[1] = ld32((c.r[4].w[0] + 76u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003A8AC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8AC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 92u, depth + 1u); else { c.pc = 0x003A9E80u; return; } if (c.pc != 0x003A8AC8u) [[unlikely]] return; }
L_003A8AC8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A8ACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A8B2C; } }
L_003A8AD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8A30u | kUnwind; return; } goto L_003A8A30; } }
L_003A8ADC:
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 112u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A8B1C; } }
    c.f[1] = ld32((c.r[4].w[0] + 76u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8AC8u | kUnwind; return; } goto L_003A8AC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8B14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 92u, depth + 1u); else { c.pc = 0x003A9E80u; return; } if (c.pc != 0x003A8B14u) [[unlikely]] return; }
L_003A8B14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8AC8u | kUnwind; return; } goto L_003A8AC8; } }
L_003A8B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8B24u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003A8B24u) [[unlikely]] return; }
L_003A8B24:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003A8B2C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8B40:
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A8CA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[7].d[0] = c.r[5].d[0] & 255ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[11] = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);  if (t) { goto L_003A8B90; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EB80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FFA0000u);
    c.r[3].d[0] = c.r[3].d[0] | 20972ull;
    c.r[2].d[0] = c.r[2].d[0] | 57671ull;
    c.f[10] = c.r[3].w[0];
    c.f[9] = c.r[2].w[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[4].w[0] + 112u));  if (t) { goto L_003A8BA4; } }
L_003A8B90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F100000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC80000u);
    c.f[10] = c.r[3].w[0];
    c.f[9] = c.r[2].w[0];
    c.r[2].d[0] = ld8((c.r[4].w[0] + 112u));
    c.budget -= 5;
L_003A8BA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[8] = ld32((c.r[4].w[0] + 88u));
    c.f[0] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.f[4] = ld32((c.r[4].w[0] + 80u));  if (t) { goto L_003A8BE8; } }
    set32(c.r[2], c.r[5].w[0] + c.r[6].w[0]);
    c.f[3] = ld32((c.r[2].w[0] + 112u));
    c.f[2] = ld32((c.r[4].w[0] + 64u));
    c.f[1] = ld32((c.r[4].w[0] + 72u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.f[8] = fp::ee::add(c.fcr31, c.f[8], c.f[1]);  if (t) { goto L_003A8BF0; } }
L_003A8BE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 2;
L_003A8BF0:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.f[3] = 0u;
    c.f[7] = ld32((c.r[2].w[0] + 32u));
    c.f[5] = ld32((c.r[2].w[0] + 40u));
    c.f[6] = fp::ee::sub(c.fcr31, c.f[4], c.f[7]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[8], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.f[8] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);  if (t) { goto L_003A8C48; } }
    c.f[1] = ld32((c.r[4].w[0] + 88u));
    c.f[2] = ld32((c.r[4].w[0] + 80u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[5]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[7]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[6]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[3]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003A8C48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC61C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
L_003A8C48:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[11], c.f[9]);
    fpu_compare(c, fp::key(c.f[8]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003A8CBC; } }
    c.f[1] = fp::ee::mul(c.fcr31, c.f[11], c.f[10]);
    fpu_compare(c, fp::key(c.f[8]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003A8D2C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A8C88; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[8], c.f[11]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = c.r[2].w[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_003A8D2C; } }
L_003A8C88:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[8], c.f[11]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_003A8D2C; } }
L_003A8CA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47C30000u);
    c.r[2].d[0] = c.r[2].d[0] | 20480ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A8D2C; } }
L_003A8CBC:
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[2], 0u + 32u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 40u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003A8D00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[8]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003A8D00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A8D2C; } }
L_003A8D00:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[8], c.f[11]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[4] = c.f[1] & fp::kAbs;
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.f[3] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[4]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 11;
L_003A8D2C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A8D40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u - 5u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 109u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 109u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 108u));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A8D8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld8((c.r[19].w[0] + 128u));  if (t) { goto L_003A8DB8; } }
L_003A8D8C:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 110u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 128u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[17].d[0] = ld8((c.r[3].w[0] + 60u));
    c.budget -= 9;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_003A8DB8; } }
    set32(c.r[2], c.r[4].w[0] + c.r[18].w[0]);
    c.r[17].d[0] = ld8((c.r[2].w[0] + 60u));
    c.budget -= 2;
L_003A8DB8:
    c.r[16].d[0] = c.r[17].d[0] & 255ull;
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 40u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003A8DEC; } }
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A8DEC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A8DEC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003A8E08; } }
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003A8E08; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A8E08:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003A8E3C; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 96u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A8E34; } }
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[2], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003A8E3C; } }
L_003A8E34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A8F0C; } }
L_003A8E3C:
    set32(c.r[4], ld32((c.r[19].w[0] + 44u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8E4Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 43u, depth + 1u); else { c.pc = 0x003A8B40u; return; } if (c.pc != 0x003A8E4Cu) [[unlikely]] return; }
L_003A8E4C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A8E64; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A8E64:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A8E74; } }
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 1;
L_003A8E74:
    c.f[1] = ld32((c.r[19].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003A8E94; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 108u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8E34u | kUnwind; return; } goto L_003A8E34; } }
L_003A8E94:
    st32((c.r[19].w[0] + 116u), c.f[0]);
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    st8((c.r[19].w[0] + 111u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[8], c.r[3].w[0] << 3);
    c.r[9].d[0] = ld8((c.r[19].w[0] + 109u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 84ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.f[1] = c.r[3].w[0];
    set32(c.r[7], 0u - 9u);
    set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[5], 0u - 17u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u + 1u);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.r[3].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    st8((c.r[19].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 109u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[19].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 72u));
    st32((c.r[19].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.budget -= 27;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[19].w[0] + 124u), c.f[0]);  if (t) { goto L_003A8F08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A8F0C; } }
L_003A8F08:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A8F0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A8F30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u - 5u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 109u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 109u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 108u));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A8F7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld8((c.r[19].w[0] + 128u));  if (t) { goto L_003A8F98; } }
L_003A8F7C:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 110u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 128u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[17].d[0] = ld8((c.r[3].w[0] + 60u));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_003A8F98; } }
    c.r[17].d[0] = ld8((c.r[18].w[0] + 60u));
    c.budget -= 1;
L_003A8F98:
    c.r[16].d[0] = c.r[17].d[0] & 255ull;
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 40u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003A8FCC; } }
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A8FCC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A8FCC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003A8FE8; } }
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003A8FE8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A8FE8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003A901C; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 96u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A9014; } }
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[2], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003A901C; } }
L_003A9014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A90EC; } }
L_003A901C:
    set32(c.r[4], ld32((c.r[19].w[0] + 44u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A902Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 43u, depth + 1u); else { c.pc = 0x003A8B40u; return; } if (c.pc != 0x003A902Cu) [[unlikely]] return; }
L_003A902C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A9044; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A9044:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A9054; } }
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 1;
L_003A9054:
    c.f[1] = ld32((c.r[19].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003A9074; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 108u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9014u | kUnwind; return; } goto L_003A9014; } }
L_003A9074:
    st32((c.r[19].w[0] + 116u), c.f[0]);
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    st8((c.r[19].w[0] + 111u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[8], c.r[3].w[0] << 3);
    c.r[9].d[0] = ld8((c.r[19].w[0] + 109u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 84ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.f[1] = c.r[3].w[0];
    set32(c.r[7], 0u - 9u);
    set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[5], 0u - 17u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u + 1u);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.r[3].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    st8((c.r[19].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 109u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[19].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 72u));
    st32((c.r[19].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.budget -= 27;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[19].w[0] + 124u), c.f[0]);  if (t) { goto L_003A90E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A90EC; } }
L_003A90E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A90EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A9110:
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A9214; } }
    c.f[8] = ld32((c.r[4].w[0] + 168u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[8]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003A9158; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EB80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FFA0000u);
    c.r[3].d[0] = c.r[3].d[0] | 20972ull;
    c.r[2].d[0] = c.r[2].d[0] | 57671ull;
    c.f[0] = c.r[3].w[0];
    c.f[10] = c.r[2].w[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 32u)));  if (t) { goto L_003A916C; } }
L_003A9158:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F100000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC80000u);
    c.f[0] = c.r[3].w[0];
    c.f[10] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 5;
L_003A916C:
    c.f[5] = ld32((c.r[4].w[0] + 100u));
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.f[6] = ld32((c.r[4].w[0] + 96u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[8], c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 36u));
    c.f[7] = ld32((c.r[2].w[0] + 32u));
    c.f[4] = ld32((c.r[2].w[0] + 40u));
    c.f[2] = 0u;
    c.f[5] = fp::ee::sub(c.fcr31, c.f[5], c.f[3]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[6], c.f[7]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[9] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    fpu_compare(c, fp::key(c.f[9]) < fp::key(c.f[0]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003A921C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);
    c.r[2].d[0] = c.r[2].d[0] | 43579ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[5], c.f[5]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[9]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003A9224; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 112u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A922C; } }
    c.f[0] = ld32((c.r[4].w[0] + 88u));
    c.f[1] = ld32((c.r[4].w[0] + 80u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[4]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[7]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[6]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003A922C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003A927C; } }
L_003A9214:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003A927C; } }
L_003A921C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A927C; } }
L_003A9224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003A927C; } }
L_003A922C:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[8], c.f[10]);
    fpu_compare(c, fp::key(c.f[9]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003A9258; } }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 112u));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_003A927C; } }
L_003A9258:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.f[5] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003A9278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003A927C; } }
L_003A9278:
    set32(c.r[2], 0u + 8u);
    c.budget -= 1;
L_003A927C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A9290:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = ld8((c.r[4].w[0] + 111u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A92B8u); set32(c.r[4], ld32((c.r[4].w[0] + 40u)));  if (depth < kMaxDepth) unit_0053(c, 271u, depth + 1u); else { c.pc = 0x0034FC20u; return; } if (c.pc != 0x003A92B8u) [[unlikely]] return; }
L_003A92B8:
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 40u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 32ull;
    c.r[6].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = ld32((c.r[17].w[0] + 124u));  if (t) { goto L_003A92F8; } }
    c.r[2].d[0] = c.r[3].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003A92F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A9308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A93DC; } }
L_003A9308:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 800u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 91u));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A932C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A93DC; } }
L_003A932C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003A9854; } }
L_003A9334:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.f[0] = 0u;
    set32(c.r[2], ld32((c.r[2].w[0] + 752u)));
    c.f[3] = ld32((c.r[2].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003A986C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.f[0] = ld32((c.r[2].w[0] + 776u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.f[4] = c.f[0] & fp::kAbs;  if (t) { goto L_003A9874; } }
    c.f[2] = ld32((c.r[2].w[0] + 788u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 809u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003A9380; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003A939C; } }
L_003A9380:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003A939C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003A9874; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 3;
L_003A93C8:
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_003A93D8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A93D8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003A93DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A9504; } }
    c.f[1] = ld32((c.r[17].w[0] + 120u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x400C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003A9884; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 108u));
    c.budget -= 1;
L_003A9408:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A9898; } }
L_003A9410:
    st16((c.r[17].w[0] + 130u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 809u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003A9430; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003A944C; } }
L_003A9430:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003A944C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_003A94C4; } }
    c.f[2] = ld32((c.r[2].w[0] + 788u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 809u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003A9480; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003A949C; } }
L_003A9480:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003A949C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003A94C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 2;
L_003A94C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A94CCu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003A94CCu) [[unlikely]] return; }
L_003A94CC:
    c.f[2] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.f[0] = 0u;
    c.f[1] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A94FCu); st32((c.r[17].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003A94FCu) [[unlikely]] return; }
L_003A94FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A9ABC; } }
L_003A9504:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 108u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003A98DC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], c.r[3].w[0] + 8u);
    set32(c.r[3], ld32((c.r[3].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A9590; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
L_003A9538:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A9580; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003A9580; } }
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 213u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A9590; } }
L_003A9580:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9538u | kUnwind; return; } goto L_003A9538; } }
L_003A9590:
    set32(c.r[3], ld32((c.r[2].w[0] + 200u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[2].w[0] + 200u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.r[3].d[0] = c.r[7].d[0] << 56;
    set32(c.r[5], 0u + 10u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
L_003A95AC:
    c.r[6].d[0] = c.r[7].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[8], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[8].w[0] + 8u));
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003A9618; } }
    st8((c.r[8].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 64u);
    st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[6].w[0] + 1u);
    st32((c.r[8].w[0] + 16u), 0u);
    set32(c.r[3], 0u + 10u);
    st32((c.r[8].w[0] + 12u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 213u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003A98D4; } }
L_003A9610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 120u));  if (t) { goto L_003A964C; } }
L_003A9618:
    set32(c.r[4], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[4].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_003A9630; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A9630:
    c.r[4].d[0] = c.r[7].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A95ACu | kUnwind; return; } goto L_003A95AC; } }
    breakpoint(c, 0x003A9640u);
    c.r[8].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 3;
L_003A964C:
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[2], 0u - 9u);
    st32((c.r[8].w[0]), c.f[0]);
    st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 108u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 111u));
    set32(c.r[4], c.r[4].w[0] + 49u);
    st16((c.r[17].w[0] + 130u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 96u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 111u));
    st8((c.r[17].w[0] + 102u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), 0u);  if (t) { goto L_003A98DC; } }
L_003A9698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 188u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003A96A8; } }
L_003A96A0:
    set32(c.r[5], 0u + 1u);
    st8((c.r[3].w[0] + 188u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_003A96A8:
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[5], 0u - 9u);
    set32(c.r[4], c.r[4].w[0] - 49u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[7], c.r[4].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    c.f[0] = ld32((c.r[7].w[0] + 72u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[7].w[0] + 112u));
    set32(c.r[2], 0u - 129u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    st32((c.r[3].w[0] + 168u), c.f[0]);
    st32((c.r[3].w[0] + 164u), c.f[1]);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 56u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 56u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 40u));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 112u));
    c.r[5].d[0] = c.r[5].d[0] & 32ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[5].d[0] ^ 32ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 7);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[3].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A971Cu); set32(c.r[4], ld32((c.r[17].w[0] + 44u)));  if (depth < kMaxDepth) unit_006A(c, 50u, depth + 1u); else { c.pc = 0x003A9110u; return; } if (c.pc != 0x003A971Cu) [[unlikely]] return; }
L_003A971C:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_003A9928; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_003A9A94; } }
    c.f[1] = ld32((c.r[17].w[0] + 120u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 768u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003A977C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[2], 0u - 33u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 94u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_003A977C:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 121u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A97D0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 1416u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A97D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A97B0u); c.r[18].d[0] = ld8((c.r[17].w[0] + 111u));  if (depth < kMaxDepth) unit_0053(c, 271u, depth + 1u); else { c.pc = 0x0034FC20u; return; } if (c.pc != 0x003A97B0u) [[unlikely]] return; }
L_003A97B0:
    set32(c.r[4], c.r[18].w[0] << 1);
    set32(c.r[3], 0u + 64u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 40u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003A97D0; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.budget -= 1;
L_003A97D0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 103u));
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A9AB8; } }
    c.f[1] = ld32((c.r[17].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003A984C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 108u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A9844; } }
    st8((c.r[17].w[0] + 110u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull & 1ull;
    st8((c.r[17].w[0] + 111u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[2].w[0] << 4);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 109u));
    set32(c.r[3], 0u - 17u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[2].d[0] = c.r[2].d[0] | 62154ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    st8((c.r[17].w[0] + 108u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 112u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_003A9844:
    st16((c.r[17].w[0] + 130u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 80u), 0u);
    c.budget -= 2;
L_003A984C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A9ABC; } }
L_003A9854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A985Cu);  if (depth < kMaxDepth) unit_006B(c, 132u, depth + 1u); else { c.pc = 0x003AE0C0u; return; } if (c.pc != 0x003A985Cu) [[unlikely]] return; }
L_003A985C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9334u | kUnwind; return; } goto L_003A9334; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A93DCu | kUnwind; return; } goto L_003A93DC; } }
L_003A986C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A93DCu | kUnwind; return; } goto L_003A93DC; } }
L_003A9874:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A93C8u | kUnwind; return; } goto L_003A93C8; } }
L_003A9884:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9890u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 92u, depth + 1u); else { c.pc = 0x003A9E80u; return; } if (c.pc != 0x003A9890u) [[unlikely]] return; }
L_003A9890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[17].w[0] + 108u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9408u | kUnwind; return; } goto L_003A9408; } }
L_003A9898:
    st8((c.r[17].w[0] + 110u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull & 1ull;
    st8((c.r[17].w[0] + 111u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[2].w[0] << 4);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 109u));
    set32(c.r[3], 0u - 17u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[2].d[0] = c.r[2].d[0] | 62154ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    st8((c.r[17].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 112u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9410u | kUnwind; return; } goto L_003A9410; } }
L_003A98D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9610u | kUnwind; return; } goto L_003A9610; } }
L_003A98DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[1] = ld32((c.r[2].w[0] + 280u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 80u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 109u));
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9908u); c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0053(c, 271u, depth + 1u); else { c.pc = 0x0034FC20u; return; } if (c.pc != 0x003A9908u) [[unlikely]] return; }
L_003A9908:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 111u));
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], c.r[4].w[0] + 49u);
    st16((c.r[3].w[0] + 162u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[4].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A96A0u | kUnwind; return; } goto L_003A96A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9698u | kUnwind; return; } goto L_003A9698; } }
L_003A9928:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[5], 0u - 2u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[7].d[0] = ld8((c.r[2].w[0] + 94u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[2].w[0] + 94u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 94u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[2].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 95u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[8], 0u + 1u);  if (t) { goto L_003A9978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A9980; } }
L_003A9978:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.r[8].d[0] = ld8((c.r[3].w[0] + 1267u));
    c.budget -= 2;
L_003A9980:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_003A9A88; } }
    c.r[8].d[0] = ld8((c.r[2].w[0] + 95u));
    c.r[4].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 9u);
    set32(c.r[6], c.r[4].w[0] << 3);
    set32(c.r[7], 0u - 5u);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[3].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[2].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 95u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[2].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 16;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] + 64u);  if (t) { goto L_003A9A00; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A9A00; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 95u));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[2].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A99F8u); set32(c.r[4], ld32((c.r[2].w[0] + 40u)));  if (depth < kMaxDepth) unit_0063(c, 55u, depth + 1u); else { c.pc = 0x0038CB10u; return; } if (c.pc != 0x003A99F8u) [[unlikely]] return; }
L_003A99F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A9A8C; } }
L_003A9A00:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003A9A74; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A9A74; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 1388u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A9A3C; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 1396u)));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
L_003A9A3C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A9A74; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1497u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A9A74; } }
    c.r[5].d[0] = ld8((c.r[2].w[0] + 95u));
    set32(c.r[3], 0u - 9u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A9A88; } }
L_003A9A74:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003A9A88; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9A88u); set32(c.r[4], c.r[2].w[0] + 1072u);  if (depth < kMaxDepth) unit_0040(c, 35u, depth + 1u); else { c.pc = 0x00300C70u; return; } if (c.pc != 0x003A9A88u) [[unlikely]] return; }
L_003A9A88:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A9A8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003A9AC0; } }
L_003A9A94:
    set32(c.r[5], ld32((c.r[17].w[0] + 48u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], 0u - 33u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 94u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A977Cu | kUnwind; return; } goto L_003A977C; } }
L_003A9AB8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003A9ABC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003A9AC0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A9AE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 108u));
    c.r[17].d[0] = ld8((c.r[3].w[0] + 810u));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A9CD8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003A9CD8; } }
L_003A9B14:
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[2], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9B24u); c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0053(c, 271u, depth + 1u); else { c.pc = 0x0034FC20u; return; } if (c.pc != 0x003A9B24u) [[unlikely]] return; }
L_003A9B24:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[18].w[0] + 108u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A9D00; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 104u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A9B48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 104u)));  if (t) { goto L_003A9B70; } }
L_003A9B48:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[1] = ld32((c.r[2].w[0] + 768u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003A9B6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 2u);  if (t) { goto L_003A9B70; } }
L_003A9B6C:
    set32(c.r[8], 0u + 1u);
    c.budget -= 1;
L_003A9B70:
    c.r[7].d[0] = ld8((c.r[18].w[0] + 109u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 9u);
    set32(c.r[6], c.r[2].w[0] << 3);
    set32(c.r[4], 0u - 5u);
    set32(c.r[3], 0u - 2u);
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[18].w[0] + 109u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[18].w[0] + 112u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[6], ld32((c.r[18].w[0] + 44u)));
    c.r[5].d[0] = ld8((c.r[18].w[0] + 109u));
    c.r[6].d[0] = ld8((c.r[6].w[0] + 112u));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[5].d[0] = c.r[6].d[0] << 58;
    c.r[5].d[0] = c.r[5].d[0] >> 63;
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[18].w[0] + 109u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[18].w[0] + 44u)));
    c.r[4].d[0] = ld8((c.r[18].w[0] + 109u));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 187u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[18].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 108u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003A9D00; } }
L_003A9BF0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9BFCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x003A8F30u; return; } if (c.pc != 0x003A9BFCu) [[unlikely]] return; }
L_003A9BFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003A9C54; } }
L_003A9C04:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9C10u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 44u, depth + 1u); else { c.pc = 0x003A8D40u; return; } if (c.pc != 0x003A9C10u) [[unlikely]] return; }
L_003A9C10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A9C50; } }
L_003A9C18:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 108u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003A9D68; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003A9D30; } }
L_003A9C44:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_003A9C48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A9C50; } }
L_003A9C50:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003A9C54:
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_003A9D7C; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 108u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003A9C8C; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 109u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A9D84; } }
L_003A9C84:
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 108u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A9C8C:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 110u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 110u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[4].d[0] = ld8((c.r[18].w[0] + 110u));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A9DF4; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 109u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A9DAC; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 108u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A9DB8; } }
L_003A9CCC:
    st16((c.r[18].w[0] + 130u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_003A9CD0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9B14u | kUnwind; return; } goto L_003A9B14; } }
L_003A9CD8:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 108u));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A9CF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A9CF8; } }
L_003A9CF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9CF8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 51u, depth + 1u); else { c.pc = 0x003A9290u; return; } if (c.pc != 0x003A9CF8u) [[unlikely]] return; }
L_003A9CF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003A9E6C; } }
L_003A9D00:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 112u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9C18u | kUnwind; return; } goto L_003A9C18; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9C04u | kUnwind; return; } goto L_003A9C04; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9BF0u | kUnwind; return; } goto L_003A9BF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9C50u | kUnwind; return; } goto L_003A9C50; } }
L_003A9D30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9D38u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003A9D38u) [[unlikely]] return; }
L_003A9D38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9C44u | kUnwind; return; } goto L_003A9C44; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9D60u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003A9D60u) [[unlikely]] return; }
L_003A9D60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9C48u | kUnwind; return; } goto L_003A9C48; } }
L_003A9D68:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9D74u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x003A8F30u; return; } if (c.pc != 0x003A9D74u) [[unlikely]] return; }
L_003A9D74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9C48u | kUnwind; return; } goto L_003A9C48; } }
L_003A9D7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003A9E68; } }
L_003A9D84:
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], 0u + 3u);
    st32((c.r[4].w[0] + 164u), c.f[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 44u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 188u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9C84u | kUnwind; return; } goto L_003A9C84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 188u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9C84u | kUnwind; return; } goto L_003A9C84; } }
L_003A9DAC:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 108u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9CD8u | kUnwind; return; } goto L_003A9CD8; } }
L_003A9DB8:
    st8((c.r[18].w[0] + 110u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull & 1ull;
    st8((c.r[18].w[0] + 111u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[2].w[0] << 4);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 109u));
    set32(c.r[3], 0u - 17u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[2].d[0] = c.r[2].d[0] | 62154ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[18].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[18].w[0] + 116u), c.r[2].w[0]);
    st8((c.r[18].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 112u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9CCCu | kUnwind; return; } goto L_003A9CCC; } }
L_003A9DF4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9CD0u | kUnwind; return; } goto L_003A9CD0; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 109u));
    c.r[3].d[0] = c.r[4].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9CD0u | kUnwind; return; } goto L_003A9CD0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9CD0u | kUnwind; return; } goto L_003A9CD0; } }
    c.f[1] = ld32((c.r[18].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9CD0u | kUnwind; return; } goto L_003A9CD0; } }
    c.r[2].d[0] = c.r[4].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9CD0u | kUnwind; return; } goto L_003A9CD0; } }
    c.f[1] = ld32((c.r[18].w[0] + 72u));
    c.f[0] = ld32((c.r[18].w[0] + 124u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9CD0u | kUnwind; return; } goto L_003A9CD0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 108u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9CD8u | kUnwind; return; } goto L_003A9CD8; } }
L_003A9E68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003A9E6C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A9E80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 76u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003A9EB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003AA1A4; } }
L_003A9EB8:
    set32(c.r[5], ld32((c.r[18].w[0] + 48u)));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[2], 0u - 33u);
    set32(c.r[3], c.r[3].w[0] << 5);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 94u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9EE4u); set32(c.r[16], 0u - 1u);  if (depth < kMaxDepth) unit_0053(c, 271u, depth + 1u); else { c.pc = 0x0034FC20u; return; } if (c.pc != 0x003A9EE4u) [[unlikely]] return; }
L_003A9EE4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9EF4u); set32(c.r[5], 0u + 100u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003A9EF4u) [[unlikely]] return; }
L_003A9EF4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[8], 0u + 4u);
    set32(c.r[6], 0u + 2u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
L_003A9F0C:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_003A9FC0; } }
    c.r[9].d[0] = c.r[3].d[0] & 255ull;
    c.r[1].d[0] = c.r[9].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A9FC0; } }
    set32(c.r[7], c.r[19].w[0] + c.r[9].w[0]);
    c.r[11].d[0] = ld8((c.r[7].w[0] + 29u));
    c.r[1].d[0] = c.r[11].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A9F50; } }
L_003A9F38:
    c.r[7].d[0] = c.r[11].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] - c.r[7].w[0]);
    c.budget -= 2;
L_003A9F40:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9F0Cu | kUnwind; return; } goto L_003A9F0C; } }
    c.budget -= 1;
L_003A9F50:
    set32(c.r[7], c.r[9].w[0] << 1);
    set32(c.r[7], c.r[19].w[0] + c.r[7].w[0]);
    c.r[13].d[0] = c.r[10].d[0] + 0ull;
    c.r[9].d[0] = ld16((c.r[7].w[0] + 40u));
    c.r[7].d[0] = c.r[9].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != 0ull; c.r[12].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_003A9F80; } }
    c.r[7].d[0] = 0ull < c.r[9].d[0] ? 1ull : 0ull;
    c.r[7].d[0] = c.r[7].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_003A9F80; } }
    c.r[12].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A9F80:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { goto L_003A9F98; } }
    c.r[7].d[0] = c.r[9].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[8].d[0];  if (t) { goto L_003A9F98; } }
    c.r[13].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A9F98:
    c.budget -= 2;
    { const bool t = c.r[13].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9F38u | kUnwind; return; } goto L_003A9F38; } }
    c.r[7].d[0] = c.r[9].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9F38u | kUnwind; return; } goto L_003A9F38; } }
    c.r[16].d[0] = c.r[3].d[0] << 56;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9F40u | kUnwind; return; } goto L_003A9F40; } }
    c.budget -= 1;
L_003A9FC0:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_003AA1A0; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[5], c.r[3].w[0] + c.r[19].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 72u));
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 185u));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 852u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003AA1A0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003AA028; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003AA1A0; } }
L_003AA028:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], c.r[3].w[0] + 8u);
    set32(c.r[3], ld32((c.r[3].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AA0A8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 128u);
    c.budget -= 3;
L_003AA04C:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AA094; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003AA094; } }
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 213u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003AA0A8; } }
L_003AA094:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA04Cu | kUnwind; return; } goto L_003AA04C; } }
    c.budget -= 1;
L_003AA0A8:
    set32(c.r[3], ld32((c.r[2].w[0] + 200u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[2].w[0] + 200u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.r[3].d[0] = c.r[7].d[0] << 56;
    set32(c.r[5], 0u + 10u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
L_003AA0C4:
    c.r[6].d[0] = c.r[7].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[8], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[8].w[0] + 8u));
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003AA134; } }
    st8((c.r[8].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 128u);
    st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[6].w[0] + 1u);
    st32((c.r[8].w[0] + 16u), 0u);
    set32(c.r[3], 0u + 10u);
    st32((c.r[8].w[0] + 12u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 213u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003AA168; } }
    st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0]), c.f[1]);  if (t) { goto L_003AA16C; } }
L_003AA134:
    set32(c.r[4], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[4].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_003AA150; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003AA150:
    c.r[4].d[0] = c.r[7].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA0C4u | kUnwind; return; } goto L_003AA0C4; } }
    breakpoint(c, 0x003AA160u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003AA168:
    st32((c.r[8].w[0]), c.f[1]);
    c.budget -= 1;
L_003AA16C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA184u); st8((c.r[18].w[0] + 128u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003AA184u) [[unlikely]] return; }
L_003AA184:
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 76u), c.f[0]);
    c.budget -= 7;
L_003AA1A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003AA1A4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003AA1C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AA2D4; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AA2D4; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 97u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AA254; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], 0u + 1u);
    c.r[6].d[0] = ld8((c.r[5].w[0] + 293u));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003AA230; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003AA220; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = ld8((c.r[4].w[0] + 97u));  if (t) { goto L_003AA240; } }
L_003AA220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA228u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003AA228u) [[unlikely]] return; }
L_003AA228:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003AA344; } }
L_003AA230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA238u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003AA238u) [[unlikely]] return; }
L_003AA238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AA340; } }
L_003AA240:
    set32(c.r[3], 0u - 2u);
    c.r[5].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_003AA254:
    set32(c.r[6], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[6].w[0] + 284u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_003AA27C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 64u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003AA2E4; } }
L_003AA274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AA340; } }
L_003AA27C:
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 56u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AA2F4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 736u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AA304; } }
L_003AA2A4:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 98u));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_003AA2C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA2BCu); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 98u)));  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003AA2BCu) [[unlikely]] return; }
L_003AA2BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AA340; } }
L_003AA2C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA2CCu);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003AA2CCu) [[unlikely]] return; }
L_003AA2CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AA340; } }
L_003AA2D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA2DCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003AA2DCu) [[unlikely]] return; }
L_003AA2DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AA340; } }
L_003AA2E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA2ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003AA2ECu) [[unlikely]] return; }
L_003AA2EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA274u | kUnwind; return; } goto L_003AA274; } }
L_003AA2F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA2FCu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003AA2FCu) [[unlikely]] return; }
L_003AA2FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AA340; } }
L_003AA304:
    set32(c.r[2], ld32((c.r[6].w[0] + 252u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 544u));
    c.r[2].d[0] = c.r[3].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_003AA330; } }
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AA330; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AA330:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA2A4u | kUnwind; return; } goto L_003AA2A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA340u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003AA340u) [[unlikely]] return; }
L_003AA340:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003AA344:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AA350:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[7], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 222u)));
    set32(c.r[6], c.r[4].w[0] + 8u);
    st8((c.r[4].w[0] + 220u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 216u), c.r[7].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 18;
L_003AA398:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[7].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003AA408; } }
L_003AA3B8:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = c.r[7].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_003AB00C; } }
    c.budget -= 1;
L_003AA3D8:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[7].d[0];  if (t) { goto L_003AB018; } }
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA3B8u | kUnwind; return; } goto L_003AA3B8; } }
    c.budget -= 1;
L_003AA408:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[11], ld32((c.r[6].w[0] + 208u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[10], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[10].w[0] + 16u)));
    c.r[7].d[0] = c.r[7].d[0] & c.r[11].d[0];
    c.budget -= 10;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[8], c.r[10].w[0] + 16u);  if (t) { goto L_003AB020; } }
    set32(c.r[7], ld32((c.r[8].w[0])));
    c.r[7].d[0] = c.r[7].d[0] | c.r[11].d[0];
    st32((c.r[8].w[0]), c.r[7].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[7], ld32((c.r[6].w[0] + 204u)));
    set32(c.r[8], c.r[10].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0] + 12u)));
    c.r[7].d[0] = c.r[7].d[0] & c.r[8].d[0];
    c.budget -= 13;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_003AA498; } }
    set32(c.r[7], c.r[10].w[0] + 1u);
    st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = c.r[7].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_003AB040; } }
    c.budget -= 1;
L_003AA480:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_003AA498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003AA4B4; } }
L_003AA498:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA398u | kUnwind; return; } goto L_003AA398; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_003AA4B4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003AB388; } }
L_003AA4BC:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003AAEB0; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003AAB68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003AAAD0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003AAA6C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003AAA5C; } }
    set32(c.r[3], 0u + 8192u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003AA914; } }
    set32(c.r[3], 0u + 2048u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003AA7EC; } }
    set32(c.r[3], 0u + 256u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003AA714; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003AA598; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003AA540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 36u)));  if (t) { goto L_003AAEBC; } }
L_003AA540:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003AAEB8; } }
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 108u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AB048; } }
L_003AA560:
    st16((c.r[16].w[0] + 130u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = 0ull & 1ull;
    c.r[5].d[0] = ld8((c.r[16].w[0] + 96u));
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 72u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA590u); st32((c.r[16].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_006A(c, 101u, depth + 1u); else { c.pc = 0x003AA1C0u; return; } if (c.pc != 0x003AA590u) [[unlikely]] return; }
L_003AA590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AAEB8; } }
L_003AA598:
    set32(c.r[7], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_003AAEB8; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_003AAEB8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003AAEB8; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 752u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 800u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 92u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[6].w[0] + 752u);  if (t) { goto L_003AB084; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 49u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 97u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003AB084; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AA5F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AB0A8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 96u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AA698; } }
    c.f[3] = ld32((c.r[7].w[0] + 32u));
    c.f[2] = ld32((c.r[6].w[0] + 32u));
    c.f[1] = ld32((c.r[7].w[0] + 40u));
    c.f[0] = ld32((c.r[6].w[0] + 40u));
    c.f[20] = ld32((c.r[6].w[0] + 104u));
    c.f[21] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[22] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA630u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003AA630u) [[unlikely]] return; }
L_003AA630:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA63Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003AA63Cu) [[unlikely]] return; }
L_003AA63C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    c.f[4] = 0u;
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[20]);
    c.f[1] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003AA698; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 100u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 101u));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AB08C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA690u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003AA690u) [[unlikely]] return; }
L_003AA690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AAEB8; } }
L_003AA698:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 96u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AA700; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 801u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 752u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 97u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003AA6EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA6D0u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003AA6D0u) [[unlikely]] return; }
L_003AA6D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32506ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003AA700; } }
L_003AA6EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA6F8u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003AA6F8u) [[unlikely]] return; }
L_003AA6F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AAEB8; } }
L_003AA700:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA70Cu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003AA70Cu) [[unlikely]] return; }
L_003AA70C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AAEB8; } }
L_003AA714:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AAEB8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 256u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003AAEB8; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 284u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003AAEB8; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003AB0F8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 108u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AB0BC; } }
L_003AA75C:
    c.r[2].d[0] = c.r[6].d[0] & 65535ull;
    st16((c.r[16].w[0] + 130u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 49u);
    st32((c.r[16].w[0] + 116u), 0u);
    st8((c.r[16].w[0] + 111u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u - 9u);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 109u));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[2], 0u - 17u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 109u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 109u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 109u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA7A8u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_0053(c, 271u, depth + 1u); else { c.pc = 0x0034FC20u; return; } if (c.pc != 0x003AA7A8u) [[unlikely]] return; }
L_003AA7A8:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 111u));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 72u));
    st32((c.r[16].w[0] + 120u), c.f[0]);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 111u));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 112u));
    st32((c.r[16].w[0] + 124u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA7E4u); st8((c.r[16].w[0] + 108u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003AA7E4u) [[unlikely]] return; }
L_003AA7E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AAEB8; } }
L_003AA7EC:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003AAEB8; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003AAEB8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AAEB8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 809u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003AA830; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003AA84C; } }
L_003AA830:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003AA84C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_003AA8BC; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 809u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.f[2] = ld32((c.r[5].w[0] + 788u));  if (t) { goto L_003AA878; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003AA894; } }
L_003AA878:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003AA894:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003AA8BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 2;
L_003AA8BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA8C4u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003AA8C4u) [[unlikely]] return; }
L_003AA8C4:
    c.f[2] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[3], 0u + 19u);
    c.f[0] = 0u;
    c.f[1] = c.r[4].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    st32((c.r[16].w[0] + 72u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003AAEB8; } }
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.f[0]);  if (t) { goto L_003AAEB8; } }
L_003AA914:
    st32((c.r[16].w[0] + 92u), 0u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 284u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003AB160; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 295u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003AB158; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003AB158; } }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AA974; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 122u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AA974; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), 0u);  if (t) { goto L_003AAA4C; } }
L_003AA974:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 809u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003AA990; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003AA9AC; } }
L_003AA990:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003AA9AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_003AAA24; } }
    c.f[2] = ld32((c.r[2].w[0] + 788u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 809u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003AA9E0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003AA9FC; } }
L_003AA9E0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003AA9FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003AAA24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 2;
L_003AAA24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAA2Cu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003AAA2Cu) [[unlikely]] return; }
L_003AAA2C:
    c.f[2] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = 0u;
    c.f[1] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.budget -= 8;
L_003AAA4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAA54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 101u, depth + 1u); else { c.pc = 0x003AA1C0u; return; } if (c.pc != 0x003AAA54u) [[unlikely]] return; }
L_003AAA54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AAEB8; } }
L_003AAA5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAA64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 101u, depth + 1u); else { c.pc = 0x003AA1C0u; return; } if (c.pc != 0x003AAA64u) [[unlikely]] return; }
L_003AAA64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AAEB8; } }
L_003AAA6C:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 121u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003AAA9C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 122u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AAA9C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AAA9C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003AAEB8; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 4u));
    set32(c.r[3], 0u - 65u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 96u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 6);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 99u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003AAEB8; } }
L_003AAAD0:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 284u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003AB1C0; } }
L_003AAAE4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AB1CC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AAEB8; } }
    set32(c.r[5], c.r[3].w[0] + 752u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 809u));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_003AAB18; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003AAB34; } }
L_003AAB18:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_003AAB34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[4].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003AAEB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), 0u);  if (t) { goto L_003AB1D0; } }
L_003AAB68:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 4u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003AACD0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AACD0; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_003AACD0; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003AABA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AAEB8; } }
L_003AABA0:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 31748u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AACD0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003AACD0; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 552u));
    set32(c.r[3], 0u + 33u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003AACD0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 284u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_003AACD0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 809u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003AABF8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003AAC14; } }
L_003AABF8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003AAC14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_003AAC84; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 809u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.f[2] = ld32((c.r[5].w[0] + 788u));  if (t) { goto L_003AAC40; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003AAC5C; } }
L_003AAC40:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003AAC5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003AAC84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 2;
L_003AAC84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAC8Cu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003AAC8Cu) [[unlikely]] return; }
L_003AAC8C:
    c.f[2] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = 0u;
    c.f[1] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 64u));
    set32(c.r[3], c.r[3].w[0] - 7u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003AACD0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AACD0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003AACD0u) [[unlikely]] return; }
L_003AACD0:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = ld8((c.r[3].w[0] + 808u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; set32(c.r[7], c.r[3].w[0] + 752u);  if (t) { goto L_003AACEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_003AACF8; } }
L_003AACEC:
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 96u)));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.budget -= 3;
L_003AACF8:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003AAD30; } }
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_003AAD18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_003AAD24; } }
L_003AAD18:
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 102u)));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.budget -= 3;
L_003AAD24:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AAD4C; } }
L_003AAD30:
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 119u));
    c.r[4].d[0] = c.r[4].d[0] << 58;
    c.r[4].d[0] = c.r[4].d[0] >> 62;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AADF0; } }
L_003AAD4C:
    set32(c.r[6], ld32((c.r[7].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 48u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 92u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003AB1D8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 49u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 97u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003AB1D8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AAD7C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003AAD98; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 50u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 97u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003AADF0; } }
L_003AAD98:
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 284u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_003AADF0; } }
    set32(c.r[9], c.r[3].w[0] + 544u);
    set32(c.r[2], 0u + 61u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003AB1E0; } }
L_003AADC0:
    st32((c.r[16].w[0] + 72u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 97u));
    set32(c.r[2], 0u - 5u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AADF0u); st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003AADF0u) [[unlikely]] return; }
L_003AADF0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 96u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AAE2C; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 220u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AAE2C; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 4u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003AB230; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AB230; } }
L_003AAE2C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AAEB8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 36u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003AAEB8; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[17], ld32((c.r[16].w[0] + 36u)));
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AAEB8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 252u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 216u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AAEB8; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29239u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AAE88; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29240u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003AAE88:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AAEB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAEA0u); set32(c.r[4], ld32((c.r[17].w[0] + 264u)));  if (depth < kMaxDepth) unit_006C(c, 18u, depth + 1u); else { c.pc = 0x003B03A0u; return; } if (c.pc != 0x003AAEA0u) [[unlikely]] return; }
L_003AAEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAEA8u); set32(c.r[4], ld32((c.r[17].w[0] + 260u)));  if (depth < kMaxDepth) unit_0063(c, 62u, depth + 1u); else { c.pc = 0x0038CD20u; return; } if (c.pc != 0x003AAEA8u) [[unlikely]] return; }
L_003AAEA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AAEB8; } }
L_003AAEB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAEB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 101u, depth + 1u); else { c.pc = 0x003AA1C0u; return; } if (c.pc != 0x003AAEB8u) [[unlikely]] return; }
L_003AAEB8:
    set32(c.r[6], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_003AAEBC:
    set32(c.r[3], 0u + 10u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 220u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0] + 220u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[6].w[0] + 8u);  if (t) { goto L_003AB33C; } }
L_003AAEDC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003AB344; } }
    set32(c.r[3], 0u + 10u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
L_003AAEF8:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[11], c.r[4].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[11].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003AAF68; } }
L_003AAF18:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003AB34C; } }
    c.budget -= 1;
L_003AAF38:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_003AB358; } }
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[11], c.r[4].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[11].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAF18u | kUnwind; return; } goto L_003AAF18; } }
    c.budget -= 1;
L_003AAF68:
    set32(c.r[10], ld32((c.r[4].w[0] + 208u)));
    set32(c.r[6], ld32((c.r[11].w[0] + 16u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[10].d[0];
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[8], c.r[11].w[0] + 16u);  if (t) { goto L_003AB360; } }
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
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003AAFE0; } }
    set32(c.r[6], c.r[10].w[0] + 1u);
    st8((c.r[4].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_003AB380; } }
L_003AAFC8:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_003AAFE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003AAFFC; } }
L_003AAFE0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAEF8u | kUnwind; return; } goto L_003AAEF8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_003AAFFC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA4BCu | kUnwind; return; } goto L_003AA4BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AB388; } }
L_003AB00C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA3D8u | kUnwind; return; } goto L_003AA3D8; } }
    c.budget -= 1;
L_003AB018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA4B4u | kUnwind; return; } goto L_003AA4B4; } }
L_003AB020:
    st8((c.r[10].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[10].w[0] + 12u), c.r[5].w[0]);
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 213u)));
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 213u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA498u | kUnwind; return; } goto L_003AA498; } }
L_003AB040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA480u | kUnwind; return; } goto L_003AA480; } }
L_003AB048:
    st8((c.r[16].w[0] + 110u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 111u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull & 1ull;
    c.r[5].d[0] = ld8((c.r[16].w[0] + 109u));
    set32(c.r[3], 0u - 17u);
    set32(c.r[4], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[2].d[0] = c.r[2].d[0] | 62154ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA560u | kUnwind; return; } goto L_003AA560; } }
L_003AB084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA5F4u | kUnwind; return; } goto L_003AA5F4; } }
L_003AB08C:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 100u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB0A0u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003AB0A0u) [[unlikely]] return; }
L_003AB0A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAEB8u | kUnwind; return; } goto L_003AAEB8; } }
L_003AB0A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB0B4u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003AB0B4u) [[unlikely]] return; }
L_003AB0B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAEB8u | kUnwind; return; } goto L_003AAEB8; } }
L_003AB0BC:
    st8((c.r[16].w[0] + 110u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull & 1ull;
    st8((c.r[16].w[0] + 111u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[2].w[0] << 4);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 109u));
    set32(c.r[3], 0u - 17u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[2].d[0] = c.r[2].d[0] | 62154ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA75Cu | kUnwind; return; } goto L_003AA75C; } }
L_003AB0F8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 108u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AB11C; } }
L_003AB104:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB114u); st16((c.r[16].w[0] + 130u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003AB114u) [[unlikely]] return; }
L_003AB114:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAEB8u | kUnwind; return; } goto L_003AAEB8; } }
L_003AB11C:
    st8((c.r[16].w[0] + 110u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull & 1ull;
    st8((c.r[16].w[0] + 111u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[2].w[0] << 4);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 109u));
    set32(c.r[3], 0u - 17u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[2].d[0] = c.r[2].d[0] | 62154ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB104u | kUnwind; return; } goto L_003AB104; } }
L_003AB158:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAA4Cu | kUnwind; return; } goto L_003AAA4C; } }
L_003AB160:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], 0u + 388u);
    st16((c.r[2].w[0] + 162u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 108u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AB184; } }
L_003AB178:
    st16((c.r[16].w[0] + 130u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAA4Cu | kUnwind; return; } goto L_003AAA4C; } }
L_003AB184:
    st8((c.r[16].w[0] + 110u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull & 1ull;
    st8((c.r[16].w[0] + 111u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[2].w[0] << 4);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 109u));
    set32(c.r[3], 0u - 17u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[2].d[0] = c.r[2].d[0] | 62154ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB178u | kUnwind; return; } goto L_003AB178; } }
L_003AB1C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAAE4u | kUnwind; return; } goto L_003AAAE4; } }
L_003AB1CC:
    st32((c.r[16].w[0] + 72u), 0u);
    c.budget -= 1;
L_003AB1D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAEB8u | kUnwind; return; } goto L_003AAEB8; } }
L_003AB1D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAD7Cu | kUnwind; return; } goto L_003AAD7C; } }
L_003AB1E0:
    c.r[8].d[0] = ld16((c.r[9].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[6], 0u - 3u);
    set32(c.r[7], c.r[2].w[0] << 1);
    set32(c.r[4], 0u - 17u);
    set32(c.r[5], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] << 11);
    set32(c.r[2], 0u - 2049u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[9].w[0]));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[9].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AADC0u | kUnwind; return; } goto L_003AADC0; } }
L_003AB230:
    set32(c.r[4], ld32((c.r[5].w[0] + 344u)));
    set32(c.r[3], 0u + 83u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1564u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAE2Cu | kUnwind; return; } goto L_003AAE2C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 97u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AB32C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 809u));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_003AB274; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003AB290; } }
L_003AB274:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003AB290:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[0] = c.r[4].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[3] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 72u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAE2Cu | kUnwind; return; } goto L_003AAE2C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB2D4u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003AB2D4u) [[unlikely]] return; }
L_003AB2D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 752u)));
    set32(c.r[6], c.r[3].w[0] + 752u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 800u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 92u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003AB334; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 49u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 97u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003AB334; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AB30C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 97u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAE2Cu | kUnwind; return; } goto L_003AAE2C; } }
L_003AB32C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAE2Cu | kUnwind; return; } goto L_003AAE2C; } }
L_003AB334:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB30Cu | kUnwind; return; } goto L_003AB30C; } }
L_003AB33C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAEDCu | kUnwind; return; } goto L_003AAEDC; } }
L_003AB344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAFFCu | kUnwind; return; } goto L_003AAFFC; } }
L_003AB34C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAF38u | kUnwind; return; } goto L_003AAF38; } }
    c.budget -= 1;
L_003AB358:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAFFCu | kUnwind; return; } goto L_003AAFFC; } }
L_003AB360:
    st8((c.r[11].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[11].w[0] + 12u), c.r[7].w[0]);
    st8((c.r[11].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAFE0u | kUnwind; return; } goto L_003AAFE0; } }
L_003AB380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAFC8u | kUnwind; return; } goto L_003AAFC8; } }
L_003AB388:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003AB3B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003AB420; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 112u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AB420; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB3F4u);  if (depth < kMaxDepth) unit_006A(c, 73u, depth + 1u); else { c.pc = 0x003A9AE0u; return; } if (c.pc != 0x003AB3F4u) [[unlikely]] return; }
L_003AB3F4:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AB4C0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003AB494; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003AB4E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AB4CC; } }
L_003AB420:
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003AB4D4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 108u));
    c.budget -= 1;
L_003AB43C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AB47C; } }
    st8((c.r[16].w[0] + 110u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull & 1ull;
    st8((c.r[16].w[0] + 111u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[2].w[0] << 4);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 109u));
    set32(c.r[3], 0u - 17u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[2].d[0] = c.r[2].d[0] | 62154ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 108u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_003AB47C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB48Cu); st16((c.r[16].w[0] + 130u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003AB48Cu) [[unlikely]] return; }
L_003AB48C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AB4CC; } }
L_003AB494:
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 124u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003AB4C0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB4B8u); st32((c.r[16].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003AB4B8u) [[unlikely]] return; }
L_003AB4B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AB4CC; } }
L_003AB4C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB4CCu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003AB4CCu) [[unlikely]] return; }
L_003AB4CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003AB4EC; } }
L_003AB4D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB4E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 92u, depth + 1u); else { c.pc = 0x003A9E80u; return; } if (c.pc != 0x003AB4E0u) [[unlikely]] return; }
L_003AB4E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[16].w[0] + 108u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB43Cu | kUnwind; return; } goto L_003AB43C; } }
L_003AB4E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003AB4EC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AB500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 9u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    c.f[0] = ld32((c.r[4].w[0] + 76u));
    c.f[1] = ld32((c.r[5].w[0] + 280u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 76u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 64u));
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003AB550; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 56u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003ABD44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003ABEA8; } }
L_003AB550:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 64u));
    c.budget -= 1;
L_003AB554:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(19ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003ABD30; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 15872u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003A8000u < 16384u) { entry = entries_006A[(t - 0x003A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003AB57C:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AB5F8; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 128u);
    c.budget -= 3;
L_003AB5A0:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003AB5E8; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_003AB5E8; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003AB5F8; } }
L_003AB5E8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB5A0u | kUnwind; return; } goto L_003AB5A0; } }
L_003AB5F8:
    set32(c.r[4], ld32((c.r[3].w[0] + 200u)));
    c.r[4].d[0] = c.r[4].d[0] | 128ull;
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 7;
L_003AB614:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003AB680; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 128u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003ABD5C; } }
L_003AB678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_003AB6B4; } }
L_003AB680:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_003AB698; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AB698:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB614u | kUnwind; return; } goto L_003AB614; } }
    breakpoint(c, 0x003AB6A8u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 3;
L_003AB6B4:
    set32(c.r[3], 0u + 1u);
    st32((c.r[9].w[0]), c.r[4].w[0]);
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003ABD34; } }
L_003AB6C8:
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003ABD6C; } }
    c.r[4].d[0] = ld16((c.r[5].w[0] + 544u));
    c.r[4].d[0] = c.r[4].d[0] << 59;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 544u);  if (t) { goto L_003ABD6C; } }
    set32(c.r[6], ld32((c.r[5].w[0] + 752u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 800u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 93u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003ABD64; } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 94u));
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_003ABD64; } }
    c.r[13].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[11], 0u - 3u);
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[9], 0u - 17u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[7], 0u - 2049u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[5], 0u - 33u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[2], 0u + 9u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld16((c.r[3].w[0]));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[3].w[0]));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 96u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 72u), 0u);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB78Cu); st8((c.r[16].w[0] + 128u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 101u, depth + 1u); else { c.pc = 0x003AA1C0u; return; } if (c.pc != 0x003AB78Cu) [[unlikely]] return; }
L_003AB78C:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003AB790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003ABD34; } }
L_003AB798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB7A0u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_0053(c, 271u, depth + 1u); else { c.pc = 0x0034FC20u; return; } if (c.pc != 0x003AB7A0u) [[unlikely]] return; }
L_003AB7A0:
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[4].w[0] + 164u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 188u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003AB7D0; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[5].w[0] + 188u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003AB7D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AB820; } }
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003AB80C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB80Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 92u, depth + 1u); else { c.pc = 0x003A9E80u; return; } if (c.pc != 0x003AB80Cu) [[unlikely]] return; }
L_003AB80C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB818u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003AB818u) [[unlikely]] return; }
L_003AB818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003AB8A8; } }
L_003AB820:
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003AB874; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AB86C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 121u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AB86C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003AB878; } }
L_003AB86C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003AB878; } }
L_003AB874:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AB878:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003ABD84; } }
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003AB8A4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB8A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 92u, depth + 1u); else { c.pc = 0x003A9E80u; return; } if (c.pc != 0x003AB8A4u) [[unlikely]] return; }
L_003AB8A4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AB8A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003ABD34; } }
L_003AB8B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB8B8u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_0053(c, 271u, depth + 1u); else { c.pc = 0x0034FC20u; return; } if (c.pc != 0x003AB8B8u) [[unlikely]] return; }
L_003AB8B8:
    set32(c.r[4], 0u + 6u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[4].w[0] + 164u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 188u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003AB8E8; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[5].w[0] + 188u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003AB8E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003ABD98; } }
L_003AB900:
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003ABDA8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003ABDA0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 121u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003ABDA0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AB94C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003ABDB0; } }
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003ABDC4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AB970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003ABD34; } }
L_003AB978:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 96u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003ABA74; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 121u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003AB9BC; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 122u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AB9BC; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AB9BC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003ABA74; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 236u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003ABDD8; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] ^ 3ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AB9F4; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 29u));
    c.r[3].d[0] = c.r[3].d[0] ^ 3ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_003AB9F4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003ABDD8; } }
L_003AB9FC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003ABA74; } }
    c.f[1] = ld32((c.r[5].w[0] + 768u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003ABA74; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 99u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], ld32((c.r[16].w[0] + 44u)));  if (t) { goto L_003ABDE0; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 185u));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003ABA54; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_003ABA54:
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_003ABA58:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003ABA74; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABA6Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003ABA6Cu) [[unlikely]] return; }
L_003ABA6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003ABA78; } }
L_003ABA74:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003ABA78:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003ABD34; } }
L_003ABA80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABA88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 161u, depth + 1u); else { c.pc = 0x003AB3B0u; return; } if (c.pc != 0x003ABA88u) [[unlikely]] return; }
L_003ABA88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003ABD34; } }
L_003ABA90:
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003ABDE8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_003ABAAC:
    set32(c.r[3], c.r[2].w[0] + 8u);
    set32(c.r[2], ld32((c.r[2].w[0] + 208u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ABB28; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], 0u + 16384u);
    c.budget -= 3;
L_003ABACC:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003ABB14; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_003ABB14; } }
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 213u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003ABB28; } }
L_003ABB14:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABACCu | kUnwind; return; } goto L_003ABACC; } }
    c.budget -= 1;
L_003ABB28:
    set32(c.r[2], ld32((c.r[3].w[0] + 200u)));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st32((c.r[3].w[0] + 200u), c.r[2].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[5], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 7;
L_003ABB44:
    c.r[7].d[0] = c.r[8].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[2].w[0] + 8u));
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003ABBB0; } }
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 16384u);
    st8((c.r[2].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[7].w[0] + 1u);
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[4], 0u + 10u);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 213u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003ABE04; } }
L_003ABBA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[16].w[0] + 56u)));  if (t) { goto L_003ABBE4; } }
L_003ABBB0:
    set32(c.r[2], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[2].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[5].d[0];  if (t) { goto L_003ABBC8; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003ABBC8:
    c.r[2].d[0] = c.r[8].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABB44u | kUnwind; return; } goto L_003ABB44; } }
    breakpoint(c, 0x003ABBD8u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
L_003ABBE4:
    set32(c.r[7], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 13u);
    st32((c.r[2].w[0]), c.r[8].w[0]);
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 9u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABC0Cu); st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003ABC0Cu) [[unlikely]] return; }
L_003ABC0C:
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003ABE0C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_003ABC28:
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003ABE28; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003ABC40:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003ABD34; } }
L_003ABC48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABC50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 26u, depth + 1u); else { c.pc = 0x003A86E0u; return; } if (c.pc != 0x003ABC50u) [[unlikely]] return; }
L_003ABC50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003ABD34; } }
L_003ABC58:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003ABE44; } }
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.budget -= 1;
L_003ABC74:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003ABE60; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003ABD34; } }
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 98u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABCB4u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003ABCB4u) [[unlikely]] return; }
L_003ABCB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003ABD34; } }
L_003ABCBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABCC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 35u, depth + 1u); else { c.pc = 0x003A88F0u; return; } if (c.pc != 0x003ABCC4u) [[unlikely]] return; }
L_003ABCC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003ABD34; } }
L_003ABCCC:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003ABE7C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003ABE7C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003ABD04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003ABD34; } }
L_003ABD0C:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003ABE90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003ABD34; } }
L_003ABD30:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003ABD34:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB550u | kUnwind; return; } goto L_003AB550; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003ABEA4; } }
L_003ABD44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABD4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 92u, depth + 1u); else { c.pc = 0x003A9E80u; return; } if (c.pc != 0x003ABD4Cu) [[unlikely]] return; }
L_003ABD4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABD54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 101u, depth + 1u); else { c.pc = 0x003AA1C0u; return; } if (c.pc != 0x003ABD54u) [[unlikely]] return; }
L_003ABD54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 64u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB554u | kUnwind; return; } goto L_003AB554; } }
L_003ABD5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB678u | kUnwind; return; } goto L_003AB678; } }
L_003ABD64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB790u | kUnwind; return; } goto L_003AB790; } }
L_003ABD6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABD74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 101u, depth + 1u); else { c.pc = 0x003AA1C0u; return; } if (c.pc != 0x003ABD74u) [[unlikely]] return; }
L_003ABD74:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 64u));
    c.r[3].d[0] = c.r[3].d[0] ^ 10ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB790u | kUnwind; return; } goto L_003AB790; } }
L_003ABD84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABD90u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003ABD90u) [[unlikely]] return; }
L_003ABD90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB8A8u | kUnwind; return; } goto L_003AB8A8; } }
L_003ABD98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB900u | kUnwind; return; } goto L_003AB900; } }
L_003ABDA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB94Cu | kUnwind; return; } goto L_003AB94C; } }
L_003ABDA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB94Cu | kUnwind; return; } goto L_003AB94C; } }
L_003ABDB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABDBCu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003ABDBCu) [[unlikely]] return; }
L_003ABDBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB970u | kUnwind; return; } goto L_003AB970; } }
L_003ABDC4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABDD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 92u, depth + 1u); else { c.pc = 0x003A9E80u; return; } if (c.pc != 0x003ABDD0u) [[unlikely]] return; }
L_003ABDD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB970u | kUnwind; return; } goto L_003AB970; } }
L_003ABDD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB9FCu | kUnwind; return; } goto L_003AB9FC; } }
L_003ABDE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABA58u | kUnwind; return; } goto L_003ABA58; } }
L_003ABDE8:
    st32((c.r[16].w[0] + 76u), c.f[0]);
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 98u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABDFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 101u, depth + 1u); else { c.pc = 0x003AA1C0u; return; } if (c.pc != 0x003ABDFCu) [[unlikely]] return; }
L_003ABDFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABAACu | kUnwind; return; } goto L_003ABAAC; } }
L_003ABE04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABBA8u | kUnwind; return; } goto L_003ABBA8; } }
L_003ABE0C:
    st32((c.r[16].w[0] + 76u), c.f[0]);
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 98u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABE20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 101u, depth + 1u); else { c.pc = 0x003AA1C0u; return; } if (c.pc != 0x003ABE20u) [[unlikely]] return; }
L_003ABE20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 40u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABC28u | kUnwind; return; } goto L_003ABC28; } }
L_003ABE28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABE3Cu); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003ABE3Cu) [[unlikely]] return; }
L_003ABE3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABC40u | kUnwind; return; } goto L_003ABC40; } }
L_003ABE44:
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 98u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABE58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 101u, depth + 1u); else { c.pc = 0x003AA1C0u; return; } if (c.pc != 0x003ABE58u) [[unlikely]] return; }
L_003ABE58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 76u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABC74u | kUnwind; return; } goto L_003ABC74; } }
L_003ABE60:
    st32((c.r[16].w[0] + 76u), c.f[0]);
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 98u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABE74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 101u, depth + 1u); else { c.pc = 0x003AA1C0u; return; } if (c.pc != 0x003ABE74u) [[unlikely]] return; }
L_003ABE74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABD34u | kUnwind; return; } goto L_003ABD34; } }
L_003ABE7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABE88u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003ABE88u) [[unlikely]] return; }
L_003ABE88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABD04u | kUnwind; return; } goto L_003ABD04; } }
L_003ABE90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABE9Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003ABE9Cu) [[unlikely]] return; }
L_003ABE9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABD34u | kUnwind; return; } goto L_003ABD34; } }
L_003ABEA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003ABEA8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003ABEC0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 64u));
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003ABF70; } }
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(19ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003ABF70; } }
    set32(c.r[3], c.r[6].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], c.r[6].w[0] + 15952u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003A8000u < 16384u) { entry = entries_006A[(t - 0x003A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003ABEF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003ABF70; } }
L_003ABF00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003ABF70; } }
L_003ABF08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003ABF70; } }
L_003ABF10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003ABF70; } }
L_003ABF18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003ABF70; } }
L_003ABF20:
    set32(c.r[3], 0u + 50u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003ABF70; } }
L_003ABF2C:
    set32(c.r[3], 0u + 50u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003ABF70; } }
L_003ABF38:
    set32(c.r[3], 0u + 50u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003ABF70; } }
L_003ABF44:
    set32(c.r[3], 0u + 50u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003ABF70; } }
L_003ABF50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003ABF70; } }
L_003ABF58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003ABF70; } }
L_003ABF60:
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 98u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
L_003ABF70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003ABF80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 296u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_006B(c, 10u, depth); } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 16032u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003A8000u < 16384u) { entry = entries_006A[(t - 0x003A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003ABFD0:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003ABFD4:
    st32((c.r[18].w[0] + 72u), 0u);
    c.budget -= 1;
L_003ABFD8:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABFE4u); set32(c.r[4], c.r[2].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 167u, depth + 1u); else { c.pc = 0x00396A70u; return; } if (c.pc != 0x003ABFE4u) [[unlikely]] return; }
L_003ABFE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_006B(c, 10u, depth); } }
L_003ABFEC:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABFFCu); set32(c.r[4], c.r[2].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 165u, depth + 1u); else { c.pc = 0x003969D0u; return; } if (c.pc != 0x003ABFFCu) [[unlikely]] return; }
L_003ABFFC:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 1;
    [[clang::musttail]] return unit_006B(c, 1u, depth);
}

}

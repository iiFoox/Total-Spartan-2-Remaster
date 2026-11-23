#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0097[4096] = {
    1, 2, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0,
    0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0,
    0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31,
    0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0,
    0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 54, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 65, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0,
    0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0,
    0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 153,
    0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0,
    0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0,
    0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 189, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0,
    200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0,
    240, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0,
    0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 265, 0,
};

void unit_0097(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0045C000;
    case 2u: goto L_0045C004;
    case 3u: goto L_0045C010;
    case 4u: goto L_0045C018;
    case 5u: goto L_0045C060;
    case 6u: goto L_0045C100;
    case 7u: goto L_0045C140;
    case 8u: goto L_0045C1EC;
    case 9u: goto L_0045C228;
    case 10u: goto L_0045C268;
    case 11u: goto L_0045C284;
    case 12u: goto L_0045C308;
    case 13u: goto L_0045C348;
    case 14u: goto L_0045C360;
    case 15u: goto L_0045C390;
    case 16u: goto L_0045C3A0;
    case 17u: goto L_0045C3C8;
    case 18u: goto L_0045C3F0;
    case 19u: goto L_0045C404;
    case 20u: goto L_0045C418;
    case 21u: goto L_0045C42C;
    case 22u: goto L_0045C43C;
    case 23u: goto L_0045C444;
    case 24u: goto L_0045C478;
    case 25u: goto L_0045C480;
    case 26u: goto L_0045C4A4;
    case 27u: goto L_0045C4AC;
    case 28u: goto L_0045C4C8;
    case 29u: goto L_0045C4D0;
    case 30u: goto L_0045C4F4;
    case 31u: goto L_0045C4FC;
    case 32u: goto L_0045C518;
    case 33u: goto L_0045C520;
    case 34u: goto L_0045C544;
    case 35u: goto L_0045C54C;
    case 36u: goto L_0045C558;
    case 37u: goto L_0045C588;
    case 38u: goto L_0045C638;
    case 39u: goto L_0045C718;
    case 40u: goto L_0045C7FC;
    case 41u: goto L_0045C810;
    case 42u: goto L_0045C970;
    case 43u: goto L_0045C994;
    case 44u: goto L_0045C9DC;
    case 45u: goto L_0045C9E4;
    case 46u: goto L_0045CA00;
    case 47u: goto L_0045CBF4;
    case 48u: goto L_0045CC20;
    case 49u: goto L_0045CC50;
    case 50u: goto L_0045CC64;
    case 51u: goto L_0045CC88;
    case 52u: goto L_0045CD10;
    case 53u: goto L_0045CD20;
    case 54u: goto L_0045CD28;
    case 55u: goto L_0045CD30;
    case 56u: goto L_0045CD38;
    case 57u: goto L_0045CD54;
    case 58u: goto L_0045CD64;
    case 59u: goto L_0045CD90;
    case 60u: goto L_0045CDA0;
    case 61u: goto L_0045CDC0;
    case 62u: goto L_0045CDD0;
    case 63u: goto L_0045CDDC;
    case 64u: goto L_0045CE00;
    case 65u: goto L_0045D004;
    case 66u: goto L_0045D008;
    case 67u: goto L_0045D050;
    case 68u: goto L_0045D090;
    case 69u: goto L_0045D134;
    case 70u: goto L_0045D150;
    case 71u: goto L_0045D1DC;
    case 72u: goto L_0045D200;
    case 73u: goto L_0045D238;
    case 74u: goto L_0045D290;
    case 75u: goto L_0045D2C0;
    case 76u: goto L_0045D390;
    case 77u: goto L_0045D424;
    case 78u: goto L_0045D468;
    case 79u: goto L_0045D524;
    case 80u: goto L_0045D584;
    case 81u: goto L_0045D5A8;
    case 82u: goto L_0045D618;
    case 83u: goto L_0045D64C;
    case 84u: goto L_0045D670;
    case 85u: goto L_0045D700;
    case 86u: goto L_0045D7B4;
    case 87u: goto L_0045D804;
    case 88u: goto L_0045D80C;
    case 89u: goto L_0045D83C;
    case 90u: goto L_0045D868;
    case 91u: goto L_0045D91C;
    case 92u: goto L_0045D988;
    case 93u: goto L_0045DA34;
    case 94u: goto L_0045DB14;
    case 95u: goto L_0045DB88;
    case 96u: goto L_0045DD98;
    case 97u: goto L_0045DE54;
    case 98u: goto L_0045DEE8;
    case 99u: goto L_0045DF64;
    case 100u: goto L_0045E150;
    case 101u: goto L_0045E1C0;
    case 102u: goto L_0045E1E8;
    case 103u: goto L_0045E208;
    case 104u: goto L_0045E210;
    case 105u: goto L_0045E234;
    case 106u: goto L_0045E27C;
    case 107u: goto L_0045E2D0;
    case 108u: goto L_0045E300;
    case 109u: goto L_0045E350;
    case 110u: goto L_0045E358;
    case 111u: goto L_0045E38C;
    case 112u: goto L_0045E398;
    case 113u: goto L_0045E3F8;
    case 114u: goto L_0045E440;
    case 115u: goto L_0045E478;
    case 116u: goto L_0045E4A8;
    case 117u: goto L_0045E4F0;
    case 118u: goto L_0045E51C;
    case 119u: goto L_0045E538;
    case 120u: goto L_0045E560;
    case 121u: goto L_0045E5B0;
    case 122u: goto L_0045E5E8;
    case 123u: goto L_0045E5F4;
    case 124u: goto L_0045E60C;
    case 125u: goto L_0045E6B0;
    case 126u: goto L_0045E6D0;
    case 127u: goto L_0045E6E8;
    case 128u: goto L_0045E740;
    case 129u: goto L_0045E7A8;
    case 130u: goto L_0045E7E0;
    case 131u: goto L_0045E810;
    case 132u: goto L_0045E828;
    case 133u: goto L_0045E840;
    case 134u: goto L_0045E854;
    case 135u: goto L_0045E870;
    case 136u: goto L_0045E888;
    case 137u: goto L_0045E898;
    case 138u: goto L_0045E8B0;
    case 139u: goto L_0045E8F0;
    case 140u: goto L_0045E91C;
    case 141u: goto L_0045E930;
    case 142u: goto L_0045E94C;
    case 143u: goto L_0045E970;
    case 144u: goto L_0045E9A0;
    case 145u: goto L_0045E9C0;
    case 146u: goto L_0045EA00;
    case 147u: goto L_0045EA20;
    case 148u: goto L_0045EAA0;
    case 149u: goto L_0045EAC0;
    case 150u: goto L_0045EACC;
    case 151u: goto L_0045EAE0;
    case 152u: goto L_0045EAEC;
    case 153u: goto L_0045EAFC;
    case 154u: goto L_0045EB20;
    case 155u: goto L_0045EB40;
    case 156u: goto L_0045EB50;
    case 157u: goto L_0045EB58;
    case 158u: goto L_0045EB88;
    case 159u: goto L_0045EBE0;
    case 160u: goto L_0045EC14;
    case 161u: goto L_0045EC30;
    case 162u: goto L_0045EC40;
    case 163u: goto L_0045EC70;
    case 164u: goto L_0045ECA0;
    case 165u: goto L_0045ECD0;
    case 166u: goto L_0045ED40;
    case 167u: goto L_0045ED68;
    case 168u: goto L_0045EDB8;
    case 169u: goto L_0045EDD8;
    case 170u: goto L_0045EE04;
    case 171u: goto L_0045EE70;
    case 172u: goto L_0045EEAC;
    case 173u: goto L_0045EEE8;
    case 174u: goto L_0045EF14;
    case 175u: goto L_0045EF20;
    case 176u: goto L_0045EF3C;
    case 177u: goto L_0045EF48;
    case 178u: goto L_0045EF64;
    case 179u: goto L_0045EF70;
    case 180u: goto L_0045EF88;
    case 181u: goto L_0045EFC4;
    case 182u: goto L_0045EFE4;
    case 183u: goto L_0045EFF8;
    case 184u: goto L_0045F018;
    case 185u: goto L_0045F028;
    case 186u: goto L_0045F044;
    case 187u: goto L_0045F05C;
    case 188u: goto L_0045F070;
    case 189u: goto L_0045F078;
    case 190u: goto L_0045F0D8;
    case 191u: goto L_0045F14C;
    case 192u: goto L_0045F1A0;
    case 193u: goto L_0045F1B0;
    case 194u: goto L_0045F1C4;
    case 195u: goto L_0045F1CC;
    case 196u: goto L_0045F1E0;
    case 197u: goto L_0045F2DC;
    case 198u: goto L_0045F2F0;
    case 199u: goto L_0045F374;
    case 200u: goto L_0045F380;
    case 201u: goto L_0045F418;
    case 202u: goto L_0045F580;
    case 203u: goto L_0045F594;
    case 204u: goto L_0045F59C;
    case 205u: goto L_0045F5C0;
    case 206u: goto L_0045F5D0;
    case 207u: goto L_0045F5E4;
    case 208u: goto L_0045F720;
    case 209u: goto L_0045F73C;
    case 210u: goto L_0045F754;
    case 211u: goto L_0045F768;
    case 212u: goto L_0045F780;
    case 213u: goto L_0045F7E4;
    case 214u: goto L_0045F80C;
    case 215u: goto L_0045F818;
    case 216u: goto L_0045F850;
    case 217u: goto L_0045F890;
    case 218u: goto L_0045F8BC;
    case 219u: goto L_0045F8C8;
    case 220u: goto L_0045F91C;
    case 221u: goto L_0045F944;
    case 222u: goto L_0045F960;
    case 223u: goto L_0045FA3C;
    case 224u: goto L_0045FA80;
    case 225u: goto L_0045FA90;
    case 226u: goto L_0045FAB4;
    case 227u: goto L_0045FAC8;
    case 228u: goto L_0045FB0C;
    case 229u: goto L_0045FB3C;
    case 230u: goto L_0045FB4C;
    case 231u: goto L_0045FB64;
    case 232u: goto L_0045FB78;
    case 233u: goto L_0045FBD0;
    case 234u: goto L_0045FBE0;
    case 235u: goto L_0045FC70;
    case 236u: goto L_0045FC90;
    case 237u: goto L_0045FCB0;
    case 238u: goto L_0045FCCC;
    case 239u: goto L_0045FCE0;
    case 240u: goto L_0045FD00;
    case 241u: goto L_0045FD14;
    case 242u: goto L_0045FD24;
    case 243u: goto L_0045FD40;
    case 244u: goto L_0045FD94;
    case 245u: goto L_0045FDA4;
    case 246u: goto L_0045FDC0;
    case 247u: goto L_0045FDD0;
    case 248u: goto L_0045FDE0;
    case 249u: goto L_0045FDF0;
    case 250u: goto L_0045FE04;
    case 251u: goto L_0045FE30;
    case 252u: goto L_0045FE64;
    case 253u: goto L_0045FE94;
    case 254u: goto L_0045FEA0;
    case 255u: goto L_0045FEB8;
    case 256u: goto L_0045FEC8;
    case 257u: goto L_0045FED8;
    case 258u: goto L_0045FEF4;
    case 259u: goto L_0045FF20;
    case 260u: goto L_0045FF2C;
    case 261u: goto L_0045FF3C;
    case 262u: goto L_0045FF70;
    case 263u: goto L_0045FFA4;
    case 264u: goto L_0045FFF4;
    case 265u: goto L_0045FFF8;
    default: bad_entry(c, 0x0045C000u); return;
    }
L_0045C000:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045C004:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045C010; } }
    st32((c.r[3].w[0] + 1568u), c.r[19].w[0]);
    c.budget -= 1;
L_0045C010:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_0045C3F8; } }
L_0045C018:
    set32(c.r[4], c.r[20].w[0] + 3u);
    set32(c.r[3], 0u - 4u);
    set32(c.r[2], c.r[29].w[0] + 192u);
    c.r[20].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[6], c.r[2].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 1232u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    st32((c.r[19].w[0]), c.r[16].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[2].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0045C120; } }
    set32(c.r[2], c.r[29].w[0] + 208u);
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[29].w[0] + 1104u);  if (t) { goto L_0045C0F0; } }
L_0045C060:
    st32((c.r[6].w[0]), 0u);
    st32((c.r[6].w[0] + 4u), 0u);
    st32((c.r[6].w[0] + 8u), 0u);
    st32((c.r[6].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 16u), 0u);
    st32((c.r[6].w[0] + 20u), 0u);
    st32((c.r[6].w[0] + 24u), 0u);
    st32((c.r[6].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 32u), 0u);
    st32((c.r[6].w[0] + 36u), 0u);
    st32((c.r[6].w[0] + 40u), 0u);
    st32((c.r[6].w[0] + 44u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 48u), 0u);
    st32((c.r[6].w[0] + 52u), 0u);
    st32((c.r[6].w[0] + 56u), 0u);
    st32((c.r[6].w[0] + 60u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 64u), 0u);
    st32((c.r[6].w[0] + 68u), 0u);
    st32((c.r[6].w[0] + 72u), 0u);
    st32((c.r[6].w[0] + 76u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 80u), 0u);
    st32((c.r[6].w[0] + 84u), 0u);
    st32((c.r[6].w[0] + 88u), 0u);
    st32((c.r[6].w[0] + 92u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 96u), 0u);
    st32((c.r[6].w[0] + 100u), 0u);
    st32((c.r[6].w[0] + 104u), 0u);
    st32((c.r[6].w[0] + 108u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 112u), 0u);
    st32((c.r[6].w[0] + 116u), 0u);
    st32((c.r[6].w[0] + 120u), 0u);
    st32((c.r[6].w[0] + 124u), c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 128u);
    c.r[2].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 36;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045C060u | kUnwind; return; } goto L_0045C060; } }
L_0045C0F0:
    c.r[1].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0045C120; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0045C100:
    st32((c.r[6].w[0]), 0u);
    st32((c.r[6].w[0] + 4u), 0u);
    st32((c.r[6].w[0] + 8u), 0u);
    st32((c.r[6].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[2].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045C100u | kUnwind; return; } goto L_0045C100; } }
L_0045C120:
    c.r[1].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0045C210; } }
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] - 8u);  if (t) { goto L_0045C1D0; } }
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F800000u);
    c.budget -= 2;
L_0045C140:
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 124u), c.r[3].w[0]);
    c.budget -= 36;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 128u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045C140u | kUnwind; return; } goto L_0045C140; } }
L_0045C1D0:
    c.r[1].d[0] = c.r[6].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0045C210; } }
    set32(c.r[2], c.r[6].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F800000u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[2].w[0] + 192u);
    c.budget -= 4;
L_0045C1EC:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[6].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045C1ECu | kUnwind; return; } goto L_0045C1EC; } }
    c.budget -= 1;
L_0045C210:
    set32(c.r[3], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[22].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 220u)));
    set32(c.r[2], c.r[2].w[0] + 384u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C228u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0011(c, 350u, depth + 1u); else { c.pc = 0x002475B0u; return; } if (c.pc != 0x0045C228u) [[unlikely]] return; }
L_0045C228:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[30].d[0] & 1ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[4], c.r[29].w[0] + 1280u);
    set32(c.r[7], c.r[2].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 28560u)));
    set32(c.r[6], 0u + 12u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[21], ld32((c.r[2].w[0])));
    st16((c.r[21].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st32((c.r[21].w[0] + 20u), 0u);
    st32((c.r[21].w[0] + 24u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C268u); st32((c.r[21].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0045C268u) [[unlikely]] return; }
L_0045C268:
    c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0045C328; } }
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] - 8u);  if (t) { goto L_0045C2F8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045C284:
    set32(c.r[7], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.r[6].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[7], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[7], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[7], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0] + 28u), c.r[17].w[0]);
    set32(c.r[7], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0] + 36u), c.r[17].w[0]);
    set32(c.r[7], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0] + 44u), c.r[17].w[0]);
    set32(c.r[7], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0] + 52u), c.r[17].w[0]);
    set32(c.r[7], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0] + 60u), c.r[17].w[0]);
    c.budget -= 28;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045C284u | kUnwind; return; } goto L_0045C284; } }
    c.budget -= 1;
L_0045C2F8:
    c.r[1].d[0] = c.r[5].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0045C328; } }
    set32(c.r[6], c.r[5].w[0] << 3);
    c.budget -= 1;
L_0045C308:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045C308u | kUnwind; return; } goto L_0045C308; } }
    c.budget -= 1;
L_0045C328:
    c.r[1].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_0045C7C8; } }
    set32(c.r[5], 0u - 1u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[18].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[29].w[0] + 1280u);
    c.budget -= 5;
L_0045C348:
    c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[12].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_0045C3B8; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0045C360:
    set32(c.r[10], ld32((c.r[19].w[0] + 4u)));
    c.r[14].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 4;
    { const bool t = c.r[14].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + c.r[7].w[0]);  if (t) { goto L_0045C390; } }
    c.r[15].d[0] = ld8((c.r[20].w[0]));
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_0045C678; } }
    set32(c.r[14], ld32((c.r[10].w[0])));
    set32(c.r[14], c.r[13].w[0] + c.r[14].w[0]);
    st8((c.r[14].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.budget -= 4;
L_0045C390:
    c.r[14].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = c.r[14].d[0] != 0ull;  if (t) { goto L_0045C690; } }
    c.budget -= 1;
L_0045C3A0:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[10].d[0] = c.r[11].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.budget -= 5;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045C360u | kUnwind; return; } goto L_0045C360; } }
    c.budget -= 1;
L_0045C3B8:
    c.r[6].d[0] = c.r[12].d[0] & 3ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0045C6A8; } }
    c.budget -= 1;
L_0045C3C8:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.r[6].d[0] = c.r[12].d[0] & 3ull;
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045C3C8u | kUnwind; return; } goto L_0045C3C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0045C6A8; } }
    c.budget -= 1;
L_0045C3F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_0045C940; } }
L_0045C3F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C404u); set32(c.r[4], c.r[4].w[0] + 20768u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0045C404u) [[unlikely]] return; }
L_0045C404:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 20768u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C418u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 67u, depth + 1u); else { c.pc = 0x002352D0u; return; } if (c.pc != 0x0045C418u) [[unlikely]] return; }
L_0045C418:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045C578; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C42Cu); set32(c.r[4], c.r[4].w[0] + 20768u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0045C42Cu) [[unlikely]] return; }
L_0045C42C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C43Cu); set32(c.r[4], c.r[4].w[0] + 20768u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0045C43Cu) [[unlikely]] return; }
L_0045C43C:
    set32(c.r[21], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 88u);
    c.budget -= 2;
L_0045C444:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045C444u | kUnwind; return; } goto L_0045C444; } }
    set32(c.r[4], c.r[29].w[0] + 1232u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 20u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C478u); set32(c.r[21], c.r[21].w[0] + 1u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0045C478u) [[unlikely]] return; }
L_0045C478:
    set32(c.r[4], c.r[29].w[0] + 1232u);
    set32(c.r[2], 0u + 89u);
    c.budget -= 2;
L_0045C480:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[21], c.r[21].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045C480u | kUnwind; return; } goto L_0045C480; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C4A4u); set32(c.r[4], c.r[29].w[0] + 1232u);  if (depth < kMaxDepth) unit_000B(c, 176u, depth + 1u); else { c.pc = 0x0022F930u; return; } if (c.pc != 0x0045C4A4u) [[unlikely]] return; }
L_0045C4A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C4ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 88u, depth + 1u); else { c.pc = 0x0020E130u; return; } if (c.pc != 0x0045C4ACu) [[unlikely]] return; }
L_0045C4AC:
    st32((c.r[29].w[0] + 1264u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 1232u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 20u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C4C8u); set32(c.r[21], c.r[21].w[0] + 1u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0045C4C8u) [[unlikely]] return; }
L_0045C4C8:
    set32(c.r[4], c.r[29].w[0] + 1232u);
    set32(c.r[2], 0u + 90u);
    c.budget -= 2;
L_0045C4D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[21], c.r[21].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045C4D0u | kUnwind; return; } goto L_0045C4D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C4F4u); set32(c.r[4], c.r[29].w[0] + 1232u);  if (depth < kMaxDepth) unit_000B(c, 176u, depth + 1u); else { c.pc = 0x0022F930u; return; } if (c.pc != 0x0045C4F4u) [[unlikely]] return; }
L_0045C4F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C4FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 88u, depth + 1u); else { c.pc = 0x0020E130u; return; } if (c.pc != 0x0045C4FCu) [[unlikely]] return; }
L_0045C4FC:
    st32((c.r[29].w[0] + 1268u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 1232u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 20u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C518u); set32(c.r[21], c.r[21].w[0] + 1u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0045C518u) [[unlikely]] return; }
L_0045C518:
    set32(c.r[4], c.r[29].w[0] + 1232u);
    set32(c.r[2], 0u + 79u);
    c.budget -= 2;
L_0045C520:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[21], c.r[21].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045C520u | kUnwind; return; } goto L_0045C520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C544u); set32(c.r[4], c.r[29].w[0] + 1232u);  if (depth < kMaxDepth) unit_000B(c, 176u, depth + 1u); else { c.pc = 0x0022F930u; return; } if (c.pc != 0x0045C544u) [[unlikely]] return; }
L_0045C544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C54Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 88u, depth + 1u); else { c.pc = 0x0020E130u; return; } if (c.pc != 0x0045C54Cu) [[unlikely]] return; }
L_0045C54C:
    st32((c.r[29].w[0] + 1272u), c.f[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 3;
L_0045C558:
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045C558u | kUnwind; return; } goto L_0045C558; } }
    c.budget -= 1;
L_0045C578:
    set32(c.r[4], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 1264u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C588u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0020(c, 82u, depth + 1u); else { c.pc = 0x00280E00u; return; } if (c.pc != 0x0045C588u) [[unlikely]] return; }
L_0045C588:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[12], 0u - 2u);
    c.r[13].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[10], 0u - 5u);
    set32(c.r[11], c.r[3].w[0] << 2);
    set32(c.r[8], 0u - 129u);
    set32(c.r[9], c.r[3].w[0] << 7);
    set32(c.r[6], c.r[3].w[0] << 6);
    set32(c.r[7], 0u - 65u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[14].d[0] = ld8((c.r[2].w[0] + 524u));
    set32(c.r[5], c.r[29].w[0] + 1264u);
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st8((c.r[2].w[0] + 524u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st8((c.r[2].w[0] + 536u), static_cast<std::uint8_t>(0u));
    set32(c.r[12], ld32((c.r[22].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[12].w[0] + 526u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[11].d[0];
    st8((c.r[12].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[10], ld32((c.r[22].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[10].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    st8((c.r[10].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[8], ld32((c.r[22].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[8].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    st32((c.r[2].w[0] + 48u), 0u);
    st32((c.r[2].w[0] + 52u), 0u);
    st32((c.r[2].w[0] + 56u), 0u);
    st32((c.r[2].w[0] + 60u), c.f[20]);
    set32(c.r[6], ld32((c.r[22].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 736u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 44;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C638u); st8((c.r[6].w[0] + 736u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0023(c, 198u, depth + 1u); else { c.pc = 0x0028DEC0u; return; } if (c.pc != 0x0045C638u) [[unlikely]] return; }
L_0045C638:
    set32(c.r[5], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[2], 0u - 65u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.f[0] = 0u;
    c.r[4].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    c.f[1] = ld32((c.r[2].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[6], 0u + 1u);  if (t) { goto L_0045C670; } }
    st8((c.r[2].w[0] + 404u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 1;
L_0045C670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 104u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045C018u | kUnwind; return; } goto L_0045C018; } }
L_0045C678:
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[12], c.r[12].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045C390u | kUnwind; return; } goto L_0045C390; } }
    c.budget -= 1;
L_0045C690:
    set32(c.r[14], c.r[14].w[0] - 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[10], ld32((c.r[10].w[0])));
    set32(c.r[10], c.r[13].w[0] + c.r[10].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[10].w[0]), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045C3A0u | kUnwind; return; } goto L_0045C3A0; } }
L_0045C6A8:
    set32(c.r[6], ld32((c.r[21].w[0] + 4u)));
    c.f[2] = ld32((c.r[20].w[0]));
    c.r[1].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.f[1] = ld32((c.r[20].w[0] + 4u));
    c.r[7].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    st32((c.r[6].w[0]), c.f[2]);
    set32(c.r[20], c.r[20].w[0] + 12u);
    st32((c.r[6].w[0] + 4u), c.f[1]);
    st32((c.r[6].w[0] + 8u), c.f[0]);
    set32(c.r[6], ld32((c.r[21].w[0] + 4u)));
    c.f[1] = ld32((c.r[21].w[0] + 20u));
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[21].w[0] + 20u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[21].w[0] + 24u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[21].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = ld32((c.r[21].w[0] + 28u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 26;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[21].w[0] + 28u), c.f[0]);  if (t) { goto L_0045C7B0; } }
    set32(c.r[6], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 2;
L_0045C718:
    set32(c.r[10], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != c.r[5].d[0];  if (t) { goto L_0045C768; } }
    set32(c.r[12], ld32((c.r[21].w[0])));
    set32(c.r[11], c.r[6].w[0] << 4);
    set32(c.r[10], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[20], c.r[20].w[0] + 4u);
    set32(c.r[10], c.r[10].w[0] << 4);
    set32(c.r[11], c.r[12].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[12].w[0] + c.r[10].w[0]);
    c.f[0] = ld32((c.r[11].w[0]));
    st32((c.r[10].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] + 4u));
    st32((c.r[10].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] + 8u));
    st32((c.r[10].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] + 12u));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[10].w[0] + 12u), c.f[0]);  if (t) { goto L_0045C7A0; } }
    c.budget -= 1;
L_0045C768:
    set32(c.r[10], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[11], c.r[10].w[0] << 4);
    set32(c.r[10], ld32((c.r[21].w[0])));
    c.f[0] = ld32((c.r[20].w[0]));
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    st32((c.r[10].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    st32((c.r[10].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 12u));
    st32((c.r[10].w[0] + 12u), c.f[0]);
    set32(c.r[20], c.r[20].w[0] + 16u);
    c.budget -= 14;
L_0045C7A0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[10].d[0] = c.r[7].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045C718u | kUnwind; return; } goto L_0045C718; } }
L_0045C7B0:
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[6].d[0] = c.r[13].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    set32(c.r[9], c.r[9].w[0] + 12u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045C348u | kUnwind; return; } goto L_0045C348; } }
    c.budget -= 1;
L_0045C7C8:
    c.r[5].d[0] = ld16((c.r[21].w[0] + 12u));
    c.r[1].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0045C8A0; } }
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0045C8A0; } }
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    mmi::mult(c, 0, c.r[5].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[6], 0u - 1u);
    mmi::mult(c, 1, c.r[18].w[0], c.r[6].w[0]);
    c.r[12].d[0] = c.lo.d[1];
    c.budget -= 6;
L_0045C7FC:
    c.r[1].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[14].d[0] = 0ull + 0ull;  if (t) { goto L_0045C880; } }
    set32(c.r[13], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[4].w[0] - 12u);
    c.budget -= 2;
L_0045C810:
    set32(c.r[9], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[6], c.r[14].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[13].w[0] << 4);
    set32(c.r[7], c.r[6].w[0] << 4);
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.r[6].d[0] = c.r[14].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    set32(c.r[13], c.r[13].w[0] + 1u);
    set32(c.r[10], c.r[9].w[0] + c.r[11].w[0]);
    c.f[0] = ld32((c.r[10].w[0]));
    set32(c.r[9], c.r[9].w[0] + c.r[4].w[0]);
    st32((c.r[9].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 4u));
    st32((c.r[9].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 8u));
    st32((c.r[9].w[0] + 8u), c.f[0]);
    set32(c.r[9], ld32((c.r[21].w[0])));
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[9].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[7].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    st32((c.r[7].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 12u));
    c.budget -= 27;
    { const bool t = c.r[6].d[0] != 0ull; st32((c.r[7].w[0] + 12u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045C810u | kUnwind; return; } goto L_0045C810; } }
    c.budget -= 1;
L_0045C880:
    c.r[7].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 12u);
    c.r[6].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045C7FCu | kUnwind; return; } goto L_0045C7FC; } }
L_0045C8A0:
    set32(c.r[5], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = ld32((c.r[21].w[0] + 20u));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[21].w[0] + 20u), c.f[1]);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[21].w[0] + 24u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[21].w[0] + 24u), c.f[1]);
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[21].w[0] + 28u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[21].w[0] + 28u), c.f[1]);
    set32(c.r[5], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.f[2] = ld32((c.r[3].w[0] - 8u));
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[21].w[0] + 24u), c.f[1]);
    c.f[2] = ld32((c.r[21].w[0] + 28u));
    c.f[1] = ld32((c.r[21].w[0] + 20u));
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    st32((c.r[21].w[0] + 16u), c.f[1]);
    c.r[3].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 40;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 8u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045C3F0u | kUnwind; return; } goto L_0045C3F0; } }
L_0045C940:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1296u);  c.pc = t; return; }
L_0045C970:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0045CB10; } }
L_0045C994:
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st8((c.r[17].w[0] + 35u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 344u)));
    st32((c.r[2].w[0] + 1568u), 0u);
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045CB58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C9DCu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0045C9DCu) [[unlikely]] return; }
L_0045C9DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0045CB5C; } }
L_0045C9E4:
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[5].d[0] = ld8((c.r[6].w[0] + 524u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 524u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0045CA20; } }
L_0045CA00:
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 524u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 524u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[6].w[0] + 536u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_0045CA20:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 37u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0045CA50; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 6);
    set32(c.r[3], 0u - 65u);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 526u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0045CA6C; } }
L_0045CA50:
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 526u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0045CA6C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 38u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0045CA9C; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 5);
    set32(c.r[3], 0u - 33u);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 526u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0045CAB8; } }
L_0045CA9C:
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u - 33u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 526u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0045CAB8:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0045CAD8; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 404u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0045CAD8:
    st32((c.r[4].w[0] + 104u), c.f[1]);
    set32(c.r[5], 0u - 5u);
    c.r[7].d[0] = ld16((c.r[17].w[0]));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0045CC08; } }
L_0045CB10:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 11856u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[17].w[0] + 16u), c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 39u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045C994u | kUnwind; return; } goto L_0045C994; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1496u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045C994u | kUnwind; return; } goto L_0045C994; } }
L_0045CB58:
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0045CB5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 360u), 0u);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    set32(c.r[6], 0u - 2u);
    c.r[7].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[29].w[0] + 52u);
    st32((c.r[16].w[0] + 356u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[3].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 56u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 44u));
    st32((c.r[29].w[0] + 60u), c.f[1]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.f[1] = ld32((c.r[2].w[0] + 508u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CBF4u); st32((c.r[3].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0023(c, 198u, depth + 1u); else { c.pc = 0x0028DEC0u; return; } if (c.pc != 0x0045CBF4u) [[unlikely]] return; }
L_0045CBF4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 36u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045CA00u | kUnwind; return; } goto L_0045CA00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[17].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045C9E4u | kUnwind; return; } goto L_0045C9E4; } }
L_0045CC08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0045CC20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 33u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0045CD98; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 34u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045CD18; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 34u));
    c.budget -= 1;
L_0045CC50:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045CDA8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CC64u); st8((c.r[17].w[0] + 34u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0096(c, 239u, depth + 1u); else { c.pc = 0x0045BF30u; return; } if (c.pc != 0x0045CC64u) [[unlikely]] return; }
L_0045CC64:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 384u);
    c.r[18].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0045CD5C; } }
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 1;
L_0045CC88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 360u), 0u);
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
    c.r[3].d[0] = ld8((c.r[17].w[0] + 32u));
    c.budget -= 32;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_0045CD6C; } }
    st8((c.r[17].w[0] + 33u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 2;
L_0045CD10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0045CDAC; } }
L_0045CD18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CD20u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0022E588u; return; } if (c.pc != 0x0045CD20u) [[unlikely]] return; }
L_0045CD20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CD28u);  if (depth < kMaxDepth) unit_001D(c, 201u, depth + 1u); else { c.pc = 0x00277C70u; return; } if (c.pc != 0x0045CD28u) [[unlikely]] return; }
L_0045CD28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CD30u);  if (depth < kMaxDepth) unit_0075(c, 200u, depth + 1u); else { c.pc = 0x003D74B0u; return; } if (c.pc != 0x0045CD30u) [[unlikely]] return; }
L_0045CD30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CD38u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0022E588u; return; } if (c.pc != 0x0045CD38u) [[unlikely]] return; }
L_0045CD38:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 34u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045CD20u | kUnwind; return; } goto L_0045CD20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CD54u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0022E588u; return; } if (c.pc != 0x0045CD54u) [[unlikely]] return; }
L_0045CD54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 34u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045CC50u | kUnwind; return; } goto L_0045CC50; } }
L_0045CD5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CD64u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0045CD64u) [[unlikely]] return; }
L_0045CD64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[18].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045CC88u | kUnwind; return; } goto L_0045CC88; } }
L_0045CD6C:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.r[6].d[0] = 0ull | 32768ull;
    set32(c.r[10], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[7], c.r[7].w[0] - 12848u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CD90u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001E(c, 10u, depth + 1u); else { c.pc = 0x00278080u; return; } if (c.pc != 0x0045CD90u) [[unlikely]] return; }
L_0045CD90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045CD10u | kUnwind; return; } goto L_0045CD10; } }
L_0045CD98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CDA0u);  if (depth < kMaxDepth) unit_0097(c, 42u, depth + 1u); else { c.pc = 0x0045C970u; return; } if (c.pc != 0x0045CDA0u) [[unlikely]] return; }
L_0045CDA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045CD10u | kUnwind; return; } goto L_0045CD10; } }
L_0045CDA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0045CDAC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0045CDC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0045CDD0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; st8((c.r[7].w[0] + 34u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0045CDE4; } }
L_0045CDDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0045CDEC; } }
L_0045CDE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045CDDCu | kUnwind; return; } goto L_0045CDDC; } }
L_0045CDEC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0045CE00:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[8].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[3], c.r[8].w[0] << 2);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[15], c.r[8].w[0] << 5);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[13], c.r[8].w[0] << 11);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[21], c.r[8].w[0] << 3);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[9], c.r[8].w[0] << 1);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[20], 0u - 9u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[24], 0u - 17u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[25].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[14], 0u - 33u);
    c.r[10].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[2], 0u - 5u);
    set32(c.r[12], 0u - 2049u);
    set32(c.r[11], 0u + 188u);
    set32(c.r[18], 0u + 1u);
    c.r[22].d[0] = 0ull | 32768ull;
    set32(c.r[23], 0u - 2u);
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[30].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[10].d[0] & c.r[2].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[3].d[0];
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[10], c.r[10].w[0] + 13904u);
    c.r[19].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[8], 0u - 3u);
    c.r[19].d[0] = c.r[19].d[0] & c.r[20].d[0];
    c.r[19].d[0] = c.r[19].d[0] | c.r[21].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[19].d[0] = ld16((c.r[4].w[0]));
    c.r[19].d[0] = c.r[19].d[0] & c.r[24].d[0];
    c.r[19].d[0] = c.r[19].d[0] | c.r[25].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[19].d[0] = ld16((c.r[4].w[0]));
    c.r[19].d[0] = c.r[19].d[0] & c.r[14].d[0];
    c.r[15].d[0] = c.r[19].d[0] | c.r[15].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld16((c.r[4].w[0]));
    c.r[12].d[0] = c.r[15].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[10].w[0]);
    c.r[10].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[10].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 32u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 33u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 34u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[4].w[0] + 35u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 28u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[22].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.f[0] = ld32((c.r[2].w[0] + 104u));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 526u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[4].w[0] + 37u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 526u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[4].w[0] + 38u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[23].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[17].d[0];
    st8((c.r[3].w[0] + 524u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 536u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 526u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[14].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[30].d[0];
    st8((c.r[3].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u - 65u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[4].w[0] + 39u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1496u));
    c.r[3].d[0] = c.r[2].d[0] & c.r[20].d[0];
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[4].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 28396u)));
    c.budget -= 127;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045D058; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D004u); set32(c.r[5], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_00AA(c, 52u, depth + 1u); else { c.pc = 0x004A8610u; return; } if (c.pc != 0x0045D004u) [[unlikely]] return; }
L_0045D004:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 1;
L_0045D008:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[3].w[0] - 11888u);
    set32(c.r[2], c.r[2].w[0] - 11856u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D050u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045D050u) [[unlikely]] return; }
L_0045D050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0045D060; } }
L_0045D058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[7].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D008u | kUnwind; return; } goto L_0045D008; } }
L_0045D060:
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
L_0045D090:
    c.r[9].d[0] = ld16((c.r[5].w[0] + 12u));
    c.f[4] = ld32((c.r[5].w[0] + 20u));
    c.r[8].d[0] = ld16((c.r[5].w[0] + 14u));
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    set32(c.r[7], ld32((c.r[5].w[0] + 16u)));
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    set32(c.r[6], ld32((c.r[5].w[0] + 24u)));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    c.r[10].d[0] = ld8((c.r[5].w[0] + 48u));
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[9].w[0]));
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 20u), c.f[4]);
    c.r[9].d[0] = ld8((c.r[5].w[0] + 49u));
    st32((c.r[4].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 32u), c.f[3]);
    c.r[8].d[0] = ld8((c.r[5].w[0] + 50u));
    st32((c.r[4].w[0] + 36u), c.f[2]);
    c.r[7].d[0] = ld8((c.r[5].w[0] + 51u));
    st32((c.r[4].w[0] + 40u), c.f[1]);
    c.r[6].d[0] = ld8((c.r[5].w[0] + 52u));
    st32((c.r[4].w[0] + 44u), c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 56u)));
    st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[4].w[0] + 49u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 50u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 51u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 52u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[5].w[0] + 60u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0] + 60u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[6].w[0]);
    c.budget -= 41;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { goto L_0045D13C; } }
L_0045D134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0045D148; } }
L_0045D13C:
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D134u | kUnwind; return; } goto L_0045D134; } }
L_0045D148:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0045D150:
    st32((c.r[4].w[0]), 0u);
    c.f[3] = ld32((c.r[11].w[0]));
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    c.f[2] = ld32((c.r[11].w[0] + 4u));
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.f[1] = ld32((c.r[11].w[0] + 8u));
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.f[0] = ld32((c.r[11].w[0] + 12u));
    st32((c.r[4].w[0] + 16u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 20u), c.f[12]);
    c.r[2].d[0] = ld8((c.r[29].w[0]));
    st32((c.r[4].w[0] + 24u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 32u), c.f[3]);
    c.r[8].d[0] = ld8((c.r[29].w[0] + 1u));
    st32((c.r[4].w[0] + 36u), c.f[2]);
    c.r[7].d[0] = ld8((c.r[29].w[0] + 2u));
    st32((c.r[4].w[0] + 40u), c.f[1]);
    c.r[6].d[0] = ld8((c.r[29].w[0] + 8u));
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 16u));
    st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    st8((c.r[4].w[0] + 49u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 50u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 51u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[29].w[0] + 32u)));
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    st32((c.r[4].w[0] + 60u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 35;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_0045D1E4; } }
L_0045D1DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0045D1F0; } }
L_0045D1E4:
    c.r[2].d[0] = ld16((c.r[5].w[0] + 6u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D1DCu | kUnwind; return; } goto L_0045D1DC; } }
L_0045D1F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0045D200:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[7], ld32((c.r[4].w[0] + 2500u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[29].w[0] + 4u);
    set32(c.r[2], c.r[29].w[0] + 8u);
    c.f[7] = ld32((c.r[5].w[0]));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.r[8].d[0] = c.r[8].d[0] | 55050ull;
    c.f[5] = ld32((c.r[5].w[0] + 8u));
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[6] = 0u;
    set32(c.r[10], 0u - 1u);
    c.f[4] = c.r[8].w[0];
    c.budget -= 14;
L_0045D238:
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(64ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0045D380; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0045D380; } }
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 188u)));
    c.r[8].d[0] = ld16((c.r[5].w[0] + 6u));
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[11], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[5], ld32((c.r[11].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[10].d[0];  if (t) { goto L_0045D378; } }
    c.f[0] = ld32((c.r[11].w[0]));
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.f[1] = c.f[6];
    c.r[8].d[0] = 0ull + 0ull;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[7]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0045D318; } }
L_0045D290:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0045D2B0; } }
    c.f[0] = ld32((c.r[11].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[5]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0045D2B0; } }
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 2;
L_0045D2B0:
    c.r[5].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0045D330; } }
L_0045D2C0:
    set32(c.r[5], ld32((c.r[11].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] >> 16);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_0045D2E0; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0045D2FC; } }
L_0045D2E0:
    set32(c.r[8], c.r[5].w[0] >> 1);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.r[8].d[0] = c.r[8].d[0] | c.r[5].d[0];
    c.f[0] = c.r[8].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_0045D2FC:
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[12]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0045D378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0045D384; } }
L_0045D318:
    c.f[0] = ld32((c.r[11].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D290u | kUnwind; return; } goto L_0045D290; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[9].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D290u | kUnwind; return; } goto L_0045D290; } }
L_0045D330:
    c.f[1] = ld32((c.r[11].w[0] + 4u));
    c.f[0] = ld32((c.r[11].w[0]));
    c.f[2] = ld32((c.r[11].w[0] + 8u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[7]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    st32((c.r[29].w[0]), c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    st32((c.r[3].w[0]), c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[0]);
    st32((c.r[2].w[0]), c.f[2]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D2C0u | kUnwind; return; } goto L_0045D2C0; } }
    c.budget -= 1;
L_0045D378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D238u | kUnwind; return; } goto L_0045D238; } }
L_0045D380:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045D384:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0045D390:
    set32(c.r[29], c.r[29].w[0] - 512u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x411D0000u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 7864ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    set32(c.r[30], c.r[29].w[0] + 456u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    set32(c.r[23], c.r[29].w[0] + 452u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
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
    c.f[23] = c.f[12];
    set32(c.r[21], ld32((c.r[4].w[0] + 2500u)));
    c.f[29] = ld32((c.r[29].w[0] + 412u));
    c.f[22] = ld32((c.r[4].w[0] + 116u));
    c.f[20] = ld32((c.r[29].w[0] + 380u));
    c.f[21] = fp::ee::mul(c.fcr31, c.f[0], c.f[23]);
    c.budget -= 37;
L_0045D424:
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(64ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0045D780; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0045D780; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 188u)));
    c.r[4].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[18], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0045D470; } }
    c.budget -= 1;
L_0045D468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D424u | kUnwind; return; } goto L_0045D424; } }
L_0045D470:
    set32(c.r[2], c.r[19].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[21], c.r[21].w[0] - 1u);
    c.f[0] = ld32((c.r[2].w[0] + 448u));
    set32(c.r[16], c.r[2].w[0] + 448u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[22]);
    st32((c.r[2].w[0] + 448u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 456u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[22]);
    st32((c.r[2].w[0] + 456u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 452u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[21]);
    st32((c.r[2].w[0] + 452u), c.f[0]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[0], c.f[23]);
    c.f[1] = ld32((c.r[2].w[0] + 448u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 456u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[23]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[23]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 28;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[18].w[0] + 8u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D468u | kUnwind; return; } goto L_0045D468; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0045D730; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 147u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045D690; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0045D690; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 464u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D524u); set32(c.r[7], c.r[29].w[0] + 508u);  if (depth < kMaxDepth) unit_0000(c, 104u, depth + 1u); else { c.pc = 0x00202720u; return; } if (c.pc != 0x0045D524u) [[unlikely]] return; }
L_0045D524:
    c.f[3] = ld32((c.r[29].w[0] + 508u));
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0045D5D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[6], c.r[29].w[0] + 464u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.f[0] = c.r[3].w[0];
    c.f[2] = ld32((c.r[18].w[0] + 8u));
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    set32(c.r[4], c.r[2].w[0] + 432u);
    st32((c.r[29].w[0] + 448u), c.f[1]);
    st32((c.r[23].w[0]), c.f[0]);
    st32((c.r[30].w[0]), c.f[2]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 328u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D584u); set32(c.r[7], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 53u, depth + 1u); else { c.pc = 0x00498B50u; return; } if (c.pc != 0x0045D584u) [[unlikely]] return; }
L_0045D584:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0045D690; } }
    set32(c.r[3], c.r[19].w[0] - 7u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0045D690; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0045D690; } }
L_0045D5A8:
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[2].w[0] + 460u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D5A8u | kUnwind; return; } goto L_0045D5A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0045D690; } }
    c.budget -= 1;
L_0045D5D0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[29].w[0] + 392u);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[6], c.r[29].w[0] + 384u);
    c.f[12] = 0u;
    set32(c.r[7], c.r[29].w[0] + 416u);
    set32(c.r[8], 0u + 1u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[23]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[23]);
    st32((c.r[2].w[0]), c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[23]);
    set32(c.r[2], c.r[29].w[0] + 388u);
    st32((c.r[2].w[0]), c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D618u); st32((c.r[29].w[0] + 384u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 170u, depth + 1u); else { c.pc = 0x00203F80u; return; } if (c.pc != 0x0045D618u) [[unlikely]] return; }
L_0045D618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045D690; } }
    set32(c.r[2], c.r[29].w[0] + 432u);
    set32(c.r[7], ld32((c.r[17].w[0])));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[5], c.r[29].w[0] + 416u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[7], c.r[7].w[0] + 328u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 432u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D64Cu); set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 53u, depth + 1u); else { c.pc = 0x00498B50u; return; } if (c.pc != 0x0045D64Cu) [[unlikely]] return; }
L_0045D64C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0045D690; } }
    set32(c.r[3], c.r[19].w[0] - 7u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0045D690; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0045D690; } }
L_0045D670:
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[2].w[0] + 460u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D670u | kUnwind; return; } goto L_0045D670; } }
    c.budget -= 1;
L_0045D690:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 6u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    set32(c.r[3], c.r[3].w[0] + 328u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 112u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 27;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0045D748; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045D700:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] >> 16);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 16);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[29].w[0] + 504u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 504u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D468u | kUnwind; return; } goto L_0045D468; } }
L_0045D730:
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 2500u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 2500u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D468u | kUnwind; return; } goto L_0045D468; } }
    c.budget -= 1;
L_0045D748:
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D700u | kUnwind; return; } goto L_0045D700; } }
L_0045D780:
    set32(c.r[2], ld32((c.r[20].w[0] + 2516u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0045D7DC; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_0045D7B4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 2516u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] > 0; st32((c.r[20].w[0] + 2516u), c.r[2].w[0]);  if (t) { goto L_0045D7B4; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 2524u)));
    set32(c.r[2], 0u - 1u);
    st32((c.r[20].w[0] + 2520u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 4;
L_0045D7B4:
    set32(c.r[2], ld32((c.r[20].w[0] + 2520u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045D7D4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 2500u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
L_0045D7D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_0045E158; } }
L_0045D7DC:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D7B4u | kUnwind; return; } goto L_0045D7B4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045DF34; } }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[3], ld32((c.r[20].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0045DF3C; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0045D804:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045DF48; } }
L_0045D80C:
    c.f[26] = ld32((c.r[20].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[20].w[0] + 64u));
    c.r[3].d[0] = 0ull + 0ull;
    c.f[23] = c.r[2].w[0];
    c.f[27] = ld32((c.r[20].w[0] + 52u));
    c.f[28] = ld32((c.r[20].w[0] + 56u));
    c.r[2].d[0] = 0ull + 0ull;
    c.f[24] = c.f[23];
    fpu_compare(c, fp::key(c.f[26]) == fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[25] = c.f[23];  if (t) { goto L_0045DFAC; } }
L_0045D83C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045D858; } }
    c.f[0] = ld32((c.r[20].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[28]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0045D858; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0045D858:
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045DFC4; } }
L_0045D868:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 176u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D7B4u | kUnwind; return; } goto L_0045D7B4; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 84u)));
    c.f[20] = 0u;
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 304u), c.r[2].w[0]);
    c.f[21] = c.f[20];
    set32(c.r[2], 0u - 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[22] = c.f[20];  if (t) { goto L_0045D9A0; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 108u));
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 188u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0045D8C4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0045D8E0; } }
L_0045D8C4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_0045D8E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 148u));
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_0045D908; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
L_0045D908:
    c.f[2] = ld32((c.r[5].w[0]));
    c.r[3].d[0] = 0ull + 0ull;
    fpu_compare(c, fp::key(c.f[26]) == fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0045E024; } }
L_0045D91C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045D938; } }
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[28]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0045D938; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0045D938:
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045D9A0; } }
    c.f[7] = fp::ee::sub(c.fcr31, c.f[26], c.f[2]);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[4] = 0u;
    c.f[6] = fp::ee::sub(c.fcr31, c.f[27], c.f[2]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[6], c.f[6]);
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[28], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[7]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[4]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0045E03C; } }
L_0045D988:
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[26] = fp::ee::add(c.fcr31, c.f[2], c.f[20]);
    c.f[27] = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[28] = fp::ee::add(c.fcr31, c.f[0], c.f[22]);
    c.budget -= 6;
L_0045D9A0:
    set32(c.r[3], ld32((c.r[20].w[0] + 2520u)));
    c.f[0] = ld32((c.r[20].w[0] + 120u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 112u)));
    c.r[5].d[0] = ld16((c.r[20].w[0] + 108u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[1] = c.r[3].w[0];
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[5].w[0] << 16);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[29].w[0] + 500u), c.r[4].w[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[4] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[31] = c.r[2].w[0];
    c.r[2].d[0] = ld8((c.r[20].w[0] + 148u));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; c.f[2] = fp::ee::sub(c.fcr31, c.f[31], c.f[4]);  if (t) { goto L_0045E0DC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 2512u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045DA34; } }
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[20].w[0] + 2508u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[1] = c.r[2].w[0];
    c.f[3] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[2]);
    c.f[31] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.budget -= 14;
L_0045DA34:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 110u));
    c.f[30] = fp::ee::div(c.fcr31, c.f[4], c.f[0]);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0045DA68; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0045DA84; } }
L_0045DA68:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_0045DA84:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 108u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0045DA9C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0045DAB8; } }
L_0045DA9C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_0045DAB8:
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[7].d[0] = ld8((c.r[20].w[0] + 144u));
    set32(c.r[3], 0u + 255u);
    c.r[5].d[0] = ld8((c.r[20].w[0] + 145u));
    set32(c.r[6], c.r[29].w[0] + 492u);
    c.r[4].d[0] = ld8((c.r[20].w[0] + 146u));
    c.f[0] = c.r[2].w[0];
    st8((c.r[29].w[0] + 496u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 493u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[29].w[0] + 494u);
    st8((c.r[29].w[0] + 497u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[29].w[0] + 495u);
    st8((c.r[29].w[0] + 498u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 492u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 2532u)));
    c.r[5].d[0] = ld8((c.r[20].w[0] + 148u));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045DB14u); c.f[29] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x003FA3F0u; return; } if (c.pc != 0x0045DB14u) [[unlikely]] return; }
L_0045DB14:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0045DF08; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[3].w[0];
    c.r[19].d[0] = ld8((c.r[29].w[0] + 497u));
    c.f[1] = c.r[2].w[0];
    c.r[18].d[0] = ld8((c.r[29].w[0] + 498u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[29]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40200000u);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 496u));
    st32((c.r[29].w[0] + 220u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[29]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[19].w[0]) >> 1));
    st32((c.r[29].w[0] + 216u), c.f[0]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 1));
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[29]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 212u), c.f[0]);
    c.budget -= 25;
L_0045DB88:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 2528u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[20].w[0] + 2528u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045DCA0; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 2528u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045DBC8; } }
    c.f[0] = ld32((c.r[29].w[0] + 220u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[2] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);  if (t) { goto L_0045DBE0; } }
L_0045DBC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[2] = c.r[2].w[0];
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(96ll);
    c.budget -= 6;
L_0045DBE0:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 496u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0045DBF8; } }
    c.f[1] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0045DC14; } }
L_0045DBF8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_0045DC14:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    c.budget -= 5;
    { const bool t = c.r[19].sd[0] < 0; c.r[30].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0045DC34; } }
    c.f[1] = c.r[19].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0045DC50; } }
L_0045DC34:
    set32(c.r[3], c.r[19].w[0] >> 1);
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_0045DC50:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    c.budget -= 5;
    { const bool t = c.r[18].sd[0] < 0; c.r[23].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0045DC70; } }
    c.f[1] = c.r[18].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0045DC8C; } }
L_0045DC70:
    set32(c.r[3], c.r[18].w[0] >> 1);
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_0045DC8C:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0045DCF0; } }
L_0045DCA0:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 2528u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045DCD8; } }
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[30].d[0] = c.r[2].d[0] & 255ull;
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    c.r[23].d[0] = c.r[2].d[0] & 255ull;
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0045DCF0; } }
    c.budget -= 1;
L_0045DCD8:
    c.r[30].d[0] = ld8((c.r[29].w[0] + 496u));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[23].d[0] = c.r[19].d[0] & 255ull;
    c.r[22].d[0] = c.r[18].d[0] & 255ull;
    c.f[0] = c.f[29];
    c.budget -= 6;
L_0045DCF0:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[31]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 14;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_0045DD34; } }
    c.f[1] = c.r[17].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0045DD50; } }
L_0045DD34:
    set32(c.r[3], c.r[17].w[0] >> 1);
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_0045DD50:
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    c.f[2] = c.f[1] ^ fp::kSign;
    set32(c.r[4], ld32((c.r[20].w[0] + 2504u)));
    set32(c.r[3], 0u - 1u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 188u)));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.f[4] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);  if (t) { goto L_0045E128; } }
    c.budget -= 1;
L_0045DD98:
    set32(c.r[4], ld32((c.r[20].w[0] + 2504u)));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 148u));
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] + 448u);  if (t) { goto L_0045DDF0; } }
    c.f[3] = ld32((c.r[20].w[0] + 132u));
    set32(c.r[3], c.r[29].w[0] + 356u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[23], c.f[3]);
    st32((c.r[29].w[0] + 352u), c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[31]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[24], c.f[3]);
    st32((c.r[3].w[0]), c.f[2]);
    st32((c.r[6].w[0]), c.f[1]);
    set32(c.r[3], c.r[29].w[0] + 360u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[25], c.f[3]);
    st32((c.r[3].w[0]), c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[31]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[31]);
    st32((c.r[6].w[0] + 4u), c.f[2]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 8u), c.f[1]);  if (t) { goto L_0045DE18; } }
L_0045DDF0:
    c.f[1] = ld32((c.r[20].w[0] + 128u));
    c.f[3] = ld32((c.r[20].w[0] + 132u));
    c.f[2] = ld32((c.r[20].w[0] + 136u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[31]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[31]);
    st32((c.r[6].w[0]), c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[31]);
    st32((c.r[6].w[0] + 4u), c.f[3]);
    st32((c.r[6].w[0] + 8u), c.f[2]);
    c.budget -= 10;
L_0045DE18:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[29].w[0] + 500u));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[6].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[6].w[0] + 16u), c.f[4]);
    st32((c.r[6].w[0] + 20u), 0u);
    st32((c.r[6].w[0] + 24u), c.f[0]);
    st32((c.r[6].w[0] + 28u), 0u);
    st32((c.r[2].w[0]), c.f[26]);
    set32(c.r[6], 0u + 255u);
    st32((c.r[2].w[0] + 4u), c.f[27]);
    st32((c.r[2].w[0] + 8u), c.f[28]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045DE54u); st32((c.r[2].w[0] + 12u), c.f[1]);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x0045DE54u) [[unlikely]] return; }
L_0045DE54:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[4], c.r[4].w[0] + 396u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 328u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[30].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[23].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[22].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 492u));
    set32(c.r[4], c.r[4].w[0] + 260u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 493u);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 494u);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 495u);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 2504u)));
    st32((c.r[20].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 2504u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(64ll) ? 1ull : 0ull;
    c.budget -= 37;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[20].w[0] + 2504u), c.r[2].w[0]);  if (t) { goto L_0045E138; } }
L_0045DEE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.f[31] = fp::ee::sub(c.fcr31, c.f[31], c.f[30]);
    c.f[26] = fp::ee::add(c.fcr31, c.f[26], c.f[20]);
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.f[27] = fp::ee::add(c.fcr31, c.f[27], c.f[21]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.f[28] = fp::ee::add(c.fcr31, c.f[28], c.f[22]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045DB88u | kUnwind; return; } goto L_0045DB88; } }
L_0045DF08:
    set32(c.r[2], ld32((c.r[20].w[0] + 2520u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] > 0; st32((c.r[20].w[0] + 2520u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D7B4u | kUnwind; return; } goto L_0045D7B4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 2508u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[20].w[0] + 2508u), c.r[2].w[0]);  if (t) { goto L_0045E140; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D7B4u | kUnwind; return; } goto L_0045D7B4; } }
L_0045DF34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D804u | kUnwind; return; } goto L_0045D804; } }
L_0045DF3C:
    st32((c.r[20].w[0] + 96u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D804u | kUnwind; return; } goto L_0045D804; } }
L_0045DF48:
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[4], 0u + 8u);
    set32(c.r[3], ld32((c.r[20].w[0] + 104u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 348u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_0045DF64:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045DF64u | kUnwind; return; } goto L_0045DF64; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[20].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[20].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[20].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 76u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D80Cu | kUnwind; return; } goto L_0045D80C; } }
L_0045DFAC:
    c.f[0] = ld32((c.r[20].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[27]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D83Cu | kUnwind; return; } goto L_0045D83C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D83Cu | kUnwind; return; } goto L_0045D83C; } }
L_0045DFC4:
    c.f[2] = fp::ee::sub(c.fcr31, c.f[26], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 340u);
    set32(c.r[3], c.r[29].w[0] + 344u);
    c.f[3] = ld32((c.r[20].w[0] + 68u));
    c.f[1] = ld32((c.r[20].w[0] + 72u));
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 348u), c.f[20]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[27], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[28], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[23] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[24] = ld32((c.r[29].w[0] + 340u));
    c.f[25] = ld32((c.r[29].w[0] + 344u));
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 336u), c.f[23]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D868u | kUnwind; return; } goto L_0045D868; } }
L_0045E024:
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[27]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D91Cu | kUnwind; return; } goto L_0045D91C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D91Cu | kUnwind; return; } goto L_0045D91C; } }
L_0045E03C:
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[7]);
    c.r[7].d[0] = 0ull | 0ull;
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.f[3] = fp::ee::sqrt(c.fcr31, c.f[3]);
    c.r[7].d[0] = c.r[7].d[0] | 32768ull;
    set32(c.r[4], c.r[29].w[0] + 324u);
    set32(c.r[3], c.r[29].w[0] + 328u);
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[3] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[7], c.f[3]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[6], c.f[3]);
    st32((c.r[4].w[0]), c.f[2]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[5], c.f[3]);
    st32((c.r[3].w[0]), c.f[2]);
    c.f[3] = ld32((c.r[29].w[0] + 324u));
    c.f[2] = ld32((c.r[29].w[0] + 328u));
    set32(c.r[2], c.f[1]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    c.f[21] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[22] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = c.r[6].w[0];
    st32((c.r[29].w[0] + 332u), c.f[29]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[29].w[0] + 320u), c.f[4]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 40;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 304u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D988u | kUnwind; return; } goto L_0045D988; } }
L_0045E0DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0045E108; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[31] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045DA34u | kUnwind; return; } goto L_0045DA34; } }
L_0045E108:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[31] = fp::ee::sub(c.fcr31, c.f[31], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045DA34u | kUnwind; return; } goto L_0045DA34; } }
L_0045E128:
    set32(c.r[3], ld32((c.r[20].w[0] + 2500u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 2500u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045DD98u | kUnwind; return; } goto L_0045DD98; } }
L_0045E138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 2504u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045DEE8u | kUnwind; return; } goto L_0045DEE8; } }
L_0045E140:
    set32(c.r[5], ld32((c.r[20].w[0] + 160u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 164u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E150u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x0045E150u) [[unlikely]] return; }
L_0045E150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 2516u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D7B4u | kUnwind; return; } goto L_0045D7B4; } }
L_0045E158:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.f[31] = ld32((c.r[29].w[0] + 44u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    c.f[30] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 512u);  c.pc = t; return; }
L_0045E1C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E1E8u); set32(c.r[4], c.r[18].w[0] + 96u);  if (depth < kMaxDepth) unit_0097(c, 68u, depth + 1u); else { c.pc = 0x0045D090u; return; } if (c.pc != 0x0045E1E8u) [[unlikely]] return; }
L_0045E1E8:
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045E24C; } }
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[4], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0045E254; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0045E208:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0045E260; } }
L_0045E210:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 60u)));
    st32((c.r[18].w[0] + 2532u), c.r[16].w[0]);
    st8((c.r[18].w[0] + 176u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 2524u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull; st32((c.r[18].w[0] + 2520u), c.r[3].w[0]);  if (t) { goto L_0045E2C4; } }
    st32((c.r[18].w[0] + 2512u), 0u);
    st32((c.r[18].w[0] + 2508u), 0u);
    c.budget -= 2;
L_0045E234:
    st32((c.r[18].w[0] + 2516u), 0u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[18].w[0] + 2504u), 0u);
    st32((c.r[18].w[0] + 2500u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_0045E2DC; } }
L_0045E24C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E208u | kUnwind; return; } goto L_0045E208; } }
L_0045E254:
    st32((c.r[18].w[0] + 96u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E208u | kUnwind; return; } goto L_0045E208; } }
L_0045E260:
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[5], 0u + 8u);
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 348u)));
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
L_0045E27C:
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E27Cu | kUnwind; return; } goto L_0045E27C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[18].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[18].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[18].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 76u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E210u | kUnwind; return; } goto L_0045E210; } }
L_0045E2C4:
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E2D0u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x0045E2D0u) [[unlikely]] return; }
L_0045E2D0:
    st32((c.r[18].w[0] + 2512u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 2508u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E234u | kUnwind; return; } goto L_0045E234; } }
L_0045E2DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0045E300:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 176u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 2532u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 2496u), c.r[6].w[0]);
    set32(c.r[19], ld32((c.r[4].w[0] + 2532u)));
    c.r[22].d[0] = ld16((c.r[19].w[0] + 20u));
    c.budget -= 20;
L_0045E350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E358u); set32(c.r[4], ld32((c.r[21].w[0] + 2496u)));  if (depth < kMaxDepth) unit_0097(c, 166u, depth + 1u); else { c.pc = 0x0045ED40u; return; } if (c.pc != 0x0045E358u) [[unlikely]] return; }
L_0045E358:
    set32(c.r[3], c.r[18].w[0] << 1);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[21].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    st16((c.r[4].w[0] + 178u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], ld32((c.r[21].w[0] + 2496u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E38Cu); set32(c.r[4], c.r[4].w[0] + 3856u);  if (depth < kMaxDepth) unit_0041(c, 43u, depth + 1u); else { c.pc = 0x003048C0u; return; } if (c.pc != 0x0045E38Cu) [[unlikely]] return; }
L_0045E38C:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[3].w[0] << 4);
    c.budget -= 3;
L_0045E398:
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0045E408; } }
    c.r[1].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(64ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0045E408; } }
    set32(c.r[6], ld32((c.r[21].w[0] + 2496u)));
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[7], c.r[21].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], ld32((c.r[6].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[7].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 188u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 260u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E3F8u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x003FA3F0u; return; } if (c.pc != 0x0045E3F8u) [[unlikely]] return; }
L_0045E3F8:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E398u | kUnwind; return; } goto L_0045E398; } }
    c.budget -= 1;
L_0045E408:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E350u | kUnwind; return; } goto L_0045E350; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0045E440:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 4u));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0045E48C; } }
L_0045E478:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 48u)));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 4u), c.r[7].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[8].w[0]);  if (t) { goto L_0045E4D8; } }
L_0045E48C:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E4A8u); set32(c.r[6], c.r[16].w[0] + 44u);  if (depth < kMaxDepth) unit_0097(c, 101u, depth + 1u); else { c.pc = 0x0045E1C0u; return; } if (c.pc != 0x0045E4A8u) [[unlikely]] return; }
L_0045E4A8:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 5u));
    set32(c.r[3], 0u + 22u);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[7], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E478u | kUnwind; return; } goto L_0045E478; } }
L_0045E4D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0045E4F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0045E588; } }
L_0045E51C:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 7;
L_0045E538:
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 2496u)));
    set32(c.r[4], c.r[4].w[0] + 3856u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 178u));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E560u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0041(c, 44u, depth + 1u); else { c.pc = 0x003048E0u; return; } if (c.pc != 0x0045E560u) [[unlikely]] return; }
L_0045E560:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E538u | kUnwind; return; } goto L_0045E538; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 5u));
    set32(c.r[4], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E51Cu | kUnwind; return; } goto L_0045E51C; } }
L_0045E588:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0045E5B0:
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
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_0045E5F0; } }
L_0045E5E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0045E68C; } }
L_0045E5F0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045E5F4:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E60Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 76u, depth + 1u); else { c.pc = 0x0045D390u; return; } if (c.pc != 0x0045E60Cu) [[unlikely]] return; }
L_0045E60C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045E670; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 176u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045E670; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 5u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 5u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_0045E670; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 11;
L_0045E670:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 5u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E5F4u | kUnwind; return; } goto L_0045E5F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E5E8u | kUnwind; return; } goto L_0045E5E8; } }
L_0045E68C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0045E6B0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_0045E730; } }
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0045E730; } }
    set32(c.r[7], 0u - 1u);
    c.budget -= 1;
L_0045E6D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[5].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0])));
    c.budget -= 6;
L_0045E6E8:
    set32(c.r[3], c.r[9].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[5], ld32((c.r[3].w[0] + 188u)));
    c.r[6].d[0] = ld16((c.r[5].w[0] + 6u));
    c.r[3].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(64ll) ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[5].w[0] + 12u), c.r[7].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E6E8u | kUnwind; return; } goto L_0045E6E8; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5u));
    set32(c.r[5], c.r[10].w[0] + 1u);
    c.r[10].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[10].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E6D0u | kUnwind; return; } goto L_0045E6D0; } }
    c.budget -= 1;
L_0045E730:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_0045E788; } }
L_0045E740:
    c.r[9].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[7], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[10].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] << 5);
    c.r[10].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[7].w[0] - c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    c.r[3].d[0] = c.r[10].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E740u | kUnwind; return; } goto L_0045E740; } }
    c.budget -= 1;
L_0045E788:
    st32((c.r[4].w[0] + 20u), 0u);
    st16((c.r[4].w[0] + 24u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + 7u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0045E7D0; } }
L_0045E7A8:
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + 7u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E7A8u | kUnwind; return; } goto L_0045E7A8; } }
L_0045E7D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0045E7E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045E814; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E810u); set32(c.r[5], c.r[5].w[0] - 5904u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x0045E810u) [[unlikely]] return; }
L_0045E810:
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 1;
L_0045E814:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045E82C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E828u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0045E828u) [[unlikely]] return; }
L_0045E828:
    st32((c.r[18].w[0] + 12u), 0u);
    c.budget -= 1;
L_0045E82C:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0045E894; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 1;
L_0045E840:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045E858; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E854u); set32(c.r[5], c.r[5].w[0] + 6640u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x0045E854u) [[unlikely]] return; }
L_0045E854:
    st32((c.r[18].w[0] + 32u), 0u);
    c.budget -= 1;
L_0045E858:
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045E874; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E870u); set32(c.r[5], c.r[5].w[0] + 6640u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x0045E870u) [[unlikely]] return; }
L_0045E870:
    st32((c.r[18].w[0] + 40u), 0u);
    c.budget -= 1;
L_0045E874:
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045E8CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E888u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0045E888u) [[unlikely]] return; }
L_0045E888:
    st32((c.r[18].w[0] + 36u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0045E8D0; } }
L_0045E894:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045E898:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E8B0u); set32(c.r[4], c.r[4].w[0] + 3856u);  if (depth < kMaxDepth) unit_0041(c, 39u, depth + 1u); else { c.pc = 0x00304850u; return; } if (c.pc != 0x0045E8B0u) [[unlikely]] return; }
L_0045E8B0:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E898u | kUnwind; return; } goto L_0045E898; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 32u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E840u | kUnwind; return; } goto L_0045E840; } }
L_0045E8CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0045E8D0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0045E8F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0045E930; } }
    set32(c.r[4], c.r[17].w[0] + 448u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0045E938; } }
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0045E91C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0045E930; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E930u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0045E930u) [[unlikely]] return; }
L_0045E930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0045E954; } }
L_0045E938:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[6], 0u + 32u);
    set32(c.r[5], c.r[5].w[0] - 5776u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E94Cu); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x0045E94Cu) [[unlikely]] return; }
L_0045E94C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E91Cu | kUnwind; return; } goto L_0045E91C; } }
L_0045E954:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0045E970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0045E9A0; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0045E9A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E9A0u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0045E9A0u) [[unlikely]] return; }
L_0045E9A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0045E9C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[28].w[0] - 31300u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0045EA90; } }
L_0045EA00:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[21].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[21].w[0]);
    set32(c.r[19], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EA20u); set32(c.r[5], ld32((c.r[20].w[0])));  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x0045EA20u) [[unlikely]] return; }
L_0045EA20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045EA7C; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[18].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[18].w[0] + 48u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 8u));
    st16((c.r[18].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 10u));
    st16((c.r[18].w[0] + 54u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[18].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[18].w[0] + 60u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 20u));
    st16((c.r[18].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 22u));
    st16((c.r[18].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 24u));
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0045EA90; } }
L_0045EA7C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045EA00u | kUnwind; return; } goto L_0045EA00; } }
L_0045EA90:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EAA0u); set32(c.r[6], c.r[18].w[0] + 44u);  if (depth < kMaxDepth) unit_0097(c, 171u, depth + 1u); else { c.pc = 0x0045EE70u; return; } if (c.pc != 0x0045EAA0u) [[unlikely]] return; }
L_0045EAA0:
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = ld8((c.r[18].w[0] + 4u));  if (t) { goto L_0045EAC4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EAC0u); set32(c.r[5], c.r[5].w[0] - 5904u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x0045EAC0u) [[unlikely]] return; }
L_0045EAC0:
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 1;
L_0045EAC4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0045EB04; } }
L_0045EACC:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = ld8((c.r[18].w[0] + 4u));  if (t) { goto L_0045EAE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EAE0u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0045EAE0u) [[unlikely]] return; }
L_0045EAE0:
    st32((c.r[18].w[0] + 12u), 0u);
    c.budget -= 1;
L_0045EAE4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0045EB48; } }
L_0045EAEC:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 4u));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0045EB58; } }
L_0045EAFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0045EBC0; } }
L_0045EB04:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EB20u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0045EB20u) [[unlikely]] return; }
L_0045EB20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 5152u);
    set32(c.r[6], c.r[6].w[0] - 5904u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EB40u); set32(c.r[7], 0u + 2544u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x0045EB40u) [[unlikely]] return; }
L_0045EB40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045EACCu | kUnwind; return; } goto L_0045EACC; } }
L_0045EB48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EB50u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0045EB50u) [[unlikely]] return; }
L_0045EB50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045EAECu | kUnwind; return; } goto L_0045EAEC; } }
L_0045EB58:
    c.r[17].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[6], c.r[18].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[7], c.r[18].w[0] + 44u);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    set32(c.r[16], c.r[3].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EB88u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0097(c, 108u, depth + 1u); else { c.pc = 0x0045E300u; return; } if (c.pc != 0x0045EB88u) [[unlikely]] return; }
L_0045EB88:
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[19].w[0] + 1u);
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[5], c.r[17].w[0] << 2);
    c.r[19].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[6], c.r[6].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 4u));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045EB58u | kUnwind; return; } goto L_0045EB58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045EAFCu | kUnwind; return; } goto L_0045EAFC; } }
L_0045EBC0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0045EBE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 5072u);
    st32((c.r[4].w[0] + 96u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 448u);
    set32(c.r[6], c.r[6].w[0] - 5776u);
    set32(c.r[7], 0u + 32u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EC14u); set32(c.r[8], 0u + 64u);  if (depth < kMaxDepth) unit_0002(c, 183u, depth + 1u); else { c.pc = 0x0020B3F0u; return; } if (c.pc != 0x0045EC14u) [[unlikely]] return; }
L_0045EC14:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0045EC30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0045EC40:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D200u | kUnwind; return; } goto L_0045D200; }
L_0045EC70:
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 2520u), 0u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 176u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0045ECA0:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[1].d[0] = 0ll < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0045ED38; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[6], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 8;
L_0045ECD0:
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0045ED24; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5u));
    c.budget -= 6;
    { const bool t = c.r[9].d[0] == c.r[3].d[0];  if (t) { goto L_0045ED38; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[9].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[6], ld32((c.r[7].w[0])));
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[6].w[0]);  if (t) { goto L_0045ED38; } }
L_0045ED24:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045ECD0u | kUnwind; return; } goto L_0045ECD0; } }
    c.budget -= 1;
L_0045ED38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0045ED40:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[2].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_0045EE0C; } }
    set32(c.r[10], ld32((c.r[4].w[0] + 12u)));
    c.r[1].d[0] = 0ll < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_0045EDB8; } }
    set32(c.r[9], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[8], 0u + 1u);
    c.budget -= 2;
L_0045ED68:
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 3));
    c.r[3].d[0] = c.r[11].d[0] & 7ull;
    set32(c.r[6], c.r[9].w[0] + c.r[5].w[0]);
    set32(c.r[7], c.r[8].w[0] << (c.r[3].w[0] & 31u));
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[3].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0045EDA8; } }
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.r[2].d[0] = c.r[11].d[0] & 65535ull;
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0045EDB8; } }
L_0045EDA8:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[3].d[0] = c.r[11].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045ED68u | kUnwind; return; } goto L_0045ED68; } }
L_0045EDB8:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0045EE48; } }
L_0045EDD8:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 8u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    c.r[5].d[0] = c.r[5].d[0] & 7ull;
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0045EE50; } }
L_0045EE04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0045EE5C; } }
L_0045EE0C:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[6].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[3].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045EDB8u | kUnwind; return; } goto L_0045EDB8; } }
L_0045EE48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045EDD8u | kUnwind; return; } goto L_0045EDD8; } }
L_0045EE50:
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045EE04u | kUnwind; return; } goto L_0045EE04; } }
L_0045EE5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0045EE70:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0045EEB4; } }
L_0045EEAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_0045F174; } }
L_0045EEB4:
    c.r[22].d[0] = ld16((c.r[6].w[0] + 20u));
    set32(c.r[2], c.r[29].w[0] + 173u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], c.r[29].w[0] + 174u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[29].w[0] + 175u);
    st8((c.r[29].w[0] + 172u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EEE8u); set32(c.r[6], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x003FA3F0u; return; } if (c.pc != 0x0045EEE8u) [[unlikely]] return; }
L_0045EEE8:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    st32((c.r[21].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 4u), 0u);
    st16((c.r[21].w[0] + 8u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[21].w[0] + 12u)));  if (t) { goto L_0045EF18; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EF14u); set32(c.r[5], c.r[5].w[0] + 6640u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x0045EF14u) [[unlikely]] return; }
L_0045EF14:
    st32((c.r[21].w[0] + 16u), 0u);
    c.budget -= 1;
L_0045EF18:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0045EFB8; } }
L_0045EF20:
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] << 4);  if (t) { goto L_0045EF40; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EF3Cu); set32(c.r[5], c.r[5].w[0] + 6640u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x0045EF3Cu) [[unlikely]] return; }
L_0045EF3C:
    st32((c.r[21].w[0] + 24u), 0u);
    c.budget -= 1;
L_0045EF40:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0045EFEC; } }
L_0045EF48:
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + 7u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_0045EF68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EF64u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0045EF64u) [[unlikely]] return; }
L_0045EF64:
    st32((c.r[21].w[0] + 20u), 0u);
    c.budget -= 1;
L_0045EF68:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0045F020; } }
L_0045EF70:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] + 7u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0045F030; } }
L_0045EF88:
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] + 7u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045EF88u | kUnwind; return; } goto L_0045EF88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;  if (t) { goto L_0045F034; } }
L_0045EFB8:
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EFC4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0045EFC4u) [[unlikely]] return; }
L_0045EFC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2160u);
    set32(c.r[6], c.r[6].w[0] + 6640u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EFE4u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x0045EFE4u) [[unlikely]] return; }
L_0045EFE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045EF20u | kUnwind; return; } goto L_0045EF20; } }
L_0045EFEC:
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EFF8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0045EFF8u) [[unlikely]] return; }
L_0045EFF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2160u);
    set32(c.r[6], c.r[6].w[0] + 6640u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F018u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x0045F018u) [[unlikely]] return; }
L_0045F018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 24u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045EF48u | kUnwind; return; } goto L_0045EF48; } }
L_0045F020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F028u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0045F028u) [[unlikely]] return; }
L_0045F028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045EF70u | kUnwind; return; } goto L_0045EF70; } }
L_0045F030:
    c.r[3].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0045F034:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0045F04C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0045F044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045EEACu | kUnwind; return; } goto L_0045EEAC; } }
L_0045F04C:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[23], c.r[29].w[0] + 164u);
    set32(c.r[30], c.r[29].w[0] + 166u);
    c.budget -= 4;
L_0045F05C:
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 3856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F070u); set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0041(c, 58u, depth + 1u); else { c.pc = 0x00304A80u; return; } if (c.pc != 0x0045F070u) [[unlikely]] return; }
L_0045F070:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0045F078:
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0045F158; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[1].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0045F158; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 24u)));
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[3].d[0] = ld16((c.r[30].w[0]));
    set32(c.r[7], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0])));
    c.r[4].d[0] = ld16((c.r[7].w[0] + 4u));
    st32((c.r[29].w[0] + 160u), c.r[6].w[0]);
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[23].w[0]));
    st32((c.r[5].w[0]), c.r[6].w[0]);
    st16((c.r[5].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 15;
    { const bool t = c.r[18].d[0] == 0ull; st16((c.r[5].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0045F130; } }
    c.budget -= 1;
L_0045F0D8:
    set32(c.r[4], ld32((c.r[21].w[0] + 24u)));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 172u));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[5], c.r[5].w[0] + 260u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[29].w[0] + 173u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[29].w[0] + 174u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[29].w[0] + 175u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045F078u | kUnwind; return; } goto L_0045F078; } }
L_0045F130:
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F14Cu); set32(c.r[4], c.r[4].w[0] + 3856u);  if (depth < kMaxDepth) unit_0041(c, 43u, depth + 1u); else { c.pc = 0x003048C0u; return; } if (c.pc != 0x0045F14Cu) [[unlikely]] return; }
L_0045F14C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045F0D8u | kUnwind; return; } goto L_0045F0D8; } }
    c.budget -= 1;
L_0045F158:
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045F05Cu | kUnwind; return; } goto L_0045F05C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045F044u | kUnwind; return; } goto L_0045F044; } }
L_0045F174:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0045F1A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 96u);  c.pc = t; return; }
L_0045F1B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F1C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 42u, depth + 1u); else { c.pc = 0x00470530u; return; } if (c.pc != 0x0045F1C4u) [[unlikely]] return; }
L_0045F1C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F1CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0045F1CCu) [[unlikely]] return; }
L_0045F1CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0045F1E0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[3].d[0] | 55050ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[2] = c.r[4].w[0];
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[3].d[0] = c.r[3].d[0] | 63875ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[1] = c.r[3].w[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[4], 0u + 128u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[0] = c.r[3].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull | 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    set32(c.r[3], c.r[29].w[0] + 253u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[29].w[0]), c.f[20]);
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.f[3] = ld32((c.r[28].w[0] - 28388u));
    set32(c.r[3], c.r[29].w[0] + 254u);
    c.r[6].d[0] = c.r[6].d[0] << 16;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[6].d[0] = c.r[6].d[0] << 16;
    set32(c.r[20], ld32((c.r[28].w[0] - 28392u)));
    st8((c.r[29].w[0] + 252u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    set32(c.r[3], c.f[1]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.f[3] = c.r[5].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.budget -= 52;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[28].w[0] - 28388u), c.f[0]);  if (t) { goto L_0045F540; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[19], c.r[29].w[0] + 216u);
    c.f[22] = c.r[3].w[0];
    set32(c.r[18], c.r[29].w[0] + 184u);
    c.f[21] = 0u;
    set32(c.r[17], c.r[29].w[0] + 200u);
    set32(c.r[16], c.r[29].w[0] + 192u);
    set32(c.r[21], c.r[29].w[0] + 208u);
    set32(c.r[22], c.r[29].w[0] + 232u);
    set32(c.r[23], c.r[29].w[0] + 224u);
    set32(c.r[30], c.r[29].w[0] + 255u);
    c.budget -= 11;
L_0045F2DC:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045F530; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F2F0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 175u, depth + 1u); else { c.pc = 0x002BA700u; return; } if (c.pc != 0x0045F2F0u) [[unlikely]] return; }
L_0045F2F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045F530; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 112u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0045F530; } }
    set32(c.r[2], c.r[29].w[0] + 196u);
    st32((c.r[2].w[0]), c.f[22]);
    set32(c.r[2], c.r[29].w[0] + 236u);
    st32((c.r[2].w[0]), c.f[22]);
    set32(c.r[2], c.r[29].w[0] + 188u);
    st32((c.r[2].w[0]), c.f[21]);
    set32(c.r[2], c.r[29].w[0] + 180u);
    st32((c.r[2].w[0]), c.f[21]);
    set32(c.r[2], c.r[29].w[0] + 204u);
    c.f[0] = ld32((c.r[20].w[0] + 116u));
    st32((c.r[2].w[0]), c.f[21]);
    c.f[20] = ld32((c.r[28].w[0] - 28388u));
    set32(c.r[2], c.r[29].w[0] + 220u);
    st32((c.r[2].w[0]), c.f[21]);
    set32(c.r[2], c.r[29].w[0] + 212u);
    st32((c.r[2].w[0]), c.f[21]);
    set32(c.r[2], c.r[29].w[0] + 228u);
    st32((c.r[2].w[0]), c.f[21]);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[12] = c.f[20];
    st32((c.r[18].w[0]), c.f[21]);
    st32((c.r[17].w[0]), c.f[21]);
    st32((c.r[16].w[0]), c.f[21]);
    st32((c.r[21].w[0]), c.f[21]);
    st32((c.r[22].w[0]), c.f[21]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F374u); st32((c.r[23].w[0]), c.f[21]);  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x0045F374u) [[unlikely]] return; }
L_0045F374:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F380u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x0045F380u) [[unlikely]] return; }
L_0045F380:
    c.f[7] = ld32((c.r[18].w[0]));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[8] = ld32((c.r[29].w[0] + 176u));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[5] = ld32((c.r[17].w[0]));
    c.f[6] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[19].w[0]));
    c.f[4] = ld32((c.r[21].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[20], c.f[7]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[0]);
    st32((c.r[29].w[0] + 176u), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[7]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[8], c.f[20]);
    st32((c.r[18].w[0]), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[20], c.f[5]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[5]);
    st32((c.r[16].w[0]), c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[6], c.f[20]);
    st32((c.r[17].w[0]), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[20], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[21].w[0]), c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[4], c.f[20]);
    c.f[2] = ld32((c.r[22].w[0]));
    c.f[3] = ld32((c.r[23].w[0]));
    st32((c.r[19].w[0]), c.f[1]);
    c.f[5] = ld32((c.r[20].w[0] + 96u));
    c.f[4] = 0u;
    c.facc = fp::ee::mul(c.fcr31, c.f[20], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[20]);
    c.f[3] = ld32((c.r[20].w[0] + 100u));
    c.f[2] = ld32((c.r[20].w[0] + 104u));
    st32((c.r[23].w[0]), c.f[1]);
    st32((c.r[22].w[0]), c.f[0]);
    c.budget -= 38;
L_0045F418:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045F418u | kUnwind; return; } goto L_0045F418; } }
    c.r[9].d[0] = ld8((c.r[20].w[0] + 112u));
    set32(c.r[3], c.r[29].w[0] + 253u);
    set32(c.r[8], ld32((c.r[20].w[0] + 92u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[6].d[0] = ld8((c.r[29].w[0] + 252u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 3376u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[30]);
    set32(c.r[7], c.r[20].w[0] + 72u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[29].w[0] + 254u);
    st8((c.r[30].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[6].d[0] = ld8((c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[30].w[0]));
    st8((c.r[8].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[8].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    set32(c.r[4], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 1056u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 1056u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 1064u), c.r[4].w[0]);
    c.budget -= 51;
L_0045F530:
    set32(c.r[20], ld32((c.r[20].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045F2DCu | kUnwind; return; } goto L_0045F2DC; } }
    c.budget -= 1;
L_0045F540:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_0045F580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F594u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x0045F594u) [[unlikely]] return; }
L_0045F594:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045F5C8; } }
L_0045F59C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 112u));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0045F5BC; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 112u));
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0045F5C0; } }
L_0045F5BC:
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0045F5C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0045F70C; } }
L_0045F5C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F5D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x002BAFE0u; return; } if (c.pc != 0x0045F5D0u) [[unlikely]] return; }
L_0045F5D0:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 264u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F5E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045F5E4u) [[unlikely]] return; }
L_0045F5E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045F59Cu | kUnwind; return; } goto L_0045F59C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045F59Cu | kUnwind; return; } goto L_0045F59C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43610000u);
    c.f[5] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = ld32((c.r[16].w[0] + 96u));
    c.f[3] = ld32((c.r[16].w[0] + 100u));
    c.f[0] = c.r[3].w[0];
    c.f[6] = ld32((c.r[4].w[0] + 40u));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[4] = ld32((c.r[4].w[0] + 36u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[5], c.f[5]);
    st32((c.r[29].w[0] + 32u), c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    st32((c.r[29].w[0] + 40u), c.f[5]);
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 36u), c.f[3]);  if (t) { goto L_0045F6C8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = c.r[4].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43510000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.r[1].d[0] = c.r[4].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0045F694; } }
    set32(c.r[4], 0u + 128u);
    c.budget -= 1;
L_0045F694:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 112u));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0045F6F0; } }
    c.r[3].d[0] = c.r[4].sd[0] < -2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0045F6FC; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 112u));
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045F5C0u | kUnwind; return; } goto L_0045F5C0; } }
L_0045F6C8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 112u));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0045F6E8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 112u));
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045F5C0u | kUnwind; return; } goto L_0045F5C0; } }
L_0045F6E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045F5C0u | kUnwind; return; } goto L_0045F5C0; } }
L_0045F6F0:
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045F5C0u | kUnwind; return; } goto L_0045F5C0; } }
L_0045F6FC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 112u));
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045F5C0u | kUnwind; return; } goto L_0045F5C0; } }
L_0045F70C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0045F720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F73Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 175u, depth + 1u); else { c.pc = 0x002BA700u; return; } if (c.pc != 0x0045F73Cu) [[unlikely]] return; }
L_0045F73C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045F768; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0045F75C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F754u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0045F754u) [[unlikely]] return; }
L_0045F754:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0045F76C; } }
L_0045F75C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F768u); st8((c.r[17].w[0] + 112u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x0045F768u) [[unlikely]] return; }
L_0045F768:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0045F76C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0045F780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[4] = ld32((c.r[5].w[0]));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(0u));
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 96u), c.f[4]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[4].w[0] + 100u), c.f[3]);
    st32((c.r[4].w[0] + 104u), c.f[2]);
    st32((c.r[4].w[0] + 108u), c.f[1]);
    st32((c.r[4].w[0] + 116u), c.f[12]);
    c.f[1] = ld32((c.r[4].w[0] + 100u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 100u), c.f[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F7E4u); set32(c.r[5], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_003A(c, 264u, depth + 1u); else { c.pc = 0x002EB440u; return; } if (c.pc != 0x0045F7E4u) [[unlikely]] return; }
L_0045F7E4:
    c.f[1] = ld32((c.r[16].w[0] + 100u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] + 9992u);
    set32(c.r[5], 0u + 20u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F80Cu); st32((c.r[16].w[0] + 100u), c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x0045F80Cu) [[unlikely]] return; }
L_0045F80C:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F818u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 85u, depth + 1u); else { c.pc = 0x00304E30u; return; } if (c.pc != 0x0045F818u) [[unlikely]] return; }
L_0045F818:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 74u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 74u));
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0045F850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0045F91C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 14000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 28392u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_0045F8B4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_0045F924; } }
L_0045F890:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 120u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045F890u | kUnwind; return; } goto L_0045F890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 120u)));  if (t) { goto L_0045F928; } }
L_0045F8B4:
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    st32((c.r[28].w[0] - 28392u), c.r[2].w[0]);
    c.budget -= 2;
L_0045F8BC:
    set32(c.r[2], c.r[17].w[0] + 64u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045F930; } }
L_0045F8C8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0045F904; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 16976u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0045F904; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0045F904; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_0045F904:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0045F91C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F91Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0045F91Cu) [[unlikely]] return; }
L_0045F91C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0045F94C; } }
L_0045F924:
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 1;
L_0045F928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 120u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045F8BCu | kUnwind; return; } goto L_0045F8BC; } }
L_0045F930:
    set32(c.r[4], c.r[17].w[0] + 72u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 64u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045F8C8u | kUnwind; return; } goto L_0045F8C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F944u);  if (depth < kMaxDepth) unit_0018(c, 157u, depth + 1u); else { c.pc = 0x00261CA0u; return; } if (c.pc != 0x0045F944u) [[unlikely]] return; }
L_0045F944:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045F8C8u | kUnwind; return; } goto L_0045F8C8; } }
L_0045F94C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0045F960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[10], 0u - 2u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[8], 0u - 3u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[12].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[7], c.r[7].w[0] - 12672u);
    set32(c.r[6], c.r[6].w[0] + 16976u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[3], c.r[3].w[0] + 14000u);
    set32(c.r[2], 0u + 48u);
    set32(c.r[17], c.r[16].w[0] + 64u);
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0]), c.r[7].w[0]);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st8((c.r[4].w[0] + 75u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 74u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 72u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 76u), 0u);
    c.budget -= 55;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FA3Cu); set32(c.r[4], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0018(c, 158u, depth + 1u); else { c.pc = 0x00261CB0u; return; } if (c.pc != 0x0045FA3Cu) [[unlikely]] return; }
L_0045FA3C:
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[17].w[0] + 10u));
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[4].d[0] = c.r[4].d[0] | 19ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 28392u)));
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 28392u), c.r[16].w[0]);
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0045FA80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0045FA90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FAB4u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x0045FAB4u) [[unlikely]] return; }
L_0045FAB4:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FAC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045FAC8u) [[unlikely]] return; }
L_0045FAC8:
    c.f[1] = ld32((c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[6], c.r[29].w[0] + 52u);
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.f[0] = c.r[3].w[0];
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[6].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 56u), c.f[2]);
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FB0Cu); st32((c.r[29].w[0] + 60u), c.f[1]);  if (depth < kMaxDepth) unit_003A(c, 264u, depth + 1u); else { c.pc = 0x002EB440u; return; } if (c.pc != 0x0045FB0Cu) [[unlikely]] return; }
L_0045FB0C:
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[16].w[0] + 76u), c.f[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FB3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045FB3Cu) [[unlikely]] return; }
L_0045FB3C:
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 48u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045FB54; } }
L_0045FB4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0045FBB8; } }
L_0045FB54:
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FB64u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x0045FB64u) [[unlikely]] return; }
L_0045FB64:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FB78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045FB78u) [[unlikely]] return; }
L_0045FB78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[3].w[0];
    c.f[5] = ld32((c.r[2].w[0]));
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    c.f[3] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[5]);
    st32((c.r[17].w[0] + 36u), c.f[1]);
    st32((c.r[17].w[0] + 40u), c.f[4]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 44u), c.f[3]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045FB4Cu | kUnwind; return; } goto L_0045FB4C; } }
L_0045FBB8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0045FBD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 60u));  c.pc = t; return; }
L_0045FBE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], 0u + 5u);
    st32((c.r[3].w[0] - 11780u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] - 11776u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] - 11760u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] - 11772u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[4].d[0] | 26214ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] - 11768u), c.r[5].w[0]);
    set32(c.r[4], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42340000u);
    st32((c.r[3].w[0] - 11764u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] - 11756u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[4].w[0] - 11736u), 0u);
    st32((c.r[3].w[0] - 11728u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] - 11732u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] - 11748u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] - 11744u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 33;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 11752u), c.r[4].w[0]);  c.pc = t; return; }
L_0045FC70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FC90u); st32((c.r[6].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002E(c, 258u, depth + 1u); else { c.pc = 0x002BB1B0u; return; } if (c.pc != 0x0045FC90u) [[unlikely]] return; }
L_0045FC90:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0045FCB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FCCCu); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x0045FCCCu) [[unlikely]] return; }
L_0045FCCC:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0045FCE0:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[4].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 5;
    { set32(c.r[4], c.r[4].w[0] - 10288u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C21D0u | kUnwind; return; } [[clang::musttail]] return unit_0030(c, 514u, depth); }
L_0045FD00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FD14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 379u, depth + 1u); else { c.pc = 0x0046FF90u; return; } if (c.pc != 0x0045FD14u) [[unlikely]] return; }
L_0045FD14:
    st32((c.r[16].w[0] + 164u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FD24u); st32((c.r[16].w[0] + 160u), 0u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0045FD24u) [[unlikely]] return; }
L_0045FD24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0045FD40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045FD88; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045FD88; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[5], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0045FD88; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 5804u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0045FD88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0045FD8C; } }
L_0045FD88:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0045FD8C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0045FD9C; } }
L_0045FD94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0045FDAC; } }
L_0045FD9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FDA4u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0045FDA4u) [[unlikely]] return; }
L_0045FDA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045FD94u | kUnwind; return; } goto L_0045FD94; } }
L_0045FDAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0045FDC0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_009B(c, 380u, depth); }
L_0045FDD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0045FDE0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_009B(c, 383u, depth); }
L_0045FDF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
L_0045FE04:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0098(c, 13u, depth); } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 20944u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0045C000u < 16384u) { entry = entries_0097[(t - 0x0045C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0045FE30:
    c.f[2] = ld32((c.r[17].w[0] + 168u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[1] = ld32((c.r[17].w[0] + 108u));
    c.f[0] = ld32((c.r[3].w[0] - 10224u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_0098(c, 13u, depth); } }
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FE64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045FE64u) [[unlikely]] return; }
L_0045FE64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045FF00; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045FF00; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 176u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045FF00; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FE94u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0034C5A0u; return; } if (c.pc != 0x0045FE94u) [[unlikely]] return; }
L_0045FE94:
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FEA0u); set32(c.r[4], c.r[2].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 15u, depth + 1u); else { c.pc = 0x00394350u; return; } if (c.pc != 0x0045FEA0u) [[unlikely]] return; }
L_0045FEA0:
    set32(c.r[3], ld32((c.r[17].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    c.f[12] = ld32((c.r[3].w[0] + 80u));
    set32(c.r[5], c.r[3].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FEB8u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 168u, depth + 1u); else { c.pc = 0x0028DA90u; return; } if (c.pc != 0x0045FEB8u) [[unlikely]] return; }
L_0045FEB8:
    set32(c.r[8], ld32((c.r[17].w[0] + 172u)));
    c.r[2].d[0] = ld8((c.r[8].w[0] + 48u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0098(c, 15u, depth); } }
L_0045FEC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 5804u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FED8u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 148u)));  if (depth < kMaxDepth) unit_00BF(c, 313u, depth + 1u); else { c.pc = 0x004FEC30u; return; } if (c.pc != 0x0045FED8u) [[unlikely]] return; }
L_0045FED8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 5804u)));
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 6u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FEF4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x0045FEF4u) [[unlikely]] return; }
L_0045FEF4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 164u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0098(c, 13u, depth); } }
L_0045FF00:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 96u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045FF20; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    c.f[12] = ld32((c.r[17].w[0] + 100u));
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FF20u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 168u, depth + 1u); else { c.pc = 0x0028DA90u; return; } if (c.pc != 0x0045FF20u) [[unlikely]] return; }
L_0045FF20:
    set32(c.r[5], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FF2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 238u, depth + 1u); else { c.pc = 0x002BAF40u; return; } if (c.pc != 0x0045FF2Cu) [[unlikely]] return; }
L_0045FF2C:
    set32(c.r[3], 0u + 5u);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 164u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0098(c, 13u, depth); } }
L_0045FF3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[4], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045FF7C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 5804u)));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0045FF7C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FF70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 238u, depth + 1u); else { c.pc = 0x002BAF40u; return; } if (c.pc != 0x0045FF70u) [[unlikely]] return; }
L_0045FF70:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 164u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0098(c, 13u, depth); } }
L_0045FF7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 5804u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 44u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0098(c, 13u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FFA4u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 27u, depth + 1u); else { c.pc = 0x0034C580u; return; } if (c.pc != 0x0045FFA4u) [[unlikely]] return; }
L_0045FFA4:
    set32(c.r[3], ld32((c.r[17].w[0] + 172u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 92u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045FFC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st32((c.r[3].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 93u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0045FFD0; } }
L_0045FFC8:
    c.f[0] = ld32((c.r[3].w[0] + 84u));
    st32((c.r[3].w[0] + 88u), c.f[0]);
    c.budget -= 2;
L_0045FFD0:
    set32(c.r[3], ld32((c.r[17].w[0] + 172u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 48u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0098(c, 16u, depth); } }
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FFF4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x0045FFF4u) [[unlikely]] return; }
L_0045FFF4:
    set32(c.r[5], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 1;
L_0045FFF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460000u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 238u, depth + 1u); else { c.pc = 0x002BAF40u; return; } if (c.pc != 0x00460000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0098(c, 1u, depth);
}

}

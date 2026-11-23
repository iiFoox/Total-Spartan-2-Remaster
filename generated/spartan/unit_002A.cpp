#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0,
    0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0,
    0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0,
    0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0,
    0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0,
    0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0,
    0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0,
    154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0,
    0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0,
    0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 190, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0,
    0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0,
    213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0,
    229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0,
    248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0,
    0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0,
    0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0,
    0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0,
    0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0,
    0, 0, 0, 277, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 282, 0, 0, 283, 0, 0, 0, 284, 0,
    0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0,
    0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_002A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002A8000;
    case 2u: goto L_002A8024;
    case 3u: goto L_002A803C;
    case 4u: goto L_002A8060;
    case 5u: goto L_002A8084;
    case 6u: goto L_002A80A0;
    case 7u: goto L_002A80C4;
    case 8u: goto L_002A80E0;
    case 9u: goto L_002A8128;
    case 10u: goto L_002A8180;
    case 11u: goto L_002A81C0;
    case 12u: goto L_002A81EC;
    case 13u: goto L_002A8200;
    case 14u: goto L_002A8234;
    case 15u: goto L_002A8264;
    case 16u: goto L_002A8278;
    case 17u: goto L_002A82A0;
    case 18u: goto L_002A82C0;
    case 19u: goto L_002A831C;
    case 20u: goto L_002A83D0;
    case 21u: goto L_002A83FC;
    case 22u: goto L_002A8440;
    case 23u: goto L_002A847C;
    case 24u: goto L_002A84A4;
    case 25u: goto L_002A84E0;
    case 26u: goto L_002A853C;
    case 27u: goto L_002A85F0;
    case 28u: goto L_002A861C;
    case 29u: goto L_002A8660;
    case 30u: goto L_002A869C;
    case 31u: goto L_002A86C4;
    case 32u: goto L_002A8700;
    case 33u: goto L_002A874C;
    case 34u: goto L_002A8800;
    case 35u: goto L_002A882C;
    case 36u: goto L_002A8870;
    case 37u: goto L_002A88A4;
    case 38u: goto L_002A88C4;
    case 39u: goto L_002A8900;
    case 40u: goto L_002A894C;
    case 41u: goto L_002A8A00;
    case 42u: goto L_002A8A2C;
    case 43u: goto L_002A8A70;
    case 44u: goto L_002A8AA4;
    case 45u: goto L_002A8AC4;
    case 46u: goto L_002A8B00;
    case 47u: goto L_002A8B5C;
    case 48u: goto L_002A8B68;
    case 49u: goto L_002A8B84;
    case 50u: goto L_002A8BA0;
    case 51u: goto L_002A8BA8;
    case 52u: goto L_002A8BD0;
    case 53u: goto L_002A8C9C;
    case 54u: goto L_002A8CC0;
    case 55u: goto L_002A8CDC;
    case 56u: goto L_002A8CF4;
    case 57u: goto L_002A8D10;
    case 58u: goto L_002A8D18;
    case 59u: goto L_002A8D44;
    case 60u: goto L_002A8E0C;
    case 61u: goto L_002A8E30;
    case 62u: goto L_002A8E4C;
    case 63u: goto L_002A8E90;
    case 64u: goto L_002A8EA0;
    case 65u: goto L_002A8F08;
    case 66u: goto L_002A8F14;
    case 67u: goto L_002A8F28;
    case 68u: goto L_002A8F44;
    case 69u: goto L_002A8F50;
    case 70u: goto L_002A8F78;
    case 71u: goto L_002A8F98;
    case 72u: goto L_002A9074;
    case 73u: goto L_002A9098;
    case 74u: goto L_002A90B4;
    case 75u: goto L_002A90C0;
    case 76u: goto L_002A90EC;
    case 77u: goto L_002A910C;
    case 78u: goto L_002A91E0;
    case 79u: goto L_002A9240;
    case 80u: goto L_002A92B0;
    case 81u: goto L_002A9304;
    case 82u: goto L_002A9344;
    case 83u: goto L_002A9364;
    case 84u: goto L_002A937C;
    case 85u: goto L_002A93B4;
    case 86u: goto L_002A93F8;
    case 87u: goto L_002A940C;
    case 88u: goto L_002A948C;
    case 89u: goto L_002A94A4;
    case 90u: goto L_002A9550;
    case 91u: goto L_002A95A4;
    case 92u: goto L_002A95E8;
    case 93u: goto L_002A95F0;
    case 94u: goto L_002A9614;
    case 95u: goto L_002A9660;
    case 96u: goto L_002A9680;
    case 97u: goto L_002A9700;
    case 98u: goto L_002A977C;
    case 99u: goto L_002A97B4;
    case 100u: goto L_002A97F0;
    case 101u: goto L_002A9824;
    case 102u: goto L_002A9868;
    case 103u: goto L_002A9880;
    case 104u: goto L_002A98E8;
    case 105u: goto L_002A9924;
    case 106u: goto L_002A9950;
    case 107u: goto L_002A99A0;
    case 108u: goto L_002A9A50;
    case 109u: goto L_002A9A84;
    case 110u: goto L_002A9A9C;
    case 111u: goto L_002A9AE0;
    case 112u: goto L_002A9B1C;
    case 113u: goto L_002A9B60;
    case 114u: goto L_002A9B78;
    case 115u: goto L_002A9BE0;
    case 116u: goto L_002A9C0C;
    case 117u: goto L_002A9C48;
    case 118u: goto L_002A9C88;
    case 119u: goto L_002A9CA0;
    case 120u: goto L_002A9CD0;
    case 121u: goto L_002A9D14;
    case 122u: goto L_002A9D58;
    case 123u: goto L_002A9D70;
    case 124u: goto L_002A9E10;
    case 125u: goto L_002A9E28;
    case 126u: goto L_002A9EA0;
    case 127u: goto L_002A9ECC;
    case 128u: goto L_002A9F00;
    case 129u: goto L_002A9F40;
    case 130u: goto L_002A9FC0;
    case 131u: goto L_002AA004;
    case 132u: goto L_002AA048;
    case 133u: goto L_002AA060;
    case 134u: goto L_002AA100;
    case 135u: goto L_002AA118;
    case 136u: goto L_002AA190;
    case 137u: goto L_002AA1BC;
    case 138u: goto L_002AA1F0;
    case 139u: goto L_002AA230;
    case 140u: goto L_002AA2B0;
    case 141u: goto L_002AA2EC;
    case 142u: goto L_002AA330;
    case 143u: goto L_002AA348;
    case 144u: goto L_002AA3B0;
    case 145u: goto L_002AA3DC;
    case 146u: goto L_002AA418;
    case 147u: goto L_002AA458;
    case 148u: goto L_002AA470;
    case 149u: goto L_002AA4A0;
    case 150u: goto L_002AA4E8;
    case 151u: goto L_002AA530;
    case 152u: goto L_002AA548;
    case 153u: goto L_002AA5E8;
    case 154u: goto L_002AA600;
    case 155u: goto L_002AA678;
    case 156u: goto L_002AA688;
    case 157u: goto L_002AA6A0;
    case 158u: goto L_002AA6CC;
    case 159u: goto L_002AA700;
    case 160u: goto L_002AA740;
    case 161u: goto L_002AA7C0;
    case 162u: goto L_002AA804;
    case 163u: goto L_002AA848;
    case 164u: goto L_002AA860;
    case 165u: goto L_002AA900;
    case 166u: goto L_002AA918;
    case 167u: goto L_002AA990;
    case 168u: goto L_002AA9BC;
    case 169u: goto L_002AA9F0;
    case 170u: goto L_002AAA30;
    case 171u: goto L_002AAAB0;
    case 172u: goto L_002AAB18;
    case 173u: goto L_002AAB58;
    case 174u: goto L_002AAB70;
    case 175u: goto L_002AAC8C;
    case 176u: goto L_002AACA0;
    case 177u: goto L_002AACB8;
    case 178u: goto L_002AACE4;
    case 179u: goto L_002AAD18;
    case 180u: goto L_002AAD5C;
    case 181u: goto L_002AAD70;
    case 182u: goto L_002AAD88;
    case 183u: goto L_002AAE00;
    case 184u: goto L_002AAE64;
    case 185u: goto L_002AAEA8;
    case 186u: goto L_002AAEC0;
    case 187u: goto L_002AAFDC;
    case 188u: goto L_002AB00C;
    case 189u: goto L_002AB040;
    case 190u: goto L_002AB084;
    case 191u: goto L_002AB088;
    case 192u: goto L_002AB100;
    case 193u: goto L_002AB148;
    case 194u: goto L_002AB218;
    case 195u: goto L_002AB244;
    case 196u: goto L_002AB2A4;
    case 197u: goto L_002AB2F0;
    case 198u: goto L_002AB320;
    case 199u: goto L_002AB330;
    case 200u: goto L_002AB340;
    case 201u: goto L_002AB350;
    case 202u: goto L_002AB360;
    case 203u: goto L_002AB370;
    case 204u: goto L_002AB380;
    case 205u: goto L_002AB398;
    case 206u: goto L_002AB3A8;
    case 207u: goto L_002AB3CC;
    case 208u: goto L_002AB3E4;
    case 209u: goto L_002AB408;
    case 210u: goto L_002AB420;
    case 211u: goto L_002AB444;
    case 212u: goto L_002AB45C;
    case 213u: goto L_002AB480;
    case 214u: goto L_002AB498;
    case 215u: goto L_002AB4BC;
    case 216u: goto L_002AB4D4;
    case 217u: goto L_002AB4F8;
    case 218u: goto L_002AB510;
    case 219u: goto L_002AB53C;
    case 220u: goto L_002AB560;
    case 221u: goto L_002AB598;
    case 222u: goto L_002AB5A4;
    case 223u: goto L_002AB5DC;
    case 224u: goto L_002AB640;
    case 225u: goto L_002AB658;
    case 226u: goto L_002AB668;
    case 227u: goto L_002AB6D8;
    case 228u: goto L_002AB6E4;
    case 229u: goto L_002AB700;
    case 230u: goto L_002AB760;
    case 231u: goto L_002AB780;
    case 232u: goto L_002AB794;
    case 233u: goto L_002AB7B0;
    case 234u: goto L_002AB7C8;
    case 235u: goto L_002AB7D0;
    case 236u: goto L_002AB7D8;
    case 237u: goto L_002AB7F0;
    case 238u: goto L_002AB800;
    case 239u: goto L_002AB810;
    case 240u: goto L_002AB820;
    case 241u: goto L_002AB8A0;
    case 242u: goto L_002AB8F4;
    case 243u: goto L_002AB938;
    case 244u: goto L_002AB990;
    case 245u: goto L_002AB9B0;
    case 246u: goto L_002ABAC0;
    case 247u: goto L_002ABAF4;
    case 248u: goto L_002ABB00;
    case 249u: goto L_002ABB14;
    case 250u: goto L_002ABB30;
    case 251u: goto L_002ABB40;
    case 252u: goto L_002ABB64;
    case 253u: goto L_002ABB6C;
    case 254u: goto L_002ABB84;
    case 255u: goto L_002ABB90;
    case 256u: goto L_002ABBC4;
    case 257u: goto L_002ABBF4;
    case 258u: goto L_002ABC08;
    case 259u: goto L_002ABC30;
    case 260u: goto L_002ABC3C;
    case 261u: goto L_002ABC50;
    case 262u: goto L_002ABC58;
    case 263u: goto L_002ABCB0;
    case 264u: goto L_002ABCE0;
    case 265u: goto L_002ABCF4;
    case 266u: goto L_002ABD18;
    case 267u: goto L_002ABD50;
    case 268u: goto L_002ABD78;
    case 269u: goto L_002ABD8C;
    case 270u: goto L_002ABDA4;
    case 271u: goto L_002ABDB0;
    case 272u: goto L_002ABDBC;
    case 273u: goto L_002ABE20;
    case 274u: goto L_002ABE34;
    case 275u: goto L_002ABE68;
    case 276u: goto L_002ABE78;
    case 277u: goto L_002ABE8C;
    case 278u: goto L_002ABE98;
    case 279u: goto L_002ABEA0;
    case 280u: goto L_002ABECC;
    case 281u: goto L_002ABED4;
    case 282u: goto L_002ABEDC;
    case 283u: goto L_002ABEE8;
    case 284u: goto L_002ABEF8;
    case 285u: goto L_002ABF04;
    case 286u: goto L_002ABF28;
    case 287u: goto L_002ABF40;
    case 288u: goto L_002ABF70;
    case 289u: goto L_002ABF8C;
    case 290u: goto L_002ABFC4;
    case 291u: goto L_002ABFD8;
    default: bad_entry(c, 0x002A8000u); return;
    }
L_002A8000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A803C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8024u);  if (depth < kMaxDepth) unit_002A(c, 6u, depth + 1u); else { c.pc = 0x002A80A0u; return; } if (c.pc != 0x002A8024u) [[unlikely]] return; }
L_002A8024:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002A803C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A803Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002A803Cu) [[unlikely]] return; }
L_002A803C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A8060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A8084; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8084u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002A8084u) [[unlikely]] return; }
L_002A8084:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A80A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A80C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A80C4u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002A80C4u) [[unlikely]] return; }
L_002A80C4:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A80E0:
    c.f[1] = fp::ee::add(c.fcr31, c.f[12], c.f[13]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A8144; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[13] = fp::ee::sub(c.fcr31, c.f[0], c.f[13]);
    c.f[1] = ld32((c.r[2].w[0] + 28u));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 11;
L_002A8128:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[12], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[13], c.f[2]);  if (t) { goto L_002A8170; } }
L_002A8144:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = ld32((c.r[2].w[0] + 24u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[2] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8128u | kUnwind; return; } goto L_002A8128; } }
L_002A8170:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A8180:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], c.r[6].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A81F4; } }
    set32(c.r[16], c.r[3].w[0] - c.r[6].w[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A81C0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002A81C0u) [[unlikely]] return; }
L_002A81C0:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[17].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_002A820C; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[5], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A81ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A81ECu) [[unlikely]] return; }
L_002A81EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_002A8210; } }
L_002A81F4:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8200u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002A8200u) [[unlikely]] return; }
L_002A8200:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_002A820C:
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_002A8210:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[5].w[0] + 100u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A826C; } }
    set32(c.r[16], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8234u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002A8234u) [[unlikely]] return; }
L_002A8234:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], 0u + 100u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; st32((c.r[17].w[0] + 20u), c.r[4].w[0]);  if (t) { goto L_002A8288; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[5], c.r[2].w[0] + 4u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8264u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8264u) [[unlikely]] return; }
L_002A8264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002A828C; } }
L_002A826C:
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8278u); set32(c.r[6], 0u + 100u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002A8278u) [[unlikely]] return; }
L_002A8278:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + 100u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8264u | kUnwind; return; } goto L_002A8264; } }
L_002A8288:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002A828C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A82A0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 276u));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0] + 268u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 276u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 276u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002A82C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    c.f[20] = ld32((c.r[5].w[0] + 32u));
    c.f[21] = ld32((c.r[5].w[0] + 36u));
    c.f[22] = ld32((c.r[5].w[0] + 40u));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002A83E8; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A831C:
    set32(c.r[4], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A8338; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8338:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A8354; } }
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A8354; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8354:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A8370; } }
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A8370; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8370:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A838C; } }
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A838C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A838C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A83A8; } }
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A83A8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A83A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A83C4; } }
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A83C4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A83C4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A8460; } }
    c.budget -= 1;
L_002A83D0:
    set32(c.r[3], ld32((c.r[19].w[0] + 132u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A831Cu | kUnwind; return; } goto L_002A831C; } }
    c.budget -= 1;
L_002A83E8:
    set32(c.r[3], ld32((c.r[19].w[0] + 140u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002A8458; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A83FC:
    set32(c.r[4], ld32((c.r[19].w[0] + 136u)));
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A8418; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8418:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A8434; } }
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A8434; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8434:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A8488; } }
    c.budget -= 1;
L_002A8440:
    set32(c.r[3], ld32((c.r[19].w[0] + 140u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A83FCu | kUnwind; return; } goto L_002A83FC; } }
    c.budget -= 1;
L_002A8458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A84B0; } }
L_002A8460:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 280u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A847Cu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A847Cu) [[unlikely]] return; }
L_002A847C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A83D0u | kUnwind; return; } goto L_002A83D0; } }
    c.budget -= 1;
L_002A8488:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 280u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A84A4u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A84A4u) [[unlikely]] return; }
L_002A84A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8440u | kUnwind; return; } goto L_002A8440; } }
    c.budget -= 1;
L_002A84B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002A84E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    c.f[20] = ld32((c.r[5].w[0] + 32u));
    c.f[21] = ld32((c.r[5].w[0] + 36u));
    c.f[22] = ld32((c.r[5].w[0] + 40u));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002A8608; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A853C:
    set32(c.r[4], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A8558; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8558:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A8574; } }
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A8574; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8574:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A8590; } }
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A8590; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8590:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A85AC; } }
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A85AC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A85AC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A85C8; } }
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A85C8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A85C8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A85E4; } }
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A85E4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A85E4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A8680; } }
    c.budget -= 1;
L_002A85F0:
    set32(c.r[3], ld32((c.r[19].w[0] + 132u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A853Cu | kUnwind; return; } goto L_002A853C; } }
    c.budget -= 1;
L_002A8608:
    set32(c.r[3], ld32((c.r[19].w[0] + 140u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002A8678; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A861C:
    set32(c.r[4], ld32((c.r[19].w[0] + 136u)));
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A8638; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8638:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A8654; } }
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A8654; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8654:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A86A8; } }
    c.budget -= 1;
L_002A8660:
    set32(c.r[3], ld32((c.r[19].w[0] + 140u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A861Cu | kUnwind; return; } goto L_002A861C; } }
    c.budget -= 1;
L_002A8678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A86D0; } }
L_002A8680:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 276u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A869Cu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A869Cu) [[unlikely]] return; }
L_002A869C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A85F0u | kUnwind; return; } goto L_002A85F0; } }
    c.budget -= 1;
L_002A86A8:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 276u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A86C4u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A86C4u) [[unlikely]] return; }
L_002A86C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8660u | kUnwind; return; } goto L_002A8660; } }
    c.budget -= 1;
L_002A86D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002A8700:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    c.f[20] = ld32((c.r[5].w[0] + 32u));
    c.f[21] = ld32((c.r[5].w[0] + 36u));
    c.f[22] = ld32((c.r[5].w[0] + 40u));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002A8818; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A874C:
    set32(c.r[4], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A8768; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8768:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A8784; } }
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A8784; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8784:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A87A0; } }
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A87A0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A87A0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A87BC; } }
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A87BC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A87BC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A87D8; } }
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A87D8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A87D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A87F4; } }
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A87F4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A87F4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A8890; } }
    c.budget -= 1;
L_002A8800:
    set32(c.r[3], ld32((c.r[19].w[0] + 132u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A874Cu | kUnwind; return; } goto L_002A874C; } }
    c.budget -= 1;
L_002A8818:
    set32(c.r[3], ld32((c.r[19].w[0] + 140u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002A8888; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A882C:
    set32(c.r[4], ld32((c.r[19].w[0] + 136u)));
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A8848; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8848:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A8864; } }
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A8864; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8864:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A88B0; } }
    c.budget -= 1;
L_002A8870:
    set32(c.r[3], ld32((c.r[19].w[0] + 140u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A882Cu | kUnwind; return; } goto L_002A882C; } }
    c.budget -= 1;
L_002A8888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A88D0; } }
L_002A8890:
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 272u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A88A4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A88A4u) [[unlikely]] return; }
L_002A88A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8800u | kUnwind; return; } goto L_002A8800; } }
    c.budget -= 1;
L_002A88B0:
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 272u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A88C4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A88C4u) [[unlikely]] return; }
L_002A88C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8870u | kUnwind; return; } goto L_002A8870; } }
    c.budget -= 1;
L_002A88D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002A8900:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    c.f[20] = ld32((c.r[5].w[0] + 32u));
    c.f[21] = ld32((c.r[5].w[0] + 36u));
    c.f[22] = ld32((c.r[5].w[0] + 40u));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002A8A18; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A894C:
    set32(c.r[4], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A8968; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8968:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A8984; } }
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A8984; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8984:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A89A0; } }
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A89A0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A89A0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A89BC; } }
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A89BC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A89BC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A89D8; } }
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A89D8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A89D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A89F4; } }
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A89F4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A89F4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A8A90; } }
    c.budget -= 1;
L_002A8A00:
    set32(c.r[3], ld32((c.r[19].w[0] + 132u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A894Cu | kUnwind; return; } goto L_002A894C; } }
    c.budget -= 1;
L_002A8A18:
    set32(c.r[3], ld32((c.r[19].w[0] + 140u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002A8A88; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8A2C:
    set32(c.r[4], ld32((c.r[19].w[0] + 136u)));
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A8A48; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8A48:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A8A64; } }
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A8A64; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8A64:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A8AB0; } }
    c.budget -= 1;
L_002A8A70:
    set32(c.r[3], ld32((c.r[19].w[0] + 140u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8A2Cu | kUnwind; return; } goto L_002A8A2C; } }
    c.budget -= 1;
L_002A8A88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A8AD0; } }
L_002A8A90:
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 268u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8AA4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8AA4u) [[unlikely]] return; }
L_002A8AA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8A00u | kUnwind; return; } goto L_002A8A00; } }
    c.budget -= 1;
L_002A8AB0:
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 268u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8AC4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8AC4u) [[unlikely]] return; }
L_002A8AC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8A70u | kUnwind; return; } goto L_002A8A70; } }
    c.budget -= 1;
L_002A8AD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002A8B00:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[22], ld32((c.r[4].w[0] + 104u)));
    c.f[21] = c.f[12];
    set32(c.r[18], ld32((c.r[4].w[0] + 92u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[13];  if (t) { goto L_002A8B70; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    c.budget -= 1;
L_002A8B5C:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002A8CE8; } }
L_002A8B68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A8E58; } }
L_002A8B70:
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[23], c.r[29].w[0] + 196u);
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[30], c.r[29].w[0] + 200u);
    set32(c.r[16], c.r[2].w[0] << 2);
    c.budget -= 5;
L_002A8B84:
    set32(c.r[2], ld32((c.r[21].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 312u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8BA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8BA0u) [[unlikely]] return; }
L_002A8BA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A8BC0; } }
L_002A8BA8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8B84u | kUnwind; return; } goto L_002A8B84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[21].w[0] + 88u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8B5Cu | kUnwind; return; } goto L_002A8B5C; } }
L_002A8BC0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8BD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8BD0u) [[unlikely]] return; }
L_002A8BD0:
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = ld32((c.r[20].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    c.f[4] = ld32((c.r[20].w[0] + 8u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    st32((c.r[23].w[0]), c.f[2]);
    st32((c.r[30].w[0]), c.f[4]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8BA8u | kUnwind; return; } goto L_002A8BA8; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[21], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[21]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A8C70; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[17].w[0])));  if (t) { goto L_002A8C8C; } }
L_002A8C70:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 7;
L_002A8C8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 328u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8C9Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8C9Cu) [[unlikely]] return; }
L_002A8C9C:
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8BA8u | kUnwind; return; } goto L_002A8BA8; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 352u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8CC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8CC0u) [[unlikely]] return; }
L_002A8CC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8BA8u | kUnwind; return; } goto L_002A8BA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8CDCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 105u, depth + 1u); else { c.pc = 0x004ACE00u; return; } if (c.pc != 0x002A8CDCu) [[unlikely]] return; }
L_002A8CDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8BA8u | kUnwind; return; } goto L_002A8BA8; } }
    c.budget -= 1;
L_002A8CE8:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[22], c.r[29].w[0] + 180u);
    set32(c.r[23], c.r[29].w[0] + 184u);
    c.budget -= 3;
L_002A8CF4:
    set32(c.r[2], ld32((c.r[21].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 312u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8D10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8D10u) [[unlikely]] return; }
L_002A8D10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A8D34; } }
L_002A8D18:
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8CF4u | kUnwind; return; } goto L_002A8CF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8B68u | kUnwind; return; } goto L_002A8B68; } }
L_002A8D34:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8D44u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8D44u) [[unlikely]] return; }
L_002A8D44:
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = ld32((c.r[20].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    c.f[4] = ld32((c.r[20].w[0] + 8u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    st32((c.r[22].w[0]), c.f[2]);
    st32((c.r[23].w[0]), c.f[4]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8D18u | kUnwind; return; } goto L_002A8D18; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[21], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[21]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A8DE0; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[17].w[0])));  if (t) { goto L_002A8DFC; } }
L_002A8DE0:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 7;
L_002A8DFC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 328u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8E0Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8E0Cu) [[unlikely]] return; }
L_002A8E0C:
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8D18u | kUnwind; return; } goto L_002A8D18; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 352u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8E30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8E30u) [[unlikely]] return; }
L_002A8E30:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8D18u | kUnwind; return; } goto L_002A8D18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8E4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 105u, depth + 1u); else { c.pc = 0x004ACE00u; return; } if (c.pc != 0x002A8E4Cu) [[unlikely]] return; }
L_002A8E4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8D18u | kUnwind; return; } goto L_002A8D18; } }
    c.budget -= 1;
L_002A8E58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002A8E90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A8EA0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[5].w[0] + 32u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[30], ld32((c.r[4].w[0] + 104u)));
    c.f[20] = fp::ee::mul(c.fcr31, c.f[13], c.f[13]);
    set32(c.r[22], ld32((c.r[4].w[0] + 92u)));
    c.r[2].d[0] = c.r[22].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 25;
    { const bool t = c.r[2].d[0] != 0ull; c.f[21] = c.f[12];  if (t) { goto L_002A8F1C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    c.budget -= 1;
L_002A8F08:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_002A9090; } }
L_002A8F14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[29].w[0] + 176u));  if (t) { goto L_002A9200; } }
L_002A8F1C:
    set32(c.r[2], c.r[22].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[22].w[0]);
    set32(c.r[23], c.r[2].w[0] << 2);
    c.budget -= 3;
L_002A8F28:
    set32(c.r[2], ld32((c.r[21].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 304u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8F44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8F44u) [[unlikely]] return; }
L_002A8F44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A8F68; } }
    c.budget -= 1;
L_002A8F50:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[2].d[0] = c.r[22].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[23], c.r[23].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8F28u | kUnwind; return; } goto L_002A8F28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 88u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8F08u | kUnwind; return; } goto L_002A8F08; } }
L_002A8F68:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 344u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8F78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8F78u) [[unlikely]] return; }
L_002A8F78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8F50u | kUnwind; return; } goto L_002A8F50; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 324u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8F98u); set32(c.r[6], c.r[29].w[0] + 192u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8F98u) [[unlikely]] return; }
L_002A8F98:
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.f[5] = ld32((c.r[2].w[0]));
    c.f[4] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[7] = ld32((c.r[29].w[0] + 192u));
    c.f[6] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    set32(c.r[2], c.r[29].w[0] + 200u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[2] = c.f[4] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[6] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8F50u | kUnwind; return; } goto L_002A8F50; } }
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[2] = fp::ee::sqrt(c.fcr31, c.f[2]);
    c.f[1] = c.r[2].w[0];
    c.f[5] = 0u;
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[6], c.f[1]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    c.f[1] = ld32((c.r[20].w[0] + 8u));
    c.f[2] = ld32((c.r[20].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[5]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8F50u | kUnwind; return; } goto L_002A8F50; } }
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[0]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8F50u | kUnwind; return; } goto L_002A8F50; } }
    st32((c.r[19].w[0]), c.f[7]);
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.f[21] = c.f[0];
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[19].w[0] + 4u), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 200u);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[19].w[0] + 8u), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 204u);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[19].w[0] + 12u), c.f[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 352u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9074u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A9074u) [[unlikely]] return; }
L_002A9074:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A9088; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8F50u | kUnwind; return; } goto L_002A8F50; } }
L_002A9088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8F50u | kUnwind; return; } goto L_002A8F50; } }
L_002A9090:
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[30], c.r[29].w[0] + 196u);
    c.budget -= 2;
L_002A9098:
    set32(c.r[2], ld32((c.r[21].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 304u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A90B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A90B4u) [[unlikely]] return; }
L_002A90B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A90DC; } }
    c.budget -= 1;
L_002A90C0:
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.r[2].d[0] = c.r[23].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9098u | kUnwind; return; } goto L_002A9098; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8F14u | kUnwind; return; } goto L_002A8F14; } }
L_002A90DC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 344u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A90ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A90ECu) [[unlikely]] return; }
L_002A90EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A90C0u | kUnwind; return; } goto L_002A90C0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 324u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A910Cu); set32(c.r[6], c.r[29].w[0] + 192u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A910Cu) [[unlikely]] return; }
L_002A910C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    c.f[5] = ld32((c.r[30].w[0]));
    set32(c.r[2], c.r[29].w[0] + 200u);
    c.f[4] = ld32((c.r[17].w[0] + 4u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[7] = ld32((c.r[29].w[0] + 192u));
    c.f[6] = ld32((c.r[17].w[0]));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[2] = c.f[4] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[6] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A90C0u | kUnwind; return; } goto L_002A90C0; } }
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[2] = fp::ee::sqrt(c.fcr31, c.f[2]);
    c.f[1] = c.r[2].w[0];
    c.f[5] = 0u;
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[6], c.f[1]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    c.f[1] = ld32((c.r[20].w[0] + 8u));
    c.f[2] = ld32((c.r[20].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[5]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A90C0u | kUnwind; return; } goto L_002A90C0; } }
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[0]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A90C0u | kUnwind; return; } goto L_002A90C0; } }
    st32((c.r[19].w[0]), c.f[7]);
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[21] = c.f[0];
    st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[30].w[0]));
    set32(c.r[2], c.r[29].w[0] + 200u);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[19].w[0] + 8u), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 204u);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[19].w[0] + 12u), c.f[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 352u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A91E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A91E0u) [[unlikely]] return; }
L_002A91E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A91F8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A90C0u | kUnwind; return; } goto L_002A90C0; } }
    c.budget -= 1;
L_002A91F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A90C0u | kUnwind; return; } goto L_002A90C0; } }
L_002A9200:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002A9240:
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A926C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_002A92A0; } }
L_002A926C:
    set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A929C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_002A92A0; } }
L_002A929C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A92A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A92B0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[22], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 92u)));
    c.r[1].d[0] = c.r[18].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002A93A0; } }
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[23], c.r[29].w[0] + 156u);
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[17], c.r[2].w[0] << 2);
    c.budget -= 4;
L_002A9304:
    set32(c.r[2], ld32((c.r[21].w[0] + 76u)));
    c.f[1] = ld32((c.r[20].w[0] + 4u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[17].w[0]);
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002A933C; } }
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A933C; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002A933C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A94D4; } }
L_002A9344:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A9390; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0])));  if (t) { goto L_002A936C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 312u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9364u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A9364u) [[unlikely]] return; }
L_002A9364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_002A9380; } }
L_002A936C:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 308u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A937Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A937Cu) [[unlikely]] return; }
L_002A937C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002A9380:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A9390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_002A9520; } }
L_002A9390:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9304u | kUnwind; return; } goto L_002A9304; } }
L_002A93A0:
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002A94CC; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A93B4:
    set32(c.r[2], ld32((c.r[21].w[0] + 84u)));
    c.f[1] = ld32((c.r[20].w[0]));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002A9510; } }
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A9510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002A9510; } }
L_002A93F8:
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A940C; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002A940C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A942C; } }
    c.f[1] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A942C; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002A942C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002A944C; } }
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A944C; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002A944C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002A946C; } }
    c.f[1] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A946C; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002A946C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002A94B8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0])));  if (t) { goto L_002A9494; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 312u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A948Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A948Cu) [[unlikely]] return; }
L_002A948C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_002A94A8; } }
L_002A9494:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 308u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A94A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A94A4u) [[unlikely]] return; }
L_002A94A4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002A94A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A94B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_002A9520; } }
L_002A94B8:
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A93B4u | kUnwind; return; } goto L_002A93B4; } }
L_002A94CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A9520; } }
L_002A94D4:
    c.f[4] = ld32((c.r[16].w[0] + 8u));
    c.f[3] = ld32((c.r[20].w[0] + 8u));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[20].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 152u), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[23].w[0]), c.f[3]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9344u | kUnwind; return; } goto L_002A9344; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9344u | kUnwind; return; } goto L_002A9344; } }
L_002A9510:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A940Cu | kUnwind; return; } goto L_002A940C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 8u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A93F8u | kUnwind; return; } goto L_002A93F8; } }
L_002A9520:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002A9550:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[17], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[19], ld32((c.r[4].w[0] + 92u)));
    c.r[1].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_002A9600; } }
    set32(c.r[2], c.r[19].w[0] << 3);
    set32(c.r[22], c.r[29].w[0] + 156u);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    set32(c.r[18], c.r[2].w[0] << 2);
    c.budget -= 4;
L_002A95A4:
    set32(c.r[2], ld32((c.r[21].w[0] + 76u)));
    c.f[1] = ld32((c.r[20].w[0] + 4u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[18].w[0]);
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002A95E0; } }
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A95E0; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002A95E0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A9720; } }
L_002A95E8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A9768; } }
L_002A95F0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A95A4u | kUnwind; return; } goto L_002A95A4; } }
L_002A9600:
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002A9718; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A9614:
    set32(c.r[2], ld32((c.r[21].w[0] + 84u)));
    c.f[1] = ld32((c.r[20].w[0]));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002A978C; } }
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A978C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002A978C; } }
L_002A9660:
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A9680; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002A9680:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A96A8; } }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A96A8; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002A96A8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002A96D0; } }
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A96D0; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002A96D0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002A96F8; } }
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    c.f[1] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A96F8; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002A96F8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002A97A0; } }
L_002A9700:
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9614u | kUnwind; return; } goto L_002A9614; } }
    c.budget -= 1;
L_002A9718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A97C0; } }
L_002A9720:
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.f[4] = ld32((c.r[16].w[0] + 8u));
    c.f[3] = ld32((c.r[20].w[0] + 8u));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[20].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    st32((c.r[29].w[0] + 152u), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[22].w[0]), c.f[3]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A95E8u | kUnwind; return; } goto L_002A95E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A95E8u | kUnwind; return; } goto L_002A95E8; } }
    c.budget -= 1;
L_002A9768:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 304u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A977Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A977Cu) [[unlikely]] return; }
L_002A977C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A95F0u | kUnwind; return; } goto L_002A95F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_002A97C0; } }
L_002A978C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9680u | kUnwind; return; } goto L_002A9680; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9660u | kUnwind; return; } goto L_002A9660; } }
    c.budget -= 1;
L_002A97A0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 304u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A97B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A97B4u) [[unlikely]] return; }
L_002A97B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9700u | kUnwind; return; } goto L_002A9700; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_002A97C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002A97F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 156u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002A9900; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A9824:
    set32(c.r[3], ld32((c.r[19].w[0] + 152u)));
    c.f[1] = ld32((c.r[18].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002A9908; } }
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A9908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002A9908; } }
L_002A9868:
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A9880; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002A9880:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002A98A0; } }
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A98A0; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002A98A0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002A98C0; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A98C0; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002A98C0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002A98E0; } }
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A98E0; } }
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002A98E0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_002A9918; } }
L_002A98E8:
    set32(c.r[3], ld32((c.r[19].w[0] + 156u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9824u | kUnwind; return; } goto L_002A9824; } }
    c.budget -= 1;
L_002A9900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A9930; } }
L_002A9908:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9880u | kUnwind; return; } goto L_002A9880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9868u | kUnwind; return; } goto L_002A9868; } }
L_002A9918:
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9924u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 4u, depth + 1u); else { c.pc = 0x00470020u; return; } if (c.pc != 0x002A9924u) [[unlikely]] return; }
L_002A9924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A98E8u | kUnwind; return; } goto L_002A98E8; } }
    c.budget -= 1;
L_002A9930:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A9950:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    c.f[20] = ld32((c.r[5].w[0]));
    c.f[21] = ld32((c.r[5].w[0] + 4u));
    c.f[22] = ld32((c.r[5].w[0] + 8u));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002A9A68; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A99A0:
    set32(c.r[4], ld32((c.r[19].w[0] + 144u)));
    set32(c.r[20], c.r[4].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A99BC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A99BC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A99D8; } }
    c.f[0] = ld32((c.r[20].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A99D8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A99D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A99F4; } }
    c.f[0] = ld32((c.r[20].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A99F4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A99F4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A9A10; } }
    c.f[0] = ld32((c.r[20].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A9A10; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A9A10:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A9A2C; } }
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A9A2C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A9A2C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A9A48; } }
    c.f[0] = ld32((c.r[20].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A9A48; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A9A48:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A9A70; } }
L_002A9A50:
    set32(c.r[3], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A99A0u | kUnwind; return; } goto L_002A99A0; } }
    c.budget -= 1;
L_002A9A68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A9AA8; } }
L_002A9A70:
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9A84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A9A84u) [[unlikely]] return; }
L_002A9A84:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9A50u | kUnwind; return; } goto L_002A9A50; } }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9A9Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 9u, depth + 1u); else { c.pc = 0x004700B0u; return; } if (c.pc != 0x002A9A9Cu) [[unlikely]] return; }
L_002A9A9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9A50u | kUnwind; return; } goto L_002A9A50; } }
    c.budget -= 1;
L_002A9AA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A9AE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002A9BF8; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A9B1C:
    set32(c.r[3], ld32((c.r[18].w[0] + 128u)));
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002A9C68; } }
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A9C68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002A9C68; } }
L_002A9B60:
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A9B78; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002A9B78:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002A9B98; } }
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A9B98; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002A9B98:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002A9BB8; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A9BB8; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002A9BB8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002A9BD8; } }
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A9BD8; } }
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002A9BD8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_002A9C78; } }
L_002A9BE0:
    set32(c.r[3], ld32((c.r[18].w[0] + 132u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9B1Cu | kUnwind; return; } goto L_002A9B1C; } }
    c.budget -= 1;
L_002A9BF8:
    set32(c.r[3], ld32((c.r[18].w[0] + 140u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002A9C60; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A9C0C:
    set32(c.r[3], ld32((c.r[18].w[0] + 136u)));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002A9C40; } }
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A9C40; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002A9C40:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A9C90; } }
L_002A9C48:
    set32(c.r[3], ld32((c.r[18].w[0] + 140u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9C0Cu | kUnwind; return; } goto L_002A9C0C; } }
    c.budget -= 1;
L_002A9C60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A9CA8; } }
L_002A9C68:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9B78u | kUnwind; return; } goto L_002A9B78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9B60u | kUnwind; return; } goto L_002A9B60; } }
L_002A9C78:
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9C88u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_009C(c, 13u, depth + 1u); else { c.pc = 0x004701B0u; return; } if (c.pc != 0x002A9C88u) [[unlikely]] return; }
L_002A9C88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9BE0u | kUnwind; return; } goto L_002A9BE0; } }
L_002A9C90:
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9CA0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_009C(c, 13u, depth + 1u); else { c.pc = 0x004701B0u; return; } if (c.pc != 0x002A9CA0u) [[unlikely]] return; }
L_002A9CA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9C48u | kUnwind; return; } goto L_002A9C48; } }
L_002A9CA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002A9CD0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002A9EB8; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A9D14:
    set32(c.r[3], ld32((c.r[19].w[0] + 128u)));
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[3].w[0] + c.r[20].w[0]);
    c.f[2] = ld32((c.r[9].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002A9F60; } }
    c.f[0] = ld32((c.r[9].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A9F60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002A9F60; } }
L_002A9D58:
    c.f[1] = ld32((c.r[9].w[0] + 12u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A9D70; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002A9D70:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002A9D90; } }
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[9].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A9D90; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002A9D90:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002A9DB0; } }
    c.f[1] = ld32((c.r[9].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A9DB0; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002A9DB0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002A9DD0; } }
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[9].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A9DD0; } }
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002A9DD0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002A9EA0; } }
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002A9F70; } }
    c.f[0] = ld32((c.r[9].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A9F70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002A9F70; } }
L_002A9E10:
    c.f[1] = ld32((c.r[9].w[0] + 12u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A9E28; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002A9E28:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A9E48; } }
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[9].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A9E48; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002A9E48:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002A9E68; } }
    c.f[1] = ld32((c.r[9].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A9E68; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002A9E68:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002A9E88; } }
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[9].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A9E88; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002A9E88:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002A9EA0; } }
    set32(c.r[4], ld32((c.r[9].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9EA0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_009C(c, 13u, depth + 1u); else { c.pc = 0x004701B0u; return; } if (c.pc != 0x002A9EA0u) [[unlikely]] return; }
L_002A9EA0:
    set32(c.r[3], ld32((c.r[19].w[0] + 132u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9D14u | kUnwind; return; } goto L_002A9D14; } }
    c.budget -= 1;
L_002A9EB8:
    set32(c.r[3], ld32((c.r[19].w[0] + 140u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002A9F58; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A9ECC:
    set32(c.r[3], ld32((c.r[19].w[0] + 136u)));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[5], c.r[3].w[0] + c.r[20].w[0]);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002A9F80; } }
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A9F80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002A9F80; } }
L_002A9F00:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002A9F28; } }
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A9F28; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002A9F28:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A9F40; } }
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9F40u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 13u, depth + 1u); else { c.pc = 0x004701B0u; return; } if (c.pc != 0x002A9F40u) [[unlikely]] return; }
L_002A9F40:
    set32(c.r[3], ld32((c.r[19].w[0] + 140u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9ECCu | kUnwind; return; } goto L_002A9ECC; } }
    c.budget -= 1;
L_002A9F58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A9F90; } }
L_002A9F60:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9D70u | kUnwind; return; } goto L_002A9D70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9D58u | kUnwind; return; } goto L_002A9D58; } }
L_002A9F70:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9E28u | kUnwind; return; } goto L_002A9E28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9E10u | kUnwind; return; } goto L_002A9E10; } }
L_002A9F80:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9F40u | kUnwind; return; } goto L_002A9F40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9F00u | kUnwind; return; } goto L_002A9F00; } }
L_002A9F90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A9FC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002AA1A8; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AA004:
    set32(c.r[3], ld32((c.r[19].w[0] + 128u)));
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[3].w[0] + c.r[20].w[0]);
    c.f[2] = ld32((c.r[9].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002AA250; } }
    c.f[0] = ld32((c.r[9].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA250; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002AA250; } }
L_002AA048:
    c.f[1] = ld32((c.r[9].w[0] + 12u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA060; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA060:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002AA080; } }
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[9].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA080; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA080:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002AA0A0; } }
    c.f[1] = ld32((c.r[9].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA0A0; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA0A0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002AA0C0; } }
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[9].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA0C0; } }
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA0C0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002AA190; } }
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002AA260; } }
    c.f[0] = ld32((c.r[9].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002AA260; } }
L_002AA100:
    c.f[1] = ld32((c.r[9].w[0] + 12u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA118; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA118:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA138; } }
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[9].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA138; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA138:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002AA158; } }
    c.f[1] = ld32((c.r[9].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA158; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA158:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002AA178; } }
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[9].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA178; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA178:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002AA190; } }
    set32(c.r[4], ld32((c.r[9].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA190u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 13u, depth + 1u); else { c.pc = 0x004701B0u; return; } if (c.pc != 0x002AA190u) [[unlikely]] return; }
L_002AA190:
    set32(c.r[3], ld32((c.r[19].w[0] + 132u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA004u | kUnwind; return; } goto L_002AA004; } }
    c.budget -= 1;
L_002AA1A8:
    set32(c.r[3], ld32((c.r[19].w[0] + 140u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002AA248; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AA1BC:
    set32(c.r[3], ld32((c.r[19].w[0] + 136u)));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[5], c.r[3].w[0] + c.r[20].w[0]);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002AA270; } }
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002AA270; } }
L_002AA1F0:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002AA218; } }
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA218; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002AA218:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AA230; } }
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA230u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 13u, depth + 1u); else { c.pc = 0x004701B0u; return; } if (c.pc != 0x002AA230u) [[unlikely]] return; }
L_002AA230:
    set32(c.r[3], ld32((c.r[19].w[0] + 140u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA1BCu | kUnwind; return; } goto L_002AA1BC; } }
    c.budget -= 1;
L_002AA248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AA280; } }
L_002AA250:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA060u | kUnwind; return; } goto L_002AA060; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA048u | kUnwind; return; } goto L_002AA048; } }
L_002AA260:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA118u | kUnwind; return; } goto L_002AA118; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA100u | kUnwind; return; } goto L_002AA100; } }
L_002AA270:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA230u | kUnwind; return; } goto L_002AA230; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA1F0u | kUnwind; return; } goto L_002AA1F0; } }
L_002AA280:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002AA2B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002AA3C8; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AA2EC:
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002AA438; } }
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA438; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002AA438; } }
L_002AA330:
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA348; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA348:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002AA368; } }
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA368; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA368:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002AA388; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA388; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA388:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002AA3A8; } }
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA3A8; } }
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA3A8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_002AA448; } }
L_002AA3B0:
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA2ECu | kUnwind; return; } goto L_002AA2EC; } }
    c.budget -= 1;
L_002AA3C8:
    set32(c.r[3], ld32((c.r[18].w[0] + 124u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002AA430; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AA3DC:
    set32(c.r[3], ld32((c.r[18].w[0] + 120u)));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002AA410; } }
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA410; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002AA410:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002AA460; } }
L_002AA418:
    set32(c.r[3], ld32((c.r[18].w[0] + 124u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA3DCu | kUnwind; return; } goto L_002AA3DC; } }
    c.budget -= 1;
L_002AA430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AA478; } }
L_002AA438:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA348u | kUnwind; return; } goto L_002AA348; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA330u | kUnwind; return; } goto L_002AA330; } }
L_002AA448:
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA458u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_009C(c, 13u, depth + 1u); else { c.pc = 0x004701B0u; return; } if (c.pc != 0x002AA458u) [[unlikely]] return; }
L_002AA458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA3B0u | kUnwind; return; } goto L_002AA3B0; } }
L_002AA460:
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA470u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_009C(c, 13u, depth + 1u); else { c.pc = 0x004701B0u; return; } if (c.pc != 0x002AA470u) [[unlikely]] return; }
L_002AA470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA418u | kUnwind; return; } goto L_002AA418; } }
L_002AA478:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002AA4A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
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
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002AA6B8; } }
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AA4E8:
    set32(c.r[3], ld32((c.r[21].w[0] + 112u)));
    c.f[1] = ld32((c.r[18].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[3].w[0] + c.r[22].w[0]);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002AA760; } }
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA760; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002AA760; } }
    c.budget -= 1;
L_002AA530:
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA548; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA548:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002AA568; } }
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA568; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA568:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002AA588; } }
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA588; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA588:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002AA5A8; } }
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA5A8; } }
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA5A8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002AA6A0; } }
    c.f[1] = ld32((c.r[19].w[0]));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AA770; } }
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA770; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002AA770; } }
L_002AA5E8:
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA600; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA600:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AA620; } }
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA620; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA620:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA640; } }
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA640; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA640:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002AA660; } }
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA660; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA660:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002AA680; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA678u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_009C(c, 13u, depth + 1u); else { c.pc = 0x004701B0u; return; } if (c.pc != 0x002AA678u) [[unlikely]] return; }
L_002AA678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AA6A0; } }
L_002AA680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA688u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_009C(c, 43u, depth + 1u); else { c.pc = 0x00470540u; return; } if (c.pc != 0x002AA688u) [[unlikely]] return; }
L_002AA688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AA6A0; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA6A0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_009C(c, 13u, depth + 1u); else { c.pc = 0x004701B0u; return; } if (c.pc != 0x002AA6A0u) [[unlikely]] return; }
L_002AA6A0:
    set32(c.r[3], ld32((c.r[21].w[0] + 116u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA4E8u | kUnwind; return; } goto L_002AA4E8; } }
    c.budget -= 1;
L_002AA6B8:
    set32(c.r[3], ld32((c.r[21].w[0] + 124u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002AA758; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AA6CC:
    set32(c.r[3], ld32((c.r[21].w[0] + 120u)));
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    set32(c.r[5], c.r[3].w[0] + c.r[16].w[0]);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002AA780; } }
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002AA780; } }
L_002AA700:
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002AA728; } }
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA728; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002AA728:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AA740; } }
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA740u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 13u, depth + 1u); else { c.pc = 0x004701B0u; return; } if (c.pc != 0x002AA740u) [[unlikely]] return; }
L_002AA740:
    set32(c.r[3], ld32((c.r[21].w[0] + 124u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA6CCu | kUnwind; return; } goto L_002AA6CC; } }
    c.budget -= 1;
L_002AA758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AA790; } }
L_002AA760:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA548u | kUnwind; return; } goto L_002AA548; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA530u | kUnwind; return; } goto L_002AA530; } }
L_002AA770:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA600u | kUnwind; return; } goto L_002AA600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA5E8u | kUnwind; return; } goto L_002AA5E8; } }
L_002AA780:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA740u | kUnwind; return; } goto L_002AA740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA700u | kUnwind; return; } goto L_002AA700; } }
L_002AA790:
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
L_002AA7C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002AA9A8; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AA804:
    set32(c.r[3], ld32((c.r[19].w[0] + 112u)));
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[3].w[0] + c.r[20].w[0]);
    c.f[2] = ld32((c.r[9].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002AAA50; } }
    c.f[0] = ld32((c.r[9].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AAA50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002AAA50; } }
L_002AA848:
    c.f[1] = ld32((c.r[9].w[0] + 12u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA860; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA860:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002AA880; } }
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[9].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA880; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA880:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002AA8A0; } }
    c.f[1] = ld32((c.r[9].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA8A0; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA8A0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002AA8C0; } }
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[9].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA8C0; } }
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA8C0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002AA990; } }
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002AAA60; } }
    c.f[0] = ld32((c.r[9].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AAA60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002AAA60; } }
L_002AA900:
    c.f[1] = ld32((c.r[9].w[0] + 12u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA918; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA918:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA938; } }
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[9].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA938; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA938:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002AA958; } }
    c.f[1] = ld32((c.r[9].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA958; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA958:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002AA978; } }
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[9].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AA978; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AA978:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002AA990; } }
    set32(c.r[4], ld32((c.r[9].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA990u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 13u, depth + 1u); else { c.pc = 0x004701B0u; return; } if (c.pc != 0x002AA990u) [[unlikely]] return; }
L_002AA990:
    set32(c.r[3], ld32((c.r[19].w[0] + 116u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA804u | kUnwind; return; } goto L_002AA804; } }
    c.budget -= 1;
L_002AA9A8:
    set32(c.r[3], ld32((c.r[19].w[0] + 124u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002AAA48; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AA9BC:
    set32(c.r[3], ld32((c.r[19].w[0] + 120u)));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[5], c.r[3].w[0] + c.r[20].w[0]);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002AAA70; } }
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AAA70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002AAA70; } }
L_002AA9F0:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002AAA18; } }
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AAA18; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002AAA18:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AAA30; } }
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAA30u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 13u, depth + 1u); else { c.pc = 0x004701B0u; return; } if (c.pc != 0x002AAA30u) [[unlikely]] return; }
L_002AAA30:
    set32(c.r[3], ld32((c.r[19].w[0] + 124u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA9BCu | kUnwind; return; } goto L_002AA9BC; } }
    c.budget -= 1;
L_002AAA48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AAA80; } }
L_002AAA50:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA860u | kUnwind; return; } goto L_002AA860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA848u | kUnwind; return; } goto L_002AA848; } }
L_002AAA60:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA918u | kUnwind; return; } goto L_002AA918; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA900u | kUnwind; return; } goto L_002AA900; } }
L_002AAA70:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AAA30u | kUnwind; return; } goto L_002AAA30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA9F0u | kUnwind; return; } goto L_002AA9F0; } }
L_002AAA80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002AAAB0:
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
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    c.f[23] = ld32((c.r[5].w[0] + 112u));
    c.f[24] = ld32((c.r[5].w[0] + 116u));
    c.f[25] = ld32((c.r[5].w[0] + 120u));
    c.f[20] = ld32((c.r[5].w[0] + 32u));
    c.f[21] = ld32((c.r[5].w[0] + 36u));
    c.f[22] = ld32((c.r[5].w[0] + 40u));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 25;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AACD0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AAB18:
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[3].w[0] + c.r[18].w[0]);
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[20]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002AADA8; } }
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AADA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002AADA8; } }
L_002AAB58:
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AAB70; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002AAB70:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002AAB90; } }
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AAB90; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002AAB90:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002AABB0; } }
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AABB0; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002AABB0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002AABD0; } }
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AABD0; } }
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002AABD0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002AACB8; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[23]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AABE8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AABE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AAC04; } }
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[23]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AAC04; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AAC04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AAC20; } }
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[25]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AAC20; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AAC20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AAC3C; } }
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[25]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AAC3C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AAC3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AAC58; } }
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[24]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AAC58; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AAC58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AAC74; } }
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[24]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AAC74; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AAC74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AAC98; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAC8Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_009C(c, 13u, depth + 1u); else { c.pc = 0x004701B0u; return; } if (c.pc != 0x002AAC8Cu) [[unlikely]] return; }
L_002AAC8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AACB8; } }
    c.budget -= 1;
L_002AAC98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AACA0u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_009C(c, 43u, depth + 1u); else { c.pc = 0x00470540u; return; } if (c.pc != 0x002AACA0u) [[unlikely]] return; }
L_002AACA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AACB8; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AACB8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_009C(c, 13u, depth + 1u); else { c.pc = 0x004701B0u; return; } if (c.pc != 0x002AACB8u) [[unlikely]] return; }
L_002AACB8:
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AAB18u | kUnwind; return; } goto L_002AAB18; } }
    c.budget -= 1;
L_002AACD0:
    set32(c.r[3], ld32((c.r[17].w[0] + 124u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002AADA0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AACE4:
    set32(c.r[3], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[20], c.r[3].w[0] + c.r[18].w[0]);
    c.f[1] = ld32((c.r[20].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[21]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002AADB8; } }
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AADB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002AADB8; } }
    c.budget -= 1;
L_002AAD18:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[24]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AAD28; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AAD28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AAD44; } }
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[24]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AAD44; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AAD44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AAD68; } }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAD5Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_009C(c, 13u, depth + 1u); else { c.pc = 0x004701B0u; return; } if (c.pc != 0x002AAD5Cu) [[unlikely]] return; }
L_002AAD5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AAD88; } }
    c.budget -= 1;
L_002AAD68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAD70u); set32(c.r[4], ld32((c.r[20].w[0])));  if (depth < kMaxDepth) unit_009C(c, 43u, depth + 1u); else { c.pc = 0x00470540u; return; } if (c.pc != 0x002AAD70u) [[unlikely]] return; }
L_002AAD70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AAD88; } }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAD88u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_009C(c, 13u, depth + 1u); else { c.pc = 0x004701B0u; return; } if (c.pc != 0x002AAD88u) [[unlikely]] return; }
L_002AAD88:
    set32(c.r[3], ld32((c.r[17].w[0] + 124u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AACE4u | kUnwind; return; } goto L_002AACE4; } }
    c.budget -= 1;
L_002AADA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AADC8; } }
L_002AADA8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AAB70u | kUnwind; return; } goto L_002AAB70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AAB58u | kUnwind; return; } goto L_002AAB58; } }
L_002AADB8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AAD88u | kUnwind; return; } goto L_002AAD88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AAD18u | kUnwind; return; } goto L_002AAD18; } }
L_002AADC8:
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
L_002AAE00:
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
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    c.f[23] = ld32((c.r[5].w[0] + 112u));
    c.f[24] = ld32((c.r[5].w[0] + 116u));
    c.f[25] = ld32((c.r[5].w[0] + 120u));
    c.f[20] = ld32((c.r[5].w[0] + 32u));
    c.f[21] = ld32((c.r[5].w[0] + 36u));
    c.f[22] = ld32((c.r[5].w[0] + 40u));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 24;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002AAFF8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AAE64:
    set32(c.r[3], ld32((c.r[19].w[0] + 112u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[3].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[9].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[23]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002AB0A8; } }
    c.f[0] = ld32((c.r[9].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[23]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AB0A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002AB0A8; } }
    c.budget -= 1;
L_002AAEA8:
    c.f[0] = ld32((c.r[9].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[25]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AAEC0; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002AAEC0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002AAEE0; } }
    c.f[0] = ld32((c.r[9].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[25]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AAEE0; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002AAEE0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002AAF00; } }
    c.f[0] = ld32((c.r[9].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[24]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AAF00; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002AAF00:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002AAF20; } }
    c.f[0] = ld32((c.r[9].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[24]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AAF20; } }
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002AAF20:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002AAFE0; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002AAF38; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AAF38:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AAF54; } }
    c.f[0] = ld32((c.r[9].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002AAF54; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AAF54:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AAF70; } }
    c.f[0] = ld32((c.r[9].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002AAF70; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AAF70:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AAF8C; } }
    c.f[0] = ld32((c.r[9].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002AAF8C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AAF8C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AAFA8; } }
    c.f[0] = ld32((c.r[9].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002AAFA8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AAFA8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AAFC4; } }
    c.f[0] = ld32((c.r[9].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002AAFC4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AAFC4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AAFE0; } }
    set32(c.r[4], ld32((c.r[9].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAFDCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 13u, depth + 1u); else { c.pc = 0x004701B0u; return; } if (c.pc != 0x002AAFDCu) [[unlikely]] return; }
L_002AAFDC:
    c.budget -= 1;
L_002AAFE0:
    set32(c.r[3], ld32((c.r[19].w[0] + 116u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AAE64u | kUnwind; return; } goto L_002AAE64; } }
    c.budget -= 1;
L_002AAFF8:
    set32(c.r[3], ld32((c.r[19].w[0] + 124u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002AB0A0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB00C:
    set32(c.r[3], ld32((c.r[19].w[0] + 120u)));
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[24]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002AB0B8; } }
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[24]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AB0B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002AB0B8; } }
    c.budget -= 1;
L_002AB040:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002AB050; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB050:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AB06C; } }
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002AB06C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB06C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AB088; } }
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB084u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 13u, depth + 1u); else { c.pc = 0x004701B0u; return; } if (c.pc != 0x002AB084u) [[unlikely]] return; }
L_002AB084:
    c.budget -= 1;
L_002AB088:
    set32(c.r[3], ld32((c.r[19].w[0] + 124u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB00Cu | kUnwind; return; } goto L_002AB00C; } }
    c.budget -= 1;
L_002AB0A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AB0C8; } }
L_002AB0A8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AAEC0u | kUnwind; return; } goto L_002AAEC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AAEA8u | kUnwind; return; } goto L_002AAEA8; } }
L_002AB0B8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB088u | kUnwind; return; } goto L_002AB088; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB040u | kUnwind; return; } goto L_002AB040; } }
L_002AB0C8:
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
L_002AB100:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.f[20] = ld32((c.r[4].w[0] + 32u));
    c.f[21] = ld32((c.r[4].w[0] + 36u));
    c.f[22] = ld32((c.r[4].w[0] + 40u));
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002AB230; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB148:
    set32(c.r[4], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[3], 0u + 10u);
    set32(c.r[6], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 42u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002AB218; } }
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002AB178; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB178:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AB194; } }
    c.f[0] = ld32((c.r[6].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002AB194; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB194:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AB1B0; } }
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002AB1B0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB1B0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AB1CC; } }
    c.f[0] = ld32((c.r[6].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002AB1CC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB1CC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AB1E8; } }
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002AB1E8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB1E8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AB204; } }
    c.f[0] = ld32((c.r[6].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002AB204; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB204:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AB218; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB218u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_009C(c, 13u, depth + 1u); else { c.pc = 0x004701B0u; return; } if (c.pc != 0x002AB218u) [[unlikely]] return; }
L_002AB218:
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB148u | kUnwind; return; } goto L_002AB148; } }
    c.budget -= 1;
L_002AB230:
    set32(c.r[3], ld32((c.r[18].w[0] + 124u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002AB2C0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB244:
    set32(c.r[4], ld32((c.r[18].w[0] + 120u)));
    set32(c.r[3], 0u + 10u);
    set32(c.r[6], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 42u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002AB2A8; } }
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002AB274; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB274:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AB290; } }
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002AB290; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB290:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AB2A8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB2A4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_009C(c, 13u, depth + 1u); else { c.pc = 0x004701B0u; return; } if (c.pc != 0x002AB2A4u) [[unlikely]] return; }
L_002AB2A4:
    c.budget -= 1;
L_002AB2A8:
    set32(c.r[3], ld32((c.r[18].w[0] + 124u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB244u | kUnwind; return; } goto L_002AB244; } }
    c.budget -= 1;
L_002AB2C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002AB2F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 116u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002AB3C8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 1;
L_002AB320:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002AB404; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 1;
L_002AB330:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002AB440; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_002AB340:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002AB47C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 1;
L_002AB350:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002AB4B8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 1;
L_002AB360:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002AB4F4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 1;
L_002AB370:
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002AB530; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB380:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[19], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB398u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002AB398u) [[unlikely]] return; }
L_002AB398:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB3A8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AB3A8u) [[unlikely]] return; }
L_002AB3A8:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB380u | kUnwind; return; } goto L_002AB380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002AB534; } }
L_002AB3C8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB3CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[19], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB3E4u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002AB3E4u) [[unlikely]] return; }
L_002AB3E4:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB3CCu | kUnwind; return; } goto L_002AB3CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 132u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB320u | kUnwind; return; } goto L_002AB320; } }
L_002AB404:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB408:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[19], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB420u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002AB420u) [[unlikely]] return; }
L_002AB420:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB408u | kUnwind; return; } goto L_002AB408; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 148u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB330u | kUnwind; return; } goto L_002AB330; } }
L_002AB440:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB444:
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[19], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB45Cu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002AB45Cu) [[unlikely]] return; }
L_002AB45C:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB444u | kUnwind; return; } goto L_002AB444; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 156u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB340u | kUnwind; return; } goto L_002AB340; } }
L_002AB47C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB480:
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[19], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB498u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002AB498u) [[unlikely]] return; }
L_002AB498:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB480u | kUnwind; return; } goto L_002AB480; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 124u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB350u | kUnwind; return; } goto L_002AB350; } }
L_002AB4B8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB4BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[19], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB4D4u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002AB4D4u) [[unlikely]] return; }
L_002AB4D4:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB4BCu | kUnwind; return; } goto L_002AB4BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 140u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB360u | kUnwind; return; } goto L_002AB360; } }
L_002AB4F4:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB4F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[19], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB510u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002AB510u) [[unlikely]] return; }
L_002AB510:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB4F8u | kUnwind; return; } goto L_002AB4F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB370u | kUnwind; return; } goto L_002AB370; } }
L_002AB530:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002AB534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB53Cu); set32(c.r[5], c.r[16].w[0] + 76u);  if (depth < kMaxDepth) unit_002A(c, 220u, depth + 1u); else { c.pc = 0x002AB560u; return; } if (c.pc != 0x002AB53Cu) [[unlikely]] return; }
L_002AB53C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002AB560:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AB63C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002AB598:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AB688; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 32392u)));
    c.budget -= 1;
L_002AB5A4:
    st32((c.r[17].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 32392u)));
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 32392u)));
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 32392u)));
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 32392u)));
    st32((c.r[17].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002AB6E0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_002AB5DC:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    st32((c.r[17].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_002AB734; } }
L_002AB63C:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB640:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[20], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB658u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002AB658u) [[unlikely]] return; }
L_002AB658:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB668u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AB668u) [[unlikely]] return; }
L_002AB668:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB640u | kUnwind; return; } goto L_002AB640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB598u | kUnwind; return; } goto L_002AB598; } }
L_002AB688:
    set32(c.r[2], 0u + 3u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], 0u + 13u);
    st32((c.r[29].w[0] + 124u), 0u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[8], c.r[8].w[0] - 18592u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 136u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB6D8u); set32(c.r[7], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_002A(c, 241u, depth + 1u); else { c.pc = 0x002AB8A0u; return; } if (c.pc != 0x002AB6D8u) [[unlikely]] return; }
L_002AB6D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 32392u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB5A4u | kUnwind; return; } goto L_002AB5A4; } }
L_002AB6E0:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB6E4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB700u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AB700u) [[unlikely]] return; }
L_002AB700:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB6E4u | kUnwind; return; } goto L_002AB6E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 96u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB5DCu | kUnwind; return; } goto L_002AB5DC; } }
L_002AB734:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002AB760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB780u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AB780u) [[unlikely]] return; }
L_002AB780:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB794u); c.r[16].d[0] = c.r[2].d[0] & 255ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AB794u) [[unlikely]] return; }
L_002AB794:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AB7B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB7C8u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0029(c, 282u, depth + 1u); else { c.pc = 0x002A73B0u; return; } if (c.pc != 0x002AB7C8u) [[unlikely]] return; }
L_002AB7C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB7D0u); set32(c.r[4], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_0029(c, 284u, depth + 1u); else { c.pc = 0x002A73F0u; return; } if (c.pc != 0x002AB7D0u) [[unlikely]] return; }
L_002AB7D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB7D8u); set32(c.r[4], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0029(c, 284u, depth + 1u); else { c.pc = 0x002A73F0u; return; } if (c.pc != 0x002AB7D8u) [[unlikely]] return; }
L_002AB7D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AB7F0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7470u | kUnwind; return; } [[clang::musttail]] return unit_0029(c, 288u, depth); }
L_002AB800:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AB810:
    st8((c.r[4].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 264u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002AB820:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 76u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 112u), 0u);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 120u), 0u);
    st32((c.r[4].w[0] + 124u), 0u);
    st32((c.r[4].w[0] + 128u), 0u);
    st32((c.r[4].w[0] + 132u), 0u);
    st32((c.r[4].w[0] + 136u), 0u);
    st32((c.r[4].w[0] + 140u), 0u);
    st32((c.r[4].w[0] + 144u), 0u);
    st32((c.r[4].w[0] + 148u), 0u);
    st32((c.r[4].w[0] + 152u), 0u);
    st32((c.r[4].w[0] + 156u), 0u);
    st32((c.r[4].w[0] + 264u), 0u);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 276u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002AB8A0:
    set32(c.r[29], c.r[29].w[0] - 208u);
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
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[29].w[0] + 204u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 200u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 196u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[8].w[0]);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 176u), 0u);  if (t) { goto L_002ABA88; } }
    st32((c.r[29].w[0] + 160u), c.r[21].w[0]);
    c.budget -= 1;
L_002AB8F4:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[23], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[20], c.r[23].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 196u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002ABA60; } }
    set32(c.r[3], c.r[23].w[0] << 3);
    set32(c.r[4], c.r[20].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[23].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[20].w[0]);
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[22], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[30], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 9;
L_002AB938:
    set32(c.r[5], ld32((c.r[22].w[0])));
    set32(c.r[19], c.r[20].w[0] - c.r[23].w[0]);
    set32(c.r[3], c.r[19].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[19].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[17], c.r[30].w[0] + c.r[4].w[0]);
    st32((c.r[21].w[0] + 24u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[22].w[0] + 4u));
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[21].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 8u));
    st32((c.r[21].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 12u));
    st32((c.r[21].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 16u));
    st32((c.r[21].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 20u));
    st32((c.r[21].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 24u));
    st32((c.r[21].w[0] + 48u), c.f[0]);
    c.budget -= 22;
L_002AB990:
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ABA00; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], c.r[21].w[0] + 24u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB9B0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AB9B0u) [[unlikely]] return; }
L_002AB9B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ABA00; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[19], c.r[19].w[0] - c.r[23].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    set32(c.r[18], c.r[18].w[0] - c.r[16].w[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB990u | kUnwind; return; } goto L_002AB990; } }
L_002ABA00:
    set32(c.r[3], c.r[19].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[19].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[3], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[30].w[0] + c.r[4].w[0]);
    set32(c.r[22], c.r[22].w[0] + 28u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[21].w[0] + 28u));
    set32(c.r[3], ld32((c.r[29].w[0] + 196u)));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.f[0] = ld32((c.r[21].w[0] + 32u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 36u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 44u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 48u));
    c.budget -= 23;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[4].w[0] + 24u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB938u | kUnwind; return; } goto L_002AB938; } }
    c.budget -= 1;
L_002ABA60:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB8F4u | kUnwind; return; } goto L_002AB8F4; } }
L_002ABA88:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002ABAC0:
    set32(c.r[29], c.r[29].w[0] - 480u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABAF4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0029(c, 180u, depth + 1u); else { c.pc = 0x002A64C0u; return; } if (c.pc != 0x002ABAF4u) [[unlikely]] return; }
L_002ABAF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABB00u); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002ABB00u) [[unlikely]] return; }
L_002ABB00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ABC44; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[4], c.r[4].w[0] - 22000u);
    c.budget -= 3;
L_002ABB14:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ABB14u | kUnwind; return; } goto L_002ABB14; } }
L_002ABB30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABB40u); set32(c.r[5], c.r[5].w[0] - 20400u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002ABB40u) [[unlikely]] return; }
L_002ABB40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[29].w[0] + 464u);
    set32(c.r[2], c.r[2].w[0] - 28400u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 176u), 0u);
    st32((c.r[29].w[0] + 192u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABB64u); st8((c.r[29].w[0] + 200u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002ABB64u) [[unlikely]] return; }
L_002ABB64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABB6Cu); set32(c.r[4], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002ABB6Cu) [[unlikely]] return; }
L_002ABB6C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABB84u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ABB84u) [[unlikely]] return; }
L_002ABB84:
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABB90u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002ABB90u) [[unlikely]] return; }
L_002ABB90:
    set32(c.r[17], c.r[29].w[0] + 196u);
    set32(c.r[16], c.r[29].w[0] + 184u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ABBFC; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 476u);
    set32(c.r[18], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABBC4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002ABBC4u) [[unlikely]] return; }
L_002ABBC4:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_002ABC14; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[18].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABBF4u); set32(c.r[5], c.r[2].w[0] + 476u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ABBF4u) [[unlikely]] return; }
L_002ABBF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 476u)));  if (t) { goto L_002ABC18; } }
L_002ABBFC:
    set32(c.r[4], c.r[29].w[0] + 476u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABC08u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002ABC08u) [[unlikely]] return; }
L_002ABC08:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002ABC14:
    set32(c.r[3], ld32((c.r[29].w[0] + 476u)));
    c.budget -= 1;
L_002ABC18:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ABC84; } }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(101ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002ABC7C; } }
L_002ABC30:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABC3Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002ABC3Cu) [[unlikely]] return; }
L_002ABC3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002B(c, 4u, depth); } }
L_002ABC44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABC50u); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002ABC50u) [[unlikely]] return; }
L_002ABC50:
    set32(c.r[4], c.r[2].w[0] + 36u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 2;
L_002ABC58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ABC58u | kUnwind; return; } goto L_002ABC58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ABB30u | kUnwind; return; } goto L_002ABB30; } }
L_002ABC7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 476u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ABC30u | kUnwind; return; } goto L_002ABC30; } }
L_002ABC84:
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ABCE8; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 472u);
    set32(c.r[18], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABCB0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002ABCB0u) [[unlikely]] return; }
L_002ABCB0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_002ABD00; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[18].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABCE0u); set32(c.r[5], c.r[2].w[0] + 472u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ABCE0u) [[unlikely]] return; }
L_002ABCE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 472u)));  if (t) { goto L_002ABD04; } }
L_002ABCE8:
    set32(c.r[4], c.r[29].w[0] + 472u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABCF4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002ABCF4u) [[unlikely]] return; }
L_002ABCF4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002ABD00:
    set32(c.r[2], ld32((c.r[29].w[0] + 472u)));
    c.budget -= 1;
L_002ABD04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ABEF0; } }
    set32(c.r[18], ld32((c.r[29].w[0] + 472u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABD18u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002ABD18u) [[unlikely]] return; }
L_002ABD18:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 468u), c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ABD80; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABD50u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002ABD50u) [[unlikely]] return; }
L_002ABD50:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[16].d[0]; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002ABD98; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABD78u); set32(c.r[6], c.r[18].w[0] - c.r[16].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ABD78u) [[unlikely]] return; }
L_002ABD78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u - 1u);  if (t) { goto L_002ABD9C; } }
L_002ABD80:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABD8Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002ABD8Cu) [[unlikely]] return; }
L_002ABD8C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002ABD98:
    set32(c.r[20], 0u - 1u);
    c.budget -= 1;
L_002ABD9C:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 2;
L_002ABDA4:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_002ABDB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABDBCu); set32(c.r[5], c.r[29].w[0] + 468u);  if (depth < kMaxDepth) unit_0032(c, 56u, depth + 1u); else { c.pc = 0x002CADD0u; return; } if (c.pc != 0x002ABDBCu) [[unlikely]] return; }
L_002ABDBC:
    c.r[1].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002ABDD0; } }
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002ABDD0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 288u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ABDB0u | kUnwind; return; } goto L_002ABDB0; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 11520u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ABDA4u | kUnwind; return; } goto L_002ABDA4; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 468u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[28].w[0] - 29280u);
    set32(c.r[6], c.r[6].w[0] - 20528u);
    set32(c.r[30], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 468u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 468u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABE20u); st32((c.r[29].w[0] + 468u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 49u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x002ABE20u) [[unlikely]] return; }
L_002ABE20:
    c.r[1].d[0] = 0ull < c.r[30].d[0] ? 1ull : 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002ABE88; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ABE34:
    set32(c.r[3], ld32((c.r[29].w[0] + 468u)));
    set32(c.r[23], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 468u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 468u)));
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 468u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 468u)));
    set32(c.r[19], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 13;
    { const bool t = c.r[19].d[0] != 0ull; st32((c.r[29].w[0] + 468u), c.r[2].w[0]);  if (t) { goto L_002ABF0C; } }
L_002ABE68:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == c.r[2].d[0];  if (t) { goto L_002ABFA8; } }
    c.budget -= 1;
L_002ABE78:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ABE34u | kUnwind; return; } goto L_002ABE34; } }
L_002ABE88:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ABE8C:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
L_002ABE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABEA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 50u, depth + 1u); else { c.pc = 0x002CACD0u; return; } if (c.pc != 0x002ABEA0u) [[unlikely]] return; }
L_002ABEA0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 288u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ABE98u | kUnwind; return; } goto L_002ABE98; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 11520u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ABE8Cu | kUnwind; return; } goto L_002ABE8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABECCu); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 125u, depth + 1u); else { c.pc = 0x00345BA0u; return; } if (c.pc != 0x002ABECCu) [[unlikely]] return; }
L_002ABECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABED4u); set32(c.r[4], ld32((c.r[29].w[0] + 172u)));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002ABED4u) [[unlikely]] return; }
L_002ABED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABEDCu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x002ABEDCu) [[unlikely]] return; }
L_002ABEDC:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABEE8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002ABEE8u) [[unlikely]] return; }
L_002ABEE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002B(c, 4u, depth); } }
L_002ABEF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABEF8u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x002ABEF8u) [[unlikely]] return; }
L_002ABEF8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABF04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002ABF04u) [[unlikely]] return; }
L_002ABF04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002B(c, 4u, depth); } }
L_002ABF0C:
    set32(c.r[2], ld32((c.r[28].w[0] - 29280u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 20432u);
    set32(c.r[18], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABF28u); set32(c.r[4], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_002B(c, 41u, depth + 1u); else { c.pc = 0x002AC490u; return; } if (c.pc != 0x002ABF28u) [[unlikely]] return; }
L_002ABF28:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002ABF60; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_002ABF40:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ABF40u | kUnwind; return; } goto L_002ABF40; } }
L_002ABF60:
    c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ABE68u | kUnwind; return; } goto L_002ABE68; } }
    c.budget -= 1;
L_002ABF70:
    set32(c.r[3], ld32((c.r[29].w[0] + 468u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29280u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABF8Cu); st32((c.r[29].w[0] + 468u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0051(c, 126u, depth + 1u); else { c.pc = 0x00345BB0u; return; } if (c.pc != 0x002ABF8Cu) [[unlikely]] return; }
L_002ABF8C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ABF70u | kUnwind; return; } goto L_002ABF70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ABE68u | kUnwind; return; } goto L_002ABE68; } }
    c.budget -= 1;
L_002ABFA8:
    set32(c.r[2], ld32((c.r[28].w[0] - 29280u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 20464u);
    set32(c.r[18], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABFC4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 43u, depth + 1u); else { c.pc = 0x002AC4D0u; return; } if (c.pc != 0x002ABFC4u) [[unlikely]] return; }
L_002ABFC4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002ABFF8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ABFD8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ABFD8u | kUnwind; return; } goto L_002ABFD8; } }
L_002ABFF8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
    [[clang::musttail]] return unit_002B(c, 1u, depth);
}

}

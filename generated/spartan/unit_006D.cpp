#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006D[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0,
    0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0,
    0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51,
    0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87,
    0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0,
    0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0,
    0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0,
    0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    196, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0,
    0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_006D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003B4000;
    case 2u: goto L_003B402C;
    case 3u: goto L_003B4140;
    case 4u: goto L_003B41A4;
    case 5u: goto L_003B41B0;
    case 6u: goto L_003B41F0;
    case 7u: goto L_003B4204;
    case 8u: goto L_003B4240;
    case 9u: goto L_003B42B8;
    case 10u: goto L_003B42E0;
    case 11u: goto L_003B435C;
    case 12u: goto L_003B436C;
    case 13u: goto L_003B43BC;
    case 14u: goto L_003B43F8;
    case 15u: goto L_003B4404;
    case 16u: goto L_003B4594;
    case 17u: goto L_003B4618;
    case 18u: goto L_003B4640;
    case 19u: goto L_003B467C;
    case 20u: goto L_003B46FC;
    case 21u: goto L_003B4778;
    case 22u: goto L_003B47E0;
    case 23u: goto L_003B4820;
    case 24u: goto L_003B48CC;
    case 25u: goto L_003B48D8;
    case 26u: goto L_003B492C;
    case 27u: goto L_003B4958;
    case 28u: goto L_003B4990;
    case 29u: goto L_003B4A08;
    case 30u: goto L_003B4AEC;
    case 31u: goto L_003B4B08;
    case 32u: goto L_003B4B4C;
    case 33u: goto L_003B4B58;
    case 34u: goto L_003B4B98;
    case 35u: goto L_003B4BAC;
    case 36u: goto L_003B4BE8;
    case 37u: goto L_003B4C24;
    case 38u: goto L_003B4C78;
    case 39u: goto L_003B4CA0;
    case 40u: goto L_003B4D30;
    case 41u: goto L_003B4D74;
    case 42u: goto L_003B4D80;
    case 43u: goto L_003B4DC0;
    case 44u: goto L_003B4DD4;
    case 45u: goto L_003B4E1C;
    case 46u: goto L_003B4E50;
    case 47u: goto L_003B4E94;
    case 48u: goto L_003B4EA0;
    case 49u: goto L_003B4EE0;
    case 50u: goto L_003B4EF4;
    case 51u: goto L_003B4F7C;
    case 52u: goto L_003B4F9C;
    case 53u: goto L_003B501C;
    case 54u: goto L_003B5060;
    case 55u: goto L_003B506C;
    case 56u: goto L_003B50AC;
    case 57u: goto L_003B50C0;
    case 58u: goto L_003B50C8;
    case 59u: goto L_003B50DC;
    case 60u: goto L_003B50F0;
    case 61u: goto L_003B5168;
    case 62u: goto L_003B5180;
    case 63u: goto L_003B5294;
    case 64u: goto L_003B52D8;
    case 65u: goto L_003B5310;
    case 66u: goto L_003B5360;
    case 67u: goto L_003B536C;
    case 68u: goto L_003B53AC;
    case 69u: goto L_003B53C0;
    case 70u: goto L_003B53D4;
    case 71u: goto L_003B53F0;
    case 72u: goto L_003B54B4;
    case 73u: goto L_003B54D0;
    case 74u: goto L_003B550C;
    case 75u: goto L_003B5530;
    case 76u: goto L_003B5550;
    case 77u: goto L_003B55F8;
    case 78u: goto L_003B5610;
    case 79u: goto L_003B562C;
    case 80u: goto L_003B5634;
    case 81u: goto L_003B5688;
    case 82u: goto L_003B56CC;
    case 83u: goto L_003B56DC;
    case 84u: goto L_003B5720;
    case 85u: goto L_003B5734;
    case 86u: goto L_003B5770;
    case 87u: goto L_003B577C;
    case 88u: goto L_003B5788;
    case 89u: goto L_003B57A0;
    case 90u: goto L_003B57AC;
    case 91u: goto L_003B57C8;
    case 92u: goto L_003B586C;
    case 93u: goto L_003B58B0;
    case 94u: goto L_003B58BC;
    case 95u: goto L_003B5900;
    case 96u: goto L_003B5914;
    case 97u: goto L_003B5920;
    case 98u: goto L_003B5948;
    case 99u: goto L_003B5968;
    case 100u: goto L_003B5988;
    case 101u: goto L_003B59A8;
    case 102u: goto L_003B5A38;
    case 103u: goto L_003B5A50;
    case 104u: goto L_003B5A70;
    case 105u: goto L_003B5AC4;
    case 106u: goto L_003B5ADC;
    case 107u: goto L_003B5AF0;
    case 108u: goto L_003B5B38;
    case 109u: goto L_003B5B44;
    case 110u: goto L_003B5B88;
    case 111u: goto L_003B5B9C;
    case 112u: goto L_003B5BC4;
    case 113u: goto L_003B5C30;
    case 114u: goto L_003B5CA4;
    case 115u: goto L_003B5CEC;
    case 116u: goto L_003B5D04;
    case 117u: goto L_003B5D64;
    case 118u: goto L_003B5D70;
    case 119u: goto L_003B5DA4;
    case 120u: goto L_003B5DB8;
    case 121u: goto L_003B5EE4;
    case 122u: goto L_003B5EF0;
    case 123u: goto L_003B5F8C;
    case 124u: goto L_003B5F9C;
    case 125u: goto L_003B5FB8;
    case 126u: goto L_003B5FC8;
    case 127u: goto L_003B600C;
    case 128u: goto L_003B6018;
    case 129u: goto L_003B6058;
    case 130u: goto L_003B606C;
    case 131u: goto L_003B6080;
    case 132u: goto L_003B60B0;
    case 133u: goto L_003B60C0;
    case 134u: goto L_003B6138;
    case 135u: goto L_003B6220;
    case 136u: goto L_003B62C8;
    case 137u: goto L_003B62E0;
    case 138u: goto L_003B62F8;
    case 139u: goto L_003B633C;
    case 140u: goto L_003B6348;
    case 141u: goto L_003B6388;
    case 142u: goto L_003B639C;
    case 143u: goto L_003B63B0;
    case 144u: goto L_003B63D0;
    case 145u: goto L_003B63E0;
    case 146u: goto L_003B63F0;
    case 147u: goto L_003B6454;
    case 148u: goto L_003B6498;
    case 149u: goto L_003B64A4;
    case 150u: goto L_003B64E4;
    case 151u: goto L_003B64F8;
    case 152u: goto L_003B650C;
    case 153u: goto L_003B6530;
    case 154u: goto L_003B6540;
    case 155u: goto L_003B65C8;
    case 156u: goto L_003B65E0;
    case 157u: goto L_003B6620;
    case 158u: goto L_003B6664;
    case 159u: goto L_003B6718;
    case 160u: goto L_003B6774;
    case 161u: goto L_003B67A0;
    case 162u: goto L_003B67C4;
    case 163u: goto L_003B67CC;
    case 164u: goto L_003B67F8;
    case 165u: goto L_003B6820;
    case 166u: goto L_003B6838;
    case 167u: goto L_003B6840;
    case 168u: goto L_003B68D8;
    case 169u: goto L_003B6904;
    case 170u: goto L_003B693C;
    case 171u: goto L_003B6B10;
    case 172u: goto L_003B6BD4;
    case 173u: goto L_003B6C00;
    case 174u: goto L_003B6C60;
    case 175u: goto L_003B6C6C;
    case 176u: goto L_003B6DA4;
    case 177u: goto L_003B6DD0;
    case 178u: goto L_003B6E2C;
    case 179u: goto L_003B6EB8;
    case 180u: goto L_003B6EC4;
    case 181u: goto L_003B6F5C;
    case 182u: goto L_003B6F8C;
    case 183u: goto L_003B6FA0;
    case 184u: goto L_003B6FE0;
    case 185u: goto L_003B70B0;
    case 186u: goto L_003B7140;
    case 187u: goto L_003B714C;
    case 188u: goto L_003B71D0;
    case 189u: goto L_003B7208;
    case 190u: goto L_003B7228;
    case 191u: goto L_003B7248;
    case 192u: goto L_003B72F0;
    case 193u: goto L_003B7308;
    case 194u: goto L_003B7324;
    case 195u: goto L_003B732C;
    case 196u: goto L_003B7380;
    case 197u: goto L_003B738C;
    case 198u: goto L_003B7398;
    case 199u: goto L_003B7450;
    case 200u: goto L_003B7458;
    case 201u: goto L_003B75B8;
    case 202u: goto L_003B75E0;
    case 203u: goto L_003B7600;
    case 204u: goto L_003B7620;
    case 205u: goto L_003B7640;
    case 206u: goto L_003B76D0;
    case 207u: goto L_003B76E8;
    case 208u: goto L_003B7708;
    case 209u: goto L_003B7810;
    case 210u: goto L_003B7854;
    case 211u: goto L_003B78A0;
    case 212u: goto L_003B7914;
    case 213u: goto L_003B792C;
    case 214u: goto L_003B7984;
    case 215u: goto L_003B7994;
    case 216u: goto L_003B7A14;
    case 217u: goto L_003B7A8C;
    case 218u: goto L_003B7AF0;
    case 219u: goto L_003B7B98;
    case 220u: goto L_003B7BBC;
    case 221u: goto L_003B7C38;
    case 222u: goto L_003B7C9C;
    case 223u: goto L_003B7D30;
    case 224u: goto L_003B7DF0;
    case 225u: goto L_003B7E80;
    case 226u: goto L_003B7EB0;
    case 227u: goto L_003B7EC0;
    case 228u: goto L_003B7ED0;
    case 229u: goto L_003B7EE0;
    case 230u: goto L_003B7F20;
    case 231u: goto L_003B7FC4;
    default: bad_entry(c, 0x003B4000u); return;
    }
L_003B4000:
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[4].w[0] + 106u));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != 0ull; st8((c.r[4].w[0] + 106u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003B4280; } }
L_003B402C:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 106u));
    set32(c.r[2], 0u - 33u);
    set32(c.r[5], ld32((c.r[18].w[0] + 40u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[3], ld32((c.r[5].w[0] + 752u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 801u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 97u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[3].w[0] << 5);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 106u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0] + 64u), c.r[17].w[0]);  if (t) { goto L_003B406C; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 6u));
    st32((c.r[18].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 2;
L_003B406C:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 106u));
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 106u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B40B4; } }
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_003B40B4:
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[6].d[0] = ld8((c.r[18].w[0] + 107u));
    set32(c.r[4], 0u - 5u);
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st8((c.r[18].w[0] + 107u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003B4290; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 122u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003B4128; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B411C; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 121u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
L_003B411C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B4128; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003B4128:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 107u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 107u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_003B4140:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 107u));
    set32(c.r[2], 0u - 129u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 106u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[4].w[0] << 7);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 106u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B41B8; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 107u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B41B8; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B41A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B41A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B41A4u) [[unlikely]] return; }
L_003B41A4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B41B0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B41B0u) [[unlikely]] return; }
L_003B41B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 40u)));  if (t) { goto L_003B4208; } }
L_003B41B8:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B42AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[18].w[0] + 76u));
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B41F8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B41F0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B41F0u) [[unlikely]] return; }
L_003B41F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B4204; } }
L_003B41F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4204u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B4204u) [[unlikely]] return; }
L_003B4204:
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 1;
L_003B4208:
    set32(c.r[3], ld32((c.r[4].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 121u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B4240; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 525u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B4240; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4240u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x003B3970u; return; } if (c.pc != 0x003B4240u) [[unlikely]] return; }
L_003B4240:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] & 255ull;  if (t) { goto L_003B4260; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 801u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 752u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 97u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
L_003B4260:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 107u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 107u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B42C0; } }
L_003B4280:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 92u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B402Cu | kUnwind; return; } goto L_003B402C; } }
L_003B4290:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 107u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 107u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4140u | kUnwind; return; } goto L_003B4140; } }
L_003B42AC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B42B8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B42B8u) [[unlikely]] return; }
L_003B42B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4204u | kUnwind; return; } goto L_003B4204; } }
L_003B42C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B42E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 6u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 296u));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003B4348; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003B4374; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 1360u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B4374; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 296u));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003B4374; } }
L_003B4348:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 106u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B4364; } }
L_003B435C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_003B47B4; } }
L_003B4364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B436Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B436Cu) [[unlikely]] return; }
L_003B436C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B435Cu | kUnwind; return; } goto L_003B435C; } }
L_003B4374:
    st8((c.r[20].w[0] + 105u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 216u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B439C; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 29u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B439C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003B47B0; } }
L_003B439C:
    c.r[16].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003B47B0; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 811u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B454C; } }
L_003B43BC:
    set32(c.r[3], ld32((c.r[4].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 122u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B4438; } }
    c.f[3] = ld32((c.r[19].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[20] = ld32((c.r[4].w[0] + 104u));
    c.f[21] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[22] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B43F8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003B43F8u) [[unlikely]] return; }
L_003B43F8:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4404u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003B4404u) [[unlikely]] return; }
L_003B4404:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[3].w[0];
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
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B47B0; } }
L_003B4438:
    c.r[4].d[0] = ld8((c.r[20].w[0] + 106u));
    c.r[3].d[0] = c.r[4].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B44C4; } }
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B45AC; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B459C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.f[3] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[6] = ld32((c.r[3].w[0] + 32u));
    c.f[4] = ld32((c.r[3].w[0] + 40u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[2]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[6], c.f[1]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[4], c.f[0]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B45AC; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[20].w[0] + 64u), c.r[19].w[0]);  if (t) { goto L_003B45AC; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 6u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_003B45AC; } }
L_003B44C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[20].w[0] + 76u));
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B47B0; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 293u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B47B0; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B45E0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B47B0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 123u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B45E0; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 344u)));
    set32(c.r[3], 0u + 83u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1564u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003B45E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B47B0; } }
L_003B454C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_003B456C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 122u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B43BCu | kUnwind; return; } goto L_003B43BC; } }
L_003B456C:
    c.r[6].d[0] = ld8((c.r[20].w[0] + 107u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], 0u - 5u);
    set32(c.r[5], 0u + 3u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4594u); st8((c.r[20].w[0] + 107u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B4594u) [[unlikely]] return; }
L_003B4594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B47B0; } }
L_003B459C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[20].w[0] + 64u), c.r[19].w[0]);  if (t) { goto L_003B45AC; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 6u));
    st32((c.r[20].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 2;
L_003B45AC:
    c.r[4].d[0] = ld8((c.r[20].w[0] + 107u));
    set32(c.r[3], 0u - 9u);
    set32(c.r[6], ld32((c.r[20].w[0] + 40u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[4], ld32((c.r[6].w[0] + 752u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 801u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 97u)));
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    set32(c.r[4], c.r[4].w[0] << 3);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 107u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B47B0; } }
L_003B45E0:
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 752u)));
    set32(c.r[5], c.r[2].w[0] + 752u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 800u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 92u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B4748; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 97u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 49u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B4748; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B4618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B4648; } }
    c.r[1].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B4648; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4640u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_006C(c, 254u, depth + 1u); else { c.pc = 0x003B3FF0u; return; } if (c.pc != 0x003B4640u) [[unlikely]] return; }
L_003B4640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[20].w[0] + 106u));  if (t) { goto L_003B4700; } }
L_003B4648:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 56u));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003B4660; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] << 56;  if (t) { goto L_003B466C; } }
L_003B4660:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 96u)));
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.budget -= 3;
L_003B466C:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[5], 0u + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B467Cu); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003B467Cu) [[unlikely]] return; }
L_003B467C:
    set32(c.r[3], ld32((c.r[19].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 119u));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003B46A4; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[3], 0u + 4u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 296u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003B46AC; } }
L_003B46A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] << 1);  if (t) { goto L_003B46DC; } }
L_003B46AC:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 106u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B46CC; } }
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 3;
L_003B46CC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_003B46DC; } }
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    c.budget -= 1;
L_003B46DC:
    c.r[1].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B46FC; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B46FCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 254u, depth + 1u); else { c.pc = 0x003B3FF0u; return; } if (c.pc != 0x003B46FCu) [[unlikely]] return; }
L_003B46FC:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 106u));
    c.budget -= 1;
L_003B4700:
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B47B0; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 107u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B4750; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 752u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 98u)));
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { goto L_003B4760; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_003B47B0; } }
L_003B4748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4618u | kUnwind; return; } goto L_003B4618; } }
L_003B4750:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_003B47B0; } }
L_003B4760:
    c.f[0] = c.r[16].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[21] = c.r[2].w[0];
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4778u); c.f[20] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003B4778u) [[unlikely]] return; }
L_003B4778:
    c.f[2] = c.r[16].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[20].w[0] + 72u), c.f[1]);  if (t) { goto L_003B47B0; } }
    st32((c.r[20].w[0] + 72u), c.f[0]);
    c.budget -= 1;
L_003B47B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003B47B4:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003B47E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 6u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 296u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B4828; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B4950; } }
L_003B4820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B4974; } }
L_003B4828:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B4960; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B4968; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B487C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B487C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B4974; } }
L_003B487C:
    set32(c.r[4], ld32((c.r[6].w[0] + 752u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 803u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 91u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B4970; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 122u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B4914; } }
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[2] = ld32((c.r[6].w[0] + 32u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[6].w[0] + 40u));
    c.f[20] = ld32((c.r[6].w[0] + 104u));
    c.f[21] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[22] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B48CCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003B48CCu) [[unlikely]] return; }
L_003B48CC:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B48D8u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003B48D8u) [[unlikely]] return; }
L_003B48D8:
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
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B4914; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B4974; } }
L_003B4914:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[2], ld32((c.r[2].w[0] + 752u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 99u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B492Cu); set32(c.r[5], 0u + 100u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003B492Cu) [[unlikely]] return; }
L_003B492C:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B4948; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003B4974; } }
L_003B4948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B4974; } }
L_003B4950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4958u);  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B4958u) [[unlikely]] return; }
L_003B4958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4820u | kUnwind; return; } goto L_003B4820; } }
L_003B4960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003B4974; } }
L_003B4968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B4974; } }
L_003B4970:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003B4974:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B4990:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 811u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003B4C80; } }
    set32(c.r[4], 0u + 5u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st8((c.r[17].w[0] + 105u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    st32((c.r[17].w[0] + 96u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 106u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B4A28; } }
    c.f[1] = ld32((c.r[17].w[0] + 72u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B4BF0; } }
L_003B4A08:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 106u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 106u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B4C80; } }
L_003B4A28:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 803u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 91u));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B4A54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.f[0]);  if (t) { goto L_003B4A5C; } }
L_003B4A54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 2;
L_003B4A5C:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 106u));
    set32(c.r[4], 0u - 33u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 106u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 106u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 106u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 64u), c.r[16].w[0]);  if (t) { goto L_003B4A9C; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 6u));
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 2;
L_003B4A9C:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 106u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 106u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 107u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B4BFC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 752u)));
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 98u)));
    c.budget -= 5;
    { const bool t = c.r[18].sd[0] > 0;  if (t) { goto L_003B4C0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 3;
L_003B4AEC:
    c.f[1] = ld32((c.r[17].w[0] + 72u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B4C60; } }
L_003B4B08:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B4B60; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 107u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B4B60; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B4B4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4B4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B4B4Cu) [[unlikely]] return; }
L_003B4B4C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4B58u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B4B58u) [[unlikely]] return; }
L_003B4B58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 40u)));  if (t) { goto L_003B4BB0; } }
L_003B4B60:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B4C6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[17].w[0] + 76u));
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B4BA0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4B98u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B4B98u) [[unlikely]] return; }
L_003B4B98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B4BAC; } }
L_003B4BA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4BACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B4BACu) [[unlikely]] return; }
L_003B4BAC:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_003B4BB0:
    set32(c.r[3], ld32((c.r[4].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 121u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B4C80; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 525u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B4C80; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4BE8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x003B3970u; return; } if (c.pc != 0x003B4BE8u) [[unlikely]] return; }
L_003B4BE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003B4C84; } }
L_003B4BF0:
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4A08u | kUnwind; return; } goto L_003B4A08; } }
L_003B4BFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4AECu | kUnwind; return; } goto L_003B4AEC; } }
L_003B4C0C:
    c.f[0] = c.r[18].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[21] = c.r[2].w[0];
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4C24u); c.f[20] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003B4C24u) [[unlikely]] return; }
L_003B4C24:
    c.f[2] = c.r[18].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 72u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4AECu | kUnwind; return; } goto L_003B4AEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4AECu | kUnwind; return; } goto L_003B4AEC; } }
L_003B4C60:
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4B08u | kUnwind; return; } goto L_003B4B08; } }
L_003B4C6C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4C78u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B4C78u) [[unlikely]] return; }
L_003B4C78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4BACu | kUnwind; return; } goto L_003B4BAC; } }
L_003B4C80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003B4C84:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B4CA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 40u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[6].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[6].w[0] + 736u);  if (t) { goto L_003B4E1C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003B4CF8; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B4CF8; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B4CF8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_003B4E1C; } }
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B4DDC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[16].w[0] + 92u));
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B4E1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4D30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B4D30u) [[unlikely]] return; }
L_003B4D30:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B4D88; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 107u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B4D88; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B4D74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4D74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B4D74u) [[unlikely]] return; }
L_003B4D74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4D80u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B4D80u) [[unlikely]] return; }
L_003B4D80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B4DD4; } }
L_003B4D88:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B50D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B4DC8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4DC0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B4DC0u) [[unlikely]] return; }
L_003B4DC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B4DD4; } }
L_003B4DC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4DD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B4DD4u) [[unlikely]] return; }
L_003B4DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003B5174; } }
L_003B4DDC:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003B4E1C; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 121u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B4E1C; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 525u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B4E1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4E1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x003B3970u; return; } if (c.pc != 0x003B4E1Cu) [[unlikely]] return; }
L_003B4E1C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003B4EFC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B4EFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4E50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B4E50u) [[unlikely]] return; }
L_003B4E50:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B4EA8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 107u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B4EA8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B4E94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4E94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B4E94u) [[unlikely]] return; }
L_003B4E94:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4EA0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B4EA0u) [[unlikely]] return; }
L_003B4EA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B4EF4; } }
L_003B4EA8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B50E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B4EE8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4EE0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B4EE0u) [[unlikely]] return; }
L_003B4EE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B4EF4; } }
L_003B4EE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4EF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B4EF4u) [[unlikely]] return; }
L_003B4EF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B5170; } }
L_003B4EFC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B50F8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B50F8; } }
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 293u));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull; c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003B4F58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);  if (t) { goto L_003B4F64; } }
L_003B4F58:
    set32(c.r[3], ld32((c.r[4].w[0] + 752u)));
    c.f[1] = ld32((c.r[3].w[0] + 48u));
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 3;
L_003B4F64:
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003B4F78; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B4F78:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_003B4F7C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B4FE8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B5100; } }
L_003B4F9C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 107u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B5138; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B5144; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B5150; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 807u));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003B5150; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 65u);  if (t) { goto L_003B5148; } }
L_003B4FE8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B5170; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003B5170; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 807u));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B5170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B501Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B501Cu) [[unlikely]] return; }
L_003B501C:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B5074; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 107u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B5074; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B5060; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5060u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B5060u) [[unlikely]] return; }
L_003B5060:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B506Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B506Cu) [[unlikely]] return; }
L_003B506C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B50C0; } }
L_003B5074:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B515C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B50B4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B50ACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B50ACu) [[unlikely]] return; }
L_003B50AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B50C0; } }
L_003B50B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B50C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B50C0u) [[unlikely]] return; }
L_003B50C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B5170; } }
L_003B50C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B5170; } }
L_003B50D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B50DCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B50DCu) [[unlikely]] return; }
L_003B50DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4DD4u | kUnwind; return; } goto L_003B4DD4; } }
L_003B50E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B50F0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B50F0u) [[unlikely]] return; }
L_003B50F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4EF4u | kUnwind; return; } goto L_003B4EF4; } }
L_003B50F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4F7Cu | kUnwind; return; } goto L_003B4F7C; } }
L_003B5100:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 33u);
    set32(c.r[6], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 106u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 107u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 107u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4F9Cu | kUnwind; return; } goto L_003B4F9C; } }
L_003B5138:
    set32(c.r[3], 0u + 80u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B50C8u | kUnwind; return; } goto L_003B50C8; } }
L_003B5144:
    set32(c.r[3], 0u + 65u);
    c.budget -= 1;
L_003B5148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B50C8u | kUnwind; return; } goto L_003B50C8; } }
L_003B5150:
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B50C8u | kUnwind; return; } goto L_003B50C8; } }
L_003B515C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5168u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B5168u) [[unlikely]] return; }
L_003B5168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B50C0u | kUnwind; return; } goto L_003B50C0; } }
L_003B5170:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003B5174:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B5180:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u - 9u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[6].w[0] << 3);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 106u));
    set32(c.r[13], 0u - 33u);
    set32(c.r[15], c.r[6].w[0] << 5);
    set32(c.r[14], 0u - 2u);
    set32(c.r[11], 0u - 3u);
    set32(c.r[12], c.r[6].w[0] << 1);
    set32(c.r[9], 0u - 5u);
    set32(c.r[10], c.r[6].w[0] << 2);
    set32(c.r[8], 0u + 11u);
    c.r[7].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[24].d[0] = c.r[7].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 106u), static_cast<std::uint8_t>(c.r[24].w[0]));
    set32(c.r[7], 0u + 5u);
    st32((c.r[4].w[0] + 92u), c.r[2].w[0]);
    c.r[24].d[0] = ld8((c.r[4].w[0] + 106u));
    c.r[13].d[0] = c.r[24].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 106u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[4].w[0] + 106u));
    c.r[13].d[0] = c.r[13].d[0] & c.r[14].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 106u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st32((c.r[4].w[0] + 96u), c.r[2].w[0]);
    c.r[13].d[0] = ld8((c.r[4].w[0] + 107u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 107u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    c.r[11].d[0] = ld8((c.r[4].w[0] + 107u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[4].w[0] + 107u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 107u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[14].d[0];
    c.r[6].d[0] = c.r[9].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 107u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 107u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 107u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 105u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], c.r[2].w[0] + 752u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 808u));
    c.budget -= 56;
    { const bool t = c.r[2].d[0] != c.r[7].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B5268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[7].d[0] << 56;  if (t) { goto L_003B5274; } }
L_003B5268:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 96u)));
    c.r[2].d[0] = c.r[7].d[0] << 56;
    c.budget -= 3;
L_003B5274:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B52C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[20] = ld32((c.r[2].w[0] - 20416u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5294u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003B5294u) [[unlikely]] return; }
L_003B5294:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.f[2] = 0u;
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[3] = c.r[4].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[20]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.f[0]);  if (t) { goto L_003B52F4; } }
L_003B52C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[20] = ld32((c.r[2].w[0] - 20416u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B52D8u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003B52D8u) [[unlikely]] return; }
L_003B52D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = 0u;
    c.f[2] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[16].w[0] + 76u), c.f[0]);
    c.budget -= 7;
L_003B52F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B5310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B5374; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 107u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B5374; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B5360; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5360u);  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B5360u) [[unlikely]] return; }
L_003B5360:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B536Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B536Cu) [[unlikely]] return; }
L_003B536C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003B53D8; } }
L_003B5374:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B53C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B53B4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B53ACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B53ACu) [[unlikely]] return; }
L_003B53AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B53D4; } }
L_003B53B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B53C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B53C0u) [[unlikely]] return; }
L_003B53C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B53D4; } }
L_003B53C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B53D4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B53D4u) [[unlikely]] return; }
L_003B53D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003B53D8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B53F0:
    st8((c.r[4].w[0] + 104u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 3u);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003B54B0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003B5470; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003B5434; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003B542C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B54B4; } }
L_003B542C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003B54B4; } }
L_003B5434:
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = 0ull & 1ull;
    c.r[8].d[0] = ld8((c.r[4].w[0] + 106u));
    set32(c.r[6], 0u - 129u);
    set32(c.r[7], c.r[3].w[0] << 7);
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 106u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 107u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 107u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B54B4; } }
L_003B5470:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 107u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B54BC; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 106u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B54A4; } }
    set32(c.r[3], 0u + 65u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003B54B4; } }
L_003B54A4:
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003B54B4; } }
L_003B54B0:
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_003B54B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B54C8; } }
L_003B54BC:
    set32(c.r[3], 0u + 80u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B54B4u | kUnwind; return; } goto L_003B54B4; } }
L_003B54C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B54D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[7], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 222u)));
    set32(c.r[6], c.r[4].w[0] + 8u);
    st8((c.r[4].w[0] + 220u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 216u), c.r[7].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 15;
L_003B550C:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[7].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003B5580; } }
    c.budget -= 1;
L_003B5530:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = c.r[7].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_003B5A80; } }
    c.budget -= 1;
L_003B5550:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[7].d[0];  if (t) { goto L_003B5A88; } }
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5530u | kUnwind; return; } goto L_003B5530; } }
    c.budget -= 1;
L_003B5580:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[11], ld32((c.r[6].w[0] + 208u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[10], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[10].w[0] + 16u)));
    c.r[7].d[0] = c.r[7].d[0] & c.r[11].d[0];
    c.budget -= 10;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[8], c.r[10].w[0] + 16u);  if (t) { goto L_003B5A90; } }
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
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_003B5610; } }
    set32(c.r[7], c.r[10].w[0] + 1u);
    st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = c.r[7].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_003B5AB0; } }
    c.budget -= 1;
L_003B55F8:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_003B5610; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003B562C; } }
L_003B5610:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B550Cu | kUnwind; return; } goto L_003B550C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_003B562C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003B5A78; } }
L_003B5634:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B5838; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B57D0; } }
    set32(c.r[3], 0u + 16384u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B57B8; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B5740; } }
    set32(c.r[3], 0u + 4096u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B5680; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B5920; } }
    c.budget -= 1;
L_003B5680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5688u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B5688u) [[unlikely]] return; }
L_003B5688:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B56E8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 107u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B56E8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B56D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B56CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B56CCu) [[unlikely]] return; }
L_003B56CC:
    c.budget -= 1;
L_003B56D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B56DCu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B56DCu) [[unlikely]] return; }
L_003B56DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B5920; } }
    c.budget -= 1;
L_003B56E8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B5AB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B5728; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5720u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B5720u) [[unlikely]] return; }
L_003B5720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B5920; } }
L_003B5728:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5734u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B5734u) [[unlikely]] return; }
L_003B5734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B5920; } }
    c.budget -= 1;
L_003B5740:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B5920; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 16528u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003B4000u < 16384u) { entry = entries_006D[(t - 0x003B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B5770:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B577Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x003B42E0u; return; } if (c.pc != 0x003B577Cu) [[unlikely]] return; }
L_003B577C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B5920; } }
    c.budget -= 1;
L_003B5788:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B5920; } }
    c.budget -= 1;
L_003B57A0:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B57ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 28u, depth + 1u); else { c.pc = 0x003B4990u; return; } if (c.pc != 0x003B57ACu) [[unlikely]] return; }
L_003B57AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B5920; } }
    c.budget -= 1;
L_003B57B8:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B57C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 243u, depth + 1u); else { c.pc = 0x003B3B20u; return; } if (c.pc != 0x003B57C8u) [[unlikely]] return; }
L_003B57C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B5920; } }
L_003B57D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 121u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003B5800; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 122u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B5800; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B5800:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003B5920; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 4u));
    set32(c.r[3], 0u - 65u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 6);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 106u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 108u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B5920; } }
    c.budget -= 1;
L_003B5838:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B5AE0; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 4u));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B5AE0; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 552u));
    set32(c.r[2], 0u + 36u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003B5AE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B586Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B586Cu) [[unlikely]] return; }
L_003B586C:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B58C8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 107u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B58C8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B58B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B58B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B58B0u) [[unlikely]] return; }
L_003B58B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B58BCu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B58BCu) [[unlikely]] return; }
L_003B58BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B5AE0; } }
    c.budget -= 1;
L_003B58C8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B5AD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B5908; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5900u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B5900u) [[unlikely]] return; }
L_003B5900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B5AE0; } }
L_003B5908:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5914u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B5914u) [[unlikely]] return; }
L_003B5914:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B5AE0; } }
    c.budget -= 1;
L_003B5920:
    set32(c.r[6], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 220u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0] + 220u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[6].w[0] + 8u);  if (t) { goto L_003B5BD0; } }
    c.budget -= 1;
L_003B5948:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B5BD8; } }
    set32(c.r[3], 0u + 10u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
L_003B5968:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[11], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[11].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003B59D8; } }
L_003B5988:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003B5BE0; } }
    c.budget -= 1;
L_003B59A8:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_003B5BE8; } }
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[11], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[11].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5988u | kUnwind; return; } goto L_003B5988; } }
    c.budget -= 1;
L_003B59D8:
    set32(c.r[10], ld32((c.r[5].w[0] + 208u)));
    set32(c.r[6], ld32((c.r[11].w[0] + 16u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[10].d[0];
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[8], c.r[11].w[0] + 16u);  if (t) { goto L_003B5BF0; } }
    set32(c.r[6], ld32((c.r[8].w[0])));
    c.r[6].d[0] = c.r[6].d[0] | c.r[10].d[0];
    st32((c.r[8].w[0]), c.r[6].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 204u)));
    set32(c.r[8], c.r[10].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0] + 12u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[8].d[0];
    c.budget -= 13;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003B5A50; } }
    set32(c.r[6], c.r[10].w[0] + 1u);
    st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_003B5C10; } }
L_003B5A38:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_003B5A50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003B5A70; } }
L_003B5A50:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5968u | kUnwind; return; } goto L_003B5968; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_003B5A70:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5634u | kUnwind; return; } goto L_003B5634; } }
L_003B5A78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B5C18; } }
L_003B5A80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5550u | kUnwind; return; } goto L_003B5550; } }
L_003B5A88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B562Cu | kUnwind; return; } goto L_003B562C; } }
L_003B5A90:
    st8((c.r[10].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[10].w[0] + 12u), c.r[5].w[0]);
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 213u)));
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 213u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5610u | kUnwind; return; } goto L_003B5610; } }
L_003B5AB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B55F8u | kUnwind; return; } goto L_003B55F8; } }
L_003B5AB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5AC4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B5AC4u) [[unlikely]] return; }
L_003B5AC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5920u | kUnwind; return; } goto L_003B5920; } }
    c.budget -= 1;
L_003B5AD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5ADCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B5ADCu) [[unlikely]] return; }
L_003B5ADC:
    c.budget -= 1;
L_003B5AE0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003B5BA8; } }
L_003B5AF0:
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B5B50; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 107u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B5B50; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B5B38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5B38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B5B38u) [[unlikely]] return; }
L_003B5B38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5B44u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B5B44u) [[unlikely]] return; }
L_003B5B44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5920u | kUnwind; return; } goto L_003B5920; } }
    c.budget -= 1;
L_003B5B50:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B5BB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B5B90; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5B88u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B5B88u) [[unlikely]] return; }
L_003B5B88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5920u | kUnwind; return; } goto L_003B5920; } }
L_003B5B90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5B9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B5B9Cu) [[unlikely]] return; }
L_003B5B9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5920u | kUnwind; return; } goto L_003B5920; } }
    c.budget -= 1;
L_003B5BA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5AF0u | kUnwind; return; } goto L_003B5AF0; } }
L_003B5BB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5BC4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B5BC4u) [[unlikely]] return; }
L_003B5BC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5920u | kUnwind; return; } goto L_003B5920; } }
    c.budget -= 1;
L_003B5BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5948u | kUnwind; return; } goto L_003B5948; } }
L_003B5BD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5A70u | kUnwind; return; } goto L_003B5A70; } }
L_003B5BE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B59A8u | kUnwind; return; } goto L_003B59A8; } }
L_003B5BE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5A70u | kUnwind; return; } goto L_003B5A70; } }
L_003B5BF0:
    st8((c.r[11].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[11].w[0] + 12u), c.r[7].w[0]);
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    st8((c.r[11].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 213u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 213u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5A50u | kUnwind; return; } goto L_003B5A50; } }
L_003B5C10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5A38u | kUnwind; return; } goto L_003B5A38; } }
L_003B5C18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B5C30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B5C6C; } }
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B5C6C; } }
    st32((c.r[17].w[0] + 64u), 0u);
    c.budget -= 1;
L_003B5C6C:
    set32(c.r[6], ld32((c.r[17].w[0] + 36u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[4].d[0] = c.r[3].d[0] | 20492ull;
    st32((c.r[6].w[0] + 212u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[6].w[0] + 8u);  if (t) { goto L_003B5C94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 213u)));  if (t) { goto L_003B5C98; } }
L_003B5C94:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B5C98:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B5F94; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 104u));
    c.budget -= 1;
L_003B5CA4:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B6088; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B6088; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_003B5CEC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003B5CD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B5DD0; } }
L_003B5CD8:
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B5DD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5CECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B5CECu) [[unlikely]] return; }
L_003B5CEC:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B5FA4; } }
L_003B5D04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    c.f[1] = ld32((c.r[17].w[0] + 76u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[2] = ld32((c.r[4].w[0] - 20416u));  if (t) { goto L_003B6088; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B5D78; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 107u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B5D78; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B5D64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5D64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B5D64u) [[unlikely]] return; }
L_003B5D64:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5D70u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B5D70u) [[unlikely]] return; }
L_003B5D70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[17].w[0] + 104u));  if (t) { goto L_003B5DBC; } }
L_003B5D78:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B5FAC; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B5DAC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5DA4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B5DA4u) [[unlikely]] return; }
L_003B5DA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B5DB8; } }
L_003B5DAC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5DB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B5DB8u) [[unlikely]] return; }
L_003B5DB8:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 104u));
    c.budget -= 1;
L_003B5DBC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B5DD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003B608C; } }
L_003B5DD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[3] = ld32((c.r[3].w[0] - 20416u));
    c.f[1] = ld32((c.r[2].w[0] - 20416u));
    c.f[2] = ld32((c.r[17].w[0] + 96u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B5E14; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1539u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B5E14; } }
    st32((c.r[17].w[0] + 96u), c.f[3]);
    c.budget -= 1;
L_003B5E14:
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003B5E38; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 736u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B5E38; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003B5E38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[2].w[0] - 20416u));
    c.f[2] = ld32((c.r[17].w[0] + 96u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003B5F28; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B5F28; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B5F28; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[5] = ld32((c.r[4].w[0] + 40u));
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[3] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = c.r[2].w[0];
    c.f[6] = ld32((c.r[3].w[0] + 40u));
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.f[4] = ld32((c.r[3].w[0] + 36u));
    c.f[20] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.f[22] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[20], c.f[20]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[22]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    st32((c.r[29].w[0] + 72u), c.f[20]);
    st32((c.r[29].w[0] + 68u), c.f[3]);
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 64u), c.f[22]);  if (t) { goto L_003B5EC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003B5F28; } }
L_003B5EC8:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 552u));
    set32(c.r[2], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003B5F28; } }
    c.f[21] = ld32((c.r[4].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5EE4u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003B5EE4u) [[unlikely]] return; }
L_003B5EE4:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5EF0u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003B5EF0u) [[unlikely]] return; }
L_003B5EF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    c.f[4] = 0u;
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[21]);
    c.f[1] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[21]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B5F28; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B5F28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[2].w[0] - 20416u));
    c.f[2] = ld32((c.r[17].w[0] + 96u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B5F84; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003B5F84; } }
    c.f[1] = ld32((c.r[17].w[0] + 72u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B5FC0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.f[0] = ld32((c.r[17].w[0] + 72u));
    c.f[1] = ld32((c.r[2].w[0] + 280u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 72u), c.f[0]);
    c.budget -= 5;
L_003B5F84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5F8Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 39u, depth + 1u); else { c.pc = 0x003B4CA0u; return; } if (c.pc != 0x003B5F8Cu) [[unlikely]] return; }
L_003B5F8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B6088; } }
L_003B5F94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5F9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 73u, depth + 1u); else { c.pc = 0x003B54D0u; return; } if (c.pc != 0x003B5F9Cu) [[unlikely]] return; }
L_003B5F9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[17].w[0] + 104u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5CA4u | kUnwind; return; } goto L_003B5CA4; } }
L_003B5FA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5D04u | kUnwind; return; } goto L_003B5D04; } }
L_003B5FAC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5FB8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B5FB8u) [[unlikely]] return; }
L_003B5FB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5DB8u | kUnwind; return; } goto L_003B5DB8; } }
L_003B5FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5FC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B5FC8u) [[unlikely]] return; }
L_003B5FC8:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B6020; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 107u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B6020; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B600C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B600Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B600Cu) [[unlikely]] return; }
L_003B600C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6018u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B6018u) [[unlikely]] return; }
L_003B6018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B606C; } }
L_003B6020:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B6074; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[17].w[0] + 76u));
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B6060; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6058u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B6058u) [[unlikely]] return; }
L_003B6058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B606C; } }
L_003B6060:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B606Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B606Cu) [[unlikely]] return; }
L_003B606C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B6088; } }
L_003B6074:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6080u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B6080u) [[unlikely]] return; }
L_003B6080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B606Cu | kUnwind; return; } goto L_003B606C; } }
L_003B6088:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003B608C:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B60B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 64u), 0u);  c.pc = t; return; }
L_003B60C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u - 33u);
    st32((c.r[4].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[7], c.r[8].w[0] << 5);
    c.r[9].d[0] = ld8((c.r[4].w[0] + 106u));
    set32(c.r[3], 0u - 9u);
    set32(c.r[5], c.r[8].w[0] << 3);
    set32(c.r[2], 0u - 2u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[9].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 106u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 106u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 106u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 106u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 106u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 76u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6138u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003B6138u) [[unlikely]] return; }
L_003B6138:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E8F0000u);
    c.r[5].d[0] = 0ull & 1ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 23593ull;
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    set32(c.r[15], 0u - 65u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[24], c.r[5].w[0] << 6);
    c.f[1] = 0u;
    set32(c.r[13], 0u - 129u);
    c.f[3] = c.r[4].w[0];
    set32(c.r[3], 0u - 5u);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    set32(c.r[14], c.r[5].w[0] << 7);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    st32((c.r[16].w[0] + 88u), c.f[0]);
    set32(c.r[11], 0u - 3u);
    c.r[25].d[0] = ld8((c.r[16].w[0] + 106u));
    set32(c.r[12], c.r[5].w[0] << 1);
    set32(c.r[10], 0u - 2u);
    set32(c.r[9], 0u + 11u);
    set32(c.r[8], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xC1200000u);
    c.r[25].d[0] = c.r[25].d[0] & c.r[3].d[0];
    c.r[25].d[0] = c.r[25].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 106u), static_cast<std::uint8_t>(c.r[25].w[0]));
    c.r[25].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[15].d[0] = c.r[25].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[24].d[0];
    st8((c.r[16].w[0] + 106u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[13].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st8((c.r[16].w[0] + 106u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[16].w[0] + 107u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st8((c.r[16].w[0] + 107u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[16].w[0] + 107u));
    c.r[3].d[0] = c.r[11].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 107u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 107u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[10].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 107u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 105u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[16].w[0] + 54u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[16].w[0] + 96u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[6].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 57;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B6220:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 8576u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25904u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 25584u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25568u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 25552u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25312u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 8544u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 32u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 8304u);
    st32((c.r[4].w[0] + 40u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[8].w[0]);
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B62C8u); st32((c.r[4].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_006D(c, 133u, depth + 1u); else { c.pc = 0x003B60C0u; return; } if (c.pc != 0x003B62C8u) [[unlikely]] return; }
L_003B62C8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B62E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 64u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B62F8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B62F8u) [[unlikely]] return; }
L_003B62F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B6350; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 107u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B6350; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B633C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B633Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B633Cu) [[unlikely]] return; }
L_003B633C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6348u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B6348u) [[unlikely]] return; }
L_003B6348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B639C; } }
L_003B6350:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B63A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B6390; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6388u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B6388u) [[unlikely]] return; }
L_003B6388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B639C; } }
L_003B6390:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B639Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B639Cu) [[unlikely]] return; }
L_003B639C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003B63B8; } }
L_003B63A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B63B0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B63B0u) [[unlikely]] return; }
L_003B63B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B639Cu | kUnwind; return; } goto L_003B639C; } }
L_003B63B8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B63D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 64u), 0u);  c.pc = t; return; }
L_003B63E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B32A0u | kUnwind; return; } [[clang::musttail]] return unit_006C(c, 217u, depth); }
L_003B63F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 104u));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B650C; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 106u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[18].w[0] + 106u);  if (t) { goto L_003B650C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[5].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[18].w[0] + 40u);  if (t) { goto L_003B650C; } }
    c.r[3].d[0] = c.r[5].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B650C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6454u);  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B6454u) [[unlikely]] return; }
L_003B6454:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B64AC; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 107u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B64AC; } }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B6498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6498u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B6498u) [[unlikely]] return; }
L_003B6498:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B64A4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B64A4u) [[unlikely]] return; }
L_003B64A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003B6510; } }
L_003B64AC:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B6500; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[18].w[0] + 76u));
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B64EC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B64E4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B64E4u) [[unlikely]] return; }
L_003B64E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B650C; } }
L_003B64EC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B64F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B64F8u) [[unlikely]] return; }
L_003B64F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B650C; } }
L_003B6500:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B650Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B650Cu) [[unlikely]] return; }
L_003B650C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003B6510:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B6530:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5C30u | kUnwind; return; } goto L_003B5C30; }
L_003B6540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[15], ld32((c.r[29].w[0] + 32u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] - 8576u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[12], c.r[12].w[0] - 8544u);
    set32(c.r[13], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), c.r[15].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 12u), c.r[14].w[0]);
    set32(c.r[2], c.r[2].w[0] - 8304u);
    st32((c.r[4].w[0] + 16u), c.r[11].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[13].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[10].w[0]);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[4].w[0]), c.r[12].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[8].w[0]);
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B65C8u); st32((c.r[4].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_006D(c, 133u, depth + 1u); else { c.pc = 0x003B60C0u; return; } if (c.pc != 0x003B65C8u) [[unlikely]] return; }
L_003B65C8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B65E0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B6614; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8304u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_003B6614; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8544u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_003B6614; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8576u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003B6614:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003B6620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003B67E0; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B67E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003B67E0; } }
L_003B6664:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B66A4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 5u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B66A4; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B6718; } }
L_003B66A4:
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[4].d[0] = ld16((c.r[5].w[0] + 544u));
    c.r[4].d[0] = c.r[4].d[0] << 59;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 544u);  if (t) { goto L_003B6810; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[4].d[0] = c.r[4].d[0] << 62;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003B67F0; } }
    c.r[10].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[8], 0u - 3u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[6], 0u - 17u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[4], 0u - 2049u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[3].w[0]));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[3].w[0]));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 18;
L_003B6718:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 74u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B6810; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003B6758; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B6758; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B6758:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003B6810; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[5], 0u + 100u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6774u); st8((c.r[2].w[0] + 803u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003B6774u) [[unlikely]] return; }
L_003B6774:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B6808; } }
    c.r[1].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B679C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003B67A0; } }
L_003B679C:
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_003B67A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 752u)));
    set32(c.r[4], c.r[3].w[0] + 544u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 121u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B67C4u); c.r[7].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0023(c, 135u, depth + 1u); else { c.pc = 0x0028D5D0u; return; } if (c.pc != 0x003B67C4u) [[unlikely]] return; }
L_003B67C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B67CCu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003B67CCu) [[unlikely]] return; }
L_003B67CC:
    st32((c.r[16].w[0] + 68u), c.f[0]);
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003B6814; } }
L_003B67E0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6718u | kUnwind; return; } goto L_003B6718; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6664u | kUnwind; return; } goto L_003B6664; } }
L_003B67F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B67F8u); set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_0062(c, 66u, depth + 1u); else { c.pc = 0x00389390u; return; } if (c.pc != 0x003B67F8u) [[unlikely]] return; }
L_003B67F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6718u | kUnwind; return; } goto L_003B6718; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B6810; } }
L_003B6808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B67A0u | kUnwind; return; } goto L_003B67A0; } }
L_003B6810:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003B6814:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B6820:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 72u));
    c.r[3].d[0] = c.r[7].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[6].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003B6944; } }
L_003B6838:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003B6A04; } }
L_003B6840:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003B6898; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B6898; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 40u)));
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.f[1] = ld32((c.r[6].w[0] + 40u));
    c.f[3] = ld32((c.r[6].w[0] + 32u));
    set32(c.r[3], ld32((c.r[6].w[0] + 752u)));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], 0u + 1u);  if (t) { goto L_003B6890; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B6890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_003B689C; } }
L_003B6898:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003B689C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B6AF4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[5].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003B6ACC; } }
    c.r[3].d[0] = c.r[5].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B6ACC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003B6ACC; } }
L_003B68D8:
    c.f[1] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B6AF4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B6AF4; } }
L_003B6904:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B6ADC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B6AE8; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 807u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003B6AE8; } }
    set32(c.r[3], 0u + 66u);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003B693C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B6AFC; } }
L_003B6944:
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 73u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 803u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6838u | kUnwind; return; } goto L_003B6838; } }
    c.r[6].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    set32(c.r[5], c.r[6].w[0] << 2);
    c.r[6].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], 0u - 5u);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 72u));
    c.f[0] = 0u;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B69E8; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 72u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B69F8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B69D8; } }
    set32(c.r[5], 0u + 31u);
    set32(c.r[3], 0u + 2u);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B693Cu | kUnwind; return; } goto L_003B693C; } }
L_003B69D8:
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B693Cu | kUnwind; return; } goto L_003B693C; } }
L_003B69E8:
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B693Cu | kUnwind; return; } goto L_003B693C; } }
L_003B69F8:
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 74u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B693Cu | kUnwind; return; } goto L_003B693C; } }
L_003B6A04:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B6A20; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 807u));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6840u | kUnwind; return; } goto L_003B6840; } }
L_003B6A20:
    c.r[8].d[0] = ld8((c.r[4].w[0] + 72u));
    set32(c.r[6], 0u - 2u);
    c.r[7].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 5u);
    set32(c.r[5], c.r[7].w[0] << 2);
    c.f[0] = 0u;
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 72u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B6AB0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 72u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B6AC0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B6AA0; } }
    set32(c.r[5], 0u + 31u);
    set32(c.r[3], 0u + 2u);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B693Cu | kUnwind; return; } goto L_003B693C; } }
L_003B6AA0:
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B693Cu | kUnwind; return; } goto L_003B693C; } }
L_003B6AB0:
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B693Cu | kUnwind; return; } goto L_003B693C; } }
L_003B6AC0:
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 74u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B693Cu | kUnwind; return; } goto L_003B693C; } }
L_003B6ACC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6904u | kUnwind; return; } goto L_003B6904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B68D8u | kUnwind; return; } goto L_003B68D8; } }
L_003B6ADC:
    set32(c.r[3], 0u + 85u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B693Cu | kUnwind; return; } goto L_003B693C; } }
L_003B6AE8:
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B693Cu | kUnwind; return; } goto L_003B693C; } }
L_003B6AF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B693Cu | kUnwind; return; } goto L_003B693C; } }
L_003B6AFC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B6B10:
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 752u)));
    c.r[6].d[0] = ld8((c.r[6].w[0] + 121u));
    c.r[6].d[0] = c.r[6].d[0] << 58;
    c.r[6].d[0] = c.r[6].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003B6BEC; } }
    c.r[7].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[6].d[0] = c.r[7].d[0] << 62;
    c.r[6].d[0] = c.r[6].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003B6BEC; } }
    c.r[6].d[0] = c.r[7].d[0] << 60;
    c.r[6].d[0] = c.r[6].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003B6BEC; } }
    c.r[7].d[0] = ld8((c.r[3].w[0] + 807u));
    set32(c.r[6], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_003B6BEC; } }
    c.r[6].d[0] = ld16((c.r[3].w[0] + 380u));
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[6].w[0] + 12u)));
    c.r[6].d[0] = ld8((c.r[8].w[0] + 48u));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = c.r[6].d[0] >> 57;
    c.budget -= 11;
    { const bool t = c.r[6].d[0] != c.r[7].d[0];  if (t) { goto L_003B6BEC; } }
    c.f[0] = ld32((c.r[3].w[0] + 360u));
    set32(c.r[6], ld32((c.r[5].w[0] + 344u)));
    c.f[1] = ld32((c.r[8].w[0] + 56u));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 380u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 48u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 57;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[7].d[0]; c.f[2] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003B6BEC; } }
    c.f[1] = ld32((c.r[6].w[0] + 56u));
    c.f[0] = ld32((c.r[5].w[0] + 360u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B6BDC; } }
L_003B6BD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B6BEC; } }
L_003B6BDC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 64u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6BD4u | kUnwind; return; } goto L_003B6BD4; } }
L_003B6BEC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B6C00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 72u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003B6C38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003B6DA8; } }
L_003B6C38:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[2] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.f[20] = ld32((c.r[2].w[0] + 104u));
    c.f[21] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[22] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6C60u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003B6C60u) [[unlikely]] return; }
L_003B6C60:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6C6Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003B6C6Cu) [[unlikely]] return; }
L_003B6C6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    c.f[7] = 0u;
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[20]);
    c.f[1] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[7]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B6D50; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 736u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B6D58; } }
    c.f[4] = ld32((c.r[4].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42440000u);
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[6] = ld32((c.r[4].w[0] + 40u));
    c.f[5] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = c.r[2].w[0];
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    st32((c.r[29].w[0] + 72u), c.f[5]);
    st32((c.r[29].w[0] + 68u), c.f[3]);
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 64u), c.f[2]);  if (t) { goto L_003B6D60; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 220u));
    set32(c.r[2], 0u + 56u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003B6D68; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B6D70; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B6D70; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 29u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B6D70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B6DA8; } }
L_003B6D50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B6DA8; } }
L_003B6D58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B6DA8; } }
L_003B6D60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B6DA8; } }
L_003B6D68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B6DA8; } }
L_003B6D70:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 803u)));
    set32(c.r[5], 0u + 100u);
    st8((c.r[17].w[0] + 73u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 73u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 752u)));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6DA4u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003B6DA4u) [[unlikely]] return; }
L_003B6DA4:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003B6DA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B6DD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[5].w[0] + 216u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003B6E34; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 29u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B6E34; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 216u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B6E34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6E2Cu);  if (depth < kMaxDepth) unit_0094(c, 72u, depth + 1u); else { c.pc = 0x00450FA0u; return; } if (c.pc != 0x003B6E2Cu) [[unlikely]] return; }
L_003B6E2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B71A8; } }
L_003B6E34:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 72u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B71A8; } }
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B71A8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1496u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B6E94; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B6E94; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 29u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B6E94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_003B71AC; } }
L_003B6E94:
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[20] = ld32((c.r[4].w[0] + 104u));
    c.f[21] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[22] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6EB8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003B6EB8u) [[unlikely]] return; }
L_003B6EB8:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6EC4u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003B6EC4u) [[unlikely]] return; }
L_003B6EC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[3].w[0];
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
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B71A8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B6F20; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 212u)));
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B6F20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B71A8; } }
L_003B6F20:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], 0u + 5u);
    set32(c.r[4], c.r[3].w[0] + 752u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 808u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003B6F40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] << 56;  if (t) { goto L_003B6F4C; } }
L_003B6F40:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 102u)));
    c.r[18].d[0] = c.r[2].d[0] << 56;
    c.budget -= 3;
L_003B6F4C:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[5], 0u + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6F5Cu); c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003B6F5Cu) [[unlikely]] return; }
L_003B6F5C:
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[8].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[8].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003B7154; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_003B7154; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003B7154; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_003B6F8C:
    set32(c.r[3], 0u + 5u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 552u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003B6FA0; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B6FA0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; c.r[3].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_003B6FE4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 752u)));
    set32(c.r[7], c.r[3].w[0] + 752u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 800u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 92u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B7164; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 49u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 97u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B7164; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B6FE0:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_003B6FE4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B7010; } }
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 9;
L_003B7010:
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[5].d[0];  if (t) { goto L_003B7024; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_003B7084; } }
L_003B7024:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003B7084; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 752u)));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 123u));
    c.r[5].d[0] = c.r[5].d[0] << 61;
    c.r[5].d[0] = c.r[5].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003B7084; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 344u)));
    set32(c.r[5], 0u + 83u);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 1564u));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_003B7084; } }
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 9;
L_003B7084:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B71A8; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 72u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003B716C; } }
L_003B70B0:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 72u));
    set32(c.r[4], 0u - 2u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], 0u - 3u);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.f[0] = 0u;
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[17].w[0] + 56u), c.r[16].w[0]);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 72u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[7], 0u + 1u);  if (t) { goto L_003B718C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 72u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B719C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 736u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B7138; } }
    set32(c.r[3], 0u + 31u);
    set32(c.r[2], 0u + 2u);
    st16((c.r[17].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 74u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003B7140; } }
L_003B7138:
    st16((c.r[17].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 74u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 2;
L_003B7140:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B714Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 171u, depth + 1u); else { c.pc = 0x003B6B10u; return; } if (c.pc != 0x003B714Cu) [[unlikely]] return; }
L_003B714C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B71A8; } }
L_003B7154:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6FA0u | kUnwind; return; } goto L_003B6FA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 40u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6F8Cu | kUnwind; return; } goto L_003B6F8C; } }
L_003B7164:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6FE0u | kUnwind; return; } goto L_003B6FE0; } }
L_003B716C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 64u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B70B0u | kUnwind; return; } goto L_003B70B0; } }
L_003B718C:
    st16((c.r[17].w[0] + 52u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 74u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7140u | kUnwind; return; } goto L_003B7140; } }
L_003B719C:
    st16((c.r[17].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 74u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7140u | kUnwind; return; } goto L_003B7140; } }
L_003B71A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003B71AC:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003B71D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[7], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 222u)));
    set32(c.r[6], c.r[4].w[0] + 8u);
    st8((c.r[4].w[0] + 220u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 216u), c.r[7].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 14;
L_003B7208:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[7].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003B7278; } }
L_003B7228:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = c.r[7].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_003B7718; } }
    c.budget -= 1;
L_003B7248:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[7].d[0];  if (t) { goto L_003B7720; } }
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7228u | kUnwind; return; } goto L_003B7228; } }
    c.budget -= 1;
L_003B7278:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[11], ld32((c.r[6].w[0] + 208u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[10], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[10].w[0] + 16u)));
    c.r[7].d[0] = c.r[7].d[0] & c.r[11].d[0];
    c.budget -= 10;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[8], c.r[10].w[0] + 16u);  if (t) { goto L_003B7728; } }
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
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_003B7308; } }
    set32(c.r[7], c.r[10].w[0] + 1u);
    st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = c.r[7].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_003B7748; } }
    c.budget -= 1;
L_003B72F0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_003B7308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003B7324; } }
L_003B7308:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7208u | kUnwind; return; } goto L_003B7208; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_003B7324:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003B7710; } }
L_003B732C:
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B7460; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B7350; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B75B8; } }
L_003B7350:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B75B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 16624u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003B4000u < 16384u) { entry = entries_006D[(t - 0x003B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B7380:
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B738Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 177u, depth + 1u); else { c.pc = 0x003B6DD0u; return; } if (c.pc != 0x003B738Cu) [[unlikely]] return; }
L_003B738C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B75B8; } }
    c.budget -= 1;
L_003B7398:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 72u));
    c.r[3].d[0] = c.r[7].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], ld32((c.r[5].w[0])));  if (t) { goto L_003B73B8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 803u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 73u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B75B8; } }
L_003B73B8:
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = 0ull & 1ull;
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], 0u - 3u);
    c.f[0] = 0u;
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 72u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[6], 0u + 1u);  if (t) { goto L_003B7750; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 72u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B7760; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 736u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B7448; } }
    set32(c.r[3], 0u + 31u);
    set32(c.r[2], 0u + 2u);
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003B7450; } }
    c.budget -= 1;
L_003B7448:
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 2;
L_003B7450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7458u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 171u, depth + 1u); else { c.pc = 0x003B6B10u; return; } if (c.pc != 0x003B7458u) [[unlikely]] return; }
L_003B7458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B75B8; } }
L_003B7460:
    c.r[4].d[0] = ld8((c.r[5].w[0] + 4u));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003B7540; } }
    c.r[11].d[0] = ld8((c.r[16].w[0] + 72u));
    set32(c.r[9], 0u - 2u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[5].w[0];
    set32(c.r[7], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.f[0] = 0u;
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[9], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[9], ld32((c.r[9].w[0] + 40u)));
    st32((c.r[16].w[0] + 56u), c.r[9].w[0]);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 72u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.f[1] = ld32((c.r[4].w[0] - 20416u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 64u), c.f[1]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 72u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 32;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_003B7770; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 72u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B7780; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 736u));
    c.r[4].d[0] = c.r[4].d[0] << 61;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B7530; } }
    set32(c.r[4], 0u + 31u);
    set32(c.r[3], 0u + 2u);
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B75B8; } }
    c.budget -= 1;
L_003B7530:
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B75B8; } }
    c.budget -= 1;
L_003B7540:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 72u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 68u), 0u);  if (t) { goto L_003B7790; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 72u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B77A0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B75A8; } }
    set32(c.r[4], 0u + 31u);
    set32(c.r[3], 0u + 2u);
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B75B8; } }
L_003B75A8:
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003B75B8:
    set32(c.r[6], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 220u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0] + 220u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[6].w[0] + 8u);  if (t) { goto L_003B77B0; } }
    c.budget -= 1;
L_003B75E0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B77B8; } }
    set32(c.r[3], 0u + 10u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
L_003B7600:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[11], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[11].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003B7670; } }
L_003B7620:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003B77C0; } }
    c.budget -= 1;
L_003B7640:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_003B77C8; } }
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[11], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[11].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7620u | kUnwind; return; } goto L_003B7620; } }
    c.budget -= 1;
L_003B7670:
    set32(c.r[10], ld32((c.r[5].w[0] + 208u)));
    set32(c.r[6], ld32((c.r[11].w[0] + 16u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[10].d[0];
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[8], c.r[11].w[0] + 16u);  if (t) { goto L_003B77D0; } }
    set32(c.r[6], ld32((c.r[8].w[0])));
    c.r[6].d[0] = c.r[6].d[0] | c.r[10].d[0];
    st32((c.r[8].w[0]), c.r[6].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 204u)));
    set32(c.r[8], c.r[10].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0] + 12u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[8].d[0];
    c.budget -= 13;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003B76E8; } }
    set32(c.r[6], c.r[10].w[0] + 1u);
    st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_003B77F0; } }
L_003B76D0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_003B76E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003B7708; } }
L_003B76E8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7600u | kUnwind; return; } goto L_003B7600; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_003B7708:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B732Cu | kUnwind; return; } goto L_003B732C; } }
L_003B7710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B77F8; } }
L_003B7718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7248u | kUnwind; return; } goto L_003B7248; } }
L_003B7720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7324u | kUnwind; return; } goto L_003B7324; } }
L_003B7728:
    st8((c.r[10].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[10].w[0] + 12u), c.r[5].w[0]);
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 213u)));
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 213u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7308u | kUnwind; return; } goto L_003B7308; } }
L_003B7748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B72F0u | kUnwind; return; } goto L_003B72F0; } }
L_003B7750:
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7450u | kUnwind; return; } goto L_003B7450; } }
L_003B7760:
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7450u | kUnwind; return; } goto L_003B7450; } }
    c.budget -= 1;
L_003B7770:
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B75B8u | kUnwind; return; } goto L_003B75B8; } }
L_003B7780:
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B75B8u | kUnwind; return; } goto L_003B75B8; } }
    c.budget -= 1;
L_003B7790:
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B75B8u | kUnwind; return; } goto L_003B75B8; } }
L_003B77A0:
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B75B8u | kUnwind; return; } goto L_003B75B8; } }
    c.budget -= 1;
L_003B77B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B75E0u | kUnwind; return; } goto L_003B75E0; } }
L_003B77B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7708u | kUnwind; return; } goto L_003B7708; } }
L_003B77C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7640u | kUnwind; return; } goto L_003B7640; } }
L_003B77C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7708u | kUnwind; return; } goto L_003B7708; } }
L_003B77D0:
    st8((c.r[11].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[11].w[0] + 12u), c.r[7].w[0]);
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    st8((c.r[11].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 213u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 213u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B76E8u | kUnwind; return; } goto L_003B76E8; } }
L_003B77F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B76D0u | kUnwind; return; } goto L_003B76D0; } }
L_003B77F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B7810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 12u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[5].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 8u);  if (t) { goto L_003B7844; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));  if (t) { goto L_003B7848; } }
L_003B7844:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B7848:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B798C; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 74u));
    c.budget -= 1;
L_003B7854:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B7934; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B7924; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B7888; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B7D18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B7984; } }
L_003B7888:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B799C; } }
L_003B78A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 280u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 68u), c.f[1]);  if (t) { goto L_003B7D18; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B79A4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 72u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B79B4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B7908; } }
    set32(c.r[4], 0u + 31u);
    set32(c.r[3], 0u + 2u);
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B7914; } }
L_003B7908:
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003B7914:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 74u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003B7D18; } }
L_003B7924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B792Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 165u, depth + 1u); else { c.pc = 0x003B6820u; return; } if (c.pc != 0x003B792Cu) [[unlikely]] return; }
L_003B792C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B7984; } }
L_003B7934:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B79C0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003B797C; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B797C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B797C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003B79C0; } }
L_003B7984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003B7D1C; } }
L_003B798C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7994u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 188u, depth + 1u); else { c.pc = 0x003B71D0u; return; } if (c.pc != 0x003B7994u) [[unlikely]] return; }
L_003B7994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[16].w[0] + 74u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7854u | kUnwind; return; } goto L_003B7854; } }
L_003B799C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B78A0u | kUnwind; return; } goto L_003B78A0; } }
L_003B79A4:
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7914u | kUnwind; return; } goto L_003B7914; } }
L_003B79B4:
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7914u | kUnwind; return; } goto L_003B7914; } }
L_003B79C0:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 72u));
    set32(c.r[5], 0u - 2u);
    c.r[6].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 5u);
    set32(c.r[4], c.r[6].w[0] << 2);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 72u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & 256ull;
    c.budget -= 18;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B7A70; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 256u);
    c.budget -= 3;
L_003B7A14:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003B7A5C; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_003B7A5C; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003B7A70; } }
L_003B7A5C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7A14u | kUnwind; return; } goto L_003B7A14; } }
    c.budget -= 1;
L_003B7A70:
    set32(c.r[4], ld32((c.r[3].w[0] + 200u)));
    c.r[4].d[0] = c.r[4].d[0] | 256ull;
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 7;
L_003B7A8C:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003B7AF8; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 256u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003B7CEC; } }
L_003B7AF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[9].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_003B7B2C; } }
L_003B7AF8:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_003B7B10; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B7B10:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7A8Cu | kUnwind; return; } goto L_003B7A8C; } }
    breakpoint(c, 0x003B7B20u);
    c.r[9].d[0] = 0ull + 0ull;
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_003B7B2C:
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.f[0] = 0u;
    c.r[3].d[0] = ld8((c.r[3].w[0] + 256u));
    st32((c.r[9].w[0] + 4u), c.r[3].w[0]);
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B7CF4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 72u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B7D04; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B7B90; } }
    set32(c.r[4], 0u + 31u);
    set32(c.r[3], 0u + 2u);
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B7B98; } }
L_003B7B90:
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_003B7B98:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B7C18; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_003B7BBC:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003B7C04; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_003B7C04; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003B7C18; } }
L_003B7C04:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7BBCu | kUnwind; return; } goto L_003B7BBC; } }
    c.budget -= 1;
L_003B7C18:
    set32(c.r[5], ld32((c.r[3].w[0] + 200u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 8;
L_003B7C38:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003B7CA4; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00040000u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003B7D10; } }
L_003B7C9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_003B7CDC; } }
L_003B7CA4:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_003B7CC0; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003B7CC0:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7C38u | kUnwind; return; } goto L_003B7C38; } }
    breakpoint(c, 0x003B7CD0u);
    c.r[9].d[0] = 0ull + 0ull;
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003B7CDC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7984u | kUnwind; return; } goto L_003B7984; } }
L_003B7CEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7AF0u | kUnwind; return; } goto L_003B7AF0; } }
L_003B7CF4:
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7B98u | kUnwind; return; } goto L_003B7B98; } }
L_003B7D04:
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7B98u | kUnwind; return; } goto L_003B7B98; } }
L_003B7D10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7C9Cu | kUnwind; return; } goto L_003B7C9C; } }
L_003B7D18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003B7D1C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B7D30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] - 8576u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 32432u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[11], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 32464u);
    set32(c.r[10], c.r[10].w[0] - 8288u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[2], c.r[2].w[0] + 32448u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32240u);
    set32(c.r[3], 0u + 4u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 8544u);
    set32(c.r[3], 0u - 2u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[6].w[0]);
    c.r[5].d[0] = 0ull & 1ull;
    st32((c.r[4].w[0] + 44u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[8].w[0]);
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[10].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 68u), 0u);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 72u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 74u), static_cast<std::uint8_t>(0u));
    c.budget -= 47;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[11].w[0]));  c.pc = t; return; }
L_003B7DF0:
    st32((c.r[4].w[0] + 56u), 0u);
    c.r[7].d[0] = 0ull & 1ull;
    c.r[8].d[0] = ld8((c.r[4].w[0] + 72u));
    set32(c.r[6], 0u - 2u);
    set32(c.r[3], 0u - 5u);
    set32(c.r[5], c.r[7].w[0] << 2);
    c.f[0] = 0u;
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 72u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B7E88; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 72u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B7E98; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B7E74; } }
    set32(c.r[5], 0u + 31u);
    set32(c.r[3], 0u + 2u);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B7E80; } }
L_003B7E74:
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003B7E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B7EA4; } }
L_003B7E88:
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7E80u | kUnwind; return; } goto L_003B7E80; } }
L_003B7E98:
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 74u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7E80u | kUnwind; return; } goto L_003B7E80; } }
L_003B7EA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B7EB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 56u), 0u);  c.pc = t; return; }
L_003B7EC0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6620u | kUnwind; return; } goto L_003B6620; }
L_003B7ED0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7810u | kUnwind; return; } goto L_003B7810; }
L_003B7EE0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B7F14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8288u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_003B7F14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8544u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_003B7F14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8576u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003B7F14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003B7F20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 176u));
    c.r[3].d[0] = c.r[5].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_006E(c, 4u, depth); } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 183u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_006E(c, 3u, depth); } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[3], 0u + 184u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_006E(c, 4u, depth); } }
    c.r[9].d[0] = ld8((c.r[16].w[0] + 176u));
    set32(c.r[7], 0u - 9u);
    c.r[2].d[0] = 0ull & 1ull;
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[5], 0u - 5u);
    set32(c.r[3], 0u - 33u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 176u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 176u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 176u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 176u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 176u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7FC4u); set32(c.r[4], ld32((c.r[2].w[0] - 3656u)));  if (depth < kMaxDepth) unit_007A(c, 92u, depth + 1u); else { c.pc = 0x003E8D90u; return; } if (c.pc != 0x003B7FC4u) [[unlikely]] return; }
L_003B7FC4:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    c.r[7].d[0] = 0ull | 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.f[2] = c.r[2].w[0];
    c.r[7].d[0] = c.r[7].d[0] | 32768ull;
    c.f[3] = c.r[3].w[0];
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.f[4] = ld32((c.r[5].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    c.budget -= 15;
    [[clang::musttail]] return unit_006E(c, 1u, depth);
}

}

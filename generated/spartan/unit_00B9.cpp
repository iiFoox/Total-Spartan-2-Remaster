#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B9[4096] = {
    1, 2, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 16,
    0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0,
    0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 42, 0, 0,
    0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60,
    0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 102, 0, 0, 103, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0,
    146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0,
    0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0,
    210, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 220, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0,
    0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0,
};

void unit_00B9(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004E4000;
    case 2u: goto L_004E4004;
    case 3u: goto L_004E400C;
    case 4u: goto L_004E4018;
    case 5u: goto L_004E4028;
    case 6u: goto L_004E40F0;
    case 7u: goto L_004E4100;
    case 8u: goto L_004E4108;
    case 9u: goto L_004E4154;
    case 10u: goto L_004E4180;
    case 11u: goto L_004E41A4;
    case 12u: goto L_004E41B8;
    case 13u: goto L_004E41C0;
    case 14u: goto L_004E41D8;
    case 15u: goto L_004E41E0;
    case 16u: goto L_004E41FC;
    case 17u: goto L_004E4220;
    case 18u: goto L_004E4230;
    case 19u: goto L_004E4270;
    case 20u: goto L_004E42B4;
    case 21u: goto L_004E42CC;
    case 22u: goto L_004E42E4;
    case 23u: goto L_004E432C;
    case 24u: goto L_004E4344;
    case 25u: goto L_004E4354;
    case 26u: goto L_004E4380;
    case 27u: goto L_004E43A4;
    case 28u: goto L_004E43FC;
    case 29u: goto L_004E4424;
    case 30u: goto L_004E4434;
    case 31u: goto L_004E4450;
    case 32u: goto L_004E4474;
    case 33u: goto L_004E4488;
    case 34u: goto L_004E449C;
    case 35u: goto L_004E44E0;
    case 36u: goto L_004E44EC;
    case 37u: goto L_004E4510;
    case 38u: goto L_004E4534;
    case 39u: goto L_004E4548;
    case 40u: goto L_004E4558;
    case 41u: goto L_004E4568;
    case 42u: goto L_004E4574;
    case 43u: goto L_004E4584;
    case 44u: goto L_004E45C0;
    case 45u: goto L_004E4680;
    case 46u: goto L_004E4690;
    case 47u: goto L_004E46A0;
    case 48u: goto L_004E46B0;
    case 49u: goto L_004E46C8;
    case 50u: goto L_004E46E0;
    case 51u: goto L_004E470C;
    case 52u: goto L_004E4720;
    case 53u: goto L_004E473C;
    case 54u: goto L_004E4750;
    case 55u: goto L_004E4780;
    case 56u: goto L_004E479C;
    case 57u: goto L_004E47A4;
    case 58u: goto L_004E47D8;
    case 59u: goto L_004E4860;
    case 60u: goto L_004E487C;
    case 61u: goto L_004E4890;
    case 62u: goto L_004E48A0;
    case 63u: goto L_004E48C0;
    case 64u: goto L_004E48E4;
    case 65u: goto L_004E48F8;
    case 66u: goto L_004E494C;
    case 67u: goto L_004E4960;
    case 68u: goto L_004E49E0;
    case 69u: goto L_004E49F8;
    case 70u: goto L_004E4A20;
    case 71u: goto L_004E4A4C;
    case 72u: goto L_004E4A60;
    case 73u: goto L_004E4A8C;
    case 74u: goto L_004E4AA4;
    case 75u: goto L_004E4AE0;
    case 76u: goto L_004E4B08;
    case 77u: goto L_004E4B70;
    case 78u: goto L_004E4B80;
    case 79u: goto L_004E4BD4;
    case 80u: goto L_004E4BF0;
    case 81u: goto L_004E4C00;
    case 82u: goto L_004E4C30;
    case 83u: goto L_004E4C64;
    case 84u: goto L_004E4C74;
    case 85u: goto L_004E4C90;
    case 86u: goto L_004E4CA0;
    case 87u: goto L_004E4CB0;
    case 88u: goto L_004E4CC0;
    case 89u: goto L_004E4CD0;
    case 90u: goto L_004E4CE0;
    case 91u: goto L_004E4CF0;
    case 92u: goto L_004E4D54;
    case 93u: goto L_004E4D70;
    case 94u: goto L_004E4DE4;
    case 95u: goto L_004E4E00;
    case 96u: goto L_004E4E10;
    case 97u: goto L_004E4E84;
    case 98u: goto L_004E4EA0;
    case 99u: goto L_004E4EB0;
    case 100u: goto L_004E4F24;
    case 101u: goto L_004E4F40;
    case 102u: goto L_004E4F44;
    case 103u: goto L_004E4F50;
    case 104u: goto L_004E4F54;
    case 105u: goto L_004E4FC4;
    case 106u: goto L_004E4FE0;
    case 107u: goto L_004E4FF0;
    case 108u: goto L_004E5064;
    case 109u: goto L_004E5080;
    case 110u: goto L_004E5090;
    case 111u: goto L_004E5104;
    case 112u: goto L_004E5120;
    case 113u: goto L_004E5130;
    case 114u: goto L_004E51A4;
    case 115u: goto L_004E51C0;
    case 116u: goto L_004E51D0;
    case 117u: goto L_004E51E0;
    case 118u: goto L_004E5254;
    case 119u: goto L_004E5270;
    case 120u: goto L_004E5280;
    case 121u: goto L_004E5290;
    case 122u: goto L_004E5304;
    case 123u: goto L_004E5320;
    case 124u: goto L_004E5330;
    case 125u: goto L_004E53A4;
    case 126u: goto L_004E53C0;
    case 127u: goto L_004E53D0;
    case 128u: goto L_004E5418;
    case 129u: goto L_004E544C;
    case 130u: goto L_004E5470;
    case 131u: goto L_004E5490;
    case 132u: goto L_004E54C0;
    case 133u: goto L_004E54D0;
    case 134u: goto L_004E54E0;
    case 135u: goto L_004E5554;
    case 136u: goto L_004E5570;
    case 137u: goto L_004E5580;
    case 138u: goto L_004E5590;
    case 139u: goto L_004E5604;
    case 140u: goto L_004E5620;
    case 141u: goto L_004E5630;
    case 142u: goto L_004E5640;
    case 143u: goto L_004E5650;
    case 144u: goto L_004E5660;
    case 145u: goto L_004E5670;
    case 146u: goto L_004E5680;
    case 147u: goto L_004E5690;
    case 148u: goto L_004E5720;
    case 149u: goto L_004E5754;
    case 150u: goto L_004E5780;
    case 151u: goto L_004E59A8;
    case 152u: goto L_004E5C68;
    case 153u: goto L_004E5DAC;
    case 154u: goto L_004E5EE0;
    case 155u: goto L_004E6108;
    case 156u: goto L_004E61D0;
    case 157u: goto L_004E63E0;
    case 158u: goto L_004E64D0;
    case 159u: goto L_004E653C;
    case 160u: goto L_004E6578;
    case 161u: goto L_004E65A0;
    case 162u: goto L_004E65E0;
    case 163u: goto L_004E6608;
    case 164u: goto L_004E6638;
    case 165u: goto L_004E67C0;
    case 166u: goto L_004E68B0;
    case 167u: goto L_004E68C8;
    case 168u: goto L_004E6990;
    case 169u: goto L_004E6A00;
    case 170u: goto L_004E6A20;
    case 171u: goto L_004E6AE0;
    case 172u: goto L_004E6B10;
    case 173u: goto L_004E6B6C;
    case 174u: goto L_004E6BD8;
    case 175u: goto L_004E6CA4;
    case 176u: goto L_004E6CE0;
    case 177u: goto L_004E6D68;
    case 178u: goto L_004E6DEC;
    case 179u: goto L_004E6EB0;
    case 180u: goto L_004E6F04;
    case 181u: goto L_004E6FF0;
    case 182u: goto L_004E7028;
    case 183u: goto L_004E7034;
    case 184u: goto L_004E706C;
    case 185u: goto L_004E7078;
    case 186u: goto L_004E70B4;
    case 187u: goto L_004E7110;
    case 188u: goto L_004E7140;
    case 189u: goto L_004E7170;
    case 190u: goto L_004E718C;
    case 191u: goto L_004E7210;
    case 192u: goto L_004E7230;
    case 193u: goto L_004E732C;
    case 194u: goto L_004E7338;
    case 195u: goto L_004E739C;
    case 196u: goto L_004E73EC;
    case 197u: goto L_004E7450;
    case 198u: goto L_004E7488;
    case 199u: goto L_004E75D0;
    case 200u: goto L_004E75E0;
    case 201u: goto L_004E7604;
    case 202u: goto L_004E7618;
    case 203u: goto L_004E7634;
    case 204u: goto L_004E7640;
    case 205u: goto L_004E7718;
    case 206u: goto L_004E774C;
    case 207u: goto L_004E777C;
    case 208u: goto L_004E77C0;
    case 209u: goto L_004E77E8;
    case 210u: goto L_004E7800;
    case 211u: goto L_004E780C;
    case 212u: goto L_004E7820;
    case 213u: goto L_004E7850;
    case 214u: goto L_004E7870;
    case 215u: goto L_004E78B4;
    case 216u: goto L_004E78C8;
    case 217u: goto L_004E7900;
    case 218u: goto L_004E7920;
    case 219u: goto L_004E7940;
    case 220u: goto L_004E7984;
    case 221u: goto L_004E7990;
    case 222u: goto L_004E79A4;
    case 223u: goto L_004E79B0;
    case 224u: goto L_004E79C4;
    case 225u: goto L_004E79DC;
    case 226u: goto L_004E79E8;
    case 227u: goto L_004E7A08;
    case 228u: goto L_004E7A9C;
    case 229u: goto L_004E7ABC;
    case 230u: goto L_004E7ACC;
    case 231u: goto L_004E7ADC;
    case 232u: goto L_004E7AF8;
    case 233u: goto L_004E7B60;
    case 234u: goto L_004E7B90;
    case 235u: goto L_004E7BC0;
    case 236u: goto L_004E7BD4;
    case 237u: goto L_004E7C0C;
    case 238u: goto L_004E7C20;
    case 239u: goto L_004E7C70;
    case 240u: goto L_004E7CB0;
    case 241u: goto L_004E7CBC;
    case 242u: goto L_004E7DD0;
    case 243u: goto L_004E7DDC;
    case 244u: goto L_004E7F30;
    case 245u: goto L_004E7F5C;
    case 246u: goto L_004E7FC8;
    case 247u: goto L_004E7FE0;
    case 248u: goto L_004E7FF4;
    default: bad_entry(c, 0x004E4000u); return;
    }
L_004E4000:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 1;
L_004E4004:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E4030; } }
L_004E400C:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
L_004E4018:
    set32(c.r[2], ld32((c.r[5].w[0] + 60u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 64u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4028u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0080(c, 307u, depth + 1u); else { c.pc = 0x00402540u; return; } if (c.pc != 0x004E4028u) [[unlikely]] return; }
L_004E4028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004E40D4; } }
L_004E4030:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    set32(c.r[6], 0u - 2u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], 0u - 3u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[3], c.r[3].w[0] - 12672u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 5936u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 18u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    c.budget -= 41;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E400Cu | kUnwind; return; } goto L_004E400C; } }
L_004E40D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E40F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4100u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E4100u) [[unlikely]] return; }
L_004E4100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E4110; } }
L_004E4108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004E4170; } }
L_004E4110:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], 0u - 2u);
    set32(c.r[3], c.r[3].w[0] - 16352u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u - 3u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] - 25584u);
    st32((c.r[2].w[0] + 12u), 0u);
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.budget -= 17;
L_004E4154:
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E4108u | kUnwind; return; } goto L_004E4108; } }
L_004E4170:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004E4180:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E41A4u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E41A4u) [[unlikely]] return; }
L_004E41A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E4238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E41B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 8u, depth + 1u); else { c.pc = 0x002B8180u; return; } if (c.pc != 0x004E41B8u) [[unlikely]] return; }
L_004E41B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E4238; } }
L_004E41C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[8], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E41D8u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 7u, depth + 1u); else { c.pc = 0x002B8160u; return; } if (c.pc != 0x004E41D8u) [[unlikely]] return; }
L_004E41D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 60u)));  if (t) { goto L_004E4200; } }
L_004E41E0:
    set32(c.r[5], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[8], ld32((c.r[17].w[0] + 124u)));
    set32(c.r[9], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E41FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 7u, depth + 1u); else { c.pc = 0x002B8160u; return; } if (c.pc != 0x004E41FCu) [[unlikely]] return; }
L_004E41FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 1;
L_004E4200:
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4220u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004E4220u) [[unlikely]] return; }
L_004E4220:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4230u); set32(c.r[6], c.r[17].w[0] + 88u);  if (depth < kMaxDepth) unit_002E(c, 85u, depth + 1u); else { c.pc = 0x002B93A0u; return; } if (c.pc != 0x004E4230u) [[unlikely]] return; }
L_004E4230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004E4250; } }
L_004E4238:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E41E0u | kUnwind; return; } goto L_004E41E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 112u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E41C0u | kUnwind; return; } goto L_004E41C0; } }
L_004E4250:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E4270:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 28u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E42B4u); set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  if (depth < kMaxDepth) unit_007A(c, 78u, depth + 1u); else { c.pc = 0x003E89F0u; return; } if (c.pc != 0x004E42B4u) [[unlikely]] return; }
L_004E42B4:
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[20], 0u + 142u);  if (t) { goto L_004E42D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E42CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 320u, depth + 1u); else { c.pc = 0x002470B0u; return; } if (c.pc != 0x004E42CCu) [[unlikely]] return; }
L_004E42CC:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - 221u);
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
L_004E42D8:
    set32(c.r[18], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E42E4u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E42E4u) [[unlikely]] return; }
L_004E42E4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004E4330; } }
    st64((c.r[29].w[0]), c.r[18].d[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 116u)));
    c.f[12] = ld32((c.r[16].w[0] + 24u));
    set32(c.r[8], ld32((c.r[16].w[0] + 124u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[11], ld32((c.r[16].w[0] + 140u)));
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[8].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.r[9].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E432Cu); c.r[10].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_002C(c, 227u, depth + 1u); else { c.pc = 0x002B3770u; return; } if (c.pc != 0x004E432Cu) [[unlikely]] return; }
L_004E432C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E4330:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4344u); st32((c.r[19].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004E4344u) [[unlikely]] return; }
L_004E4344:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4354u); set32(c.r[6], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_002E(c, 85u, depth + 1u); else { c.pc = 0x002B93A0u; return; } if (c.pc != 0x004E4354u) [[unlikely]] return; }
L_004E4354:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004E4380:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E43A4u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E43A4u) [[unlikely]] return; }
L_004E43A4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E4400; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_004E43C8; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E43E4; } }
L_004E43C8:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::ee::add(c.fcr31, c.f[12], c.f[12]);
    c.budget -= 7;
L_004E43E4:
    c.f[13] = ld32((c.r[16].w[0] + 24u));
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    c.r[6].d[0] = c.r[4].d[0] ^ 0ull;
    c.r[6].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E43FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 63u, depth + 1u); else { c.pc = 0x002B4F90u; return; } if (c.pc != 0x004E43FCu) [[unlikely]] return; }
L_004E43FC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E4400:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4424u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004E4424u) [[unlikely]] return; }
L_004E4424:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4434u); set32(c.r[6], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_002E(c, 85u, depth + 1u); else { c.pc = 0x002B93A0u; return; } if (c.pc != 0x004E4434u) [[unlikely]] return; }
L_004E4434:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E4450:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4474u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E4474u) [[unlikely]] return; }
L_004E4474:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E448C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4488u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 196u, depth + 1u); else { c.pc = 0x002B2ED0u; return; } if (c.pc != 0x004E4488u) [[unlikely]] return; }
L_004E4488:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E448C:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 116u));
    set32(c.r[6], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E449Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 193u, depth + 1u); else { c.pc = 0x002B2E50u; return; } if (c.pc != 0x004E449Cu) [[unlikely]] return; }
L_004E449C:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[5], c.r[17].w[0] + 64u);
    set32(c.r[6], c.r[17].w[0] + 88u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    st8((c.r[16].w[0] + 77u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 78u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E44E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 85u, depth + 1u); else { c.pc = 0x002B93A0u; return; } if (c.pc != 0x004E44E0u) [[unlikely]] return; }
L_004E44E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E44ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004E44ECu) [[unlikely]] return; }
L_004E44EC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E4510:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4534u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E4534u) [[unlikely]] return; }
L_004E4534:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E454C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4548u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 355u, depth + 1u); else { c.pc = 0x00402B40u; return; } if (c.pc != 0x004E4548u) [[unlikely]] return; }
L_004E4548:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E454C:
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4558u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 343u, depth + 1u); else { c.pc = 0x004029F0u; return; } if (c.pc != 0x004E4558u) [[unlikely]] return; }
L_004E4558:
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004E4570; } }
L_004E4568:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004E45A0; } }
L_004E4570:
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004E4574:
    set32(c.r[5], ld32((c.r[19].w[0] + 164u)));
    c.f[12] = ld32((c.r[19].w[0] + 60u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4584u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 342u, depth + 1u); else { c.pc = 0x004029A0u; return; } if (c.pc != 0x004E4584u) [[unlikely]] return; }
L_004E4584:
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E4574u | kUnwind; return; } goto L_004E4574; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E4568u | kUnwind; return; } goto L_004E4568; } }
L_004E45A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004E45C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.f[1] = ld32((c.r[28].w[0] - 32272u));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 84u));
    set32(c.r[2], ld32((c.r[6].w[0] + 56u)));
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 60u)));
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 64u)));
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[6].w[0] + 88u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004E461C; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_004E4638; } }
L_004E461C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[29].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 7;
L_004E4638:
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[6].w[0] + 68u)));
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 80u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 72u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 56u), c.r[4].w[0]);  if (t) { goto L_004E4698; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004E4678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[16].w[0])));  if (t) { goto L_004E46B8; } }
L_004E4678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4680u); set32(c.r[4], 0u + 100u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E4680u) [[unlikely]] return; }
L_004E4680:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E4690; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4690u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 32u, depth + 1u); else { c.pc = 0x003FC350u; return; } if (c.pc != 0x004E4690u) [[unlikely]] return; }
L_004E4690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E46B4; } }
L_004E4698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E46A0u); set32(c.r[4], 0u + 100u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E46A0u) [[unlikely]] return; }
L_004E46A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E46B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E46B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 448u, depth + 1u); else { c.pc = 0x003FBD60u; return; } if (c.pc != 0x004E46B0u) [[unlikely]] return; }
L_004E46B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E46B4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_004E46B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E46C8u); set32(c.r[5], c.r[29].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E46C8u) [[unlikely]] return; }
L_004E46C8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E46E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E470Cu); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E470Cu) [[unlikely]] return; }
L_004E470C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E4724; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4720u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 160u, depth + 1u); else { c.pc = 0x003FD860u; return; } if (c.pc != 0x004E4720u) [[unlikely]] return; }
L_004E4720:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E4724:
    set32(c.r[2], ld32((c.r[19].w[0] + 16236u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.r[6].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E473Cu); c.r[6].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_007F(c, 154u, depth + 1u); else { c.pc = 0x003FD780u; return; } if (c.pc != 0x004E473Cu) [[unlikely]] return; }
L_004E473C:
    st32((c.r[18].w[0] + 12u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 16236u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E4758; } }
L_004E4750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004E4760; } }
L_004E4758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 16236u), c.r[17].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E4750u | kUnwind; return; } goto L_004E4750; } }
L_004E4760:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004E4780:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E479Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E479Cu) [[unlikely]] return; }
L_004E479C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E47E0; } }
L_004E47A4:
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.f[12] = ld32((c.r[16].w[0] + 24u));
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E47D8u); set32(c.r[7], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00AD(c, 142u, depth + 1u); else { c.pc = 0x004B54A0u; return; } if (c.pc != 0x004E47D8u) [[unlikely]] return; }
L_004E47D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004E4844; } }
L_004E47E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], 0u - 2u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 3u);
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[2], c.r[2].w[0] - 29024u);
    st32((c.r[17].w[0] + 12u), 0u);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[7].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E47A4u | kUnwind; return; } goto L_004E47A4; } }
L_004E4844:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E4860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E487Cu); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E487Cu) [[unlikely]] return; }
L_004E487C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E4894; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4890u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 226u, depth + 1u); else { c.pc = 0x003FE5A0u; return; } if (c.pc != 0x004E4890u) [[unlikely]] return; }
L_004E4890:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E4894:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E48A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 221u, depth + 1u); else { c.pc = 0x003FE330u; return; } if (c.pc != 0x004E48A0u) [[unlikely]] return; }
L_004E48A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E48C0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[4], 0u + 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E48E4u); c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E48E4u) [[unlikely]] return; }
L_004E48E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E48FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E48F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 104u, depth + 1u); else { c.pc = 0x003FCEC0u; return; } if (c.pc != 0x004E48F8u) [[unlikely]] return; }
L_004E48F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E48FC:
    c.f[2] = ld32((c.r[17].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[1] = ld32((c.r[29].w[0] + 156u));
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 132u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 144u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0] + 16u));
    c.f[3] = ld32((c.r[29].w[0] + 144u));
    st32((c.r[29].w[0] + 148u), c.f[2]);
    c.f[2] = ld32((c.r[29].w[0] + 148u));
    c.f[4] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 128u), c.f[3]);
    st32((c.r[29].w[0] + 140u), c.f[1]);
    st32((c.r[29].w[0] + 152u), c.f[4]);
    st32((c.r[29].w[0] + 136u), c.f[4]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E494Cu); st32((c.r[3].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 264u, depth + 1u); else { c.pc = 0x002EB440u; return; } if (c.pc != 0x004E494Cu) [[unlikely]] return; }
L_004E494C:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 56u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4960u); set32(c.r[4], c.r[4].w[0] + 8704u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x00314110u; return; } if (c.pc != 0x004E4960u) [[unlikely]] return; }
L_004E4960:
    set32(c.r[7], ld32((c.r[17].w[0] + 88u)));
    c.r[8].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[3], c.r[17].w[0] + 96u);
    set32(c.r[2], c.r[17].w[0] + 120u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 128u);
    st64((c.r[29].w[0]), c.r[7].d[0]);
    set32(c.r[7], ld32((c.r[17].w[0] + 92u)));
    st64((c.r[29].w[0] + 8u), c.r[7].d[0]);
    set32(c.r[7], ld32((c.r[17].w[0] + 76u)));
    c.r[7].d[0] = c.r[7].d[0] ^ 1ull;
    c.r[7].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[7].d[0]);
    set32(c.r[7], ld32((c.r[17].w[0] + 80u)));
    st64((c.r[29].w[0] + 24u), c.r[7].d[0]);
    set32(c.r[7], ld32((c.r[17].w[0] + 144u)));
    c.r[7].d[0] = c.r[7].d[0] ^ 1ull;
    c.r[7].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 60u)));
    c.r[9].d[0] = ld8((c.r[17].w[0] + 148u));
    set32(c.r[11], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E49E0u); c.r[10].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_007F(c, 98u, depth + 1u); else { c.pc = 0x003FCCF0u; return; } if (c.pc != 0x004E49E0u) [[unlikely]] return; }
L_004E49E0:
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E49F8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 105u, depth + 1u); else { c.pc = 0x003FCF80u; return; } if (c.pc != 0x004E49F8u) [[unlikely]] return; }
L_004E49F8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004E4A20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4A4Cu); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E4A4Cu) [[unlikely]] return; }
L_004E4A4C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E4A64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4A60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 112u, depth + 1u); else { c.pc = 0x003FD070u; return; } if (c.pc != 0x004E4A60u) [[unlikely]] return; }
L_004E4A60:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E4A64:
    set32(c.r[3], ld32((c.r[19].w[0] + 16236u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 56u));
    set32(c.r[6], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[8], ld32((c.r[17].w[0] + 68u)));
    c.r[9].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4A8Cu); c.r[9].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_007F(c, 106u, depth + 1u); else { c.pc = 0x003FCFA0u; return; } if (c.pc != 0x004E4A8Cu) [[unlikely]] return; }
L_004E4A8C:
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4AA4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 153u, depth + 1u); else { c.pc = 0x003FD760u; return; } if (c.pc != 0x004E4AA4u) [[unlikely]] return; }
L_004E4AA4:
    st32((c.r[18].w[0] + 20u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 24u), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 16236u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E4B10; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004E4B44; } }
L_004E4AE0:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004E4B08; } }
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_004E4B08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004E4B4C; } }
L_004E4B10:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E4B08u | kUnwind; return; } goto L_004E4B08; } }
L_004E4B44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E4AE0u | kUnwind; return; } goto L_004E4AE0; } }
L_004E4B4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004E4B70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004E4B80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E4BD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 25584u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E4BBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004E4BBC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004E4BD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4BD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004E4BD4u) [[unlikely]] return; }
L_004E4BD4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E4BF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_004E4C00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004E4C64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[17].w[0] + 24u);
    set32(c.r[2], c.r[2].w[0] - 25296u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004E4C6C; } }
L_004E4C30:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E4C4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_004E4C4C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004E4C64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4C64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004E4C64u) [[unlikely]] return; }
L_004E4C64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004E4C7C; } }
L_004E4C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4C74u);  if (depth < kMaxDepth) unit_0080(c, 373u, depth + 1u); else { c.pc = 0x00402E50u; return; } if (c.pc != 0x004E4C74u) [[unlikely]] return; }
L_004E4C74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E4C30u | kUnwind; return; } goto L_004E4C30; } }
L_004E4C7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E4C90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E4CA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E4CB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E4CC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E4CD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E4CE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E4CF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E4D54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 24992u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E4D3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 29024u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E4D3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004E4D3C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004E4D54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4D54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004E4D54u) [[unlikely]] return; }
L_004E4D54:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E4D70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E4DE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 24688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E4DCC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 2848u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E4DCC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E4DCC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004E4DCC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004E4DE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4DE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004E4DE4u) [[unlikely]] return; }
L_004E4DE4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E4E00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E4E10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E4E84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 24384u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E4E6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 2848u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E4E6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E4E6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004E4E6C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004E4E84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4E84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004E4E84u) [[unlikely]] return; }
L_004E4E84:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E4EA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E4EB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E4F24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 24080u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E4F0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 2848u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E4F0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E4F0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004E4F0C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004E4F24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4F24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004E4F24u) [[unlikely]] return; }
L_004E4F24:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E4F40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E4F44:
    c.budget -= 1;
    c.pc = 0x004E4F48u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_004E4F50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.budget -= 1;
L_004E4F54:
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E4FC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 23776u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E4FAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 2848u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E4FAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E4FAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004E4FAC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004E4FC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4FC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004E4FC4u) [[unlikely]] return; }
L_004E4FC4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E4FE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E4FF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E5064; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 23472u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E504C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 2848u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E504C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E504C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004E504C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004E5064; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5064u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004E5064u) [[unlikely]] return; }
L_004E5064:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E5080:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E5090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E5104; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 23168u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E50EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 2848u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E50EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E50EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004E50EC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004E5104; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5104u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004E5104u) [[unlikely]] return; }
L_004E5104:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E5120:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E5130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E51A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 22864u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E518C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 2848u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E518C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E518C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004E518C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004E51A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E51A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004E51A4u) [[unlikely]] return; }
L_004E51A4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E51C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E51D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004E51E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E5254; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 22560u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E523C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 2848u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E523C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E523C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004E523C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004E5254; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5254u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004E5254u) [[unlikely]] return; }
L_004E5254:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E5270:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E5280:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004E5290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E5304; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 22256u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E52EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 2848u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E52EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E52EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004E52EC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004E5304; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5304u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004E5304u) [[unlikely]] return; }
L_004E5304:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E5320:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E5330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E53A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 21952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E538C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 2848u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E538C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E538C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004E538C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004E53A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E53A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004E53A4u) [[unlikely]] return; }
L_004E53A4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E53C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E53D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004E544C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 21648u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004E5418; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004E5418; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004E5418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5418u);  if (depth < kMaxDepth) unit_0021(c, 160u, depth + 1u); else { c.pc = 0x00286390u; return; } if (c.pc != 0x004E5418u) [[unlikely]] return; }
L_004E5418:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E5434; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_004E5434:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004E544C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E544Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004E544Cu) [[unlikely]] return; }
L_004E544C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E5470:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 40u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004E54B0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004E5490:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[3].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E5490u | kUnwind; return; } goto L_004E5490; } }
L_004E54B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E54C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FAE0u | kUnwind; return; } [[clang::musttail]] return unit_008F(c, 278u, depth); }
L_004E54D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FAE0u | kUnwind; return; } [[clang::musttail]] return unit_008F(c, 278u, depth); }
L_004E54E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E5554; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 21360u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E553C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 2848u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E553C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E553C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004E553C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004E5554; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5554u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004E5554u) [[unlikely]] return; }
L_004E5554:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E5570:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E5580:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004E5590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E5604; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 21056u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E55EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 2848u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E55EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004E55EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004E55EC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004E5604; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5604u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004E5604u) [[unlikely]] return; }
L_004E5604:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E5620:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E5630:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[6].w[0]);  c.pc = t; return; }
L_004E5640:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[6].w[0]);  c.pc = t; return; }
L_004E5650:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[6].w[0]);  c.pc = t; return; }
L_004E5660:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[6].w[0]);  c.pc = t; return; }
L_004E5670:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E5680:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E5690:
    set32(c.r[29], c.r[29].w[0] - 416u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 220u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 216u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    c.f[24] = c.f[12];
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 26;
    { const bool t = c.r[3].d[0] == 0ull; c.r[30].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;  if (t) { goto L_004E5DC0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.f[4] = ld32((c.r[20].w[0]));
    c.f[2] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[5] = ld32((c.r[2].w[0]));
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[20] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[21] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[22] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 10;
L_004E5720:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004E5744; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[20].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[20].w[0] + 8u), c.f[0]);
    c.budget -= 7;
L_004E5744:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[23] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_004E5DD4; } }
L_004E5754:
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld16((c.r[20].w[0] + 30u));
    set32(c.r[16], c.r[20].w[0] + 32u);
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[23], c.r[29].w[0] + 372u);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[3].d[0] << 55;
    c.r[17].d[0] = c.r[2].d[0] >> 61;
    c.budget -= 11;
L_004E5780:
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E5EC0; } }
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004E5EC0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 26u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004E5DB0; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_004E5A68; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 25u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004E57C8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E57E4; } }
L_004E57C8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004E57E4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 26u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004E57FC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E5818; } }
L_004E57FC:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004E5818:
    c.f[8] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 376u);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[21], c.f[8]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[24]);
    st32((c.r[23].w[0]), c.f[3]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[2], c.f[24]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[22], c.f[8]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    c.f[7] = fp::ee::mul(c.fcr31, c.f[0], c.f[24]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[20], c.f[8]);
    st32((c.r[3].w[0]), c.f[4]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[7], c.f[3]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[6] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[24]);
    st32((c.r[29].w[0] + 368u), c.f[7]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    st32((c.r[2].w[0]), c.f[3]);
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[6]);
    st32((c.r[2].w[0] + 4u), c.f[3]);
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[5]);
    c.budget -= 34;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[2].w[0] + 8u), c.f[3]);  if (t) { goto L_004E5A58; } }
    c.r[6].d[0] = ld8((c.r[16].w[0] + 27u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 25u));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004E5EB0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 24u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_004E58CC; } }
    c.f[3] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[4] = fp::cvt_s_w(c.f[3]);  if (t) { goto L_004E58E8; } }
L_004E58CC:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[3] = c.r[4].w[0];
    c.f[4] = fp::cvt_s_w(c.f[3]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[4]);
    c.budget -= 7;
L_004E58E8:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_004E58FC; } }
    c.f[3] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[3]);  if (t) { goto L_004E5918; } }
L_004E58FC:
    set32(c.r[4], c.r[6].w[0] >> 1);
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[3] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_004E5918:
    c.f[4] = fp::ee::div(c.fcr31, c.f[4], c.f[3]);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_004E5940; } }
    c.f[3] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[3]);  if (t) { goto L_004E595C; } }
L_004E5940:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[3] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_004E595C:
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    set32(c.r[5], c.f[3]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[4] = c.r[3].w[0];
    c.f[4] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    set32(c.r[3], c.f[4]);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 19;
L_004E59A8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 28u)));
    c.r[6].d[0] = 0ull | 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    c.f[3] = ld32((c.r[16].w[0] + 20u));
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.f[4] = c.r[4].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[4], c.f[3]);
    set32(c.r[4], c.f[3]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.f[4] = c.r[5].w[0];
    c.f[4] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    set32(c.r[4], c.f[4]);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[3] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 28u)));
    set32(c.r[4], c.r[5].w[0] << 16);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[4], c.r[4].w[0] + 328u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 25u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 44;
L_004E5A58:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 25u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_004E5D50; } }
    c.budget -= 1;
L_004E5A68:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 25u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004E5A80; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E5A9C; } }
L_004E5A80:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004E5A9C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 26u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004E5AB4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E5AD0; } }
L_004E5AB4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004E5AD0:
    c.f[4] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 356u);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[21], c.f[4]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[2], c.f[23]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[24]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[24]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[24]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 360u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[22], c.f[4]);
    st32((c.r[3].w[0]), c.f[2]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[4]);
    st32((c.r[29].w[0] + 352u), c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[24]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 36;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[2].w[0] + 8u), c.f[0]);  if (t) { goto L_004E5D48; } }
    c.r[6].d[0] = ld8((c.r[16].w[0] + 27u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 25u));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004E5EB8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 24u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_004E5B8C; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E5BA8; } }
L_004E5B8C:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004E5BA8:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_004E5BBC; } }
    c.f[0] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E5BD8; } }
L_004E5BBC:
    set32(c.r[4], c.r[6].w[0] >> 1);
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004E5BD8:
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_004E5C00; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E5C1C; } }
L_004E5C00:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004E5C1C:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    set32(c.r[5], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 19;
L_004E5C68:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 28u)));
    c.r[8].d[0] = 0ull | 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[8].d[0] = c.r[8].d[0] | 32768ull;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.f[1] = c.r[4].w[0];
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[23]);
    set32(c.r[9], c.f[1]);
    set32(c.r[4], c.f[0]);
    c.r[8].d[0] = c.r[8].d[0] & c.r[9].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[6].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.f[3] = c.r[7].w[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.f[2] = c.r[5].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    set32(c.r[5], c.f[3]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    set32(c.r[4], c.r[5].w[0] << 16);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[29].w[0] + 412u), c.r[4].w[0]);
    set32(c.r[4], c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 412u));
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[4] = ld32((c.r[16].w[0] + 12u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[3] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    st32((c.r[16].w[0]), c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[4]);
    st32((c.r[16].w[0] + 4u), c.f[3]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[4], c.r[4].w[0] + 328u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 25u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 56;
L_004E5D48:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 25u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E5D50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E5DB0; } }
    st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u - 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u - 449u);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[6].w[0]);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 30u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 61;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[20].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[21].w[0] + 48u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5DACu); set32(c.r[4], c.r[22].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x004E5DACu) [[unlikely]] return; }
L_004E5DAC:
    c.budget -= 1;
L_004E5DB0:
    set32(c.r[16], c.r[16].w[0] + 32u);
    set32(c.r[21], c.r[21].w[0] + 32u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E5780u | kUnwind; return; } goto L_004E5780; } }
L_004E5DC0:
    c.f[20] = 0u;
    c.f[21] = c.f[20];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[20];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E5720u | kUnwind; return; } goto L_004E5720; } }
L_004E5DD4:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004E5DEC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E5E08; } }
L_004E5DEC:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004E5E08:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 29u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004E5E20; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E5E3C; } }
L_004E5E20:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004E5E3C:
    c.f[3] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 12u));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004E5E68; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E5E84; } }
L_004E5E68:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004E5E84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 28u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[23]);
    st8((c.r[20].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[23] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E5754u | kUnwind; return; } goto L_004E5754; } }
L_004E5EB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 24u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E59A8u | kUnwind; return; } goto L_004E59A8; } }
L_004E5EB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 24u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E5C68u | kUnwind; return; } goto L_004E5C68; } }
L_004E5EC0:
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 30u));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[20].w[0] + 96u);
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[23], c.r[2].w[0] + 28u);
    c.r[2].d[0] = c.r[3].d[0] << 52;
    c.r[18].d[0] = c.r[2].d[0] >> 61;
    c.budget -= 8;
L_004E5EE0:
    c.r[2].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E6620; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_004E6620; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 26u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004E6540; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] - 1u);  if (t) { goto L_004E61E0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 25u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004E5F24; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E5F40; } }
L_004E5F24:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004E5F40:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 26u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004E5F58; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E5F74; } }
L_004E5F58:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004E5F74:
    c.f[8] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 340u);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[21], c.f[8]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[24]);
    st32((c.r[3].w[0]), c.f[3]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[2], c.f[24]);
    set32(c.r[3], c.r[29].w[0] + 344u);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[22], c.f[8]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    c.f[7] = fp::ee::mul(c.fcr31, c.f[0], c.f[24]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[20], c.f[8]);
    st32((c.r[3].w[0]), c.f[4]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[7], c.f[3]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[6] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[24]);
    st32((c.r[29].w[0] + 336u), c.f[7]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    st32((c.r[2].w[0]), c.f[3]);
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[6]);
    st32((c.r[2].w[0] + 4u), c.f[3]);
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[5]);
    c.budget -= 35;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[2].w[0] + 8u), c.f[3]);  if (t) { goto L_004E61D0; } }
    c.r[6].d[0] = ld8((c.r[16].w[0] + 27u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 25u));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004E6550; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 24u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_004E602C; } }
    c.f[3] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[4] = fp::cvt_s_w(c.f[3]);  if (t) { goto L_004E6048; } }
L_004E602C:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[3] = c.r[4].w[0];
    c.f[4] = fp::cvt_s_w(c.f[3]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[4]);
    c.budget -= 7;
L_004E6048:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_004E605C; } }
    c.f[3] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[3]);  if (t) { goto L_004E6078; } }
L_004E605C:
    set32(c.r[4], c.r[6].w[0] >> 1);
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[3] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_004E6078:
    c.f[4] = fp::ee::div(c.fcr31, c.f[4], c.f[3]);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_004E60A0; } }
    c.f[3] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[3]);  if (t) { goto L_004E60BC; } }
L_004E60A0:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[3] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_004E60BC:
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    set32(c.r[5], c.f[3]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[4] = c.r[3].w[0];
    c.f[4] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    set32(c.r[3], c.f[4]);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 19;
L_004E6108:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 28u)));
    c.r[6].d[0] = 0ull | 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    c.f[3] = ld32((c.r[16].w[0] + 20u));
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.f[4] = c.r[4].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[4], c.f[3]);
    set32(c.r[4], c.f[3]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.f[4] = c.r[5].w[0];
    c.f[4] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    set32(c.r[4], c.f[4]);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[3] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 28u)));
    set32(c.r[4], c.r[5].w[0] << 16);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[4], c.r[4].w[0] + 328u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 25u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 47;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E6558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004E61D8; } }
    c.budget -= 1;
L_004E61D0:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_004E61D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_004E64E0; } }
L_004E61E0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 25u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004E61F8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E6214; } }
L_004E61F8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004E6214:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 26u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004E622C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E6248; } }
L_004E622C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004E6248:
    c.f[4] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 324u);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[21], c.f[4]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[2], c.f[23]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[24]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[24]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[24]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 328u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[22], c.f[4]);
    st32((c.r[3].w[0]), c.f[2]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[4]);
    st32((c.r[29].w[0] + 320u), c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[24]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 36;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[2].w[0] + 8u), c.f[0]);  if (t) { goto L_004E64D0; } }
    c.r[6].d[0] = ld8((c.r[16].w[0] + 27u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 25u));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004E65B8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 24u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_004E6304; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E6320; } }
L_004E6304:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004E6320:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_004E6334; } }
    c.f[0] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E6350; } }
L_004E6334:
    set32(c.r[4], c.r[6].w[0] >> 1);
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004E6350:
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_004E6378; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E6394; } }
L_004E6378:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004E6394:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    set32(c.r[5], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 19;
L_004E63E0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 28u)));
    c.r[8].d[0] = 0ull | 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[8].d[0] = c.r[8].d[0] | 32768ull;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.f[1] = c.r[4].w[0];
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[23]);
    set32(c.r[9], c.f[1]);
    set32(c.r[4], c.f[0]);
    c.r[8].d[0] = c.r[8].d[0] & c.r[9].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[6].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.f[3] = c.r[7].w[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.f[2] = c.r[5].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    set32(c.r[5], c.f[3]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    set32(c.r[4], c.r[5].w[0] << 16);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[29].w[0] + 408u), c.r[4].w[0]);
    set32(c.r[4], c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 408u));
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[4] = ld32((c.r[16].w[0] + 12u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[3] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    st32((c.r[16].w[0]), c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[4]);
    st32((c.r[16].w[0] + 4u), c.f[3]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[4].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[5], c.r[5].w[0] + 328u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 25u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 58;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E65C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004E64D8; } }
L_004E64D0:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_004E64D8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_004E64E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E6540; } }
    st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u - 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u - 3585u);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[6].w[0]);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 30u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 52;
    c.r[3].d[0] = c.r[3].d[0] >> 61;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[3], c.r[3].w[0] << 9);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[20].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[21].w[0] + 112u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E653Cu); set32(c.r[4], c.r[22].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x004E653Cu) [[unlikely]] return; }
L_004E653C:
    c.budget -= 1;
L_004E6540:
    set32(c.r[16], c.r[16].w[0] + 32u);
    set32(c.r[21], c.r[21].w[0] + 32u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E5EE0u | kUnwind; return; } goto L_004E5EE0; } }
L_004E6550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 24u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E6108u | kUnwind; return; } goto L_004E6108; } }
L_004E6558:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 30u));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 30u));
    c.r[1].d[0] = c.r[2].sd[0] < 3841ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004E65A8; } }
L_004E6578:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 30u));
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 260u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E65A0u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x003FA3F0u; return; } if (c.pc != 0x004E65A0u) [[unlikely]] return; }
L_004E65A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E61D0u | kUnwind; return; } goto L_004E61D0; } }
L_004E65A8:
    set32(c.r[2], c.r[2].w[0] - 3840u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E6578u | kUnwind; return; } goto L_004E6578; } }
    c.budget -= 1;
L_004E65B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 24u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E63E0u | kUnwind; return; } goto L_004E63E0; } }
L_004E65C0:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 30u));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 30u));
    c.r[1].d[0] = c.r[2].sd[0] < 3841ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004E6610; } }
L_004E65E0:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 30u));
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 260u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6608u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x003FA3F0u; return; } if (c.pc != 0x004E6608u) [[unlikely]] return; }
L_004E6608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E64D0u | kUnwind; return; } goto L_004E64D0; } }
L_004E6610:
    set32(c.r[2], c.r[2].w[0] - 3840u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E65E0u | kUnwind; return; } goto L_004E65E0; } }
    c.budget -= 1;
L_004E6620:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 30u));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[20].w[0] + 128u);
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 49;
    c.r[18].d[0] = c.r[2].d[0] >> 61;
    c.budget -= 6;
L_004E6638:
    c.r[2].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E6F60; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_004E6F60; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 26u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004E68B0; } }
    c.f[0] = ld32((c.r[28].w[0] - 29672u));
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[24]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 23;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[6].w[0] + 8u), c.f[0]);  if (t) { goto L_004E6850; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 27u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 25u));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004E68C0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 24u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004E66E4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E6700; } }
L_004E66E4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004E6700:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_004E6714; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E6730; } }
L_004E6714:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004E6730:
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_004E6758; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E6774; } }
L_004E6758:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004E6774:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    set32(c.r[4], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    c.r[7].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 19;
L_004E67C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 28u)));
    c.r[5].d[0] = 0ull | 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.f[2] = c.r[3].w[0];
    set32(c.r[2], c.r[3].w[0] << 16);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    st32((c.r[29].w[0] + 404u), c.r[2].w[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    set32(c.r[2], c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 404u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.f[2] = c.r[4].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    set32(c.r[2], c.f[2]);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[6].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 328u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 25u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 36;
L_004E6850:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 25u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E68B0; } }
    st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u - 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u - 28673u);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[6].w[0]);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 30u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 49;
    c.r[3].d[0] = c.r[3].d[0] >> 61;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[3], c.r[3].w[0] << 12);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[20].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[21].w[0] + 144u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E68B0u); set32(c.r[4], c.r[22].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x004E68B0u) [[unlikely]] return; }
L_004E68B0:
    set32(c.r[16], c.r[16].w[0] + 32u);
    set32(c.r[21], c.r[21].w[0] + 32u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E6638u | kUnwind; return; } goto L_004E6638; } }
L_004E68C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = ld8((c.r[16].w[0] + 24u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E67C0u | kUnwind; return; } goto L_004E67C0; } }
L_004E68C8:
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E6F04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = 0ull | 0ull;
    c.f[1] = ld32((c.r[2].w[0] - 20416u));
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    set32(c.r[3], 0u + 3u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[6], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 24;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004E6CE4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004E6B14; } }
    c.r[4].d[0] = ld16((c.r[20].w[0] + 30u));
    c.r[3].d[0] = c.r[4].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 61;
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004E6B14; } }
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[16], c.r[3].w[0] + 32u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 58u));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_004E6B14; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[6], c.r[29].w[0] + 288u);
    set32(c.r[7], c.r[29].w[0] + 400u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6990u); set32(c.r[8], c.r[20].w[0] + 20u);  if (depth < kMaxDepth) unit_00B9(c, 239u, depth + 1u); else { c.pc = 0x004E7C70u; return; } if (c.pc != 0x004E6990u) [[unlikely]] return; }
L_004E6990:
    set32(c.r[2], c.r[29].w[0] + 304u);
    set32(c.r[3], c.r[29].w[0] + 296u);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 316u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 403u));
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 289u));
    st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 291u));
    st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 292u)));
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6A00u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x004E6A00u) [[unlikely]] return; }
L_004E6A00:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[4], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[3], c.r[3].w[0] + 260u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6A20u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x003FA3F0u; return; } if (c.pc != 0x004E6A20u) [[unlikely]] return; }
L_004E6A20:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u - 449u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 400u));
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[5].d[0] = ld16((c.r[5].w[0] + 6u));
    set32(c.r[6], c.r[6].w[0] + 328u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 401u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 402u));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 403u));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.f[0] = ld32((c.r[20].w[0]));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 12u), 0u);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 30u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 61;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[20].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 30u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 48;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6AE0u); set32(c.r[4], c.r[22].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 345u, depth + 1u); else { c.pc = 0x0040B7F0u; return; } if (c.pc != 0x004E6AE0u) [[unlikely]] return; }
L_004E6AE0:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 30u));
    set32(c.r[4], 0u - 4u);
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[20].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004E6F70; } }
L_004E6B10:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004E6B14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E6CE4; } }
    c.r[4].d[0] = ld16((c.r[20].w[0] + 30u));
    c.r[3].d[0] = c.r[4].d[0] << 52;
    c.r[3].d[0] = c.r[3].d[0] >> 61;
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_004E6CE4; } }
    c.r[3].d[0] = c.r[4].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 62;
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[16], c.r[3].w[0] + 96u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 122u));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_004E6CE4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[6], c.r[29].w[0] + 256u);
    set32(c.r[7], c.r[29].w[0] + 396u);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6B6Cu); set32(c.r[8], c.r[20].w[0] + 20u);  if (depth < kMaxDepth) unit_00B9(c, 239u, depth + 1u); else { c.pc = 0x004E7C70u; return; } if (c.pc != 0x004E6B6Cu) [[unlikely]] return; }
L_004E6B6C:
    set32(c.r[2], c.r[29].w[0] + 272u);
    set32(c.r[3], c.r[29].w[0] + 264u);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 15u);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 284u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 399u));
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 257u));
    st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 259u));
    st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 260u)));
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6BD8u); st32((c.r[16].w[0] + 20u), c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x004E6BD8u) [[unlikely]] return; }
L_004E6BD8:
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u - 3585u);
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 396u));
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[5].d[0] = ld16((c.r[5].w[0] + 6u));
    set32(c.r[6], c.r[6].w[0] + 328u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 397u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 398u));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 399u));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.f[0] = ld32((c.r[20].w[0]));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 12u), 0u);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 30u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 52;
    c.r[3].d[0] = c.r[3].d[0] >> 61;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[3], c.r[3].w[0] << 9);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[20].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 30u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 62;
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 51;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6CA4u); set32(c.r[4], c.r[22].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 345u, depth + 1u); else { c.pc = 0x0040B7F0u; return; } if (c.pc != 0x004E6CA4u) [[unlikely]] return; }
L_004E6CA4:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 30u));
    set32(c.r[5], 0u - 13u);
    c.r[3].d[0] = c.r[2].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 62;
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[20].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 62;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_004E6F88; } }
L_004E6CE0:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004E6CE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E6F04; } }
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E6F04; } }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 30u));
    c.r[2].d[0] = c.r[3].d[0] << 49;
    c.r[2].d[0] = c.r[2].d[0] >> 61;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_004E6F04; } }
    c.r[2].d[0] = c.r[3].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 62;
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[16], c.r[2].w[0] + 128u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 154u));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_004E6F04; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[6], c.r[29].w[0] + 224u);
    set32(c.r[7], c.r[29].w[0] + 392u);
    set32(c.r[8], c.r[29].w[0] + 384u);
    st8((c.r[29].w[0] + 384u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 385u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 386u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 387u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    st8((c.r[29].w[0] + 388u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 389u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 390u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6D68u); st8((c.r[29].w[0] + 391u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00B9(c, 239u, depth + 1u); else { c.pc = 0x004E7C70u; return; } if (c.pc != 0x004E6D68u) [[unlikely]] return; }
L_004E6D68:
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[3], c.r[29].w[0] + 232u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] + 56u);
    set32(c.r[2], c.r[29].w[0] + 240u);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 252u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 395u));
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 225u));
    st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 227u));
    st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 228u)));
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 260u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6DECu); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x003FA3F0u; return; } if (c.pc != 0x004E6DECu) [[unlikely]] return; }
L_004E6DEC:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u - 28673u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 392u));
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[5].d[0] = ld16((c.r[5].w[0] + 6u));
    set32(c.r[6], c.r[6].w[0] + 328u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 393u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 394u));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 395u));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.f[0] = ld32((c.r[20].w[0]));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 12u), 0u);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 30u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 49;
    c.r[3].d[0] = c.r[3].d[0] >> 61;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[3], c.r[3].w[0] << 12);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[20].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 30u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 62;
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 49;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6EB0u); set32(c.r[4], c.r[22].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 345u, depth + 1u); else { c.pc = 0x0040B7F0u; return; } if (c.pc != 0x004E6EB0u) [[unlikely]] return; }
L_004E6EB0:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 30u));
    set32(c.r[5], 0u - 49u);
    c.r[3].d[0] = c.r[2].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 62;
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[20].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 62;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004E6F04; } }
    c.r[4].d[0] = ld16((c.r[20].w[0] + 30u));
    c.r[2].d[0] = 0ull & 3ull;
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[20].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_004E6F04:
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E6FA4; } }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 30u));
    c.r[2].d[0] = c.r[3].d[0] << 55;
    c.r[2].d[0] = c.r[2].d[0] >> 61;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E6F3C; } }
    c.r[2].d[0] = c.r[3].d[0] << 52;
    c.r[2].d[0] = c.r[2].d[0] >> 61;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_004E6F3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E6F54; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 30u));
    c.r[2].d[0] = c.r[2].d[0] << 49;
    c.r[2].d[0] = c.r[2].d[0] >> 61;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_004E6F54:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));  if (t) { goto L_004E6FA8; } }
L_004E6F60:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E6F04u | kUnwind; return; } goto L_004E6F04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E68C8u | kUnwind; return; } goto L_004E68C8; } }
L_004E6F70:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 30u));
    c.r[3].d[0] = 0ull & 3ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E6B10u | kUnwind; return; } goto L_004E6B10; } }
L_004E6F88:
    c.r[4].d[0] = ld16((c.r[20].w[0] + 30u));
    c.r[2].d[0] = 0ull & 3ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E6CE0u | kUnwind; return; } goto L_004E6CE0; } }
L_004E6FA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 1;
L_004E6FA8:
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_004E6FF0:
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
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_004E7030; } }
L_004E7028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E70F0; } }
L_004E7030:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004E7034:
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 23856u);
    set32(c.r[5], c.r[19].w[0] + 52u);
    set32(c.r[6], c.r[19].w[0] + 20u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 13u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E706Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00B9(c, 147u, depth + 1u); else { c.pc = 0x004E5690u; return; } if (c.pc != 0x004E706Cu) [[unlikely]] return; }
L_004E706C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E7094; } }
    c.budget -= 1;
L_004E7078:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E7034u | kUnwind; return; } goto L_004E7034; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E7028u | kUnwind; return; } goto L_004E7028; } }
L_004E7094:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E70B4u); set32(c.r[5], c.r[19].w[0] + 20u);  if (depth < kMaxDepth) unit_00B9(c, 200u, depth + 1u); else { c.pc = 0x004E75E0u; return; } if (c.pc != 0x004E70B4u) [[unlikely]] return; }
L_004E70B4:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E7078u | kUnwind; return; } goto L_004E7078; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E7078u | kUnwind; return; } goto L_004E7078; } }
    c.budget -= 1;
L_004E70F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004E7110:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 29u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[3].w[0] + 28u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 12u), static_cast<std::uint8_t>(c.r[7].w[0]));  c.pc = t; return; }
L_004E7140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7170u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_00B9(c, 200u, depth + 1u); else { c.pc = 0x004E75E0u; return; } if (c.pc != 0x004E7170u) [[unlikely]] return; }
L_004E7170:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004E71F0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 3;
L_004E718C:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_004E71E0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_004E71F0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_004E71F0; } }
L_004E71E0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E718Cu | kUnwind; return; } goto L_004E718C; } }
L_004E71F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E7210:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 16u), 0u);  c.pc = t; return; }
L_004E7230:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].d[0] = 0ull & 7ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[10], c.r[2].w[0] << 12);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[9], 0u - 28673u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[8], 0u - 3585u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = 0ull & 3ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], c.r[2].w[0] << 4);
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), 0u);
    set32(c.r[5], 0u - 49u);
    c.r[11].d[0] = ld16((c.r[4].w[0] + 30u));
    set32(c.r[3], 0u - 13u);
    c.r[16].d[0] = ld16((c.r[7].w[0] + 20u));
    set32(c.r[2], 0u - 4u);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    set32(c.r[7], 0u - 449u);
    st16((c.r[4].w[0] + 30u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[10].d[0] = ld16((c.r[4].w[0] + 30u));
    c.r[9].d[0] = c.r[9].d[0] << 49;
    c.r[9].d[0] = c.r[9].d[0] >> 61;
    c.r[9].d[0] = c.r[9].d[0] & 7ull;
    set32(c.r[9], c.r[9].w[0] << 9);
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[4].w[0] + 30u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[9].d[0] = ld16((c.r[4].w[0] + 30u));
    c.r[8].d[0] = c.r[8].d[0] << 52;
    c.r[8].d[0] = c.r[8].d[0] >> 61;
    c.r[8].d[0] = c.r[8].d[0] & 7ull;
    set32(c.r[8], c.r[8].w[0] << 6);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[4].w[0] + 30u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[4].w[0] + 30u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[4].w[0] + 30u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld16((c.r[4].w[0] + 30u));
    c.r[5].d[0] = c.r[5].d[0] << 58;
    c.r[5].d[0] = c.r[5].d[0] >> 62;
    c.r[5].d[0] = c.r[5].d[0] & 3ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st16((c.r[4].w[0] + 30u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 30u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 62;
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[4].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 63;
L_004E732C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7338u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 351u, depth + 1u); else { c.pc = 0x0040B900u; return; } if (c.pc != 0x004E7338u) [[unlikely]] return; }
L_004E7338:
    set32(c.r[3], c.r[2].w[0] >> 16);
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[6], c.r[3].w[0] << 5);
    set32(c.r[7], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[2].w[0] << 3);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[5], 0u - 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0] + 48u), c.r[3].w[0]);
    st8((c.r[7].w[0] + 58u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[7].w[0] + 48u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 12u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E732Cu | kUnwind; return; } goto L_004E732C; } }
    c.r[5].d[0] = ld16((c.r[18].w[0] + 48u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E739Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 351u, depth + 1u); else { c.pc = 0x0040B900u; return; } if (c.pc != 0x004E739Cu) [[unlikely]] return; }
L_004E739C:
    set32(c.r[7], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] >> 16);
    set32(c.r[8], c.r[3].w[0] << 5);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[5].d[0] = ld16((c.r[18].w[0] + 76u));
    set32(c.r[6], 0u - 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[20].w[0] + 112u), c.r[2].w[0]);
    st8((c.r[20].w[0] + 122u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[20].w[0] + 112u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E73ECu); st32((c.r[2].w[0] + 12u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0082(c, 351u, depth + 1u); else { c.pc = 0x0040B900u; return; } if (c.pc != 0x004E73ECu) [[unlikely]] return; }
L_004E73EC:
    set32(c.r[6], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] >> 16);
    set32(c.r[7], c.r[3].w[0] << 5);
    set32(c.r[5], 0u - 1u);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[20].w[0] + 144u), c.r[3].w[0]);
    st8((c.r[20].w[0] + 154u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[20].w[0] + 144u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[5].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004E7450:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[11].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[29].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[10], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[10].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_004E749C; } }
L_004E7488:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 80u)));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[11].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[9].w[0]);  if (t) { goto L_004E75AC; } }
L_004E749C:
    set32(c.r[9], ld32((c.r[5].w[0] + 16u)));
    c.r[3].d[0] = 0ull & 3ull;
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[13], c.r[3].w[0] << 4);
    set32(c.r[20], 0u + 1u);
    c.r[19].d[0] = ld8((c.r[8].w[0]));
    c.r[18].d[0] = ld8((c.r[8].w[0] + 1u));
    set32(c.r[12], 0u - 49u);
    c.r[17].d[0] = ld8((c.r[8].w[0] + 2u));
    set32(c.r[11], 0u - 13u);
    c.r[16].d[0] = ld8((c.r[8].w[0] + 3u));
    set32(c.r[3], c.r[9].w[0] + c.r[10].w[0]);
    c.r[25].d[0] = ld8((c.r[8].w[0] + 4u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[10], 0u - 4u);
    c.r[24].d[0] = ld8((c.r[8].w[0] + 5u));
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    c.r[15].d[0] = ld8((c.r[8].w[0] + 6u));
    c.r[14].d[0] = ld8((c.r[8].w[0] + 7u));
    st8((c.r[3].w[0] + 13u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[3].w[0] + 12u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.f[0] = ld32((c.r[7].w[0]));
    set32(c.r[8], 0u + 12u);
    st8((c.r[29].w[0] + 80u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    st8((c.r[3].w[0] + 20u), static_cast<std::uint8_t>(c.r[19].w[0]));
    st8((c.r[3].w[0] + 21u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[3].w[0] + 22u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[3].w[0] + 23u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[25].w[0]));
    st8((c.r[3].w[0] + 25u), static_cast<std::uint8_t>(c.r[24].w[0]));
    st8((c.r[3].w[0] + 26u), static_cast<std::uint8_t>(c.r[15].w[0]));
    st8((c.r[3].w[0] + 27u), static_cast<std::uint8_t>(c.r[14].w[0]));
    st8((c.r[3].w[0] + 29u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[3].w[0] + 16u), c.r[7].w[0]);
    c.r[6].d[0] = ld16((c.r[3].w[0] + 30u));
    c.r[6].d[0] = c.r[6].d[0] & c.r[12].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[13].d[0];
    st16((c.r[3].w[0] + 30u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[8].d[0] = ld16((c.r[3].w[0] + 30u));
    c.r[6].d[0] = c.r[6].d[0] << 58;
    c.r[6].d[0] = c.r[6].d[0] >> 62;
    c.r[6].d[0] = c.r[6].d[0] & 3ull;
    set32(c.r[7], c.r[6].w[0] << 2);
    c.r[6].d[0] = c.r[8].d[0] & c.r[11].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[3].w[0] + 30u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 60;
    c.r[7].d[0] = c.r[6].d[0] >> 62;
    c.r[6].d[0] = ld16((c.r[3].w[0] + 30u));
    c.r[7].d[0] = c.r[7].d[0] & 3ull;
    c.r[6].d[0] = c.r[6].d[0] & c.r[10].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[3].w[0] + 30u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[7], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 14u)));
    c.budget -= 68;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E7488u | kUnwind; return; } goto L_004E7488; } }
L_004E75AC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004E75D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C120u | kUnwind; return; } [[clang::musttail]] return unit_0083(c, 10u, depth); }
L_004E75E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 9;
L_004E7604:
    set32(c.r[3], c.r[16].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] + c.r[18].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 58u));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[19], c.r[4].w[0] + 32u);  if (t) { goto L_004E770C; } }
L_004E7618:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E7604u | kUnwind; return; } goto L_004E7604; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 122u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[16], c.r[18].w[0] + 96u);  if (t) { goto L_004E7740; } }
L_004E7634:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 154u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[16], c.r[18].w[0] + 128u);  if (t) { goto L_004E7770; } }
L_004E7640:
    st32((c.r[18].w[0] + 16u), 0u);
    c.r[3].d[0] = 0ull & 7ull;
    c.r[11].d[0] = ld16((c.r[18].w[0] + 30u));
    set32(c.r[9], 0u - 28673u);
    set32(c.r[10], c.r[3].w[0] << 12);
    set32(c.r[8], 0u - 3585u);
    c.r[3].d[0] = 0ull & 3ull;
    set32(c.r[7], 0u - 449u);
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[5], 0u - 49u);
    set32(c.r[4], 0u - 13u);
    set32(c.r[3], 0u - 4u);
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st16((c.r[18].w[0] + 30u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[10].d[0] = ld16((c.r[18].w[0] + 30u));
    c.r[9].d[0] = c.r[9].d[0] << 49;
    c.r[9].d[0] = c.r[9].d[0] >> 61;
    c.r[9].d[0] = c.r[9].d[0] & 7ull;
    set32(c.r[9], c.r[9].w[0] << 9);
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[18].w[0] + 30u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[9].d[0] = ld16((c.r[18].w[0] + 30u));
    c.r[8].d[0] = c.r[8].d[0] << 52;
    c.r[8].d[0] = c.r[8].d[0] >> 61;
    c.r[8].d[0] = c.r[8].d[0] & 7ull;
    set32(c.r[8], c.r[8].w[0] << 6);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[18].w[0] + 30u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[18].w[0] + 30u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[18].w[0] + 30u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld16((c.r[18].w[0] + 30u));
    c.r[5].d[0] = c.r[5].d[0] << 58;
    c.r[5].d[0] = c.r[5].d[0] >> 62;
    c.r[5].d[0] = c.r[5].d[0] & 3ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[18].w[0] + 30u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[5].d[0] = ld16((c.r[18].w[0] + 30u));
    c.r[4].d[0] = c.r[4].d[0] << 60;
    c.r[4].d[0] = c.r[4].d[0] >> 62;
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 51;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 30u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004E77A0; } }
L_004E770C:
    set32(c.r[5], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7718u); set32(c.r[4], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x004E7718u) [[unlikely]] return; }
L_004E7718:
    st8((c.r[19].w[0] + 26u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E7618u | kUnwind; return; } goto L_004E7618; } }
    c.budget -= 1;
L_004E7740:
    set32(c.r[5], ld32((c.r[18].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E774Cu); set32(c.r[4], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x004E774Cu) [[unlikely]] return; }
L_004E774C:
    st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E7634u | kUnwind; return; } goto L_004E7634; } }
L_004E7770:
    set32(c.r[5], ld32((c.r[18].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E777Cu); set32(c.r[4], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x004E777Cu) [[unlikely]] return; }
L_004E777C:
    st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E7640u | kUnwind; return; } goto L_004E7640; } }
L_004E77A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004E77C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004E77EC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E77E8u); set32(c.r[5], c.r[5].w[0] + 30752u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004E77E8u) [[unlikely]] return; }
L_004E77E8:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_004E77EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004E7804; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7800u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004E7800u) [[unlikely]] return; }
L_004E7800:
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 1;
L_004E7804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E780Cu); set32(c.r[4], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0082(c, 390u, depth + 1u); else { c.pc = 0x0040BFC0u; return; } if (c.pc != 0x004E780Cu) [[unlikely]] return; }
L_004E780C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E7820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E7850; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004E7850; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7850u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004E7850u) [[unlikely]] return; }
L_004E7850:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E7870:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], c.r[18].w[0] - 17952u);
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 17;
L_004E78B4:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004E79E8; } }
    c.budget -= 1;
L_004E78C8:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[2].d[0] = c.r[22].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E78B4u | kUnwind; return; } goto L_004E78B4; } }
    set32(c.r[22], c.r[29].w[0] + 156u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st32((c.r[29].w[0] + 152u), 0u);
    c.r[20].d[0] = 0ull + 0ull;
    st32((c.r[22].w[0]), 0u);
    c.r[19].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 17952u);
    c.r[17].d[0] = c.r[23].d[0] & 65535ull;
    set32(c.r[16], c.r[29].w[0] + 148u);
    c.budget -= 9;
L_004E7900:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 72u));
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[29].w[0] + 144u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7920u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0083(c, 14u, depth + 1u); else { c.pc = 0x0040C1A0u; return; } if (c.pc != 0x004E7920u) [[unlikely]] return; }
L_004E7920:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 28u);
    c.r[2].d[0] = c.r[20].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E7900u | kUnwind; return; } goto L_004E7900; } }
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7940u); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0082(c, 357u, depth + 1u); else { c.pc = 0x0040BA70u; return; } if (c.pc != 0x004E7940u) [[unlikely]] return; }
L_004E7940:
    c.r[3].d[0] = c.r[23].d[0] & 65535ull;
    st32((c.r[21].w[0] + 8u), 0u);
    st32((c.r[21].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], c.r[3].w[0] + 15u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] >> 4);
    set32(c.r[3], c.r[3].w[0] + 15u);
    set32(c.r[3], c.r[3].w[0] >> 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[21].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[21].w[0] + 4u)));  if (t) { goto L_004E7988; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7984u); set32(c.r[5], c.r[5].w[0] + 30752u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004E7984u) [[unlikely]] return; }
L_004E7984:
    st32((c.r[21].w[0] + 12u), 0u);
    c.budget -= 1;
L_004E7988:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004E7A88; } }
L_004E7990:
    set32(c.r[4], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[21].w[0] + 4u)));  if (t) { goto L_004E79A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E79A4u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004E79A4u) [[unlikely]] return; }
L_004E79A4:
    st32((c.r[21].w[0] + 16u), 0u);
    c.budget -= 1;
L_004E79A8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004E7AC4; } }
L_004E79B0:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004E7AD4; } }
    set32(c.r[3], ld32((c.r[22].w[0])));
    c.budget -= 1;
L_004E79C4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004E7B2C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004E79DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E79DCu); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004E79DCu) [[unlikely]] return; }
L_004E79DC:
    st32((c.r[22].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_004E7B30; } }
L_004E79E8:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[19].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[19].w[0]);
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7A08u); set32(c.r[5], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x004E7A08u) [[unlikely]] return; }
L_004E7A08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E7A68; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[17].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 8u));
    st16((c.r[17].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 10u));
    st16((c.r[17].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 20u));
    st16((c.r[17].w[0] + 72u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 22u));
    st16((c.r[17].w[0] + 74u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 24u));
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 76u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E78C8u | kUnwind; return; } goto L_004E78C8; } }
    c.budget -= 1;
L_004E7A68:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E79E8u | kUnwind; return; } goto L_004E79E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E78C8u | kUnwind; return; } goto L_004E78C8; } }
    c.budget -= 1;
L_004E7A88:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7A9Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004E7A9Cu) [[unlikely]] return; }
L_004E7A9C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 31584u);
    set32(c.r[6], c.r[6].w[0] + 30752u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7ABCu); set32(c.r[7], 0u + 160u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004E7ABCu) [[unlikely]] return; }
L_004E7ABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E7990u | kUnwind; return; } goto L_004E7990; } }
L_004E7AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7ACCu); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004E7ACCu) [[unlikely]] return; }
L_004E7ACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E79B0u | kUnwind; return; } goto L_004E79B0; } }
L_004E7AD4:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004E7ADC:
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.r[5].d[0] = c.r[18].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[6], c.r[21].w[0] + 20u);
    set32(c.r[7], c.r[21].w[0] + 52u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7AF8u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_00B9(c, 192u, depth + 1u); else { c.pc = 0x004E7230u; return; } if (c.pc != 0x004E7AF8u) [[unlikely]] return; }
L_004E7AF8:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[17], c.r[17].w[0] + 160u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E7ADCu | kUnwind; return; } goto L_004E7ADC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[22].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E79C4u | kUnwind; return; } goto L_004E79C4; } }
L_004E7B2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_004E7B30:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004E7B60:
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 21u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 22u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 23u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 26u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 27u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_004E7B90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004E7C08; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_004E7BC0:
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004E7C44; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004E7BD4:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 160u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E7BD4u | kUnwind; return; } goto L_004E7BD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 8u), 0u);  if (t) { goto L_004E7C48; } }
L_004E7C08:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004E7C0C:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7C20u); set32(c.r[5], c.r[19].w[0] + 20u);  if (depth < kMaxDepth) unit_00B9(c, 200u, depth + 1u); else { c.pc = 0x004E75E0u; return; } if (c.pc != 0x004E7C20u) [[unlikely]] return; }
L_004E7C20:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[19].w[0] + 8u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E7C0Cu | kUnwind; return; } goto L_004E7C0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E7BC0u | kUnwind; return; } goto L_004E7BC0; } }
L_004E7C44:
    st32((c.r[19].w[0] + 8u), 0u);
    c.budget -= 1;
L_004E7C48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004E7C70:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7CB0u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004E7CB0u) [[unlikely]] return; }
L_004E7CB0:
    c.f[21] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7CBCu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004E7CBCu) [[unlikely]] return; }
L_004E7CBC:
    c.r[4].d[0] = ld8((c.r[20].w[0]));
    c.f[20] = c.f[0];
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    set32(c.r[14], c.r[29].w[0] + 121u);
    set32(c.r[13], c.r[29].w[0] + 122u);
    set32(c.r[3], c.r[29].w[0] + 123u);
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[12], c.r[29].w[0] + 125u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[29].w[0] + 124u);
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[11], c.r[29].w[0] + 126u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[10], c.r[29].w[0] + 127u);
    st8((c.r[29].w[0] + 120u), static_cast<std::uint8_t>(0u));
    st8((c.r[14].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[4].d[0] & 128ull;
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 45;
    { const bool t = c.r[4].d[0] != 0ull; st8((c.r[10].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_004E7EC0; } }
    c.r[9].d[0] = ld8((c.r[19].w[0] + 4u));
    c.r[4].d[0] = ld8((c.r[20].w[0] + 5u));
    c.r[8].d[0] = ld8((c.r[19].w[0] + 5u));
    c.r[7].d[0] = ld8((c.r[19].w[0] + 6u));
    c.r[6].d[0] = ld8((c.r[19].w[0] + 7u));
    c.r[5].d[0] = ld8((c.r[20].w[0] + 4u));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 7u));
    st8((c.r[14].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[20].w[0] + 6u));
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[29].w[0] + 120u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] != 0ull; st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_004E7DC4; } }
    set32(c.r[2], 0u + 127u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004E7DC4:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_004E7DD0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7DDCu); set32(c.r[4], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_007E(c, 269u, depth + 1u); else { c.pc = 0x003F9F40u; return; } if (c.pc != 0x004E7DDCu) [[unlikely]] return; }
L_004E7DDC:
    c.r[4].d[0] = ld16((c.r[20].w[0] + 2u));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
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
    set32(c.r[3], c.f[1]);
    c.f[3] = ld32((c.r[20].w[0] + 20u));
    c.f[2] = ld32((c.r[19].w[0] + 20u));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.f[1] = ld32((c.r[20].w[0] + 24u));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[7] = 0u;
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[5] = ld32((c.r[20].w[0] + 16u));
    c.f[4] = ld32((c.r[19].w[0] + 16u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[3]);
    c.f[8] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[1]);
    c.f[6] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[0]);
    c.f[3] = ld32((c.r[20].w[0] + 28u));
    c.f[2] = ld32((c.r[19].w[0] + 28u));
    c.f[1] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[5]);
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[5]);
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[4]);
    st32((c.r[18].w[0] + 16u), c.f[4]);
    st32((c.r[18].w[0] + 20u), c.f[8]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[3]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[2]);
    st32((c.r[18].w[0] + 24u), c.f[6]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[1]);
    st32((c.r[18].w[0] + 28u), c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[0]);
    c.budget -= 57;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.f[0]);  if (t) { goto L_004E7F04; } }
L_004E7EC0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 5u));
    c.r[8].d[0] = ld8((c.r[16].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 3u));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 6u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    st8((c.r[29].w[0] + 120u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[29].w[0] + 121u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 122u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[29].w[0] + 123u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E7DD0u | kUnwind; return; } goto L_004E7DD0; } }
L_004E7F04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004E7F30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_004E7F90; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_004E7F5C:
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 528u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_004E7F80; } }
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 540u)));  if (t) { goto L_004E7F94; } }
L_004E7F80:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E7F5Cu | kUnwind; return; } goto L_004E7F5C; } }
L_004E7F90:
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_004E7F94:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_004E7FA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_00BA(c, 4u, depth); } }
L_004E7FA8:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 4);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
L_004E7FC8:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 548u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7FE0u); set32(c.r[18], c.r[2].w[0] + 548u);  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004E7FE0u) [[unlikely]] return; }
L_004E7FE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00BA(c, 3u, depth); } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7FF4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x004E7FF4u) [[unlikely]] return; }
L_004E7FF4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E7FC8u | kUnwind; return; } goto L_004E7FC8; } }
    [[clang::musttail]] return unit_00BA(c, 2u, depth);
}

}

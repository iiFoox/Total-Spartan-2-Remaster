#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A8[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0,
    0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0,
    0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0,
    0, 0, 0, 0, 0, 125, 0, 0, 126, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0,
    142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0,
    0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206,
    0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 217,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0,
    0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0,
    226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 237,
    0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0,
    0, 243, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0,
    0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0,
    0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0,
    0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0,
    0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00A8(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004A0000;
    case 2u: goto L_004A0008;
    case 3u: goto L_004A0040;
    case 4u: goto L_004A0048;
    case 5u: goto L_004A005C;
    case 6u: goto L_004A0090;
    case 7u: goto L_004A00B8;
    case 8u: goto L_004A00D0;
    case 9u: goto L_004A00DC;
    case 10u: goto L_004A00F0;
    case 11u: goto L_004A0120;
    case 12u: goto L_004A0140;
    case 13u: goto L_004A019C;
    case 14u: goto L_004A01BC;
    case 15u: goto L_004A026C;
    case 16u: goto L_004A0278;
    case 17u: goto L_004A02AC;
    case 18u: goto L_004A02B8;
    case 19u: goto L_004A02CC;
    case 20u: goto L_004A02D8;
    case 21u: goto L_004A0320;
    case 22u: goto L_004A0350;
    case 23u: goto L_004A035C;
    case 24u: goto L_004A041C;
    case 25u: goto L_004A0434;
    case 26u: goto L_004A0454;
    case 27u: goto L_004A0464;
    case 28u: goto L_004A04B0;
    case 29u: goto L_004A04D0;
    case 30u: goto L_004A050C;
    case 31u: goto L_004A0598;
    case 32u: goto L_004A05D0;
    case 33u: goto L_004A060C;
    case 34u: goto L_004A0618;
    case 35u: goto L_004A064C;
    case 36u: goto L_004A0674;
    case 37u: goto L_004A067C;
    case 38u: goto L_004A06A8;
    case 39u: goto L_004A06F0;
    case 40u: goto L_004A06FC;
    case 41u: goto L_004A0728;
    case 42u: goto L_004A0734;
    case 43u: goto L_004A0768;
    case 44u: goto L_004A07B0;
    case 45u: goto L_004A07D0;
    case 46u: goto L_004A0818;
    case 47u: goto L_004A0840;
    case 48u: goto L_004A084C;
    case 49u: goto L_004A086C;
    case 50u: goto L_004A08F0;
    case 51u: goto L_004A0910;
    case 52u: goto L_004A0958;
    case 53u: goto L_004A0980;
    case 54u: goto L_004A098C;
    case 55u: goto L_004A09AC;
    case 56u: goto L_004A0A30;
    case 57u: goto L_004A0A50;
    case 58u: goto L_004A0A6C;
    case 59u: goto L_004A0A90;
    case 60u: goto L_004A0AE8;
    case 61u: goto L_004A0B10;
    case 62u: goto L_004A0B1C;
    case 63u: goto L_004A0B3C;
    case 64u: goto L_004A0BC0;
    case 65u: goto L_004A0BE0;
    case 66u: goto L_004A0BFC;
    case 67u: goto L_004A0C24;
    case 68u: goto L_004A0C38;
    case 69u: goto L_004A0C40;
    case 70u: goto L_004A0C64;
    case 71u: goto L_004A0C6C;
    case 72u: goto L_004A0C90;
    case 73u: goto L_004A0D10;
    case 74u: goto L_004A0D2C;
    case 75u: goto L_004A0D44;
    case 76u: goto L_004A0DC0;
    case 77u: goto L_004A0DDC;
    case 78u: goto L_004A0DF0;
    case 79u: goto L_004A0E70;
    case 80u: goto L_004A0E8C;
    case 81u: goto L_004A0E9C;
    case 82u: goto L_004A0F20;
    case 83u: goto L_004A0F38;
    case 84u: goto L_004A0F40;
    case 85u: goto L_004A0FC0;
    case 86u: goto L_004A0FE0;
    case 87u: goto L_004A0FF8;
    case 88u: goto L_004A1004;
    case 89u: goto L_004A1024;
    case 90u: goto L_004A1080;
    case 91u: goto L_004A10A0;
    case 92u: goto L_004A1148;
    case 93u: goto L_004A1154;
    case 94u: goto L_004A1158;
    case 95u: goto L_004A1174;
    case 96u: goto L_004A1198;
    case 97u: goto L_004A11A4;
    case 98u: goto L_004A126C;
    case 99u: goto L_004A127C;
    case 100u: goto L_004A12C4;
    case 101u: goto L_004A1310;
    case 102u: goto L_004A1330;
    case 103u: goto L_004A1348;
    case 104u: goto L_004A1354;
    case 105u: goto L_004A13D0;
    case 106u: goto L_004A1438;
    case 107u: goto L_004A1454;
    case 108u: goto L_004A1460;
    case 109u: goto L_004A14A0;
    case 110u: goto L_004A1508;
    case 111u: goto L_004A1524;
    case 112u: goto L_004A1530;
    case 113u: goto L_004A1570;
    case 114u: goto L_004A158C;
    case 115u: goto L_004A15AC;
    case 116u: goto L_004A1630;
    case 117u: goto L_004A164C;
    case 118u: goto L_004A166C;
    case 119u: goto L_004A16F0;
    case 120u: goto L_004A1718;
    case 121u: goto L_004A1720;
    case 122u: goto L_004A1748;
    case 123u: goto L_004A17D0;
    case 124u: goto L_004A17F8;
    case 125u: goto L_004A1814;
    case 126u: goto L_004A1820;
    case 127u: goto L_004A1824;
    case 128u: goto L_004A1848;
    case 129u: goto L_004A18D0;
    case 130u: goto L_004A18EC;
    case 131u: goto L_004A18FC;
    case 132u: goto L_004A1980;
    case 133u: goto L_004A19A0;
    case 134u: goto L_004A19C4;
    case 135u: goto L_004A19D0;
    case 136u: goto L_004A1A50;
    case 137u: goto L_004A1B0C;
    case 138u: goto L_004A1B20;
    case 139u: goto L_004A1B74;
    case 140u: goto L_004A1D30;
    case 141u: goto L_004A1E6C;
    case 142u: goto L_004A1E80;
    case 143u: goto L_004A1E88;
    case 144u: goto L_004A1F60;
    case 145u: goto L_004A1FC0;
    case 146u: goto L_004A2000;
    case 147u: goto L_004A2028;
    case 148u: goto L_004A20A4;
    case 149u: goto L_004A20C8;
    case 150u: goto L_004A214C;
    case 151u: goto L_004A21B0;
    case 152u: goto L_004A21F0;
    case 153u: goto L_004A2290;
    case 154u: goto L_004A2390;
    case 155u: goto L_004A23DC;
    case 156u: goto L_004A2430;
    case 157u: goto L_004A2470;
    case 158u: goto L_004A2540;
    case 159u: goto L_004A2574;
    case 160u: goto L_004A25A8;
    case 161u: goto L_004A25E0;
    case 162u: goto L_004A2618;
    case 163u: goto L_004A2650;
    case 164u: goto L_004A268C;
    case 165u: goto L_004A26C0;
    case 166u: goto L_004A26F4;
    case 167u: goto L_004A272C;
    case 168u: goto L_004A2764;
    case 169u: goto L_004A279C;
    case 170u: goto L_004A27D4;
    case 171u: goto L_004A2828;
    case 172u: goto L_004A2830;
    case 173u: goto L_004A2844;
    case 174u: goto L_004A2874;
    case 175u: goto L_004A2880;
    case 176u: goto L_004A2908;
    case 177u: goto L_004A294C;
    case 178u: goto L_004A296C;
    case 179u: goto L_004A29B8;
    case 180u: goto L_004A2A08;
    case 181u: goto L_004A2A80;
    case 182u: goto L_004A2AE4;
    case 183u: goto L_004A2B08;
    case 184u: goto L_004A2B30;
    case 185u: goto L_004A2B70;
    case 186u: goto L_004A2B7C;
    case 187u: goto L_004A2BC0;
    case 188u: goto L_004A2BD8;
    case 189u: goto L_004A2BE4;
    case 190u: goto L_004A2C28;
    case 191u: goto L_004A2CE0;
    case 192u: goto L_004A2D14;
    case 193u: goto L_004A2D40;
    case 194u: goto L_004A2D58;
    case 195u: goto L_004A2D6C;
    case 196u: goto L_004A2D98;
    case 197u: goto L_004A2DB0;
    case 198u: goto L_004A2DDC;
    case 199u: goto L_004A2ED0;
    case 200u: goto L_004A2EE0;
    case 201u: goto L_004A2F18;
    case 202u: goto L_004A2F24;
    case 203u: goto L_004A2F3C;
    case 204u: goto L_004A2F48;
    case 205u: goto L_004A2FD0;
    case 206u: goto L_004A2FFC;
    case 207u: goto L_004A3018;
    case 208u: goto L_004A3040;
    case 209u: goto L_004A3058;
    case 210u: goto L_004A3070;
    case 211u: goto L_004A3098;
    case 212u: goto L_004A30B0;
    case 213u: goto L_004A30E8;
    case 214u: goto L_004A31B0;
    case 215u: goto L_004A31D8;
    case 216u: goto L_004A31F0;
    case 217u: goto L_004A31FC;
    case 218u: goto L_004A3210;
    case 219u: goto L_004A323C;
    case 220u: goto L_004A3248;
    case 221u: goto L_004A325C;
    case 222u: goto L_004A3278;
    case 223u: goto L_004A3294;
    case 224u: goto L_004A32B0;
    case 225u: goto L_004A32E0;
    case 226u: goto L_004A3300;
    case 227u: goto L_004A3330;
    case 228u: goto L_004A3350;
    case 229u: goto L_004A3394;
    case 230u: goto L_004A33A8;
    case 231u: goto L_004A33E0;
    case 232u: goto L_004A3400;
    case 233u: goto L_004A3420;
    case 234u: goto L_004A3450;
    case 235u: goto L_004A345C;
    case 236u: goto L_004A3470;
    case 237u: goto L_004A347C;
    case 238u: goto L_004A3490;
    case 239u: goto L_004A34A8;
    case 240u: goto L_004A34B4;
    case 241u: goto L_004A34D4;
    case 242u: goto L_004A3564;
    case 243u: goto L_004A3584;
    case 244u: goto L_004A3594;
    case 245u: goto L_004A359C;
    case 246u: goto L_004A35C0;
    case 247u: goto L_004A3630;
    case 248u: goto L_004A3660;
    case 249u: goto L_004A3680;
    case 250u: goto L_004A36A0;
    case 251u: goto L_004A36B0;
    case 252u: goto L_004A36C0;
    case 253u: goto L_004A36EC;
    case 254u: goto L_004A3720;
    case 255u: goto L_004A3758;
    case 256u: goto L_004A3770;
    case 257u: goto L_004A3790;
    case 258u: goto L_004A37CC;
    case 259u: goto L_004A3800;
    case 260u: goto L_004A38C8;
    case 261u: goto L_004A3968;
    case 262u: goto L_004A3A78;
    case 263u: goto L_004A3A84;
    case 264u: goto L_004A3A90;
    case 265u: goto L_004A3A9C;
    case 266u: goto L_004A3AA8;
    case 267u: goto L_004A3AB4;
    case 268u: goto L_004A3CC0;
    case 269u: goto L_004A3D0C;
    case 270u: goto L_004A3D18;
    case 271u: goto L_004A3D2C;
    case 272u: goto L_004A3D38;
    case 273u: goto L_004A3D50;
    case 274u: goto L_004A3D74;
    case 275u: goto L_004A3D80;
    case 276u: goto L_004A3DA0;
    case 277u: goto L_004A3DB0;
    case 278u: goto L_004A3DC0;
    case 279u: goto L_004A3DD0;
    case 280u: goto L_004A3E54;
    case 281u: goto L_004A3E74;
    case 282u: goto L_004A3E84;
    case 283u: goto L_004A3EB0;
    case 284u: goto L_004A3EC0;
    case 285u: goto L_004A3EF0;
    case 286u: goto L_004A3F10;
    default: bad_entry(c, 0x004A0000u); return;
    }
L_004A0000:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_004A0068; } }
L_004A0008:
    set32(c.r[6], ld32((c.r[21].w[0] + 8u)));
    c.r[3].d[0] = c.r[8].d[0] & 255ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[7], c.r[3].w[0] << 7);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 4u));
    c.r[3].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A0008u | kUnwind; return; } goto L_004A0008; } }
L_004A0040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A0068; } }
L_004A0048:
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A005Cu); set32(c.r[4], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x004A005Cu) [[unlikely]] return; }
L_004A005C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049FFC8u | kUnwind; return; } [[clang::musttail]] return unit_00A7(c, 252u, depth); } }
    c.budget -= 1;
L_004A0068:
    st8((c.r[21].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004A0090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A00BC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A00B8u); set32(c.r[5], c.r[5].w[0] + 240u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004A00B8u) [[unlikely]] return; }
L_004A00B8:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_004A00BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A00D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A00D0u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004A00D0u) [[unlikely]] return; }
L_004A00D0:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_004A00D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A00DCu); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0082(c, 390u, depth + 1u); else { c.pc = 0x0040BFC0u; return; } if (c.pc != 0x004A00DCu) [[unlikely]] return; }
L_004A00DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A00F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004A0120; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004A0120; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0120u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004A0120u) [[unlikely]] return; }
L_004A0120:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A0140:
    set32(c.r[29], c.r[29].w[0] - 208u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[18], c.r[18].w[0] - 29104u);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = ld32((c.r[29].w[0] + 172u));
    c.budget -= 23;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004A0230; } }
L_004A019C:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[19].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[19].w[0]);
    set32(c.r[17], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A01BCu); set32(c.r[5], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x004A01BCu) [[unlikely]] return; }
L_004A01BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A0218; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[21].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[21].w[0] + 48u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 8u));
    st16((c.r[21].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 10u));
    st16((c.r[21].w[0] + 54u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[21].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[21].w[0] + 60u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 20u));
    st16((c.r[21].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 22u));
    st16((c.r[21].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 24u));
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004A0230; } }
L_004A0218:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A019Cu | kUnwind; return; } goto L_004A019C; } }
    c.budget -= 1;
L_004A0230:
    set32(c.r[23], c.r[29].w[0] + 204u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st32((c.r[29].w[0] + 200u), 0u);
    set32(c.r[2], c.r[2].w[0] - 29104u);
    st32((c.r[23].w[0]), 0u);
    c.r[3].d[0] = ld16((c.r[21].w[0] + 64u));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 196u);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A026Cu); st32((c.r[6].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0083(c, 14u, depth + 1u); else { c.pc = 0x0040C1A0u; return; } if (c.pc != 0x004A026Cu) [[unlikely]] return; }
L_004A026C:
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0278u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_0082(c, 357u, depth + 1u); else { c.pc = 0x0040BA70u; return; } if (c.pc != 0x004A0278u) [[unlikely]] return; }
L_004A0278:
    st8((c.r[21].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 4u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 15u);
    set32(c.r[3], c.r[3].w[0] >> 4);
    st32((c.r[21].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = ld8((c.r[21].w[0] + 4u));  if (t) { goto L_004A02B0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A02ACu); set32(c.r[5], c.r[5].w[0] + 240u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004A02ACu) [[unlikely]] return; }
L_004A02AC:
    st32((c.r[21].w[0] + 8u), 0u);
    c.budget -= 1;
L_004A02B0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004A0428; } }
L_004A02B8:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = ld8((c.r[21].w[0] + 4u));  if (t) { goto L_004A02D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A02CCu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004A02CCu) [[unlikely]] return; }
L_004A02CC:
    st32((c.r[21].w[0] + 12u), 0u);
    c.budget -= 1;
L_004A02D0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004A045C; } }
L_004A02D8:
    c.r[6].d[0] = ld8((c.r[21].w[0] + 4u));
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_004A0400; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x471C0000u);
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    set32(c.r[5], c.r[29].w[0] + 180u);
    c.f[21] = c.r[3].w[0];
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x473D0000u);
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[4].d[0] | 4096ull;
    c.f[22] = c.r[3].w[0];
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_004A0400; } }
L_004A0320:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.r[17].d[0] = c.r[20].d[0] & 255ull;
    set32(c.r[16], c.r[17].w[0] << 7);
    set32(c.r[3], c.r[21].w[0] + 44u);
    set32(c.r[2], c.r[21].w[0] + 16u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[4].w[0] + c.r[16].w[0]);
    st32((c.r[18].w[0] + 44u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 124u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 124u)));
    c.r[22].d[0] = ld16((c.r[2].w[0] + 20u));
    c.budget -= 12;
L_004A0350:
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A035Cu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 351u, depth + 1u); else { c.pc = 0x0040B900u; return; } if (c.pc != 0x004A035Cu) [[unlikely]] return; }
L_004A035C:
    set32(c.r[3], c.r[19].w[0] << 1);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] >> 16);
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[7], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 60u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A0350u | kUnwind; return; } goto L_004A0350; } }
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[3], c.r[20].w[0] + 1u);
    c.r[20].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[4], c.r[17].w[0] << 2);
    st32((c.r[18].w[0] + 112u), c.f[0]);
    st32((c.r[18].w[0] + 116u), c.f[22]);
    st32((c.r[18].w[0] + 120u), c.f[21]);
    st32((c.r[18].w[0] + 80u), 0u);
    st32((c.r[18].w[0] + 84u), 0u);
    st32((c.r[18].w[0] + 88u), 0u);
    st32((c.r[18].w[0] + 92u), c.f[20]);
    st32((c.r[18].w[0] + 96u), 0u);
    st32((c.r[18].w[0] + 100u), 0u);
    st32((c.r[18].w[0] + 104u), 0u);
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 4u));
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A0320u | kUnwind; return; } goto L_004A0320; } }
L_004A0400:
    set32(c.r[3], ld32((c.r[23].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A046C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A041C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A041Cu); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004A041Cu) [[unlikely]] return; }
L_004A041C:
    st32((c.r[23].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_004A0470; } }
L_004A0428:
    set32(c.r[2], c.r[16].w[0] << 7);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0434u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004A0434u) [[unlikely]] return; }
L_004A0434:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1200u);
    set32(c.r[6], c.r[6].w[0] + 240u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0454u); set32(c.r[7], 0u + 128u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004A0454u) [[unlikely]] return; }
L_004A0454:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A02B8u | kUnwind; return; } goto L_004A02B8; } }
L_004A045C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0464u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004A0464u) [[unlikely]] return; }
L_004A0464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A02D8u | kUnwind; return; } goto L_004A02D8; } }
L_004A046C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_004A0470:
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_004A04B0:
    st32((c.r[4].w[0] + 120u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004A04D0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A050Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0088(c, 151u, depth + 1u); else { c.pc = 0x00420780u; return; } if (c.pc != 0x004A050Cu) [[unlikely]] return; }
L_004A050C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A0778; } }
    c.f[0] = ld32((c.r[19].w[0]));
    st32((c.r[29].w[0] + 144u), 0u);
    c.f[1] = 0u;
    st32((c.r[29].w[0] + 148u), 0u);
    set32(c.r[3], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 152u), 0u);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004A053C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004A053C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A055C; } }
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004A055C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004A055C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A057C; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004A057C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004A057C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A0664; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[21], c.r[29].w[0] + 164u);
    set32(c.r[16], c.r[29].w[0] + 168u);
    c.budget -= 4;
L_004A0598:
    set32(c.r[2], c.r[17].w[0] + 3u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A05D0u); st32((c.r[21].w[0]), c.f[1]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004A05D0u) [[unlikely]] return; }
L_004A05D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[2].d[0] | 4059ull;
    c.f[1] = c.r[4].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[21] = ld32((c.r[29].w[0] + 160u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[2] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A060Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004A060Cu) [[unlikely]] return; }
L_004A060C:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0618u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004A0618u) [[unlikely]] return; }
L_004A0618:
    c.f[2] = ld32((c.r[16].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.f[3] = ld32((c.r[29].w[0] + 160u));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[1] = c.f[0] ^ fp::kSign;
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[20]);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A064Cu); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_007D(c, 23u, depth + 1u); else { c.pc = 0x003F41E0u; return; } if (c.pc != 0x004A064Cu) [[unlikely]] return; }
L_004A064C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A0598u | kUnwind; return; } goto L_004A0598; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A0778; } }
L_004A0664:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[29].w[0] + 132u);
    set32(c.r[17], c.r[29].w[0] + 136u);
    c.budget -= 4;
L_004A0674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A067Cu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004A067Cu) [[unlikely]] return; }
L_004A067C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A06A8u); c.f[22] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004A06A8u) [[unlikely]] return; }
L_004A06A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    st32((c.r[29].w[0] + 128u), 0u);
    c.f[3] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    set32(c.r[2], c.r[18].w[0] + 3u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[20] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    c.f[23] = fp::cvt_s_w(c.f[1]);
    c.f[12] = c.f[20];
    st32((c.r[16].w[0]), c.f[23]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A06F0u); st32((c.r[17].w[0]), c.f[23]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004A06F0u) [[unlikely]] return; }
L_004A06F0:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A06FCu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004A06FCu) [[unlikely]] return; }
L_004A06FC:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 128u));
    c.f[12] = c.f[22];
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[23], c.f[0]);
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0728u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004A0728u) [[unlikely]] return; }
L_004A0728:
    c.f[12] = c.f[22];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0734u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004A0734u) [[unlikely]] return; }
L_004A0734:
    c.f[2] = ld32((c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.f[3] = ld32((c.r[29].w[0] + 128u));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[1] = c.f[0] ^ fp::kSign;
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[20]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0768u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_007D(c, 23u, depth + 1u); else { c.pc = 0x003F41E0u; return; } if (c.pc != 0x004A0768u) [[unlikely]] return; }
L_004A0768:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A0674u | kUnwind; return; } goto L_004A0674; } }
L_004A0778:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004A07B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A07D0u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0088(c, 151u, depth + 1u); else { c.pc = 0x00420780u; return; } if (c.pc != 0x004A07D0u) [[unlikely]] return; }
L_004A07D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A08D8; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 31104u)));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 31102u));
    set32(c.r[3], ld32((c.r[16].w[0] + 344u)));
    st16((c.r[29].w[0] + 92u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[29].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004A0874; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1578u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A0808; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_004A0808:
    set32(c.r[2], ld32((c.r[16].w[0] + 348u)));
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_004A0818:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    c.f[6] = ld32((c.r[3].w[0] + 56u));
    set32(c.r[2], ld32((c.r[2].w[0] - 29024u)));
    c.f[5] = ld32((c.r[3].w[0] + 52u));
    c.f[4] = ld32((c.r[3].w[0] + 48u));
    st32((c.r[29].w[0] + 64u), c.f[4]);
    st32((c.r[29].w[0] + 68u), c.f[5]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 72u), c.f[6]);  if (t) { goto L_004A0880; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 1;
L_004A0840:
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A084Cu); set32(c.r[6], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_007C(c, 229u, depth + 1u); else { c.pc = 0x003F3C70u; return; } if (c.pc != 0x004A084Cu) [[unlikely]] return; }
L_004A084C:
    c.f[0] = ld32((c.r[28].w[0] - 31100u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 88u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A086Cu); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_00A8(c, 257u, depth + 1u); else { c.pc = 0x004A3790u; return; } if (c.pc != 0x004A086Cu) [[unlikely]] return; }
L_004A086C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004A08E0; } }
L_004A0874:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 29072u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A0818u | kUnwind; return; } goto L_004A0818; } }
L_004A0880:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[3] = ld32((c.r[2].w[0] + 2432u));
    c.f[2] = ld32((c.r[3].w[0] + 2436u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[2].w[0] + 2440u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44C80000u);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[5], c.f[2]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[6], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 56u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    st32((c.r[29].w[0] + 48u), c.f[3]);
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 52u), c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A084Cu | kUnwind; return; } goto L_004A084C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A0840u | kUnwind; return; } goto L_004A0840; } }
L_004A08D8:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_004A08E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004A08F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0910u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0088(c, 151u, depth + 1u); else { c.pc = 0x00420780u; return; } if (c.pc != 0x004A0910u) [[unlikely]] return; }
L_004A0910:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A0A18; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 31112u)));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 31110u));
    set32(c.r[3], ld32((c.r[16].w[0] + 344u)));
    st16((c.r[29].w[0] + 92u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[29].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004A09B4; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1578u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A0948; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_004A0948:
    set32(c.r[2], ld32((c.r[16].w[0] + 348u)));
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_004A0958:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    c.f[6] = ld32((c.r[3].w[0] + 56u));
    set32(c.r[2], ld32((c.r[2].w[0] - 29024u)));
    c.f[5] = ld32((c.r[3].w[0] + 52u));
    c.f[4] = ld32((c.r[3].w[0] + 48u));
    st32((c.r[29].w[0] + 64u), c.f[4]);
    st32((c.r[29].w[0] + 68u), c.f[5]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 72u), c.f[6]);  if (t) { goto L_004A09C0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 1;
L_004A0980:
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A098Cu); set32(c.r[6], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_007C(c, 229u, depth + 1u); else { c.pc = 0x003F3C70u; return; } if (c.pc != 0x004A098Cu) [[unlikely]] return; }
L_004A098C:
    c.f[0] = ld32((c.r[28].w[0] - 31108u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 88u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A09ACu); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_00A8(c, 257u, depth + 1u); else { c.pc = 0x004A3790u; return; } if (c.pc != 0x004A09ACu) [[unlikely]] return; }
L_004A09AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004A0A20; } }
L_004A09B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 29072u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A0958u | kUnwind; return; } goto L_004A0958; } }
L_004A09C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[3] = ld32((c.r[2].w[0] + 2432u));
    c.f[2] = ld32((c.r[3].w[0] + 2436u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[2].w[0] + 2440u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44C80000u);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[5], c.f[2]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[6], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 56u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    st32((c.r[29].w[0] + 48u), c.f[3]);
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 52u), c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A098Cu | kUnwind; return; } goto L_004A098C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A0980u | kUnwind; return; } goto L_004A0980; } }
L_004A0A18:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_004A0A20:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004A0A30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0A50u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0088(c, 151u, depth + 1u); else { c.pc = 0x00420780u; return; } if (c.pc != 0x004A0A50u) [[unlikely]] return; }
L_004A0A50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A0A74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0A6Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 166u, depth + 1u); else { c.pc = 0x00493F70u; return; } if (c.pc != 0x004A0A6Cu) [[unlikely]] return; }
L_004A0A6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004A0A7C; } }
L_004A0A74:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_004A0A7C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A0A90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], ld32((c.r[5].w[0] + 344u)));
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 31120u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[28].w[0] - 31118u));
    st16((c.r[29].w[0] + 92u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[29].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004A0B44; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1578u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A0AD8; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_004A0AD8:
    set32(c.r[2], ld32((c.r[16].w[0] + 348u)));
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_004A0AE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    c.f[6] = ld32((c.r[3].w[0] + 56u));
    set32(c.r[2], ld32((c.r[2].w[0] - 29024u)));
    c.f[5] = ld32((c.r[3].w[0] + 52u));
    c.f[4] = ld32((c.r[3].w[0] + 48u));
    st32((c.r[29].w[0] + 64u), c.f[4]);
    st32((c.r[29].w[0] + 68u), c.f[5]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 72u), c.f[6]);  if (t) { goto L_004A0B50; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 1;
L_004A0B10:
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0B1Cu); set32(c.r[6], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_007C(c, 229u, depth + 1u); else { c.pc = 0x003F3C70u; return; } if (c.pc != 0x004A0B1Cu) [[unlikely]] return; }
L_004A0B1C:
    c.f[0] = ld32((c.r[28].w[0] - 31116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 88u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0B3Cu); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_00A8(c, 257u, depth + 1u); else { c.pc = 0x004A3790u; return; } if (c.pc != 0x004A0B3Cu) [[unlikely]] return; }
L_004A0B3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004A0BA8; } }
L_004A0B44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 29072u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A0AE8u | kUnwind; return; } goto L_004A0AE8; } }
L_004A0B50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[3] = ld32((c.r[2].w[0] + 2432u));
    c.f[2] = ld32((c.r[3].w[0] + 2436u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[2].w[0] + 2440u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44C80000u);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[5], c.f[2]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[6], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 56u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    st32((c.r[29].w[0] + 48u), c.f[3]);
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 52u), c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A0B1Cu | kUnwind; return; } goto L_004A0B1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A0B10u | kUnwind; return; } goto L_004A0B10; } }
L_004A0BA8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004A0BC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { set32(c.r[4], c.r[4].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00493F70u | kUnwind; return; } [[clang::musttail]] return unit_00A4(c, 166u, depth); }
L_004A0BE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A0C98; } }
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 1;
L_004A0BFC:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(39ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004A0CFC; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 29008u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x004A0000u < 16384u) { entry = entries_00A8[(t - 0x004A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004A0C24:
    set32(c.r[6], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 52u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0C38u); st32((c.r[29].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 29u, depth + 1u); else { c.pc = 0x004A04D0u; return; } if (c.pc != 0x004A0C38u) [[unlikely]] return; }
L_004A0C38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A0C90; } }
L_004A0C40:
    set32(c.r[4], c.r[4].w[0] + 528u);
    set32(c.r[6], 0u + 17u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0C64u); st32((c.r[29].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_00A7(c, 162u, depth + 1u); else { c.pc = 0x0049EB80u; return; } if (c.pc != 0x004A0C64u) [[unlikely]] return; }
L_004A0C64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A0C90; } }
L_004A0C6C:
    set32(c.r[4], c.r[4].w[0] + 528u);
    set32(c.r[6], 0u + 18u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 20u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0C90u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00A7(c, 162u, depth + 1u); else { c.pc = 0x0049EB80u; return; } if (c.pc != 0x004A0C90u) [[unlikely]] return; }
L_004A0C90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004A0D00; } }
L_004A0C98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[5] = ld32((c.r[3].w[0] + 2440u));
    c.f[6] = ld32((c.r[5].w[0] + 8u));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[3] = ld32((c.r[3].w[0] + 2436u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    st32((c.r[29].w[0] + 72u), c.f[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[3].w[0] + 2432u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44C80000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 68u), c.f[3]);  if (t) { goto L_004A0CFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[6].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A0BFCu | kUnwind; return; } goto L_004A0BFC; } }
L_004A0CFC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004A0D00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004A0D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A0D4C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EA80000u);
    c.budget -= 1;
L_004A0D2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.r[3].d[0] = c.r[3].d[0] | 62915ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0D44u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 82u, depth + 1u); else { c.pc = 0x003F48F0u; return; } if (c.pc != 0x004A0D44u) [[unlikely]] return; }
L_004A0D44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004A0DB4; } }
L_004A0D4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[5] = ld32((c.r[3].w[0] + 2440u));
    c.f[6] = ld32((c.r[5].w[0] + 8u));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[3] = ld32((c.r[3].w[0] + 2436u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    st32((c.r[29].w[0] + 24u), c.f[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[3].w[0] + 2432u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44C80000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 16u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 20u), c.f[3]);  if (t) { goto L_004A0DB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3EA80000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A0D2Cu | kUnwind; return; } goto L_004A0D2C; } }
L_004A0DB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004A0DB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A0DC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A0DF8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 1;
L_004A0DDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0DF0u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 82u, depth + 1u); else { c.pc = 0x003F48F0u; return; } if (c.pc != 0x004A0DF0u) [[unlikely]] return; }
L_004A0DF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004A0E60; } }
L_004A0DF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[5] = ld32((c.r[3].w[0] + 2440u));
    c.f[6] = ld32((c.r[5].w[0] + 8u));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[3] = ld32((c.r[3].w[0] + 2436u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    st32((c.r[29].w[0] + 24u), c.f[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[3].w[0] + 2432u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44C80000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 16u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 20u), c.f[3]);  if (t) { goto L_004A0E5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A0DDCu | kUnwind; return; } goto L_004A0DDC; } }
L_004A0E5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004A0E60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A0E70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.f[13] = c.f[12];  if (t) { goto L_004A0EA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_004A0E8C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0E9Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[13]);  if (depth < kMaxDepth) unit_007D(c, 70u, depth + 1u); else { c.pc = 0x003F46E0u; return; } if (c.pc != 0x004A0E9Cu) [[unlikely]] return; }
L_004A0E9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004A0F0C; } }
L_004A0EA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[5] = ld32((c.r[3].w[0] + 2440u));
    c.f[6] = ld32((c.r[5].w[0] + 8u));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[3] = ld32((c.r[3].w[0] + 2436u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    st32((c.r[29].w[0] + 24u), c.f[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[3].w[0] + 2432u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44C80000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 16u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 20u), c.f[3]);  if (t) { goto L_004A0F08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A0E8Cu | kUnwind; return; } goto L_004A0E8C; } }
L_004A0F08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004A0F0C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A0F20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A0F48; } }
L_004A0F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0F40u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007C(c, 229u, depth + 1u); else { c.pc = 0x003F3C70u; return; } if (c.pc != 0x004A0F40u) [[unlikely]] return; }
L_004A0F40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004A0FB0; } }
L_004A0F48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[5] = ld32((c.r[3].w[0] + 2440u));
    c.f[6] = ld32((c.r[5].w[0] + 8u));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[3] = ld32((c.r[3].w[0] + 2436u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    st32((c.r[29].w[0] + 24u), c.f[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[3].w[0] + 2432u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44C80000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 16u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 20u), c.f[3]);  if (t) { goto L_004A0FAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A0F38u | kUnwind; return; } goto L_004A0F38; } }
L_004A0FAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004A0FB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A0FC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A100C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 1;
L_004A0FE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0FF8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 78u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x004A0FF8u) [[unlikely]] return; }
L_004A0FF8:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1004u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 39u, depth + 1u); else { c.pc = 0x003F4360u; return; } if (c.pc != 0x004A1004u) [[unlikely]] return; }
L_004A1004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004A1074; } }
L_004A100C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[5] = ld32((c.r[3].w[0] + 2440u));
    c.f[6] = ld32((c.r[16].w[0] + 8u));
    c.f[4] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 6;
L_004A1024:
    c.f[3] = ld32((c.r[3].w[0] + 2436u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    st32((c.r[29].w[0] + 40u), c.f[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[3].w[0] + 2432u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44C80000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 32u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 36u), c.f[3]);  if (t) { goto L_004A1070; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A0FE0u | kUnwind; return; } goto L_004A0FE0; } }
L_004A1070:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004A1074:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A1080:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[7] = ld32((c.r[29].w[0] + 44u));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A11AC; } }
L_004A10A0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_004A129C; } }
    c.r[4].d[0] = ld16((c.r[6].w[0] + 380u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 344u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 48u));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = c.r[4].d[0] >> 57;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004A10DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[5].w[0] + 60u));  if (t) { goto L_004A10E0; } }
L_004A10DC:
    set32(c.r[5], 0u + 60u);
    c.budget -= 1;
L_004A10E0:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A1210; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] + 14976u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));  if (t) { goto L_004A1290; } }
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_004A1120; } }
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 2;
L_004A1120:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004A1138; } }
    c.r[7].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_004A1138:
    set32(c.r[2], ld32((c.r[6].w[0] + 348u)));
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_004A1148:
    set32(c.r[4], c.r[6].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1154u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0032(c, 15u, depth + 1u); else { c.pc = 0x002C8480u; return; } if (c.pc != 0x004A1154u) [[unlikely]] return; }
L_004A1154:
    c.f[3] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004A1158:
    c.f[2] = ld32((c.r[29].w[0] + 68u));
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[29].w[0] + 128u), c.f[3]);
    st32((c.r[29].w[0] + 132u), c.f[2]);
    st32((c.r[29].w[0] + 136u), c.f[1]);
    st32((c.r[29].w[0] + 140u), c.f[0]);
    c.budget -= 7;
L_004A1174:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1198u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_007C(c, 201u, depth + 1u); else { c.pc = 0x003F3760u; return; } if (c.pc != 0x004A1198u) [[unlikely]] return; }
L_004A1198:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A11A4u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_007D(c, 37u, depth + 1u); else { c.pc = 0x003F4330u; return; } if (c.pc != 0x004A11A4u) [[unlikely]] return; }
L_004A11A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004A1300; } }
L_004A11AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[5] = ld32((c.r[3].w[0] + 2440u));
    c.f[6] = ld32((c.r[16].w[0] + 40u));
    c.f[4] = ld32((c.r[16].w[0] + 36u));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[3] = ld32((c.r[3].w[0] + 2436u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    st32((c.r[29].w[0] + 56u), c.f[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[3].w[0] + 2432u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44C80000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 52u), c.f[3]);  if (t) { goto L_004A12FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A10A0u | kUnwind; return; } goto L_004A10A0; } }
L_004A1210:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 1536u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] + 14976u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));  if (t) { goto L_004A1284; } }
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_004A1244; } }
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 2;
L_004A1244:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004A125C; } }
    c.r[5].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_004A125C:
    set32(c.r[2], ld32((c.r[6].w[0] + 348u)));
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_004A126C:
    set32(c.r[4], c.r[6].w[0] + 1536u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A127Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 17u, depth + 1u); else { c.pc = 0x002C8540u; return; } if (c.pc != 0x004A127Cu) [[unlikely]] return; }
L_004A127C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = ld32((c.r[29].w[0] + 64u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A1158u | kUnwind; return; } goto L_004A1158; } }
L_004A1284:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 29072u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A126Cu | kUnwind; return; } goto L_004A126C; } }
L_004A1290:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - 29072u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A1148u | kUnwind; return; } goto L_004A1148; } }
L_004A129C:
    set32(c.r[3], ld32((c.r[16].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 348u)));  if (t) { goto L_004A12F4; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1577u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A12C0; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_004A12C0:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 1;
L_004A12C4:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[29].w[0] + 132u), c.f[2]);
    st32((c.r[29].w[0] + 136u), c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 140u), c.f[7]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A1174u | kUnwind; return; } goto L_004A1174; } }
L_004A12F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A12C4u | kUnwind; return; } goto L_004A12C4; } }
L_004A12FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004A1300:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004A1310:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A135C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 1;
L_004A1330:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1348u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 74u, depth + 1u); else { c.pc = 0x003F4790u; return; } if (c.pc != 0x004A1348u) [[unlikely]] return; }
L_004A1348:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1354u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 39u, depth + 1u); else { c.pc = 0x003F4360u; return; } if (c.pc != 0x004A1354u) [[unlikely]] return; }
L_004A1354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004A13C4; } }
L_004A135C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[5] = ld32((c.r[3].w[0] + 2440u));
    c.f[6] = ld32((c.r[16].w[0] + 8u));
    c.f[4] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[3] = ld32((c.r[3].w[0] + 2436u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    st32((c.r[29].w[0] + 40u), c.f[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[3].w[0] + 2432u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44C80000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 32u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 36u), c.f[3]);  if (t) { goto L_004A13C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A1330u | kUnwind; return; } goto L_004A1330; } }
L_004A13C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004A13C4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A13D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[4] = ld32((c.r[3].w[0] + 2440u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[5] = ld32((c.r[5].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[2] = ld32((c.r[3].w[0] + 2436u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[29].w[0] + 40u), c.f[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = ld32((c.r[3].w[0] + 2432u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 29024u)));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    st32((c.r[29].w[0] + 36u), c.f[2]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.budget -= 25;
    { const bool t = c.r[3].d[0] == 0ull; c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);  if (t) { goto L_004A1468; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 1;
L_004A1438:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EB30000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1454u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 86u, depth + 1u); else { c.pc = 0x003F49A0u; return; } if (c.pc != 0x004A1454u) [[unlikely]] return; }
L_004A1454:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1460u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 39u, depth + 1u); else { c.pc = 0x003F4360u; return; } if (c.pc != 0x004A1460u) [[unlikely]] return; }
L_004A1460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004A148C; } }
L_004A1468:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44C80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004A1488; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A1438u | kUnwind; return; } goto L_004A1438; } }
L_004A1488:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004A148C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A14A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[4] = ld32((c.r[3].w[0] + 2440u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[5] = ld32((c.r[5].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[2] = ld32((c.r[3].w[0] + 2436u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[29].w[0] + 40u), c.f[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = ld32((c.r[3].w[0] + 2432u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 29024u)));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    st32((c.r[29].w[0] + 36u), c.f[2]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.budget -= 25;
    { const bool t = c.r[3].d[0] == 0ull; c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);  if (t) { goto L_004A1538; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 1;
L_004A1508:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1524u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 86u, depth + 1u); else { c.pc = 0x003F49A0u; return; } if (c.pc != 0x004A1524u) [[unlikely]] return; }
L_004A1524:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1530u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 39u, depth + 1u); else { c.pc = 0x003F4360u; return; } if (c.pc != 0x004A1530u) [[unlikely]] return; }
L_004A1530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004A155C; } }
L_004A1538:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44C80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004A1558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A1508u | kUnwind; return; } goto L_004A1508; } }
L_004A1558:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004A155C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A1570:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A15B4; } }
    set32(c.r[4], c.r[4].w[0] + 528u);
    c.budget -= 1;
L_004A158C:
    set32(c.r[6], 0u + 15u);
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 20u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A15ACu); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00A7(c, 162u, depth + 1u); else { c.pc = 0x0049EB80u; return; } if (c.pc != 0x004A15ACu) [[unlikely]] return; }
L_004A15AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004A161C; } }
L_004A15B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[5] = ld32((c.r[3].w[0] + 2440u));
    c.f[6] = ld32((c.r[5].w[0] + 8u));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[3] = ld32((c.r[3].w[0] + 2436u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    st32((c.r[29].w[0] + 40u), c.f[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[3].w[0] + 2432u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44C80000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 32u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 36u), c.f[3]);  if (t) { goto L_004A1618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 528u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A158Cu | kUnwind; return; } goto L_004A158C; } }
L_004A1618:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004A161C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A1630:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A1674; } }
    set32(c.r[4], c.r[4].w[0] + 528u);
    c.budget -= 1;
L_004A164C:
    set32(c.r[6], 0u + 21u);
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 20u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A166Cu); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00A7(c, 162u, depth + 1u); else { c.pc = 0x0049EB80u; return; } if (c.pc != 0x004A166Cu) [[unlikely]] return; }
L_004A166C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004A16DC; } }
L_004A1674:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[5] = ld32((c.r[3].w[0] + 2440u));
    c.f[6] = ld32((c.r[5].w[0] + 8u));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[3] = ld32((c.r[3].w[0] + 2436u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    st32((c.r[29].w[0] + 40u), c.f[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[3].w[0] + 2432u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44C80000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 32u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 36u), c.f[3]);  if (t) { goto L_004A16D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 528u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A164Cu | kUnwind; return; } goto L_004A164C; } }
L_004A16D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004A16DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A16F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A1750; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 1;
L_004A1718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1720u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 39u, depth + 1u); else { c.pc = 0x003F4360u; return; } if (c.pc != 0x004A1720u) [[unlikely]] return; }
L_004A1720:
    set32(c.r[4], c.r[17].w[0] + 528u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 14u);
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 52u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1748u); st32((c.r[29].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_00A7(c, 162u, depth + 1u); else { c.pc = 0x0049EB80u; return; } if (c.pc != 0x004A1748u) [[unlikely]] return; }
L_004A1748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004A17B8; } }
L_004A1750:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[5] = ld32((c.r[3].w[0] + 2440u));
    c.f[6] = ld32((c.r[16].w[0] + 8u));
    c.f[4] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[3] = ld32((c.r[3].w[0] + 2436u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    st32((c.r[29].w[0] + 72u), c.f[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[3].w[0] + 2432u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44C80000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 68u), c.f[3]);  if (t) { goto L_004A17B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A1718u | kUnwind; return; } goto L_004A1718; } }
L_004A17B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004A17B8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004A17D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A1850; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 1;
L_004A17F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1814u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 78u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x004A1814u) [[unlikely]] return; }
L_004A1814:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1820u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 39u, depth + 1u); else { c.pc = 0x003F4360u; return; } if (c.pc != 0x004A1820u) [[unlikely]] return; }
L_004A1820:
    set32(c.r[4], c.r[17].w[0] + 528u);
    c.budget -= 1;
L_004A1824:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 14u);
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 52u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1848u); st32((c.r[29].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_00A7(c, 162u, depth + 1u); else { c.pc = 0x0049EB80u; return; } if (c.pc != 0x004A1848u) [[unlikely]] return; }
L_004A1848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004A18B8; } }
L_004A1850:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[5] = ld32((c.r[3].w[0] + 2440u));
    c.f[6] = ld32((c.r[16].w[0] + 8u));
    c.f[4] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[3] = ld32((c.r[3].w[0] + 2436u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    st32((c.r[29].w[0] + 72u), c.f[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[3].w[0] + 2432u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44C80000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 68u), c.f[3]);  if (t) { goto L_004A18B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A17F8u | kUnwind; return; } goto L_004A17F8; } }
L_004A18B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004A18B8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004A18D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A1904; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 1;
L_004A18EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A18FCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_007D(c, 86u, depth + 1u); else { c.pc = 0x003F49A0u; return; } if (c.pc != 0x004A18FCu) [[unlikely]] return; }
L_004A18FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004A196C; } }
L_004A1904:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[5] = ld32((c.r[3].w[0] + 2440u));
    c.f[6] = ld32((c.r[5].w[0] + 8u));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[3] = ld32((c.r[3].w[0] + 2436u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    st32((c.r[29].w[0] + 24u), c.f[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[3].w[0] + 2432u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44C80000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 16u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 20u), c.f[3]);  if (t) { goto L_004A1968; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A18ECu | kUnwind; return; } goto L_004A18EC; } }
L_004A1968:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004A196C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A1980:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A19D8; } }
    set32(c.r[4], c.r[4].w[0] + 528u);
    c.budget -= 1;
L_004A19A0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 13u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A19C4u); st32((c.r[29].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_00A7(c, 162u, depth + 1u); else { c.pc = 0x0049EB80u; return; } if (c.pc != 0x004A19C4u) [[unlikely]] return; }
L_004A19C4:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A19D0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 43u, depth + 1u); else { c.pc = 0x003F43C0u; return; } if (c.pc != 0x004A19D0u) [[unlikely]] return; }
L_004A19D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004A1A40; } }
L_004A19D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[5] = ld32((c.r[3].w[0] + 2440u));
    c.f[6] = ld32((c.r[16].w[0] + 8u));
    c.f[4] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[3] = ld32((c.r[3].w[0] + 2436u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    st32((c.r[29].w[0] + 56u), c.f[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[3].w[0] + 2432u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44C80000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 52u), c.f[3]);  if (t) { goto L_004A1A3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 528u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A19A0u | kUnwind; return; } goto L_004A19A0; } }
L_004A1A3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004A1A40:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004A1A50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[9], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[9].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A1CB4; } }
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[10].d[0] = c.r[9].d[0] << 34;
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.r[10].d[0] = c.r[10].d[0] >> 34;
    c.r[9].d[0] = ld16((c.r[10].w[0] + 6u));
    c.f[5] = ld32((c.r[4].w[0] + 4u));
    c.f[4] = ld32((c.r[4].w[0] + 20u));
    set32(c.r[2], ld32((c.r[10].w[0])));
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.f[2] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[13]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[4], c.f[13]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[13]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 28;
    { const bool t = c.r[7].d[0] == 0ull; st32((c.r[2].w[0] + 8u), c.f[0]);  if (t) { goto L_004A1CB4; } }
    set32(c.r[9], ld32((c.r[10].w[0])));
    c.r[7].d[0] = ld16((c.r[10].w[0] + 6u));
    set32(c.r[9], c.r[9].w[0] + 328u);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[9].w[0] + 3u));
    c.budget -= 8;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_004A1B28; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A1CE8; } }
L_004A1B0C:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[5].d[0] = c.r[2].d[0] << 34;
    set32(c.r[4], c.r[8].w[0] + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1B20u); c.r[5].d[0] = c.r[5].d[0] >> 34;  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x004A1B20u) [[unlikely]] return; }
L_004A1B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004A1D18; } }
L_004A1B28:
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A1CBC; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_004A1B74; } }
    c.r[3].d[0] = ld8((c.r[9].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004A1B74:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_004A1BC4; } }
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_004A1B94; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004A1BB0; } }
L_004A1B94:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004A1BB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 28u), c.f[0]);
    c.budget -= 5;
L_004A1BC4:
    c.r[3].d[0] = ld8((c.r[9].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_004A1BDC; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004A1BF8; } }
L_004A1BDC:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004A1BF8:
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 12u));
    c.f[1] = ld32((c.r[4].w[0] + 28u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[5].sd[0] < 0; c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);  if (t) { goto L_004A1C34; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004A1C50; } }
L_004A1C34:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004A1C50:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C000000u);
    c.r[6].d[0] = 0ull | 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.f[0] = c.r[3].w[0];
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    set32(c.r[3], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 16);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 25;
L_004A1CB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004A1D18; } }
L_004A1CBC:
    c.r[6].d[0] = ld8((c.r[9].w[0] + 3u));
    set32(c.r[3], 0u + 64u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A1B74u | kUnwind; return; } goto L_004A1B74; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A1B74u | kUnwind; return; } goto L_004A1B74; } }
L_004A1CE8:
    c.r[2].d[0] = c.r[5].d[0] << 34;
    set32(c.r[6], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 34;
    c.r[5].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A1B0Cu | kUnwind; return; } goto L_004A1B0C; } }
L_004A1D18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004A1D30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A1F44; } }
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.r[7].d[0] = c.r[3].d[0] << 34;
    c.r[7].d[0] = c.r[7].d[0] >> 34;
    c.r[3].d[0] = ld16((c.r[7].w[0] + 6u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[2], c.f[15]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[15]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[15]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 22;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[2].w[0] + 8u), c.f[0]);  if (t) { goto L_004A1E88; } }
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[12]);
    st32((c.r[4].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[12]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[12]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.f[3] = ld32((c.r[4].w[0] + 4u));
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[14]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    set32(c.r[5], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 41;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A1E4C; } }
    set32(c.r[3], 0u + 128u);
    c.budget -= 1;
L_004A1E4C:
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004A1E90; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A1F14; } }
L_004A1E6C:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[5].d[0] = c.r[2].d[0] << 34;
    set32(c.r[4], c.r[6].w[0] + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1E80u); c.r[5].d[0] = c.r[5].d[0] >> 34;  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x004A1E80u) [[unlikely]] return; }
L_004A1E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004A1F48; } }
L_004A1E88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004A1F48; } }
L_004A1E90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.f[0] = c.r[2].w[0];
    c.r[6].d[0] = 0ull | 0ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.r[2].d[0] = ld16((c.r[7].w[0] + 6u));
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    set32(c.r[3], c.r[3].w[0] + 328u);
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[13], c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], c.f[0]);
    c.r[3].d[0] = ld16((c.r[7].w[0] + 6u));
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    set32(c.r[3], c.r[4].w[0] << 16);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 33;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A1E88u | kUnwind; return; } goto L_004A1E88; } }
L_004A1F14:
    c.r[2].d[0] = c.r[3].d[0] << 34;
    set32(c.r[5], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 34;
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A1E6Cu | kUnwind; return; } goto L_004A1E6C; } }
L_004A1F44:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004A1F48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004A1F60:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st8((c.r[29].w[0] + 239u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.f[21] = c.f[12];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 24;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 12u), c.f[1]);  if (t) { goto L_004A21D8; } }
L_004A1FC0:
    c.f[3] = ld32((c.r[20].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.r[4].d[0] = c.r[3].d[0] | 52429ull;
    st8((c.r[29].w[0] + 208u), static_cast<std::uint8_t>(0u));
    c.f[1] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 52428ull;
    c.f[0] = 0u;
    c.r[16].d[0] = 0ull + 0ull;
    c.f[4] = c.r[4].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[3], c.f[4]);
    c.f[2] = c.r[3].w[0];
    c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    c.budget -= 16;
L_004A2000:
    c.r[5].d[0] = ld8((c.r[29].w[0] + 239u));
    c.f[13] = ld32((c.r[20].w[0] + 20u));
    set32(c.r[6], ld32((c.r[20].w[0] + 8u)));
    c.f[14] = ld32((c.r[20].w[0] + 16u));
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[2].w[0] + 64u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2028u); c.f[15] = c.f[21];  if (depth < kMaxDepth) unit_00A8(c, 140u, depth + 1u); else { c.pc = 0x004A1D30u; return; } if (c.pc != 0x004A2028u) [[unlikely]] return; }
L_004A2028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A2038; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[29].w[0] + 208u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004A2038:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A2000u | kUnwind; return; } goto L_004A2000; } }
    c.r[2].d[0] = ld8((c.r[20].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A21D0; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 76u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A20D8; } }
    c.r[2].d[0] = c.r[5].d[0] << 34;
    c.r[2].d[0] = c.r[2].d[0] >> 34;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 328u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 3u));
    c.r[1].d[0] = c.r[2].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004A20D8; } }
    c.r[2].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 76u), c.r[2].w[0]);
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_004A20A4:
    set32(c.r[3], c.r[23].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[18], c.r[3].w[0] + 64u);
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A21E0; } }
    c.budget -= 1;
L_004A20C8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[23], c.r[23].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A20A4u | kUnwind; return; } goto L_004A20A4; } }
L_004A20D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[2] = ld32((c.r[2].w[0] - 20416u));
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[28].w[0] - 32272u));
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F890000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    set32(c.r[2], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 29;
L_004A214C:
    set32(c.r[3], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    set32(c.r[4], c.r[2].w[0] + 576u);
    c.r[7].d[0] = ld8((c.r[29].w[0] + 239u));
    c.f[12] = c.f[20];
    set32(c.r[8], ld32((c.r[20].w[0] + 8u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.f[21];
    c.r[2].d[0] = c.r[3].d[0] << 34;
    c.r[2].d[0] = c.r[2].d[0] >> 34;
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], c.r[2].w[0] >> 16);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A21B0u); set32(c.r[5], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 136u, depth + 1u); else { c.pc = 0x004A1A50u; return; } if (c.pc != 0x004A21B0u) [[unlikely]] return; }
L_004A21B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A21C0; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[29].w[0] + 208u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004A21C0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A214Cu | kUnwind; return; } goto L_004A214C; } }
L_004A21D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[29].w[0] + 208u));  if (t) { goto L_004A2438; } }
L_004A21D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 12u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A1FC0u | kUnwind; return; } goto L_004A1FC0; } }
L_004A21E0:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[5], 0u + 55u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A21F0u); set32(c.r[6], 0u + 75u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x004A21F0u) [[unlikely]] return; }
L_004A21F0:
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[8], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 31089u));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[6], ld32((c.r[18].w[0] + 12u)));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[2], c.r[19].w[0] << 5);
    set32(c.r[5], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[8].w[0] + 28u);
    set32(c.r[3], ld32((c.r[5].w[0] + 588u)));
    c.r[8].d[0] = c.r[7].d[0] << 34;
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[8].d[0] = c.r[8].d[0] >> 34;
    c.r[2].d[0] = c.r[6].d[0] << 34;
    c.r[9].d[0] = ld16((c.r[8].w[0] + 6u));
    c.r[2].d[0] = c.r[2].d[0] >> 34;
    c.r[7].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[17], c.r[5].w[0] + 576u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.r[2].d[0] = c.r[3].d[0] << 34;
    set32(c.r[3], c.r[7].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] >> 34;
    set32(c.r[22], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[9].w[0] << 4);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[5].w[0] + 588u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] >> 16);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[6], c.r[2].w[0] << 16);
    set32(c.r[2], ld32((c.r[5].w[0] + 588u)));
    c.r[30].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[16].d[0] = c.r[2].d[0] << 34;
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2290u); c.r[16].d[0] = c.r[16].d[0] >> 34;  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004A2290u) [[unlikely]] return; }
L_004A2290:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[4] = ld32((c.r[3].w[0] - 28816u));
    c.r[4].d[0] = c.r[30].d[0] & 65535ull;
    c.f[7] = ld32((c.r[2].w[0] - 28832u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[2] = ld32((c.r[3].w[0] - 28812u));
    c.f[5] = ld32((c.r[2].w[0] - 28828u));
    c.f[6] = fp::ee::sub(c.fcr31, c.f[4], c.f[7]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = ld32((c.r[3].w[0] - 28808u));
    c.f[3] = ld32((c.r[2].w[0] - 28824u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[2], c.f[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    set32(c.r[2], c.r[29].w[0] + 244u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[6], c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[7], c.f[1]);
    st32((c.r[17].w[0] + 16u), c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[5], c.f[1]);
    st32((c.r[2].w[0]), c.f[4]);
    set32(c.r[2], c.r[29].w[0] + 248u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[1]);
    st32((c.r[2].w[0]), c.f[2]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[29].w[0] + 240u), c.f[6]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 42;
    { const bool t = c.r[4].sd[0] < 0; st32((c.r[17].w[0] + 8u), c.f[0]);  if (t) { goto L_004A2344; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004A2360; } }
L_004A2344:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004A2360:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 28u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 260u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2390u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x003FA3F0u; return; } if (c.pc != 0x004A2390u) [[unlikely]] return; }
L_004A2390:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    c.f[0] = ld32((c.r[22].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 255u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A23DCu); st32((c.r[2].w[0] + 12u), c.r[30].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x004A23DCu) [[unlikely]] return; }
L_004A23DC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[4], c.r[4].w[0] + 396u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 328u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[21].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[21].w[0]));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[21].w[0]));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[5].d[0] = c.r[2].d[0] << 34;
    c.r[5].d[0] = c.r[5].d[0] >> 34;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2430u); set32(c.r[4], c.r[3].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 345u, depth + 1u); else { c.pc = 0x0040B7F0u; return; } if (c.pc != 0x004A2430u) [[unlikely]] return; }
L_004A2430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A20C8u | kUnwind; return; } goto L_004A20C8; } }
L_004A2438:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_004A2470:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.f[5] = ld32((c.r[7].w[0] + 16u));
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[4] = ld32((c.r[7].w[0] + 20u));
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[3] = ld32((c.r[7].w[0] + 24u));
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[2] = ld32((c.r[7].w[0]));
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 204u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 48u), c.f[5]);
    st32((c.r[4].w[0] + 52u), c.f[4]);
    st32((c.r[4].w[0] + 56u), c.f[3]);
    st32((c.r[4].w[0] + 32u), c.f[2]);
    st32((c.r[4].w[0] + 36u), c.f[1]);
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.r[30].d[0] = ld8((c.r[28].w[0] - 31096u));
    c.r[21].d[0] = ld8((c.r[28].w[0] - 31095u));
    c.r[23].d[0] = ld8((c.r[28].w[0] - 31094u));
    c.r[22].d[0] = ld8((c.r[28].w[0] - 31093u));
    c.budget -= 45;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004A2540; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 28624u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x004A0000u < 16384u) { entry = entries_00A8[(t - 0x004A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004A2540:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = ld32((c.r[2].w[0] - 28800u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[2] = c.r[2].w[0];
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    c.f[24] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.f[23] = c.f[2];  if (t) { goto L_004A281C; } }
L_004A2574:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = ld32((c.r[2].w[0] - 28792u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = c.r[2].w[0];
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    c.f[24] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.f[23] = c.f[2];  if (t) { goto L_004A281C; } }
L_004A25A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[0] = ld32((c.r[2].w[0] - 28784u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[2] = c.r[2].w[0];
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[24] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[23] = c.r[2].w[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_004A281C; } }
L_004A25E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = ld32((c.r[2].w[0] - 28776u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[2] = c.r[2].w[0];
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[24] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[23] = c.r[2].w[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_004A281C; } }
L_004A2618:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[0] = ld32((c.r[2].w[0] - 28768u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[2] = c.r[2].w[0];
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[24] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[23] = c.r[2].w[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_004A281C; } }
L_004A2650:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x443B0000u);
    c.f[0] = ld32((c.r[2].w[0] - 28760u));
    c.r[4].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42820000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[24] = c.r[2].w[0];
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[23] = c.r[2].w[0];
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[4].w[0]);  if (t) { goto L_004A281C; } }
L_004A268C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = ld32((c.r[2].w[0] - 28752u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[2] = c.r[2].w[0];
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    c.f[24] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[23] = c.r[2].w[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[24];  if (t) { goto L_004A281C; } }
L_004A26C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = ld32((c.r[2].w[0] - 28744u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[2] = c.r[2].w[0];
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    c.f[24] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[23] = c.r[2].w[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[24];  if (t) { goto L_004A281C; } }
L_004A26F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.f[0] = ld32((c.r[2].w[0] - 28736u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[2] = c.r[2].w[0];
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[24] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[23] = c.r[2].w[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_004A281C; } }
L_004A272C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = ld32((c.r[2].w[0] - 28728u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[2] = c.r[2].w[0];
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[24] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[23] = c.r[2].w[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_004A281C; } }
L_004A2764:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x442F0000u);
    c.f[0] = ld32((c.r[2].w[0] - 28720u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42960000u);
    c.f[2] = c.r[2].w[0];
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[24] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[23] = c.r[2].w[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_004A281C; } }
L_004A279C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[0] = ld32((c.r[2].w[0] - 28712u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = c.r[2].w[0];
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[24] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[23] = c.r[2].w[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_004A281C; } }
L_004A27D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.f[0] = ld32((c.r[2].w[0] - 28712u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.r[30].d[0] = 0ull + 0ull;
    c.r[23].d[0] = 0ull + 0ull;
    c.r[22].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = c.r[2].w[0];
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    c.f[24] = c.r[2].w[0];
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[23] = c.r[2].w[0];
    c.budget -= 18;
L_004A281C:
    c.f[22] = fp::ee::sub(c.fcr31, c.f[2], c.f[24]);
    c.r[18].d[0] = 0ull + 0ull;
    c.f[21] = fp::ee::sub(c.fcr31, c.f[1], c.f[23]);
    c.budget -= 3;
L_004A2828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2830u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004A2830u) [[unlikely]] return; }
L_004A2830:
    c.f[1] = 0u;
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[24]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2844u); c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004A2844u) [[unlikely]] return; }
L_004A2844:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.f[3] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[25] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2874u); c.f[12] = c.f[25];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004A2874u) [[unlikely]] return; }
L_004A2874:
    c.f[12] = c.f[25];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2880u); c.f[25] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004A2880u) [[unlikely]] return; }
L_004A2880:
    c.facc = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D040000u);
    c.f[2] = c.f[0] ^ fp::kSign;
    c.r[2].d[0] = c.r[2].d[0] | 8456ull;
    c.f[0] = c.r[18].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.r[18].sd[0] < 16ll ? 1ull : 0ull;
    c.f[4] = 0u;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[25]);
    c.facc = fp::ee::mul(c.fcr31, c.f[20], c.f[25]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[23]);
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[21]);  if (t) { goto L_004A2A20; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    set32(c.r[2], c.r[18].w[0] - 16u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[5] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.budget -= 17;
L_004A2908:
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[2], ld32((c.r[3].w[0] + 76u)));
    set32(c.r[16], c.r[3].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    c.r[2].d[0] = c.r[2].d[0] << 34;
    c.r[2].d[0] = c.r[2].d[0] >> 34;
    st32((c.r[3].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 76u)));
    st32((c.r[3].w[0] + 64u), c.f[3]);
    c.r[17].d[0] = c.r[2].d[0] << 34;
    st32((c.r[3].w[0] + 68u), c.f[4]);
    c.r[17].d[0] = c.r[17].d[0] >> 34;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A294Cu); st32((c.r[3].w[0] + 72u), c.f[5]);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x004A294Cu) [[unlikely]] return; }
L_004A294C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[4], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[3], c.r[3].w[0] + 260u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A296Cu); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x003FA3F0u; return; } if (c.pc != 0x004A296Cu) [[unlikely]] return; }
L_004A296C:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    c.f[2] = ld32((c.r[19].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 255u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.f[2]);
    st32((c.r[2].w[0] + 4u), c.f[1]);
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A29B8u); st32((c.r[2].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x004A29B8u) [[unlikely]] return; }
L_004A29B8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[4], c.r[4].w[0] + 396u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 328u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[30].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[21].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[23].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[22].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[5].d[0] = c.r[2].d[0] << 34;
    c.r[5].d[0] = c.r[5].d[0] >> 34;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2A08u); set32(c.r[4], c.r[3].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 345u, depth + 1u); else { c.pc = 0x0040B7F0u; return; } if (c.pc != 0x004A2A08u) [[unlikely]] return; }
L_004A2A08:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A2828u | kUnwind; return; } goto L_004A2828; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A2A38; } }
L_004A2A20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    c.f[0] = c.r[2].w[0];
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[5] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A2908u | kUnwind; return; } goto L_004A2908; } }
L_004A2A38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
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
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_004A2A80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[4] = c.r[3].w[0];
    st32((c.r[29].w[0] + 60u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[4]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    st32((c.r[29].w[0] + 52u), c.f[3]);
    st32((c.r[29].w[0] + 56u), c.f[2]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.r[7].d[0] = ld16((c.r[4].w[0] + 6u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 4u));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 25;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A2AEC; } }
L_004A2AE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004A2B18; } }
L_004A2AEC:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2B08u); set32(c.r[8], c.r[16].w[0] + 44u);  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x004A2470u; return; } if (c.pc != 0x004A2B08u) [[unlikely]] return; }
L_004A2B08:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A2AE4u | kUnwind; return; } goto L_004A2AE4; } }
L_004A2B18:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004A2B30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[6].w[0] + 20u));
    c.f[20] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[4].w[0] + 8u), c.r[16].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 16;
L_004A2B70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2B7Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 351u, depth + 1u); else { c.pc = 0x0040B900u; return; } if (c.pc != 0x004A2B7Cu) [[unlikely]] return; }
L_004A2B7C:
    set32(c.r[3], c.r[2].w[0] >> 16);
    set32(c.r[4], c.r[18].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] << 5);
    set32(c.r[7], c.r[4].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 76u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] + 64u);  if (t) { goto L_004A2C58; } }
    c.budget -= 1;
L_004A2BC0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A2B70u | kUnwind; return; } goto L_004A2B70; } }
    c.r[18].d[0] = ld16((c.r[20].w[0] + 48u));
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004A2BD8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2BE4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 351u, depth + 1u); else { c.pc = 0x0040B900u; return; } if (c.pc != 0x004A2BE4u) [[unlikely]] return; }
L_004A2BE4:
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], c.r[19].w[0] << 5);
    set32(c.r[9], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] >> 16);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[8], c.r[3].w[0] << 5);
    set32(c.r[5], c.r[4].w[0] << 3);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[9].w[0] + 588u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[9].w[0] + 588u)));
    c.r[4].d[0] = c.r[5].d[0] & c.r[7].d[0];
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[9].w[0] + 576u);  if (t) { goto L_004A2C88; } }
    c.budget -= 1;
L_004A2C28:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A2BD8u | kUnwind; return; } goto L_004A2BD8; } }
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 40u), 0u);
    st32((c.r[17].w[0] + 44u), c.f[20]);
    st32((c.r[17].w[0] + 48u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 56u), 0u);  if (t) { goto L_004A2CB8; } }
L_004A2C58:
    c.r[3].d[0] = c.r[4].d[0] << 34;
    set32(c.r[5], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 34;
    c.r[4].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A2BC0u | kUnwind; return; } goto L_004A2BC0; } }
L_004A2C88:
    c.r[4].d[0] = c.r[5].d[0] << 34;
    c.r[4].d[0] = c.r[4].d[0] >> 34;
    set32(c.r[6], 0u - 1u);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A2C28u | kUnwind; return; } goto L_004A2C28; } }
L_004A2CB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004A2CE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[17], c.r[4].w[0] << 7);
    set32(c.r[16], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 13;
L_004A2D14:
    set32(c.r[3], c.r[18].w[0] << 4);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 76u)));
    set32(c.r[6], c.r[3].w[0] + 64u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004A2D58; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A2E48; } }
    c.budget -= 1;
L_004A2D40:
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[2].d[0] << 34;
    c.r[5].d[0] = c.r[5].d[0] >> 34;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2D58u); set32(c.r[4], c.r[3].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x004A2D58u) [[unlikely]] return; }
L_004A2D58:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A2D14u | kUnwind; return; } goto L_004A2D14; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004A2D6C:
    set32(c.r[3], c.r[18].w[0] << 5);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 588u)));
    set32(c.r[6], c.r[3].w[0] + 576u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004A2DB0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A2E78; } }
    c.budget -= 1;
L_004A2D98:
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[2].d[0] << 34;
    c.r[5].d[0] = c.r[5].d[0] >> 34;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2DB0u); set32(c.r[4], c.r[3].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x004A2DB0u) [[unlikely]] return; }
L_004A2DB0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A2D6Cu | kUnwind; return; } goto L_004A2D6C; } }
    c.r[5].d[0] = ld16((c.r[19].w[0] + 6u));
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004A2E40; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 3;
L_004A2DDC:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_004A2E30; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[19].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 6u));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_004A2E40; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_004A2E40; } }
L_004A2E30:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A2DDCu | kUnwind; return; } goto L_004A2DDC; } }
L_004A2E40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A2EA8; } }
L_004A2E48:
    c.r[2].d[0] = c.r[4].d[0] << 34;
    c.r[2].d[0] = c.r[2].d[0] >> 34;
    set32(c.r[4], 0u - 1u);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A2D40u | kUnwind; return; } goto L_004A2D40; } }
L_004A2E78:
    c.r[2].d[0] = c.r[4].d[0] << 34;
    c.r[2].d[0] = c.r[2].d[0] >> 34;
    set32(c.r[4], 0u - 1u);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A2D98u | kUnwind; return; } goto L_004A2D98; } }
L_004A2EA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004A2ED0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C120u | kUnwind; return; } [[clang::musttail]] return unit_0083(c, 10u, depth); }
L_004A2EE0:
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
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_004A2F20; } }
L_004A2F18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A2FA8; } }
L_004A2F20:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004A2F24:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2F3Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 144u, depth + 1u); else { c.pc = 0x004A1F60u; return; } if (c.pc != 0x004A2F3Cu) [[unlikely]] return; }
L_004A2F3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A2F64; } }
    c.budget -= 1;
L_004A2F48:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 6u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A2F24u | kUnwind; return; } goto L_004A2F24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A2F18u | kUnwind; return; } goto L_004A2F18; } }
L_004A2F64:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[19].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 6u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A2F48u | kUnwind; return; } goto L_004A2F48; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A2F48u | kUnwind; return; } goto L_004A2F48; } }
L_004A2FA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004A2FD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004A30D8; } }
L_004A2FFC:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.r[4].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
L_004A3018:
    set32(c.r[3], c.r[17].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 76u)));
    set32(c.r[6], c.r[3].w[0] + 64u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004A3058; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A312C; } }
L_004A3040:
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[2].d[0] << 34;
    c.r[5].d[0] = c.r[5].d[0] >> 34;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3058u); set32(c.r[4], c.r[3].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x004A3058u) [[unlikely]] return; }
L_004A3058:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A3018u | kUnwind; return; } goto L_004A3018; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004A3070:
    set32(c.r[3], c.r[17].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 588u)));
    set32(c.r[6], c.r[3].w[0] + 576u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004A30B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A3160; } }
L_004A3098:
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[2].d[0] << 34;
    c.r[5].d[0] = c.r[5].d[0] >> 34;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A30B0u); set32(c.r[4], c.r[3].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x004A30B0u) [[unlikely]] return; }
L_004A30B0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A3070u | kUnwind; return; } goto L_004A3070; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 6u));
    set32(c.r[4], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A2FFCu | kUnwind; return; } goto L_004A2FFC; } }
L_004A30D8:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 4u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_004A3190; } }
L_004A30E8:
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.r[3].d[0] = c.r[8].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[7], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 7);
    c.r[8].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[19].w[0] + 4u));
    c.r[3].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A30E8u | kUnwind; return; } goto L_004A30E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A3190; } }
L_004A312C:
    c.r[2].d[0] = c.r[4].d[0] << 34;
    c.r[2].d[0] = c.r[2].d[0] >> 34;
    set32(c.r[4], 0u - 1u);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A3040u | kUnwind; return; } goto L_004A3040; } }
    c.budget -= 1;
L_004A3160:
    c.r[2].d[0] = c.r[4].d[0] << 34;
    c.r[2].d[0] = c.r[2].d[0] >> 34;
    set32(c.r[4], 0u - 1u);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A3098u | kUnwind; return; } goto L_004A3098; } }
L_004A3190:
    st16((c.r[19].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004A31B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A31DC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A31D8u); set32(c.r[5], c.r[5].w[0] + 12816u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004A31D8u) [[unlikely]] return; }
L_004A31D8:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_004A31DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A31F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A31F0u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004A31F0u) [[unlikely]] return; }
L_004A31F0:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_004A31F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A31FCu); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0082(c, 390u, depth + 1u); else { c.pc = 0x0040BFC0u; return; } if (c.pc != 0x004A31FCu) [[unlikely]] return; }
L_004A31FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A3210:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A325C; } }
    set32(c.r[4], c.r[17].w[0] + 576u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004A3264; } }
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 1;
L_004A323C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004A3280; } }
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004A3248:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004A325C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A325Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004A325Cu) [[unlikely]] return; }
L_004A325C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004A329C; } }
L_004A3264:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[6], 0u + 32u);
    set32(c.r[5], c.r[5].w[0] + 13056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3278u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x004A3278u) [[unlikely]] return; }
L_004A3278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A323Cu | kUnwind; return; } goto L_004A323C; } }
L_004A3280:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[5], c.r[5].w[0] + 12976u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3294u); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x004A3294u) [[unlikely]] return; }
L_004A3294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A3248u | kUnwind; return; } goto L_004A3248; } }
L_004A329C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A32B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004A32E0; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004A32E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A32E0u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004A32E0u) [[unlikely]] return; }
L_004A32E0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A3300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004A3330; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004A3330; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3330u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004A3330u) [[unlikely]] return; }
L_004A3330:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A3350:
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
    set32(c.r[18], c.r[18].w[0] - 28640u);
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 17;
L_004A3394:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004A34B4; } }
    c.budget -= 1;
L_004A33A8:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[2].d[0] = c.r[22].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A3394u | kUnwind; return; } goto L_004A3394; } }
    set32(c.r[22], c.r[29].w[0] + 156u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st32((c.r[29].w[0] + 152u), 0u);
    c.r[20].d[0] = 0ull + 0ull;
    st32((c.r[22].w[0]), 0u);
    c.r[19].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 28640u);
    c.r[17].d[0] = c.r[23].d[0] & 65535ull;
    set32(c.r[16], c.r[29].w[0] + 148u);
    c.budget -= 9;
L_004A33E0:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 64u));
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[29].w[0] + 144u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3400u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0083(c, 14u, depth + 1u); else { c.pc = 0x0040C1A0u; return; } if (c.pc != 0x004A3400u) [[unlikely]] return; }
L_004A3400:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 28u);
    c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A33E0u | kUnwind; return; } goto L_004A33E0; } }
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3420u); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0082(c, 357u, depth + 1u); else { c.pc = 0x0040BA70u; return; } if (c.pc != 0x004A3420u) [[unlikely]] return; }
L_004A3420:
    st16((c.r[21].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[21].w[0] + 4u), static_cast<std::uint16_t>(c.r[23].w[0]));
    c.r[4].d[0] = ld16((c.r[21].w[0] + 4u));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[21].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = ld16((c.r[21].w[0] + 4u));  if (t) { goto L_004A3454; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3450u); set32(c.r[5], c.r[5].w[0] + 12816u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004A3450u) [[unlikely]] return; }
L_004A3450:
    st32((c.r[21].w[0] + 8u), 0u);
    c.budget -= 1;
L_004A3454:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004A3550; } }
L_004A345C:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = ld16((c.r[21].w[0] + 4u));  if (t) { goto L_004A3474; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3470u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004A3470u) [[unlikely]] return; }
L_004A3470:
    st32((c.r[21].w[0] + 12u), 0u);
    c.budget -= 1;
L_004A3474:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004A358C; } }
L_004A347C:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 4u));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004A359C; } }
    set32(c.r[3], ld32((c.r[22].w[0])));
    c.budget -= 1;
L_004A3490:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A35F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A34A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A34A8u); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004A34A8u) [[unlikely]] return; }
L_004A34A8:
    st32((c.r[22].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_004A35FC; } }
L_004A34B4:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[19].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[19].w[0]);
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A34D4u); set32(c.r[5], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x004A34D4u) [[unlikely]] return; }
L_004A34D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A3530; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[17].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 8u));
    st16((c.r[17].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 10u));
    st16((c.r[17].w[0] + 54u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[17].w[0] + 60u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 20u));
    st16((c.r[17].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 22u));
    st16((c.r[17].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 24u));
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A33A8u | kUnwind; return; } goto L_004A33A8; } }
L_004A3530:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A34B4u | kUnwind; return; } goto L_004A34B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A33A8u | kUnwind; return; } goto L_004A33A8; } }
    c.budget -= 1;
L_004A3550:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3564u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004A3564u) [[unlikely]] return; }
L_004A3564:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 13872u);
    set32(c.r[6], c.r[6].w[0] + 12816u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3584u); set32(c.r[7], 0u + 640u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004A3584u) [[unlikely]] return; }
L_004A3584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A345Cu | kUnwind; return; } goto L_004A345C; } }
L_004A358C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3594u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004A3594u) [[unlikely]] return; }
L_004A3594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A347Cu | kUnwind; return; } goto L_004A347C; } }
L_004A359C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.r[17].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[5], c.r[21].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[6], c.r[21].w[0] + 44u);
    set32(c.r[16], c.r[3].w[0] << 7);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A35C0u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 184u, depth + 1u); else { c.pc = 0x004A2B30u; return; } if (c.pc != 0x004A35C0u) [[unlikely]] return; }
L_004A35C0:
    set32(c.r[6], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], c.r[18].w[0] + 1u);
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[5], c.r[17].w[0] << 2);
    c.r[18].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[6], c.r[6].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.r[3].d[0] = ld16((c.r[21].w[0] + 4u));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A359Cu | kUnwind; return; } goto L_004A359C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[22].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A3490u | kUnwind; return; } goto L_004A3490; } }
L_004A35F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_004A35FC:
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
L_004A3630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] + 14000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 12976u);
    set32(c.r[4], c.r[16].w[0] + 64u);
    set32(c.r[7], 0u + 16u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3660u); set32(c.r[8], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 183u, depth + 1u); else { c.pc = 0x0020B3F0u; return; } if (c.pc != 0x004A3660u) [[unlikely]] return; }
L_004A3660:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[16].w[0] + 576u);
    set32(c.r[5], c.r[5].w[0] + 13984u);
    set32(c.r[6], c.r[6].w[0] + 13056u);
    set32(c.r[7], 0u + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3680u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0002(c, 183u, depth + 1u); else { c.pc = 0x0020B3F0u; return; } if (c.pc != 0x004A3680u) [[unlikely]] return; }
L_004A3680:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A36A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004A36B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004A36C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 11u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A36ECu); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0018(c, 158u, depth + 1u); else { c.pc = 0x00261CB0u; return; } if (c.pc != 0x004A36ECu) [[unlikely]] return; }
L_004A36EC:
    st32((c.r[16].w[0]), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 10u));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[4].d[0] = c.r[4].d[0] | 19ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A3720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A3770; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004A3758; } }
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_004A3758; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3758u);  if (depth < kMaxDepth) unit_0018(c, 157u, depth + 1u); else { c.pc = 0x00261CA0u; return; } if (c.pc != 0x004A3758u) [[unlikely]] return; }
L_004A3758:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004A3770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3770u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004A3770u) [[unlikely]] return; }
L_004A3770:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A3790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A37B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_004A37EC; } }
L_004A37B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A37CCu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A8(c, 286u, depth + 1u); else { c.pc = 0x004A3F10u; return; } if (c.pc != 0x004A37CCu) [[unlikely]] return; }
L_004A37CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
L_004A37EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A3800:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
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
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 29;
    { const bool t = c.r[1].d[0] == 0ull; c.f[31] = c.f[12];  if (t) { goto L_004A3C60; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F7D0000u);
    c.f[29] = c.r[3].w[0];
    c.r[4].d[0] = c.r[4].d[0] | 28836ull;
    c.f[28] = c.r[4].w[0];
    set32(c.r[22], c.r[29].w[0] + 288u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x411D0000u);
    set32(c.r[23], c.r[29].w[0] + 292u);
    c.r[3].d[0] = c.r[3].d[0] | 7864ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.f[27] = c.r[3].w[0];
    c.r[4].d[0] = c.r[4].d[0] | 63875ull;
    c.f[30] = 0u;
    set32(c.r[30], c.r[29].w[0] + 296u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.f[0] = c.r[3].w[0];
    c.f[26] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[25] = c.r[3].w[0];
    st32((c.r[29].w[0] + 220u), c.f[0]);
    c.budget -= 21;
L_004A38C8:
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[21].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[30]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004A3900; } }
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[31]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.f[0]);  if (t) { goto L_004A3C00; } }
    c.budget -= 1;
L_004A3900:
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[31]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[30]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 8u), c.f[1]);  if (t) { goto L_004A3BE8; } }
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[19].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[29], c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 21;
L_004A3968:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    c.r[5].d[0] = 0ull | 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.f[0] = ld32((c.r[28].w[0] - 29672u));
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.f[5] = 0u;
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[18].w[0] + 60u));
    set32(c.r[2], c.r[29].w[0] + 316u);
    c.f[2] = ld32((c.r[18].w[0] + 48u));
    c.f[3] = ld32((c.r[18].w[0] + 56u));
    c.f[4] = ld32((c.r[18].w[0] + 52u));
    st32((c.r[2].w[0]), c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[28]);
    set32(c.r[2], c.r[29].w[0] + 312u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[28]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[2], c.f[31]);
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[2].w[0]), c.f[1]);
    st32((c.r[29].w[0] + 304u), c.f[2]);
    set32(c.r[2], c.r[29].w[0] + 308u);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[27], c.f[0]);
    st32((c.r[18].w[0] + 48u), c.f[2]);
    st32((c.r[18].w[0] + 52u), c.f[0]);
    st32((c.r[18].w[0] + 56u), c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[31]);
    set32(c.r[2], c.r[29].w[0] + 228u);
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.f[4] = ld32((c.r[18].w[0] + 60u));
    st32((c.r[2].w[0]), c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[31]);
    set32(c.r[2], c.r[29].w[0] + 232u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    st32((c.r[2].w[0]), c.f[1]);
    st32((c.r[29].w[0] + 224u), c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 68u));
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[31]);
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[26], c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 220u));
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[1]);
    c.f[12] = c.f[20];
    c.budget -= 68;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3A78u); st32((c.r[18].w[0] + 68u), c.f[20]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004A3A78u) [[unlikely]] return; }
L_004A3A78:
    c.f[24] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3A84u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004A3A84u) [[unlikely]] return; }
L_004A3A84:
    c.f[23] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3A90u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004A3A90u) [[unlikely]] return; }
L_004A3A90:
    c.f[22] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3A9Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004A3A9Cu) [[unlikely]] return; }
L_004A3A9C:
    c.f[21] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3AA8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004A3AA8u) [[unlikely]] return; }
L_004A3AA8:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3AB4u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004A3AB4u) [[unlikely]] return; }
L_004A3AB4:
    c.f[2] = fp::ee::mul(c.fcr31, c.f[20], c.f[21]);
    set32(c.r[6], c.r[29].w[0] + 268u);
    set32(c.r[3], c.r[29].w[0] + 252u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.f[9] = fp::ee::mul(c.fcr31, c.f[0], c.f[22]);
    c.facc = fp::ee::mul(c.fcr31, c.f[23], c.f[2]);
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[11] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[24]);
    c.facc = fp::ee::mul(c.fcr31, c.f[24], c.f[2]);
    c.f[10] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[23]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[21]);
    c.facc = fp::ee::mul(c.fcr31, c.f[23], c.f[0]);
    c.f[8] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[24]);
    c.facc = fp::ee::mul(c.fcr31, c.f[24], c.f[0]);
    c.f[0] = c.f[20] ^ fp::kSign;
    st32((c.r[6].w[0]), c.f[30]);
    set32(c.r[6], c.r[29].w[0] + 284u);
    st32((c.r[6].w[0]), c.f[30]);
    set32(c.r[6], c.r[29].w[0] + 300u);
    st32((c.r[6].w[0]), c.f[25]);
    c.f[3] = ld32((c.r[18].w[0] + 64u));
    set32(c.r[6], c.r[29].w[0] + 244u);
    c.f[12] = fp::ee::mul(c.fcr31, c.f[20], c.f[22]);
    c.f[7] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[23]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[12], c.f[3]);
    st32((c.r[29].w[0] + 240u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[9], c.f[3]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[6] = c.f[21] ^ fp::kSign;
    set32(c.r[6], c.r[29].w[0] + 248u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[6], c.f[3]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[11], c.f[3]);
    set32(c.r[6], c.r[29].w[0] + 256u);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[8], c.f[3]);
    set32(c.r[6], c.r[29].w[0] + 260u);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[22], c.f[23]);
    set32(c.r[6], c.r[29].w[0] + 264u);
    st32((c.r[3].w[0]), c.f[30]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[5], c.f[3]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[30]);
    c.r[3].d[0] = c.r[19].sd[0] < 12ll ? 1ull : 0ull;
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[10], c.f[3]);
    set32(c.r[6], c.r[29].w[0] + 272u);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[7], c.f[3]);
    set32(c.r[6], c.r[29].w[0] + 276u);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[22], c.f[24]);
    set32(c.r[6], c.r[29].w[0] + 280u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[30], c.f[3]);
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[30]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st32((c.r[22].w[0]), c.f[2]);
    st32((c.r[23].w[0]), c.f[1]);
    st32((c.r[30].w[0]), c.f[0]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 77;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A3968u | kUnwind; return; } goto L_004A3968; } }
L_004A3BE8:
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[30]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_004A3BFC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004A3BFC:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_004A3C00:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004A3C48; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[21].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 16;
L_004A3C48:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A38C8u | kUnwind; return; } goto L_004A38C8; } }
    c.budget -= 1;
L_004A3C60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    c.f[31] = ld32((c.r[29].w[0] + 44u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.f[30] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_004A3CC0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[16], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A3D10; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3D0Cu); set32(c.r[5], c.r[5].w[0] + 16064u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004A3D0Cu) [[unlikely]] return; }
L_004A3D0C:
    st32((c.r[21].w[0] + 8u), 0u);
    c.budget -= 1;
L_004A3D10:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004A3E40; } }
L_004A3D18:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[21].w[0])));  if (t) { goto L_004A3D30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3D2Cu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004A3D2Cu) [[unlikely]] return; }
L_004A3D2C:
    st32((c.r[21].w[0] + 12u), 0u);
    c.budget -= 1;
L_004A3D30:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004A3E7C; } }
L_004A3D38:
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_004A3E38; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004A3D50:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[16], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[16].w[0]), c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A3D78; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3D74u); set32(c.r[5], c.r[5].w[0] + 14112u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004A3D74u) [[unlikely]] return; }
L_004A3D74:
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 1;
L_004A3D78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3D80u); set32(c.r[4], 0u + 976u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004A3D80u) [[unlikely]] return; }
L_004A3D80:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 14016u);
    set32(c.r[6], c.r[6].w[0] + 14112u);
    set32(c.r[7], 0u + 80u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3DA0u); set32(c.r[8], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004A3DA0u) [[unlikely]] return; }
L_004A3DA0:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_004A3DB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 9992u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3DC0u); set32(c.r[5], 0u + 65u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x004A3DC0u) [[unlikely]] return; }
L_004A3DC0:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3DD0u); set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0041(c, 85u, depth + 1u); else { c.pc = 0x00304E30u; return; } if (c.pc != 0x004A3DD0u) [[unlikely]] return; }
L_004A3DD0:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 12ll ? 1ull : 0ull;
    set32(c.r[5], c.r[4].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 10u));
    set32(c.r[17], c.r[17].w[0] + 80u);
    c.r[4].d[0] = c.r[4].d[0] | 64ull;
    st8((c.r[5].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], ld32((c.r[5].w[0] + 20u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 10u));
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A3DB0u | kUnwind; return; } goto L_004A3DB0; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[22].w[0]);
    set32(c.r[18], c.r[18].w[0] + 20u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A3D50u | kUnwind; return; } goto L_004A3D50; } }
    c.budget -= 1;
L_004A3E38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_004A3E8C; } }
L_004A3E40:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3E54u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004A3E54u) [[unlikely]] return; }
L_004A3E54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16048u);
    set32(c.r[6], c.r[6].w[0] + 16064u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3E74u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004A3E74u) [[unlikely]] return; }
L_004A3E74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A3D18u | kUnwind; return; } goto L_004A3D18; } }
L_004A3E7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3E84u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004A3E84u) [[unlikely]] return; }
L_004A3E84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A3D38u | kUnwind; return; } goto L_004A3D38; } }
L_004A3E8C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004A3EB0:
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004A3EC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004A3EF0; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004A3EF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3EF0u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004A3EF0u) [[unlikely]] return; }
L_004A3EF0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A3F10:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFC00000u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.f[1] = c.r[3].w[0];
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D880000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[6].d[0] = c.r[3].d[0] | 26214ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 44u), c.f[31]);
    st32((c.r[29].w[0] + 220u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 40u), c.f[30]);
    c.r[5].d[0] = c.r[2].d[0] | 34944ull;
    st32((c.r[29].w[0] + 36u), c.f[29]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    set32(c.r[22], c.r[29].w[0] + 308u);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    set32(c.r[23], c.r[29].w[0] + 312u);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    set32(c.r[30], c.r[29].w[0] + 292u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 20u), c.f[25]);
    c.f[25] = fp::ee::mul(c.fcr31, c.f[0], c.f[12]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41490000u);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.f[0] = c.r[7].w[0];
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    c.f[26] = fp::ee::mul(c.fcr31, c.f[1], c.f[12]);
    c.r[5].d[0] = c.r[2].d[0] | 4059ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0C90000u);
    c.r[4].d[0] = c.r[2].d[0] | 4059ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FB30000u);
    c.f[23] = fp::ee::mul(c.fcr31, c.f[0], c.f[12]);
    c.r[3].d[0] = c.r[2].d[0] | 13107ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[4].w[0];
    c.f[1] = c.r[8].w[0];
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[24] = fp::ee::mul(c.fcr31, c.f[1], c.f[12]);
    c.budget -= 60;
    [[clang::musttail]] return unit_00A9(c, 1u, depth);
}

}

#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BC[4096] = {
    1, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0,
    0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0,
    0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    21, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0,
    0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0,
    0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 81,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    0, 94, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109,
    0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0,
    0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0,
    0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0,
    0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0,
    142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 144, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 154, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 181, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    0, 186, 0, 0, 187, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0,
    0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0,
    0, 225, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236,
    0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0,
    0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0,
    0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283,
};

void unit_00BC(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004F0000;
    case 2u: goto L_004F0004;
    case 3u: goto L_004F0008;
    case 4u: goto L_004F0044;
    case 5u: goto L_004F0050;
    case 6u: goto L_004F0080;
    case 7u: goto L_004F008C;
    case 8u: goto L_004F00A0;
    case 9u: goto L_004F00AC;
    case 10u: goto L_004F00BC;
    case 11u: goto L_004F00E4;
    case 12u: goto L_004F0124;
    case 13u: goto L_004F0174;
    case 14u: goto L_004F0194;
    case 15u: goto L_004F01A4;
    case 16u: goto L_004F01CC;
    case 17u: goto L_004F01EC;
    case 18u: goto L_004F0208;
    case 19u: goto L_004F0240;
    case 20u: goto L_004F0250;
    case 21u: goto L_004F0280;
    case 22u: goto L_004F0284;
    case 23u: goto L_004F02AC;
    case 24u: goto L_004F02C4;
    case 25u: goto L_004F02D8;
    case 26u: goto L_004F0324;
    case 27u: goto L_004F03B0;
    case 28u: goto L_004F03EC;
    case 29u: goto L_004F0420;
    case 30u: goto L_004F0448;
    case 31u: goto L_004F0454;
    case 32u: goto L_004F0474;
    case 33u: goto L_004F04B0;
    case 34u: goto L_004F04E8;
    case 35u: goto L_004F04F4;
    case 36u: goto L_004F0508;
    case 37u: goto L_004F0514;
    case 38u: goto L_004F052C;
    case 39u: goto L_004F0588;
    case 40u: goto L_004F05A8;
    case 41u: goto L_004F05B8;
    case 42u: goto L_004F05E0;
    case 43u: goto L_004F05F0;
    case 44u: goto L_004F0620;
    case 45u: goto L_004F0640;
    case 46u: goto L_004F06FC;
    case 47u: goto L_004F0730;
    case 48u: goto L_004F0788;
    case 49u: goto L_004F0860;
    case 50u: goto L_004F0928;
    case 51u: goto L_004F0938;
    case 52u: goto L_004F09DC;
    case 53u: goto L_004F0A10;
    case 54u: goto L_004F0A68;
    case 55u: goto L_004F0B40;
    case 56u: goto L_004F0C08;
    case 57u: goto L_004F0C18;
    case 58u: goto L_004F0C64;
    case 59u: goto L_004F0C78;
    case 60u: goto L_004F0CD0;
    case 61u: goto L_004F0CE0;
    case 62u: goto L_004F0D58;
    case 63u: goto L_004F0D68;
    case 64u: goto L_004F0DE0;
    case 65u: goto L_004F0E18;
    case 66u: goto L_004F0E28;
    case 67u: goto L_004F0E40;
    case 68u: goto L_004F0E54;
    case 69u: goto L_004F0EB0;
    case 70u: goto L_004F0EE8;
    case 71u: goto L_004F0EF8;
    case 72u: goto L_004F0F10;
    case 73u: goto L_004F0F24;
    case 74u: goto L_004F0F74;
    case 75u: goto L_004F0F8C;
    case 76u: goto L_004F0FC0;
    case 77u: goto L_004F1024;
    case 78u: goto L_004F1028;
    case 79u: goto L_004F10E0;
    case 80u: goto L_004F10F0;
    case 81u: goto L_004F10FC;
    case 82u: goto L_004F11F0;
    case 83u: goto L_004F1200;
    case 84u: goto L_004F122C;
    case 85u: goto L_004F12A0;
    case 86u: goto L_004F1370;
    case 87u: goto L_004F13A8;
    case 88u: goto L_004F13B4;
    case 89u: goto L_004F13CC;
    case 90u: goto L_004F13D8;
    case 91u: goto L_004F140C;
    case 92u: goto L_004F1440;
    case 93u: goto L_004F1478;
    case 94u: goto L_004F1484;
    case 95u: goto L_004F1498;
    case 96u: goto L_004F14A4;
    case 97u: goto L_004F14BC;
    case 98u: goto L_004F1514;
    case 99u: goto L_004F1534;
    case 100u: goto L_004F1544;
    case 101u: goto L_004F1560;
    case 102u: goto L_004F1570;
    case 103u: goto L_004F15A0;
    case 104u: goto L_004F15C0;
    case 105u: goto L_004F15D4;
    case 106u: goto L_004F1600;
    case 107u: goto L_004F1624;
    case 108u: goto L_004F1664;
    case 109u: goto L_004F167C;
    case 110u: goto L_004F1690;
    case 111u: goto L_004F16F8;
    case 112u: goto L_004F170C;
    case 113u: goto L_004F1768;
    case 114u: goto L_004F1840;
    case 115u: goto L_004F1900;
    case 116u: goto L_004F1918;
    case 117u: goto L_004F1930;
    case 118u: goto L_004F1A08;
    case 119u: goto L_004F1AF8;
    case 120u: goto L_004F1B48;
    case 121u: goto L_004F1B54;
    case 122u: goto L_004F1BD8;
    case 123u: goto L_004F1C2C;
    case 124u: goto L_004F1C48;
    case 125u: goto L_004F1C60;
    case 126u: goto L_004F1C78;
    case 127u: goto L_004F1C84;
    case 128u: goto L_004F1D50;
    case 129u: goto L_004F1D80;
    case 130u: goto L_004F1DA0;
    case 131u: goto L_004F1DBC;
    case 132u: goto L_004F1DF0;
    case 133u: goto L_004F1E58;
    case 134u: goto L_004F1E78;
    case 135u: goto L_004F1E94;
    case 136u: goto L_004F1F08;
    case 137u: goto L_004F1F1C;
    case 138u: goto L_004F1F30;
    case 139u: goto L_004F1F34;
    case 140u: goto L_004F1F40;
    case 141u: goto L_004F1F64;
    case 142u: goto L_004F1F80;
    case 143u: goto L_004F205C;
    case 144u: goto L_004F2060;
    case 145u: goto L_004F20B0;
    case 146u: goto L_004F20C4;
    case 147u: goto L_004F20E0;
    case 148u: goto L_004F21A8;
    case 149u: goto L_004F21EC;
    case 150u: goto L_004F2200;
    case 151u: goto L_004F2224;
    case 152u: goto L_004F22CC;
    case 153u: goto L_004F22D8;
    case 154u: goto L_004F22DC;
    case 155u: goto L_004F22F0;
    case 156u: goto L_004F2384;
    case 157u: goto L_004F23A4;
    case 158u: goto L_004F243C;
    case 159u: goto L_004F24C8;
    case 160u: goto L_004F24D4;
    case 161u: goto L_004F2500;
    case 162u: goto L_004F2510;
    case 163u: goto L_004F2544;
    case 164u: goto L_004F2560;
    case 165u: goto L_004F2598;
    case 166u: goto L_004F2608;
    case 167u: goto L_004F2610;
    case 168u: goto L_004F268C;
    case 169u: goto L_004F2694;
    case 170u: goto L_004F26B8;
    case 171u: goto L_004F26C8;
    case 172u: goto L_004F272C;
    case 173u: goto L_004F2740;
    case 174u: goto L_004F2760;
    case 175u: goto L_004F27C4;
    case 176u: goto L_004F282C;
    case 177u: goto L_004F2848;
    case 178u: goto L_004F2868;
    case 179u: goto L_004F28DC;
    case 180u: goto L_004F28EC;
    case 181u: goto L_004F28F8;
    case 182u: goto L_004F2930;
    case 183u: goto L_004F2A68;
    case 184u: goto L_004F2AC8;
    case 185u: goto L_004F2B70;
    case 186u: goto L_004F2B84;
    case 187u: goto L_004F2B90;
    case 188u: goto L_004F2B98;
    case 189u: goto L_004F2BA0;
    case 190u: goto L_004F2BC0;
    case 191u: goto L_004F2BE4;
    case 192u: goto L_004F2BF0;
    case 193u: goto L_004F2CD0;
    case 194u: goto L_004F2D10;
    case 195u: goto L_004F2D40;
    case 196u: goto L_004F2D50;
    case 197u: goto L_004F2D60;
    case 198u: goto L_004F2D80;
    case 199u: goto L_004F2D90;
    case 200u: goto L_004F2DA8;
    case 201u: goto L_004F2DF0;
    case 202u: goto L_004F2E58;
    case 203u: goto L_004F2E70;
    case 204u: goto L_004F2E80;
    case 205u: goto L_004F2EA0;
    case 206u: goto L_004F2EB0;
    case 207u: goto L_004F300C;
    case 208u: goto L_004F3094;
    case 209u: goto L_004F30A4;
    case 210u: goto L_004F30B4;
    case 211u: goto L_004F30F0;
    case 212u: goto L_004F3140;
    case 213u: goto L_004F314C;
    case 214u: goto L_004F3178;
    case 215u: goto L_004F3198;
    case 216u: goto L_004F31B0;
    case 217u: goto L_004F31F4;
    case 218u: goto L_004F32AC;
    case 219u: goto L_004F32D0;
    case 220u: goto L_004F3340;
    case 221u: goto L_004F3348;
    case 222u: goto L_004F33A8;
    case 223u: goto L_004F33B4;
    case 224u: goto L_004F33F8;
    case 225u: goto L_004F3404;
    case 226u: goto L_004F3408;
    case 227u: goto L_004F3424;
    case 228u: goto L_004F343C;
    case 229u: goto L_004F3468;
    case 230u: goto L_004F3494;
    case 231u: goto L_004F34CC;
    case 232u: goto L_004F3510;
    case 233u: goto L_004F3544;
    case 234u: goto L_004F358C;
    case 235u: goto L_004F35BC;
    case 236u: goto L_004F35FC;
    case 237u: goto L_004F3614;
    case 238u: goto L_004F3654;
    case 239u: goto L_004F365C;
    case 240u: goto L_004F36A8;
    case 241u: goto L_004F36B4;
    case 242u: goto L_004F36CC;
    case 243u: goto L_004F36E4;
    case 244u: goto L_004F3704;
    case 245u: goto L_004F373C;
    case 246u: goto L_004F37A0;
    case 247u: goto L_004F37E0;
    case 248u: goto L_004F37E8;
    case 249u: goto L_004F3834;
    case 250u: goto L_004F3840;
    case 251u: goto L_004F3858;
    case 252u: goto L_004F3878;
    case 253u: goto L_004F3894;
    case 254u: goto L_004F38D8;
    case 255u: goto L_004F38F8;
    case 256u: goto L_004F3930;
    case 257u: goto L_004F3968;
    case 258u: goto L_004F3978;
    case 259u: goto L_004F3A1C;
    case 260u: goto L_004F3A3C;
    case 261u: goto L_004F3A6C;
    case 262u: goto L_004F3A78;
    case 263u: goto L_004F3AB4;
    case 264u: goto L_004F3B2C;
    case 265u: goto L_004F3B90;
    case 266u: goto L_004F3C2C;
    case 267u: goto L_004F3C40;
    case 268u: goto L_004F3C64;
    case 269u: goto L_004F3C94;
    case 270u: goto L_004F3CAC;
    case 271u: goto L_004F3CB0;
    case 272u: goto L_004F3CBC;
    case 273u: goto L_004F3CE8;
    case 274u: goto L_004F3D90;
    case 275u: goto L_004F3DB0;
    case 276u: goto L_004F3DE0;
    case 277u: goto L_004F3DEC;
    case 278u: goto L_004F3E28;
    case 279u: goto L_004F3E9C;
    case 280u: goto L_004F3F00;
    case 281u: goto L_004F3F5C;
    case 282u: goto L_004F3FD0;
    case 283u: goto L_004F3FFC;
    default: bad_entry(c, 0x004F0000u); return;
    }
L_004F0000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EFF78u | kUnwind; return; } [[clang::musttail]] return unit_00BB(c, 282u, depth); } }
    goto L_004F0008;
L_004F0004:
    c.budget -= 1;
L_004F0008:
    set32(c.r[22], c.r[29].w[0] + 172u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st32((c.r[29].w[0] + 168u), 0u);
    set32(c.r[2], c.r[2].w[0] - 15600u);
    st32((c.r[22].w[0]), 0u);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 64u));
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F0044u); st32((c.r[6].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0083(c, 14u, depth + 1u); else { c.pc = 0x0040C1A0u; return; } if (c.pc != 0x004F0044u) [[unlikely]] return; }
L_004F0044:
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F0050u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_0082(c, 357u, depth + 1u); else { c.pc = 0x0040BA70u; return; } if (c.pc != 0x004F0050u) [[unlikely]] return; }
L_004F0050:
    st16((c.r[20].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 4u), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] + 15u);
    set32(c.r[2], c.r[2].w[0] >> 4);
    st32((c.r[20].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = ld16((c.r[20].w[0] + 4u));  if (t) { goto L_004F0084; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F0080u); set32(c.r[5], c.r[5].w[0] - 288u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004F0080u) [[unlikely]] return; }
L_004F0080:
    st32((c.r[20].w[0] + 8u), 0u);
    c.budget -= 1;
L_004F0084:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004F0160; } }
L_004F008C:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = ld16((c.r[20].w[0] + 4u));  if (t) { goto L_004F00A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F00A0u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004F00A0u) [[unlikely]] return; }
L_004F00A0:
    st32((c.r[20].w[0] + 12u), 0u);
    c.budget -= 1;
L_004F00A4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004F019C; } }
L_004F00AC:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 4u));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004F01AC; } }
L_004F00BC:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.r[18].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[17], c.r[3].w[0] << 4);
    set32(c.r[21], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[21].w[0] + 64u), c.r[4].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F00E4u); c.r[5].d[0] = ld16((c.r[20].w[0] + 64u));  if (depth < kMaxDepth) unit_0082(c, 351u, depth + 1u); else { c.pc = 0x0040B900u; return; } if (c.pc != 0x004F00E4u) [[unlikely]] return; }
L_004F00E4:
    set32(c.r[3], c.r[2].w[0] >> 16);
    set32(c.r[4], c.r[20].w[0] + 44u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[6], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 260u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F0124u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x003FA3F0u; return; } if (c.pc != 0x004F0124u) [[unlikely]] return; }
L_004F0124:
    set32(c.r[2], c.r[19].w[0] + 1u);
    st32((c.r[21].w[0] + 60u), c.r[16].w[0]);
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 4u));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F00BCu | kUnwind; return; } goto L_004F00BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_004F01B0; } }
L_004F0160:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F0174u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004F0174u) [[unlikely]] return; }
L_004F0174:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 576u);
    set32(c.r[6], c.r[6].w[0] - 288u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F0194u); set32(c.r[7], 0u + 80u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004F0194u) [[unlikely]] return; }
L_004F0194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F008Cu | kUnwind; return; } goto L_004F008C; } }
L_004F019C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F01A4u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004F01A4u) [[unlikely]] return; }
L_004F01A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F00ACu | kUnwind; return; } goto L_004F00AC; } }
L_004F01AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_004F01B0:
    set32(c.r[4], c.r[28].w[0] - 28256u);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 144u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F01CCu); st32((c.r[29].w[0] + 152u), 0u);  if (depth < kMaxDepth) unit_0087(c, 200u, depth + 1u); else { c.pc = 0x0041F610u; return; } if (c.pc != 0x004F01CCu) [[unlikely]] return; }
L_004F01CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[28].w[0] - 28248u);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F01ECu); st32((c.r[29].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_0087(c, 200u, depth + 1u); else { c.pc = 0x0041F610u; return; } if (c.pc != 0x004F01ECu) [[unlikely]] return; }
L_004F01EC:
    set32(c.r[3], ld32((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F020C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F0208; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F0208u); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004F0208u) [[unlikely]] return; }
L_004F0208:
    st32((c.r[22].w[0]), 0u);
    c.budget -= 1;
L_004F020C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004F0240:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004F0250:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004F028C; } }
L_004F0280:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_004F0284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_004F0390; } }
L_004F028C:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
L_004F02AC:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 536u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F02C4u); set32(c.r[17], c.r[2].w[0] + 536u);  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004F02C4u) [[unlikely]] return; }
L_004F02C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F02E8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F02D8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x004F02D8u) [[unlikely]] return; }
L_004F02D8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F02ACu | kUnwind; return; } goto L_004F02AC; } }
L_004F02E8:
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 516u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[20].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F0280u | kUnwind; return; } goto L_004F0280; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
L_004F0324:
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_004F0378; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F0280u | kUnwind; return; } goto L_004F0280; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F0280u | kUnwind; return; } goto L_004F0280; } }
L_004F0378:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F0324u | kUnwind; return; } goto L_004F0324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F0284u | kUnwind; return; } goto L_004F0284; } }
L_004F0390:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004F03B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004F03D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_004F040C; } }
L_004F03D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F03ECu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00BC(c, 45u, depth + 1u); else { c.pc = 0x004F0640u; return; } if (c.pc != 0x004F03ECu) [[unlikely]] return; }
L_004F03EC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 528u)));
    c.budget -= 8;
L_004F040C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004F0420:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004F0450; } }
L_004F0448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004F0490; } }
L_004F0450:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F0454:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 76u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 528u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F0474u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 20u, depth + 1u); else { c.pc = 0x004F0250u; return; } if (c.pc != 0x004F0474u) [[unlikely]] return; }
L_004F0474:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F0454u | kUnwind; return; } goto L_004F0454; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F0448u | kUnwind; return; } goto L_004F0448; } }
L_004F0490:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004F04B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[16], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F04EC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F04E8u); set32(c.r[5], c.r[5].w[0] + 1520u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004F04E8u) [[unlikely]] return; }
L_004F04E8:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 1;
L_004F04EC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004F056C; } }
L_004F04F4:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[17].w[0])));  if (t) { goto L_004F050C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F0508u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004F0508u) [[unlikely]] return; }
L_004F0508:
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 1;
L_004F050C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004F05B0; } }
L_004F0514:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004F05C0; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004F052C:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 528u), c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 672u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F052Cu | kUnwind; return; } goto L_004F052C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004F05C4; } }
L_004F056C:
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F0588u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004F0588u) [[unlikely]] return; }
L_004F0588:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1504u);
    set32(c.r[6], c.r[6].w[0] + 1520u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F05A8u); set32(c.r[7], 0u + 672u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004F05A8u) [[unlikely]] return; }
L_004F05A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F04F4u | kUnwind; return; } goto L_004F04F4; } }
L_004F05B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F05B8u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004F05B8u) [[unlikely]] return; }
L_004F05B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F0514u | kUnwind; return; } goto L_004F0514; } }
L_004F05C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004F05C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004F05E0:
    st32((c.r[4].w[0] + 516u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004F05F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004F0620; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004F0620; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F0620u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004F0620u) [[unlikely]] return; }
L_004F0620:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004F0640:
    set32(c.r[29], c.r[29].w[0] - 272u);
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st8((c.r[4].w[0] + 520u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 524u), c.f[12]);
    st32((c.r[4].w[0] + 516u), c.r[6].w[0]);
    c.budget -= 22;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st32((c.r[4].w[0] + 512u), 0u);  if (t) { goto L_004F0988; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F06A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F0C60; } }
L_004F06A8:
    c.f[3] = ld32((c.r[6].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[2] = ld32((c.r[6].w[0] + 36u));
    set32(c.r[2], c.r[2].w[0] + 24104u);
    c.f[1] = ld32((c.r[6].w[0] + 40u));
    c.f[0] = ld32((c.r[6].w[0] + 44u));
    st32((c.r[29].w[0] + 256u), c.f[3]);
    st32((c.r[29].w[0] + 260u), c.f[2]);
    st32((c.r[29].w[0] + 264u), c.f[1]);
    st32((c.r[29].w[0] + 268u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 520u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_004F0C60; } }
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[29].w[0] + 244u);
    set32(c.r[16], c.r[29].w[0] + 248u);
    c.budget -= 3;
L_004F06FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 24104u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[22].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_004F0950; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004F0950; } }
L_004F0730:
    set32(c.r[3], ld32((c.r[21].w[0] + 516u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 348u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], ld32((c.r[18].w[0])));  if (t) { goto L_004F0C90; } }
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_004F0768; } }
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 2;
L_004F0768:
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004F0780; } }
    c.r[7].d[0] = ld8((c.r[5].w[0] + 1572u));
    c.budget -= 1;
L_004F0780:
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 2;
L_004F0788:
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.f[10] = ld32((c.r[18].w[0] + 20u));
    c.f[5] = ld32((c.r[3].w[0] + 24u));
    c.f[9] = ld32((c.r[18].w[0] + 16u));
    c.f[6] = ld32((c.r[3].w[0] + 8u));
    c.f[8] = ld32((c.r[18].w[0] + 24u));
    c.f[7] = ld32((c.r[3].w[0] + 40u));
    c.f[4] = ld32((c.r[3].w[0] + 56u));
    c.facc = fp::ee::mul(c.fcr31, c.f[10], c.f[5]);
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[6]);
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[7]);
    c.f[3] = ld32((c.r[3].w[0] + 36u));
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    c.facc = fp::ee::mul(c.fcr31, c.f[10], c.f[1]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[3]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[3] = ld32((c.r[3].w[0] + 32u));
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    c.facc = fp::ee::mul(c.fcr31, c.f[10], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 240u), c.f[0]);
    st32((c.r[17].w[0]), c.f[4]);
    st32((c.r[16].w[0]), c.f[5]);
    set32(c.r[3], ld32((c.r[21].w[0] + 516u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 344u)));
    c.budget -= 38;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 348u)));  if (t) { goto L_004F0C98; } }
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_004F0840; } }
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 2;
L_004F0840:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F0858; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 1;
L_004F0858:
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 2;
L_004F0860:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[20], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.f[12] = ld32((c.r[18].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[7] = ld32((c.r[3].w[0] + 24u));
    c.f[11] = ld32((c.r[18].w[0] + 48u));
    c.f[8] = ld32((c.r[3].w[0] + 8u));
    c.f[10] = ld32((c.r[18].w[0] + 56u));
    c.f[9] = ld32((c.r[3].w[0] + 40u));
    c.f[6] = ld32((c.r[3].w[0] + 56u));
    c.facc = fp::ee::mul(c.fcr31, c.f[12], c.f[7]);
    c.f[5] = ld32((c.r[16].w[0]));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[11], c.f[8]);
    c.f[0] = c.r[2].w[0];
    c.f[7] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[9]);
    c.f[6] = fp::ee::add(c.fcr31, c.f[6], c.f[7]);
    set32(c.r[2], c.r[29].w[0] + 200u);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.f[2] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[2].w[0]), c.f[5]);
    c.f[22] = fp::ee::mul(c.fcr31, c.f[5], c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.facc = fp::ee::mul(c.fcr31, c.f[12], c.f[2]);
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    c.f[4] = ld32((c.r[3].w[0] + 36u));
    c.f[5] = ld32((c.r[3].w[0] + 32u));
    c.f[7] = ld32((c.r[3].w[0] + 52u));
    c.f[2] = ld32((c.r[3].w[0] + 48u));
    c.f[1] = ld32((c.r[29].w[0] + 240u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[11], c.f[3]);
    c.f[8] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[4]);
    c.f[3] = ld32((c.r[3].w[0] + 16u));
    c.f[4] = ld32((c.r[3].w[0]));
    c.f[6] = ld32((c.r[17].w[0]));
    c.f[7] = fp::ee::add(c.fcr31, c.f[7], c.f[8]);
    c.facc = fp::ee::mul(c.fcr31, c.f[12], c.f[3]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[11], c.f[4]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[5]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[21] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    st32((c.r[29].w[0] + 192u), c.f[1]);
    c.budget -= 49;
    { const bool t = c.r[23].d[0] != 0ull; st32((c.r[2].w[0]), c.f[4]);  if (t) { goto L_004F0CA0; } }
    c.budget -= 1;
L_004F0928:
    c.r[2].d[0] = 0ll < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004F0CD0; } }
    c.budget -= 1;
L_004F0938:
    set32(c.r[18], c.r[18].w[0] + 32u);
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[23], c.r[23].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F0730u | kUnwind; return; } goto L_004F0730; } }
    c.budget -= 1;
L_004F0950:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 520u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[22], c.r[22].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 24104u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[30], c.r[30].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F06FCu | kUnwind; return; } goto L_004F06FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F0C60; } }
L_004F0988:
    c.f[3] = ld32((c.r[6].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[2] = ld32((c.r[6].w[0] + 36u));
    set32(c.r[2], c.r[2].w[0] + 24104u);
    c.f[1] = ld32((c.r[6].w[0] + 40u));
    c.f[0] = ld32((c.r[6].w[0] + 44u));
    st32((c.r[29].w[0] + 224u), c.f[3]);
    st32((c.r[29].w[0] + 228u), c.f[2]);
    st32((c.r[29].w[0] + 232u), c.f[1]);
    st32((c.r[29].w[0] + 236u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 520u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_004F0C60; } }
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[29].w[0] + 212u);
    set32(c.r[16], c.r[29].w[0] + 216u);
    c.budget -= 3;
L_004F09DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 24104u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[22].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_004F0C30; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004F0C30; } }
L_004F0A10:
    set32(c.r[3], ld32((c.r[21].w[0] + 516u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 348u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], ld32((c.r[18].w[0])));  if (t) { goto L_004F0D18; } }
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_004F0A48; } }
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 2;
L_004F0A48:
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004F0A60; } }
    c.r[7].d[0] = ld8((c.r[5].w[0] + 1572u));
    c.budget -= 1;
L_004F0A60:
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 2;
L_004F0A68:
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.f[10] = ld32((c.r[18].w[0] + 20u));
    c.f[5] = ld32((c.r[3].w[0] + 24u));
    c.f[9] = ld32((c.r[18].w[0] + 16u));
    c.f[6] = ld32((c.r[3].w[0] + 8u));
    c.f[8] = ld32((c.r[18].w[0] + 24u));
    c.f[7] = ld32((c.r[3].w[0] + 40u));
    c.f[4] = ld32((c.r[3].w[0] + 56u));
    c.facc = fp::ee::mul(c.fcr31, c.f[10], c.f[5]);
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[6]);
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[7]);
    c.f[3] = ld32((c.r[3].w[0] + 36u));
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    c.facc = fp::ee::mul(c.fcr31, c.f[10], c.f[1]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[3]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[3] = ld32((c.r[3].w[0] + 32u));
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    c.facc = fp::ee::mul(c.fcr31, c.f[10], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    st32((c.r[17].w[0]), c.f[4]);
    st32((c.r[16].w[0]), c.f[5]);
    set32(c.r[3], ld32((c.r[21].w[0] + 516u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 344u)));
    c.budget -= 38;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 348u)));  if (t) { goto L_004F0D20; } }
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_004F0B20; } }
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 2;
L_004F0B20:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F0B38; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 1;
L_004F0B38:
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 2;
L_004F0B40:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[20], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.f[12] = ld32((c.r[18].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[7] = ld32((c.r[3].w[0] + 24u));
    c.f[11] = ld32((c.r[18].w[0] + 48u));
    c.f[8] = ld32((c.r[3].w[0] + 8u));
    c.f[10] = ld32((c.r[18].w[0] + 56u));
    c.f[9] = ld32((c.r[3].w[0] + 40u));
    c.f[6] = ld32((c.r[3].w[0] + 56u));
    c.facc = fp::ee::mul(c.fcr31, c.f[12], c.f[7]);
    c.f[5] = ld32((c.r[16].w[0]));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[11], c.f[8]);
    c.f[0] = c.r[2].w[0];
    c.f[7] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[9]);
    c.f[6] = fp::ee::add(c.fcr31, c.f[6], c.f[7]);
    set32(c.r[2], c.r[29].w[0] + 184u);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.f[2] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[2].w[0]), c.f[5]);
    c.f[22] = fp::ee::mul(c.fcr31, c.f[5], c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 180u);
    c.facc = fp::ee::mul(c.fcr31, c.f[12], c.f[2]);
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    c.f[4] = ld32((c.r[3].w[0] + 36u));
    c.f[5] = ld32((c.r[3].w[0] + 32u));
    c.f[7] = ld32((c.r[3].w[0] + 52u));
    c.f[2] = ld32((c.r[3].w[0] + 48u));
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[11], c.f[3]);
    c.f[8] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[4]);
    c.f[3] = ld32((c.r[3].w[0] + 16u));
    c.f[4] = ld32((c.r[3].w[0]));
    c.f[6] = ld32((c.r[17].w[0]));
    c.f[7] = fp::ee::add(c.fcr31, c.f[7], c.f[8]);
    c.facc = fp::ee::mul(c.fcr31, c.f[12], c.f[3]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[11], c.f[4]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[5]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[21] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    st32((c.r[29].w[0] + 176u), c.f[1]);
    c.budget -= 49;
    { const bool t = c.r[23].d[0] != 0ull; st32((c.r[2].w[0]), c.f[4]);  if (t) { goto L_004F0D28; } }
    c.budget -= 1;
L_004F0C08:
    c.r[2].d[0] = 0ll < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004F0D58; } }
    c.budget -= 1;
L_004F0C18:
    set32(c.r[18], c.r[18].w[0] + 32u);
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[23], c.r[23].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F0A10u | kUnwind; return; } goto L_004F0A10; } }
    c.budget -= 1;
L_004F0C30:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 520u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[22], c.r[22].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 24104u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[30], c.r[30].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F09DCu | kUnwind; return; } goto L_004F09DC; } }
L_004F0C60:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F0C64:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F0C78u); set32(c.r[5], c.r[2].w[0] + 536u);  if (depth < kMaxDepth) unit_007D(c, 408u, depth + 1u); else { c.pc = 0x003F7A50u; return; } if (c.pc != 0x004F0C78u) [[unlikely]] return; }
L_004F0C78:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F0C64u | kUnwind; return; } goto L_004F0C64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F0DA0; } }
L_004F0C90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F0788u | kUnwind; return; } goto L_004F0788; } }
L_004F0C98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F0860u | kUnwind; return; } goto L_004F0860; } }
L_004F0CA0:
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.f[2] = ld32((c.r[29].w[0] + 240u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[20]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[22]);
    st32((c.r[29].w[0] + 240u), c.f[2]);
    st32((c.r[17].w[0]), c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F0928u | kUnwind; return; } goto L_004F0928; } }
    c.budget -= 1;
L_004F0CD0:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F0CE0u); set32(c.r[6], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_007D(c, 63u, depth + 1u); else { c.pc = 0x003F45A0u; return; } if (c.pc != 0x004F0CE0u) [[unlikely]] return; }
L_004F0CE0:
    c.f[2] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[20]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[22]);
    st32((c.r[29].w[0] + 240u), c.f[2]);
    st32((c.r[17].w[0]), c.f[1]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F0CD0u | kUnwind; return; } goto L_004F0CD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F0938u | kUnwind; return; } goto L_004F0938; } }
L_004F0D18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F0A68u | kUnwind; return; } goto L_004F0A68; } }
L_004F0D20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F0B40u | kUnwind; return; } goto L_004F0B40; } }
L_004F0D28:
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.f[2] = ld32((c.r[29].w[0] + 208u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[20]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[22]);
    st32((c.r[29].w[0] + 208u), c.f[2]);
    st32((c.r[17].w[0]), c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F0C08u | kUnwind; return; } goto L_004F0C08; } }
    c.budget -= 1;
L_004F0D58:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F0D68u); set32(c.r[6], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_007D(c, 61u, depth + 1u); else { c.pc = 0x003F4570u; return; } if (c.pc != 0x004F0D68u) [[unlikely]] return; }
L_004F0D68:
    c.f[2] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[20]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[22]);
    st32((c.r[29].w[0] + 208u), c.f[2]);
    st32((c.r[17].w[0]), c.f[1]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F0D58u | kUnwind; return; } goto L_004F0D58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F0C18u | kUnwind; return; } goto L_004F0C18; } }
L_004F0DA0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_004F0DE0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004F0E88; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F0E18:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_004F0E28:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 536u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F0E40u); set32(c.r[21], c.r[2].w[0] + 536u);  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004F0E40u) [[unlikely]] return; }
L_004F0E40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F0E68; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F0E54u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x004F0E54u) [[unlikely]] return; }
L_004F0E54:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F0E28u | kUnwind; return; } goto L_004F0E28; } }
    c.budget -= 1;
L_004F0E68:
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 516u), c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F0E18u | kUnwind; return; } goto L_004F0E18; } }
    c.budget -= 1;
L_004F0E88:
    st32((c.r[20].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004F0EB0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004F0F58; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F0EE8:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_004F0EF8:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 536u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F0F10u); set32(c.r[21], c.r[2].w[0] + 536u);  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004F0F10u) [[unlikely]] return; }
L_004F0F10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F0F38; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F0F24u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x004F0F24u) [[unlikely]] return; }
L_004F0F24:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F0EF8u | kUnwind; return; } goto L_004F0EF8; } }
    c.budget -= 1;
L_004F0F38:
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 516u), c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F0EE8u | kUnwind; return; } goto L_004F0EE8; } }
    c.budget -= 1;
L_004F0F58:
    st32((c.r[20].w[0] + 4u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F0F78; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F0F74u); set32(c.r[5], c.r[5].w[0] + 1520u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004F0F74u) [[unlikely]] return; }
L_004F0F74:
    st32((c.r[20].w[0] + 8u), 0u);
    c.budget -= 1;
L_004F0F78:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F0F90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F0F8Cu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004F0F8Cu) [[unlikely]] return; }
L_004F0F8C:
    st32((c.r[20].w[0] + 12u), 0u);
    c.budget -= 1;
L_004F0F90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004F0FC0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[2] = ld32((c.r[4].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 24;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004F11A8; } }
    c.r[17].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 1;
L_004F1024:
    c.r[16].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_004F1028:
    c.f[0] = c.r[19].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.r[5].d[0] = 0ull | 0ull;
    c.f[5] = fp::cvt_s_w(c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.f[3] = c.r[2].w[0];
    c.f[4] = ld32((c.r[21].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[6] = ld32((c.r[21].w[0] + 20u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[2] = 0u;
    c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[5]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[5]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[21], c.f[21]);
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[2], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.f[2] = c.r[4].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[2]);
    c.f[23] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[22], c.f[2]);
    c.budget -= 41;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_004F10D0; } }
    st32((c.r[17].w[0]), c.r[22].w[0]);
    c.budget -= 1;
L_004F10D0:
    c.r[1].d[0] = 0ll < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004F1188; } }
    c.budget -= 1;
L_004F10E0:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_004F1110; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F10F0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004F10F0u) [[unlikely]] return; }
L_004F10F0:
    c.f[22] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F10FCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004F10FCu) [[unlikely]] return; }
L_004F10FC:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[22]);
    st32((c.r[16].w[0] + 4u), c.f[20]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 5;
L_004F1110:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.r[5].d[0] = 0ull | 0ull;
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.f[3] = fp::ee::add(c.fcr31, c.f[20], c.f[23]);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 12u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    set32(c.r[3], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 30;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F10E0u | kUnwind; return; } goto L_004F10E0; } }
L_004F1188:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.f[0] = c.r[19].w[0];
    c.f[2] = ld32((c.r[21].w[0] + 24u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F1028u | kUnwind; return; } goto L_004F1028; } }
    c.budget -= 1;
L_004F11A8:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
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
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004F11F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004F1200:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[6].w[0] + 32u), 0u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_004F1290; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_004F122C:
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_004F1280; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_004F1290; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[6], ld32((c.r[7].w[0])));
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[6].w[0]);  if (t) { goto L_004F1290; } }
L_004F1280:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F122Cu | kUnwind; return; } goto L_004F122C; } }
L_004F1290:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004F12A0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F12BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_004F1368; } }
L_004F12BC:
    set32(c.r[8], c.r[3].w[0] << 2);
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 24120u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    set32(c.r[9], ld32((c.r[2].w[0])));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], ld32((c.r[3].w[0])));
    st32((c.r[5].w[0] + 32u), 0u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[5].w[0] + 40u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[5].w[0] + 44u), c.r[9].w[0]);
    st32((c.r[5].w[0] + 16u), c.f[3]);
    st32((c.r[5].w[0] + 20u), c.f[2]);
    st32((c.r[5].w[0] + 24u), c.f[1]);
    st32((c.r[5].w[0] + 28u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 26;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004F132C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004F1344; } }
L_004F132C:
    set32(c.r[2], ld32((c.r[5].w[0] + 44u)));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
L_004F1344:
    st32((c.r[5].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
L_004F1368:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004F1370:
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
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_004F13B0; } }
L_004F13A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F1418; } }
L_004F13B0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F13B4:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F13CCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 110u, depth + 1u); else { c.pc = 0x004F1690u; return; } if (c.pc != 0x004F13CCu) [[unlikely]] return; }
L_004F13CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F13F4; } }
    c.budget -= 1;
L_004F13D8:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F13B4u | kUnwind; return; } goto L_004F13B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F13A8u | kUnwind; return; } goto L_004F13A8; } }
L_004F13F4:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F140Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 83u, depth + 1u); else { c.pc = 0x004F1200u; return; } if (c.pc != 0x004F140Cu) [[unlikely]] return; }
L_004F140C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F13D8u | kUnwind; return; } goto L_004F13D8; } }
    c.budget -= 1;
L_004F1418:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004F1440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F147C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F1478u); set32(c.r[5], c.r[5].w[0] + 5488u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004F1478u) [[unlikely]] return; }
L_004F1478:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_004F147C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_004F1500; } }
L_004F1484:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], ld32((c.r[16].w[0])));  if (t) { goto L_004F149C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F1498u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004F1498u) [[unlikely]] return; }
L_004F1498:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_004F149C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_004F153C; } }
L_004F14A4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004F154C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004F14BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 32u), 0u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 48u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F14BCu | kUnwind; return; } goto L_004F14BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004F1550; } }
L_004F1500:
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F1514u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004F1514u) [[unlikely]] return; }
L_004F1514:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 5472u);
    set32(c.r[6], c.r[6].w[0] + 5488u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F1534u); set32(c.r[7], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004F1534u) [[unlikely]] return; }
L_004F1534:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F1484u | kUnwind; return; } goto L_004F1484; } }
L_004F153C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F1544u); set32(c.r[4], c.r[17].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004F1544u) [[unlikely]] return; }
L_004F1544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F14A4u | kUnwind; return; } goto L_004F14A4; } }
L_004F154C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004F1550:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004F1560:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004F1570:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004F15A0; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004F15A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F15A0u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004F15A0u) [[unlikely]] return; }
L_004F15A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004F15C0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004F15F8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F15D4:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 32u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F15D4u | kUnwind; return; } goto L_004F15D4; } }
L_004F15F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_004F1600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004F1648; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F1624:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 32u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F1624u | kUnwind; return; } goto L_004F1624; } }
L_004F1648:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F1668; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F1664u); set32(c.r[5], c.r[5].w[0] + 5488u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004F1664u) [[unlikely]] return; }
L_004F1664:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_004F1668:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F1680; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F167Cu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004F167Cu) [[unlikely]] return; }
L_004F167C:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_004F1680:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004F1690:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 22;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 32u), c.f[1]);  if (t) { goto L_004F1CB0; } }
    c.r[4].d[0] = ld8((c.r[20].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_004F1CB8; } }
L_004F16F8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004F1D0C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004F1D0C; } }
L_004F170C:
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[7].d[0]; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004F1874; } }
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004F1A38; } }
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[2].w[0] - 8u);  if (t) { goto L_004F1820; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004F1758; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004F1758; } }
    c.r[5].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 1;
L_004F1758:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004F1820; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 2;
L_004F1768:
    c.f[2] = ld32((c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.f[1] = c.r[19].w[0];
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.f[6] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[5] = fp::cvt_s_w(c.f[0]);
    c.f[6] = fp::cvt_s_w(c.f[6]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[6]);
    c.f[4] = ld32((c.r[5].w[0] + 12u));
    c.f[6] = fp::cvt_w_s(c.f[5]);
    c.f[5] = fp::cvt_s_w(c.f[4]);
    c.f[4] = fp::cvt_s_w(c.f[6]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    c.f[3] = ld32((c.r[5].w[0] + 16u));
    c.f[5] = fp::cvt_w_s(c.f[4]);
    c.f[4] = fp::cvt_s_w(c.f[3]);
    c.f[3] = fp::cvt_s_w(c.f[5]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[2] = ld32((c.r[5].w[0] + 20u));
    c.f[4] = fp::cvt_w_s(c.f[3]);
    c.f[3] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[4]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = ld32((c.r[5].w[0] + 24u));
    c.f[3] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    c.f[2] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[19], c.f[0]);
    c.budget -= 46;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F1768u | kUnwind; return; } goto L_004F1768; } }
L_004F1820:
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004F1A38; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 4;
L_004F1840:
    c.f[1] = ld32((c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.f[0] = c.r[19].w[0];
    c.r[4].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[19], c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F1840u | kUnwind; return; } goto L_004F1840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F1A38; } }
L_004F1874:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    c.f[1] = ld32((c.r[3].w[0] + 24u));
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[6].w[0] - 1u);
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[19], c.f[0]);
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004F1A38; } }
    set32(c.r[5], c.r[2].w[0] + 8u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004F19E8; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 36u)));
    c.r[9].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_004F1CE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F1CE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[7].d[0] & 255ull;  if (t) { goto L_004F1CE4; } }
L_004F1900:
    set32(c.r[4], c.r[6].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F1918; } }
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004F1918:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_004F19E8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_004F1930:
    c.f[2] = ld32((c.r[2].w[0] - 4u));
    set32(c.r[3], c.r[3].w[0] - 8u);
    c.f[1] = c.r[19].w[0];
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.f[6] = ld32((c.r[2].w[0] - 12u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = ld32((c.r[2].w[0] - 8u));
    c.f[2] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[5] = fp::cvt_s_w(c.f[0]);
    c.f[6] = fp::cvt_s_w(c.f[6]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[5], c.f[6]);
    c.f[4] = ld32((c.r[2].w[0] - 16u));
    c.f[6] = fp::cvt_w_s(c.f[5]);
    c.f[5] = fp::cvt_s_w(c.f[4]);
    c.f[4] = fp::cvt_s_w(c.f[6]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[5]);
    c.f[3] = ld32((c.r[2].w[0] - 20u));
    c.f[5] = fp::cvt_w_s(c.f[4]);
    c.f[4] = fp::cvt_s_w(c.f[3]);
    c.f[3] = fp::cvt_s_w(c.f[5]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.f[2] = ld32((c.r[2].w[0] - 24u));
    c.f[4] = fp::cvt_w_s(c.f[3]);
    c.f[3] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = ld32((c.r[2].w[0] - 28u));
    c.f[3] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = ld32((c.r[2].w[0] - 32u));
    c.f[2] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[19], c.f[0]);
    c.budget -= 46;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] - 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F1930u | kUnwind; return; } goto L_004F1930; } }
L_004F19E8:
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004F1A38; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 4;
L_004F1A08:
    c.f[1] = ld32((c.r[4].w[0] - 4u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[0] = c.r[19].w[0];
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[19], c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F1A08u | kUnwind; return; } goto L_004F1A08; } }
    c.budget -= 1;
L_004F1A38:
    set32(c.r[6], ld32((c.r[20].w[0] + 44u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[2] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 28u)));
    c.f[22] = c.r[2].w[0];
    c.f[3] = ld32((c.r[6].w[0] + 24u));
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = c.r[3].w[0];
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[23] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[1].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 28;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004F1CF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[1].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[29].w[0] + 176u), 0u);
    c.f[2] = 0u;
    st32((c.r[29].w[0] + 184u), 0u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 180u), c.r[2].w[0]);  if (t) { goto L_004F1CF4; } }
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[21], c.r[29].w[0] + 228u);
    set32(c.r[16], c.r[29].w[0] + 232u);
    set32(c.r[22], c.r[29].w[0] + 212u);
    set32(c.r[23], c.r[29].w[0] + 216u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.f[21] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 11;
L_004F1AF8:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49807ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 224u), c.f[21]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[21]);
    st32((c.r[21].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    c.f[2] = c.r[2].w[0];
    c.f[12] = c.f[22];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F1B48u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004F1B48u) [[unlikely]] return; }
L_004F1B48:
    c.f[24] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F1B54u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004F1B54u) [[unlikely]] return; }
L_004F1B54:
    c.f[3] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[4] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[4], c.r[19].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.f[1] = c.f[0] ^ fp::kSign;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[24]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[24]);
    st32((c.r[29].w[0] + 224u), c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.f[0] = ld32((c.r[20].w[0] + 20u));
    c.f[4] = ld32((c.r[20].w[0] + 24u));
    c.f[1] = ld32((c.r[20].w[0] + 16u));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.f[2] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    st32((c.r[22].w[0]), c.f[2]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F1BD8u); st32((c.r[23].w[0]), c.f[3]);  if (depth < kMaxDepth) unit_0029(c, 206u, depth + 1u); else { c.pc = 0x002A6BD0u; return; } if (c.pc != 0x004F1BD8u) [[unlikely]] return; }
L_004F1BD8:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 40u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F1C50; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004F1C38; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004F1C08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F1C50; } }
    c.budget -= 1;
L_004F1C08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = ld32((c.r[21].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[6], c.r[29].w[0] + 224u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F1C2Cu); st32((c.r[21].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_007D(c, 45u, depth + 1u); else { c.pc = 0x003F43F0u; return; } if (c.pc != 0x004F1C2Cu) [[unlikely]] return; }
L_004F1C2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F1C60; } }
    c.budget -= 1;
L_004F1C38:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F1C48u); set32(c.r[6], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_007D(c, 47u, depth + 1u); else { c.pc = 0x003F4420u; return; } if (c.pc != 0x004F1C48u) [[unlikely]] return; }
L_004F1C48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F1C60; } }
L_004F1C50:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F1C60u); set32(c.r[6], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_007D(c, 49u, depth + 1u); else { c.pc = 0x003F4450u; return; } if (c.pc != 0x004F1C60u) [[unlikely]] return; }
L_004F1C60:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.f[22] = fp::ee::add(c.fcr31, c.f[22], c.f[23]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F1AF8u | kUnwind; return; } goto L_004F1AF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[20].w[0]));  if (t) { goto L_004F1CF8; } }
L_004F1C78:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_004F1C90; } }
L_004F1C84:
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[20].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 3;
L_004F1C90:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    c.f[2] = ld32((c.r[28].w[0] - 29672u));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 32u), c.f[0]);
    c.budget -= 8;
L_004F1CB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004F1D10; } }
L_004F1CB8:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F170Cu | kUnwind; return; } goto L_004F170C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F16F8u | kUnwind; return; } goto L_004F16F8; } }
L_004F1CE4:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F1918u | kUnwind; return; } goto L_004F1918; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F1900u | kUnwind; return; } goto L_004F1900; } }
L_004F1CF4:
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    c.budget -= 1;
L_004F1CF8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F1C84u | kUnwind; return; } goto L_004F1C84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 36u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F1C78u | kUnwind; return; } goto L_004F1C78; } }
L_004F1D0C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F1D10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
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
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_004F1D50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004F1DBC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F1D84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F1D80u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004F1D80u) [[unlikely]] return; }
L_004F1D80:
    st32((c.r[17].w[0] + 28u), 0u);
    c.budget -= 1;
L_004F1D84:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F1DA4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F1DA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F1DA0u); set32(c.r[4], c.r[2].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004F1DA0u) [[unlikely]] return; }
L_004F1DA0:
    st32((c.r[17].w[0] + 32u), 0u);
    c.budget -= 1;
L_004F1DA4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004F1DBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F1DBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004F1DBCu) [[unlikely]] return; }
L_004F1DBC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004F1DF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1536u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F1F58; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F1F10; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F1E84; } }
    set32(c.r[3], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F1E4C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F1E4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004F1F68; } }
L_004F1E4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F1E58u); set32(c.r[4], c.r[4].w[0] + 31536u);  if (depth < kMaxDepth) unit_00BE(c, 228u, depth + 1u); else { c.pc = 0x004FB340u; return; } if (c.pc != 0x004F1E58u) [[unlikely]] return; }
L_004F1E58:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 48u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F1F64; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 48u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F1E78u); set32(c.r[4], c.r[4].w[0] + 24608u);  if (depth < kMaxDepth) unit_0052(c, 134u, depth + 1u); else { c.pc = 0x0034AD50u; return; } if (c.pc != 0x004F1E78u) [[unlikely]] return; }
L_004F1E78:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004F1F64; } }
L_004F1E84:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[16].w[0] + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F1E94u); set32(c.r[4], c.r[2].w[0] + 320u);  if (depth < kMaxDepth) unit_00BA(c, 7u, depth + 1u); else { c.pc = 0x004E8090u; return; } if (c.pc != 0x004F1E94u) [[unlikely]] return; }
L_004F1E94:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F1F64; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    set32(c.r[6], 0u + 7u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[5] = ld32((c.r[3].w[0] + 36u));
    c.f[3] = ld32((c.r[3].w[0] + 40u));
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[6] = ld32((c.r[4].w[0] + 36u));
    c.f[4] = ld32((c.r[4].w[0] + 40u));
    c.f[12] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    set32(c.r[4], c.r[3].w[0] + 416u);
    c.f[5] = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[5], c.f[2]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F1F08u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_00A9(c, 103u, depth + 1u); else { c.pc = 0x004A53A0u; return; } if (c.pc != 0x004F1F08u) [[unlikely]] return; }
L_004F1F08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F1F64; } }
L_004F1F10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F1F1Cu); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 21u, depth + 1u); else { c.pc = 0x0034C2A0u; return; } if (c.pc != 0x004F1F1Cu) [[unlikely]] return; }
L_004F1F1C:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[16], c.r[2].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F1F30u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 31u, depth + 1u); else { c.pc = 0x003F42A0u; return; } if (c.pc != 0x004F1F30u) [[unlikely]] return; }
L_004F1F30:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F1F34:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F1F40u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 209u, depth + 1u); else { c.pc = 0x003F38C0u; return; } if (c.pc != 0x004F1F40u) [[unlikely]] return; }
L_004F1F40:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F1F34u | kUnwind; return; } goto L_004F1F34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F1F64; } }
L_004F1F58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F1F64u); set32(c.r[4], c.r[4].w[0] + 21824u);  if (depth < kMaxDepth) unit_009E(c, 236u, depth + 1u); else { c.pc = 0x0047B7C0u; return; } if (c.pc != 0x004F1F64u) [[unlikely]] return; }
L_004F1F64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004F1F68:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004F1F80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1536u));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F20CC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F20CC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F2030; } }
    set32(c.r[3], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F1FD8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F1FD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F20B0; } }
L_004F1FD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    set32(c.r[3], 0u - 1u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 48u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F20CC; } }
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 48u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 24708u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_004F20B0; } }
L_004F2030:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 49u));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 49u));
    c.r[1].d[0] = c.r[2].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004F20B8; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 49u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F205Cu); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 22u, depth + 1u); else { c.pc = 0x0034C2D0u; return; } if (c.pc != 0x004F205Cu) [[unlikely]] return; }
L_004F205C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 50u));
    c.budget -= 1;
L_004F2060:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004F20CC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 32u), c.f[1]);  if (t) { goto L_004F20CC; } }
    set32(c.r[2], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 50u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[2].w[0] + 32u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F20B0u); set32(c.r[4], c.r[3].w[0] + 388u);  if (depth < kMaxDepth) unit_00BC(c, 85u, depth + 1u); else { c.pc = 0x004F12A0u; return; } if (c.pc != 0x004F20B0u) [[unlikely]] return; }
L_004F20B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004F20D0; } }
L_004F20B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F20C4u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 21u, depth + 1u); else { c.pc = 0x0034C2A0u; return; } if (c.pc != 0x004F20C4u) [[unlikely]] return; }
L_004F20C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 50u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F2060u | kUnwind; return; } goto L_004F2060; } }
L_004F20CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004F20D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004F20E0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1536u));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F2398; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F238C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F21F4; } }
    set32(c.r[3], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F2138; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F2138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F23A4; } }
L_004F2138:
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[2] = ld32((c.r[5].w[0] + 32u));
    set32(c.r[3], c.r[29].w[0] + 148u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[4].w[0] + 31536u);
    c.f[7] = ld32((c.r[5].w[0] + 36u));
    c.f[5] = ld32((c.r[5].w[0] + 40u));
    c.f[1] = ld32((c.r[6].w[0] + 32u));
    c.f[6] = ld32((c.r[6].w[0] + 36u));
    c.f[4] = ld32((c.r[6].w[0] + 40u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[6] = fp::ee::add(c.fcr31, c.f[7], c.f[6]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[6], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[29].w[0] + 144u), c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[29].w[0] + 152u), c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[12] = ld32((c.r[16].w[0] + 28u));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F21A8u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00BE(c, 218u, depth + 1u); else { c.pc = 0x004FB0B0u; return; } if (c.pc != 0x004F21A8u) [[unlikely]] return; }
L_004F21A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43480000u);
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 10496u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[29].w[0] + 132u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F21ECu); set32(c.r[7], 0u + 30u);  if (depth < kMaxDepth) unit_0021(c, 345u, depth + 1u); else { c.pc = 0x00287B90u; return; } if (c.pc != 0x004F21ECu) [[unlikely]] return; }
L_004F21EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F23A4; } }
L_004F21F4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 28224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F23AC; } }
L_004F2200:
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 5u);
    set32(c.r[7], c.r[7].w[0] - 13864u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F2224u); set32(c.r[4], c.r[3].w[0] + 320u);  if (depth < kMaxDepth) unit_00BA(c, 19u, depth + 1u); else { c.pc = 0x004E83E0u; return; } if (c.pc != 0x004F2224u) [[unlikely]] return; }
L_004F2224:
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 380u));
    set32(c.r[2], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 48u));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = c.r[5].d[0] >> 57;
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_004F2260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[6].w[0] + 60u));  if (t) { goto L_004F2264; } }
L_004F2260:
    set32(c.r[5], 0u + 60u);
    c.budget -= 1;
L_004F2264:
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_004F246C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_004F24E8; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_004F22A4; } }
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_004F22A4:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[6].d[0] = c.r[7].d[0] & 255ull;
    c.r[4].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004F22BC; } }
    c.r[7].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_004F22BC:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[7], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_004F22CC:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F22D8u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0032(c, 15u, depth + 1u); else { c.pc = 0x002C8480u; return; } if (c.pc != 0x004F22D8u) [[unlikely]] return; }
L_004F22D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_004F22DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] + 24576u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F22F0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0052(c, 168u, depth + 1u); else { c.pc = 0x0034B8A0u; return; } if (c.pc != 0x004F22F0u) [[unlikely]] return; }
L_004F22F0:
    c.f[4] = ld32((c.r[29].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[10], c.r[29].w[0] + 36u);
    c.f[3] = ld32((c.r[29].w[0] + 76u));
    set32(c.r[3], c.r[29].w[0] + 40u);
    c.f[6] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[5] = ld32((c.r[29].w[0] + 72u));
    set32(c.r[6], 0u + 20u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[7], 0u + 100u);
    st32((c.r[29].w[0] + 48u), c.f[4]);
    c.r[8].d[0] = 0ull + 0ull;
    c.f[4] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[9], c.r[29].w[0] + 32u);
    c.f[2] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[29].w[0] + 60u), c.f[3]);
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    set32(c.r[4], c.r[2].w[0] + 528u);
    st32((c.r[29].w[0] + 52u), c.f[6]);
    st32((c.r[29].w[0] + 56u), c.f[5]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[2], c.f[6]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[1], c.f[5]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[1]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    st32((c.r[10].w[0]), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F2384u); st32((c.r[3].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_00A7(c, 162u, depth + 1u); else { c.pc = 0x0049EB80u; return; } if (c.pc != 0x004F2384u) [[unlikely]] return; }
L_004F2384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F23A4; } }
L_004F238C:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004F23A4; } }
L_004F2398:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F23A4u); set32(c.r[4], c.r[4].w[0] + 21824u);  if (depth < kMaxDepth) unit_009E(c, 237u, depth + 1u); else { c.pc = 0x0047B7D0u; return; } if (c.pc != 0x004F23A4u) [[unlikely]] return; }
L_004F23A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004F24F4; } }
L_004F23AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[11].d[0] = ld8((c.r[2].w[0] - 13872u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[3].w[0] - 13860u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[10].d[0] = ld8((c.r[2].w[0] - 13871u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[6].w[0] - 13859u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[9].d[0] = ld8((c.r[2].w[0] - 13870u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[5].w[0] - 13858u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] - 13869u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[9].d[0] = ld8((c.r[3].w[0] - 13879u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[4].w[0] - 13857u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[10].d[0] = ld8((c.r[2].w[0] - 13880u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = ld8((c.r[4].w[0] - 13877u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[6].w[0] - 13863u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[7].w[0] - 13864u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] - 13878u));
    st8((c.r[3].w[0] - 13861u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 13861u));
    c.r[1].d[0] = c.r[2].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 36;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[5].w[0] - 13862u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { goto L_004F245C; } }
L_004F243C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = ld8((c.r[3].w[0] - 13861u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 28224u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[4].d[0] | 128ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] - 13861u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F2200u | kUnwind; return; } goto L_004F2200; } }
L_004F245C:
    set32(c.r[3], 0u + 127u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] - 13861u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F243Cu | kUnwind; return; } goto L_004F243C; } }
L_004F246C:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1536u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_004F24DC; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_004F24A0; } }
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_004F24A0:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004F24B8; } }
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_004F24B8:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[6], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_004F24C8:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F24D4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0032(c, 17u, depth + 1u); else { c.pc = 0x002C8540u; return; } if (c.pc != 0x004F24D4u) [[unlikely]] return; }
L_004F24D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F22DCu | kUnwind; return; } goto L_004F22DC; } }
L_004F24DC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - 14016u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F24C8u | kUnwind; return; } goto L_004F24C8; } }
L_004F24E8:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - 14016u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F22CCu | kUnwind; return; } goto L_004F22CC; } }
L_004F24F4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004F2500:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0] + 360u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 356u), 0u);  c.pc = t; return; }
L_004F2510:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004F26D0; } }
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004F26D8; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004F2544:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F26E4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 1416u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004F2630; } }
L_004F2560:
    set32(c.r[2], ld32((c.r[3].w[0] + 1400u)));
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 1360u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F2610; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004F2610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F2598u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004F2598u) [[unlikely]] return; }
L_004F2598:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    set32(c.r[2], ld32((c.r[5].w[0] + 1400u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[16], ld32((c.r[2].w[0] + 1360u)));
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);  if (t) { goto L_004F2610; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 252u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 216u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F2610; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29239u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F25F8; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29240u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004F25F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F2610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F2608u); set32(c.r[4], ld32((c.r[16].w[0] + 264u)));  if (depth < kMaxDepth) unit_006C(c, 18u, depth + 1u); else { c.pc = 0x003B03A0u; return; } if (c.pc != 0x004F2608u) [[unlikely]] return; }
L_004F2608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F2610u); set32(c.r[4], ld32((c.r[16].w[0] + 260u)));  if (depth < kMaxDepth) unit_0063(c, 62u, depth + 1u); else { c.pc = 0x0038CD20u; return; } if (c.pc != 0x004F2610u) [[unlikely]] return; }
L_004F2610:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    set32(c.r[2], ld32((c.r[3].w[0] + 1416u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F2560u | kUnwind; return; } goto L_004F2560; } }
L_004F2630:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[2].w[0] - 20412u));
    c.f[2] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[18].w[0] + 24u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] - 20412u));
    c.f[2] = ld32((c.r[18].w[0] + 28u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[18].w[0] + 28u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004F2734; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EA80000u);
    c.r[2].d[0] = c.r[2].d[0] | 62915ull;
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F268Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F268Cu) [[unlikely]] return; }
L_004F268C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F2718; } }
L_004F2694:
    c.f[1] = ld32((c.r[18].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004F26C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F26B8u); set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));  if (depth < kMaxDepth) unit_0021(c, 56u, depth + 1u); else { c.pc = 0x00285120u; return; } if (c.pc != 0x004F26B8u) [[unlikely]] return; }
L_004F26B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004F2738; } }
L_004F26C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F26C8u); set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));  if (depth < kMaxDepth) unit_0021(c, 54u, depth + 1u); else { c.pc = 0x002850B0u; return; } if (c.pc != 0x004F26C8u) [[unlikely]] return; }
L_004F26C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F2734; } }
L_004F26D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F2544u | kUnwind; return; } goto L_004F2544; } }
L_004F26D8:
    st32((c.r[18].w[0] + 16u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F2544u | kUnwind; return; } goto L_004F2544; } }
L_004F26E4:
    c.r[7].d[0] = ld16((c.r[18].w[0]));
    set32(c.r[5], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[18].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004F2740; } }
L_004F2718:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F272Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F272Cu) [[unlikely]] return; }
L_004F272C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F2694u | kUnwind; return; } goto L_004F2694; } }
L_004F2734:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004F2738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F2740u);  if (depth < kMaxDepth) unit_00BC(c, 142u, depth + 1u); else { c.pc = 0x004F1F80u; return; } if (c.pc != 0x004F2740u) [[unlikely]] return; }
L_004F2740:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004F2760:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004F28F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[3].w[0] - 20272u);
    set32(c.r[5], 0u - 33u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[6], c.r[2].w[0] << 5);
    set32(c.r[8], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], 0u - 9u);
    c.r[7].d[0] = ld8((c.r[8].w[0] + 526u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0] + 526u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 1496u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F27C4u); st8((c.r[6].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00BC(c, 132u, depth + 1u); else { c.pc = 0x004F1DF0u; return; } if (c.pc != 0x004F27C4u) [[unlikely]] return; }
L_004F27C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1536u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004F2848; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004F2848; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004F2838; } }
    set32(c.r[2], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004F280C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F280C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 16u)));  if (t) { goto L_004F284C; } }
L_004F280C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 48u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004F2848; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 48u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F282Cu); set32(c.r[4], c.r[4].w[0] + 24608u);  if (depth < kMaxDepth) unit_0052(c, 134u, depth + 1u); else { c.pc = 0x0034AD50u; return; } if (c.pc != 0x004F282Cu) [[unlikely]] return; }
L_004F282C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004F2848; } }
L_004F2838:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[16].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F2848u); set32(c.r[4], c.r[2].w[0] + 320u);  if (depth < kMaxDepth) unit_00BA(c, 7u, depth + 1u); else { c.pc = 0x004E8090u; return; } if (c.pc != 0x004F2848u) [[unlikely]] return; }
L_004F2848:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_004F284C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F2900; } }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004F2908; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004F2868:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F28EC; } }
    set32(c.r[9], ld32((c.r[16].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 4u)));
    c.f[2] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[6], 0u + 9u);
    c.f[12] = c.r[2].w[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[9].w[0] + 32u));
    c.f[1] = ld32((c.r[8].w[0] + 32u));
    c.f[5] = ld32((c.r[9].w[0] + 36u));
    set32(c.r[4], c.r[3].w[0] + 416u);
    c.f[6] = ld32((c.r[8].w[0] + 36u));
    c.f[4] = ld32((c.r[8].w[0] + 40u));
    c.f[3] = ld32((c.r[9].w[0] + 40u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[5], c.f[2]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 36u), c.f[1]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F28DCu); st32((c.r[29].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_00A9(c, 103u, depth + 1u); else { c.pc = 0x004A53A0u; return; } if (c.pc != 0x004F28DCu) [[unlikely]] return; }
L_004F28DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F28ECu); set32(c.r[4], c.r[4].w[0] - 3744u);  if (depth < kMaxDepth) unit_006F(c, 56u, depth + 1u); else { c.pc = 0x003BD160u; return; } if (c.pc != 0x004F28ECu) [[unlikely]] return; }
L_004F28EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F28F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x004F28F8u) [[unlikely]] return; }
L_004F28F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004F2914; } }
L_004F2900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F2868u | kUnwind; return; } goto L_004F2868; } }
L_004F2908:
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F2868u | kUnwind; return; } goto L_004F2868; } }
L_004F2914:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004F2930:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[7].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[3], 0u - 5u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[20], c.r[7].w[0] << 3);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[14], 0u - 17u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[6], c.r[7].w[0] << 2);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[25].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[8].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[2], 0u - 9u);
    set32(c.r[15], 0u - 33u);
    set32(c.r[24], c.r[7].w[0] << 5);
    set32(c.r[13], c.r[7].w[0] << 11);
    set32(c.r[12], 0u - 2049u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[11], 0u + 42u);
    set32(c.r[10], c.r[10].w[0] - 20272u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[3].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], 0u - 65u);
    c.r[19].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[3], 0u + 32u);
    c.r[19].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.r[19].d[0] = c.r[19].d[0] | c.r[20].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[19].d[0] = ld16((c.r[4].w[0]));
    c.r[14].d[0] = c.r[19].d[0] & c.r[14].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[25].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.r[14].d[0] = ld16((c.r[4].w[0]));
    c.r[14].d[0] = c.r[14].d[0] & c.r[15].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[24].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.r[14].d[0] = ld16((c.r[4].w[0]));
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[17].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 16u), 0u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[15].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[9].d[0];
    st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1496u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st8((c.r[5].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[5].w[0] + 380u));
    c.budget -= 73;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.f[21] = c.f[12];  if (t) { goto L_004F2AB4; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F2D48; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 1;
L_004F2A68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st16((c.r[17].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[17].w[0] + 360u), 0u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[17].w[0] + 364u), 0u);
    c.r[3].d[0] = 0ull & 1ull;
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    set32(c.r[2], 0u - 2u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[17].w[0] + 356u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 382u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004F2B10; } }
L_004F2AB4:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = ld32((c.r[17].w[0] + 360u));  if (t) { goto L_004F2D58; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 1;
L_004F2AC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st16((c.r[17].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[17].w[0] + 360u), c.f[20]);
    c.r[3].d[0] = 0ull & 1ull;
    st32((c.r[17].w[0] + 364u), 0u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    set32(c.r[2], 0u - 2u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[17].w[0] + 356u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 382u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 18;
L_004F2B10:
    c.r[10].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[8], 0u - 5u);
    set32(c.r[9], c.r[2].w[0] << 2);
    set32(c.r[6], 0u - 3u);
    set32(c.r[7], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] << 4);
    set32(c.r[3], 0u - 17u);
    set32(c.r[2], 0u - 1u);
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[18].w[0]));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[18].w[0]));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 216u)));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F2B70u); set32(c.r[5], 0u + 100u);  if (depth < kMaxDepth) unit_0094(c, 73u, depth + 1u); else { c.pc = 0x00450FD0u; return; } if (c.pc != 0x004F2B70u) [[unlikely]] return; }
L_004F2B70:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0] + 16u), c.r[16].w[0]);  if (t) { goto L_004F2D68; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 6u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004F2D68; } }
L_004F2B84:
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F2B90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F2B90u) [[unlikely]] return; }
L_004F2B90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F2BA0; } }
L_004F2B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F2BA0u); set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));  if (depth < kMaxDepth) unit_0021(c, 56u, depth + 1u); else { c.pc = 0x00285120u; return; } if (c.pc != 0x004F2BA0u) [[unlikely]] return; }
L_004F2BA0:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[3] = ld32((c.r[2].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F2BC0u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x004F2BC0u) [[unlikely]] return; }
L_004F2BC0:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004F2BD8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 404u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004F2BD8:
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F2BE4u); set32(c.r[4], ld32((c.r[17].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 35u, depth + 1u); else { c.pc = 0x00450680u; return; } if (c.pc != 0x004F2BE4u) [[unlikely]] return; }
L_004F2BE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F2DA0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004F2BF0:
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1536u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004F2D34; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004F2D18; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004F2C34; } }
    set32(c.r[2], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004F2D34; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F2D34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004F2D38; } }
L_004F2C34:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 28228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F2CEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[11].d[0] = ld8((c.r[2].w[0] - 13896u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[3].w[0] - 13884u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[10].d[0] = ld8((c.r[2].w[0] - 13895u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[6].w[0] - 13883u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[9].d[0] = ld8((c.r[2].w[0] - 13894u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[5].w[0] - 13882u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] - 13893u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[9].d[0] = ld8((c.r[3].w[0] - 13903u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[4].w[0] - 13881u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[10].d[0] = ld8((c.r[2].w[0] - 13904u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = ld8((c.r[4].w[0] - 13901u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[6].w[0] - 13887u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[7].w[0] - 13888u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] - 13902u));
    st8((c.r[3].w[0] - 13885u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 13885u));
    c.r[1].d[0] = c.r[2].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 36;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[5].w[0] - 13886u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { goto L_004F2DB0; } }
L_004F2CD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = ld8((c.r[3].w[0] - 13885u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 28228u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[4].d[0] | 128ull;
    st8((c.r[2].w[0] - 13885u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_004F2CEC:
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 9u);
    set32(c.r[7], c.r[7].w[0] - 13888u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F2D10u); set32(c.r[4], c.r[3].w[0] + 320u);  if (depth < kMaxDepth) unit_00BA(c, 19u, depth + 1u); else { c.pc = 0x004E83E0u; return; } if (c.pc != 0x004F2D10u) [[unlikely]] return; }
L_004F2D10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_004F2D34; } }
L_004F2D18:
    st8((c.r[18].w[0] + 50u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[18].w[0] + 28u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.budget -= 7;
L_004F2D34:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004F2D38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F2D40u);  if (depth < kMaxDepth) unit_00BC(c, 147u, depth + 1u); else { c.pc = 0x004F20E0u; return; } if (c.pc != 0x004F2D40u) [[unlikely]] return; }
L_004F2D40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004F2DC0; } }
L_004F2D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F2D50u); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x004F2D50u) [[unlikely]] return; }
L_004F2D50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F2A68u | kUnwind; return; } goto L_004F2A68; } }
L_004F2D58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F2D60u); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x004F2D60u) [[unlikely]] return; }
L_004F2D60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F2AC8u | kUnwind; return; } goto L_004F2AC8; } }
L_004F2D68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[18].w[0] + 24u), 0u);
    set32(c.r[4], c.r[4].w[0] - 3744u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F2D80u); st32((c.r[18].w[0] + 28u), c.f[21]);  if (depth < kMaxDepth) unit_006F(c, 56u, depth + 1u); else { c.pc = 0x003BD160u; return; } if (c.pc != 0x004F2D80u) [[unlikely]] return; }
L_004F2D80:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F2D90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F2D90u) [[unlikely]] return; }
L_004F2D90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F2B98u | kUnwind; return; } goto L_004F2B98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[17].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F2B84u | kUnwind; return; } goto L_004F2B84; } }
L_004F2DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F2DA8u); set32(c.r[4], ld32((c.r[17].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 30u, depth + 1u); else { c.pc = 0x00450600u; return; } if (c.pc != 0x004F2DA8u) [[unlikely]] return; }
L_004F2DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F2BF0u | kUnwind; return; } goto L_004F2BF0; } }
L_004F2DB0:
    set32(c.r[3], 0u + 127u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] - 13885u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F2CD0u | kUnwind; return; } goto L_004F2CD0; } }
L_004F2DC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004F2DF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004F2E58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[3].w[0] - 20240u);
    set32(c.r[6], 0u - 33u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[7], c.r[2].w[0] << 5);
    set32(c.r[9], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], 0u - 9u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[8].d[0] = ld8((c.r[9].w[0] + 526u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[9].w[0] + 526u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[6].d[0] = ld8((c.r[7].w[0] + 1496u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F2E58u); st8((c.r[7].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x004F2E58u) [[unlikely]] return; }
L_004F2E58:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004F2E70:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 380u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F2E88; } }
L_004F2E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F2E94; } }
L_004F2E88:
    st32((c.r[4].w[0] + 360u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 356u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F2E80u | kUnwind; return; } goto L_004F2E80; } }
L_004F2E94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004F2EA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004F2EB0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[6].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[3], c.r[6].w[0] << 2);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[21], 0u - 9u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[22], c.r[6].w[0] << 3);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], 0u - 17u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[24], 0u - 33u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[25], c.r[6].w[0] << 5);
    c.r[7].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[2], 0u - 5u);
    set32(c.r[14], 0u - 2049u);
    set32(c.r[15], c.r[6].w[0] << 11);
    set32(c.r[8], c.r[6].w[0] << 4);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[13], 0u + 41u);
    set32(c.r[12], c.r[12].w[0] - 20240u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[9], 0u - 65u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[23], 0u - 3u);
    c.r[7].d[0] = c.r[7].d[0] & c.r[2].d[0];
    set32(c.r[6], c.r[6].w[0] << 1);
    c.r[7].d[0] = c.r[7].d[0] | c.r[3].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[20].d[0] = ld16((c.r[4].w[0]));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[20].d[0] = c.r[20].d[0] & c.r[21].d[0];
    c.r[20].d[0] = c.r[20].d[0] | c.r[22].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.r[20].d[0] = ld16((c.r[4].w[0]));
    c.r[20].d[0] = c.r[20].d[0] & c.r[18].d[0];
    c.r[19].d[0] = c.r[20].d[0] | c.r[19].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[19].d[0] = ld16((c.r[4].w[0]));
    c.r[19].d[0] = c.r[19].d[0] & c.r[24].d[0];
    c.r[19].d[0] = c.r[19].d[0] | c.r[25].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[19].d[0] = ld16((c.r[4].w[0]));
    c.r[14].d[0] = c.r[19].d[0] & c.r[14].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[15].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[14].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[12].w[0]);
    c.r[12].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[12].d[0] = c.r[12].d[0] & c.r[24].d[0];
    c.r[11].d[0] = c.r[12].d[0] | c.r[11].d[0];
    st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[4].w[0]));
    c.r[9].d[0] = c.r[9].d[0] & c.r[18].d[0];
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[5].w[0] + 1496u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[21].d[0];
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    st8((c.r[5].w[0] + 1496u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[4].w[0]));
    c.r[7].d[0] = c.r[7].d[0] & c.r[23].d[0];
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 86;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004F30AC; } }
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_004F300C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 360u), 0u);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[2].w[0];
    set32(c.r[2], 0u - 2u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
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
    set32(c.r[4], ld32((c.r[16].w[0] + 216u)));
    c.budget -= 32;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F30A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3094u);  if (depth < kMaxDepth) unit_0094(c, 35u, depth + 1u); else { c.pc = 0x00450680u; return; } if (c.pc != 0x004F3094u) [[unlikely]] return; }
L_004F3094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F30A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F30A4u); set32(c.r[4], ld32((c.r[16].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 30u, depth + 1u); else { c.pc = 0x00450600u; return; } if (c.pc != 0x004F30A4u) [[unlikely]] return; }
L_004F30A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004F30BC; } }
L_004F30AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F30B4u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x004F30B4u) [[unlikely]] return; }
L_004F30B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F300Cu | kUnwind; return; } goto L_004F300C; } }
L_004F30BC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004F30F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004F3198; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[3].w[0] - 20208u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1496u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3140u); set32(c.r[4], ld32((c.r[2].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 69u, depth + 1u); else { c.pc = 0x00450F70u; return; } if (c.pc != 0x004F3140u) [[unlikely]] return; }
L_004F3140:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F314Cu); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 21u, depth + 1u); else { c.pc = 0x0034C2A0u; return; } if (c.pc != 0x004F314Cu) [[unlikely]] return; }
L_004F314C:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], 0u - 33u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3178u); set32(c.r[4], ld32((c.r[2].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 69u, depth + 1u); else { c.pc = 0x00450F70u; return; } if (c.pc != 0x004F3178u) [[unlikely]] return; }
L_004F3178:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004F3198; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 20016u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3198u); st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0027(c, 151u, depth + 1u); else { c.pc = 0x0029EF30u; return; } if (c.pc != 0x004F3198u) [[unlikely]] return; }
L_004F3198:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004F31B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 102u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 380u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F31E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F329C; } }
L_004F31E0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004F32A4; } }
    set32(c.r[3], 0u + 26u);
    c.budget -= 1;
L_004F31F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], 0u - 2u);
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[3].w[0];
    set32(c.r[5], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[3], 0u - 3u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[9], c.f[0]);
    st32((c.r[16].w[0] + 356u), c.r[9].w[0]);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 382u));
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
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 42;
L_004F329C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004F32B4; } }
L_004F32A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F32ACu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x004F32ACu) [[unlikely]] return; }
L_004F32AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 26u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F31F4u | kUnwind; return; } goto L_004F31F4; } }
L_004F32B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004F32D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u - 2u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[7], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[10], ld32((c.r[4].w[0] + 4u)));
    c.r[8].d[0] = ld16((c.r[10].w[0] + 380u));
    set32(c.r[9], ld32((c.r[10].w[0] + 344u)));
    c.r[6].d[0] = ld8((c.r[10].w[0] + 736u));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[17], ld32((c.r[8].w[0] + 12u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[10].w[0] + 736u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 23;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004F35C4; } }
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004F35CC; } }
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 1;
L_004F3340:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F35D8; } }
L_004F3348:
    c.r[4].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[3], 0u + 4u);
    c.r[4].d[0] = c.r[4].d[0] << 54;
    c.r[4].d[0] = c.r[4].d[0] >> 60;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F354C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F3518; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F349C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F3444; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F3394; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F35BC; } }
L_004F3394:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 58u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004F35F4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_004F33A8:
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004F3604; } }
L_004F33B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    c.f[1] = ld32((c.r[3].w[0] + 360u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_00BD(c, 4u, depth); } }
    c.r[4].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[2], 0u - 961u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 216u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F33F8u); set32(c.r[5], 0u + 100u);  if (depth < kMaxDepth) unit_0094(c, 73u, depth + 1u); else { c.pc = 0x00450FD0u; return; } if (c.pc != 0x004F33F8u) [[unlikely]] return; }
L_004F33F8:
    set32(c.r[9], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_004F3744; } }
L_004F3404:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 69u));
    c.budget -= 1;
L_004F3408:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00BD(c, 4u, depth); } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 3744u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3424u); st32((c.r[16].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_006F(c, 56u, depth + 1u); else { c.pc = 0x003BD160u; return; } if (c.pc != 0x004F3424u) [[unlikely]] return; }
L_004F3424:
    set32(c.r[2], 0u + 16u);
    set32(c.r[4], 0u + 118u);
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F343Cu); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0077(c, 45u, depth + 1u); else { c.pc = 0x003DC790u; return; } if (c.pc != 0x004F343Cu) [[unlikely]] return; }
L_004F343C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F35BC; } }
L_004F3444:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[2] = ld32((c.r[16].w[0] + 60u));
    c.f[1] = ld32((c.r[2].w[0] - 20412u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 60u), c.f[1]);  if (t) { goto L_004F3C48; } }
L_004F3468:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 68u));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 68u));
    c.r[1].d[0] = c.r[2].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004F3C88; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 68u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3494u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 22u, depth + 1u); else { c.pc = 0x0034C2D0u; return; } if (c.pc != 0x004F3494u) [[unlikely]] return; }
L_004F3494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F35BC; } }
L_004F349C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[2] = ld32((c.r[16].w[0] + 64u));
    c.f[1] = ld32((c.r[2].w[0] - 20412u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 64u), c.f[1]);  if (t) { goto L_004F34E4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F3C9C; } }
L_004F34CC:
    c.r[4].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[2], 0u - 961u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(192ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_004F34E4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 68u));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 68u));
    c.r[1].d[0] = c.r[2].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004F3FF0; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 68u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3510u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 22u, depth + 1u); else { c.pc = 0x0034C2D0u; return; } if (c.pc != 0x004F3510u) [[unlikely]] return; }
L_004F3510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F35BC; } }
L_004F3518:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 68u));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 68u));
    c.r[1].d[0] = c.r[2].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00BD(c, 2u, depth); } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 68u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3544u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 22u, depth + 1u); else { c.pc = 0x0034C2D0u; return; } if (c.pc != 0x004F3544u) [[unlikely]] return; }
L_004F3544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F35BC; } }
L_004F354C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[2] = ld32((c.r[16].w[0] + 60u));
    c.f[1] = ld32((c.r[2].w[0] - 20412u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 60u), c.f[1]);  if (t) { goto L_004F35AC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] + 388u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F358Cu); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_00BC(c, 85u, depth + 1u); else { c.pc = 0x004F12A0u; return; } if (c.pc != 0x004F358Cu) [[unlikely]] return; }
L_004F358C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[2], 0u - 961u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
L_004F35AC:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 68u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F35BCu); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 22u, depth + 1u); else { c.pc = 0x0034C2D0u; return; } if (c.pc != 0x004F35BCu) [[unlikely]] return; }
L_004F35BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { [[clang::musttail]] return unit_00BD(c, 5u, depth); } }
L_004F35C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F3340u | kUnwind; return; } goto L_004F3340; } }
L_004F35CC:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F3340u | kUnwind; return; } goto L_004F3340; } }
L_004F35D8:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 58u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 58u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F3348u | kUnwind; return; } goto L_004F3348; } }
L_004F35F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F35FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 139u, depth + 1u); else { c.pc = 0x0029EA00u; return; } if (c.pc != 0x004F35FCu) [[unlikely]] return; }
L_004F35FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F33A8u | kUnwind; return; } goto L_004F33A8; } }
L_004F3604:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3614u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F3614u) [[unlikely]] return; }
L_004F3614:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F3664; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1496u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004F364C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F364C; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004F364C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004F36DC; } }
L_004F3654:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_004F36F4; } }
L_004F365C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[19].d[0] & 255ull;  if (t) { goto L_004F36C4; } }
L_004F3664:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 1496u));
    c.r[3].d[0] = c.r[5].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004F36C0; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 216u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004F3718; } }
    c.r[3].d[0] = c.r[5].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F3718; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_004F3718; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 29u));
    c.budget -= 1;
L_004F36A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F36B4; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004F36B4:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_004F36C0; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F36C0:
    c.r[18].d[0] = c.r[8].d[0] & 255ull;
    c.budget -= 1;
L_004F36C4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_004F3728; } }
L_004F36CC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F33B4u | kUnwind; return; } goto L_004F33B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[28].w[0] - 29672u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F33B4u | kUnwind; return; } goto L_004F33B4; } }
L_004F36DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F36E4u); set32(c.r[4], ld32((c.r[4].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 72u, depth + 1u); else { c.pc = 0x00450FA0u; return; } if (c.pc != 0x004F36E4u) [[unlikely]] return; }
L_004F36E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F3654u | kUnwind; return; } goto L_004F3654; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F3654u | kUnwind; return; } goto L_004F3654; } }
L_004F36F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1536u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3704u); set32(c.r[4], ld32((c.r[2].w[0] + 212u)));  if (depth < kMaxDepth) unit_0028(c, 145u, depth + 1u); else { c.pc = 0x002A19A0u; return; } if (c.pc != 0x004F3704u) [[unlikely]] return; }
L_004F3704:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F365Cu | kUnwind; return; } goto L_004F365C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F365Cu | kUnwind; return; } goto L_004F365C; } }
L_004F3718:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F36B4u | kUnwind; return; } goto L_004F36B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[4].w[0] + 29u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F36A8u | kUnwind; return; } goto L_004F36A8; } }
L_004F3728:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F373Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F373Cu) [[unlikely]] return; }
L_004F373C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F36CCu | kUnwind; return; } goto L_004F36CC; } }
L_004F3744:
    c.r[8].d[0] = ld16((c.r[9].w[0] + 544u));
    set32(c.r[6], 0u - 3u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[9].w[0] + 544u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[9].w[0] + 544u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[9].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[9].w[0] + 544u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[9].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F37A0u); c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F37A0u) [[unlikely]] return; }
L_004F37A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F37F0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1496u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004F37D8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F37D8; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_004F37D8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004F38D0; } }
L_004F37E0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_004F38E8; } }
L_004F37E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[18].d[0] & 255ull;  if (t) { goto L_004F3850; } }
L_004F37F0:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1496u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_004F384C; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 216u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004F390C; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F390C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_004F390C; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 29u));
    c.budget -= 1;
L_004F3834:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F3840; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004F3840:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_004F384C; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F384C:
    c.r[17].d[0] = c.r[8].d[0] & 255ull;
    c.budget -= 1;
L_004F3850:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_004F391C; } }
L_004F3858:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004F387C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004F3938; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F3878:
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_004F387C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 69u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F3C34; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_004F3C18; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_004F3894:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[5], 0u + 16u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(256ll);
    set32(c.r[3], 0u - 961u);
    st32((c.r[6].w[0] + 364u), 0u);
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[16].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F3404u | kUnwind; return; } goto L_004F3404; } }
L_004F38D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F38D8u); set32(c.r[4], ld32((c.r[4].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 72u, depth + 1u); else { c.pc = 0x00450FA0u; return; } if (c.pc != 0x004F38D8u) [[unlikely]] return; }
L_004F38D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F37E0u | kUnwind; return; } goto L_004F37E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F37E0u | kUnwind; return; } goto L_004F37E0; } }
L_004F38E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1536u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F38F8u); set32(c.r[4], ld32((c.r[2].w[0] + 212u)));  if (depth < kMaxDepth) unit_0028(c, 145u, depth + 1u); else { c.pc = 0x002A19A0u; return; } if (c.pc != 0x004F38F8u) [[unlikely]] return; }
L_004F38F8:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F37E8u | kUnwind; return; } goto L_004F37E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F37E8u | kUnwind; return; } goto L_004F37E8; } }
L_004F390C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F3840u | kUnwind; return; } goto L_004F3840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[5].w[0] + 29u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F3834u | kUnwind; return; } goto L_004F3834; } }
L_004F391C:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3930u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F3930u) [[unlikely]] return; }
L_004F3930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F3858u | kUnwind; return; } goto L_004F3858; } }
L_004F3938:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], 0u + 52u);
    st32((c.r[16].w[0] + 72u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 220u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F3980; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1496u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004F3980; } }
L_004F3968:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F3BE0; } }
L_004F3978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F3878u | kUnwind; return; } goto L_004F3878; } }
L_004F3980:
    set32(c.r[11], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[9], c.r[2].w[0] << 3);
    set32(c.r[8], 0u - 9u);
    set32(c.r[6], 0u - 3u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[10].d[0] = ld8((c.r[11].w[0] + 1496u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[11].w[0] + 1496u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[9], ld32((c.r[16].w[0] + 24u)));
    c.r[8].d[0] = ld16((c.r[9].w[0] + 544u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[9].w[0] + 544u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[9].w[0] + 544u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[9].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[9].w[0] + 544u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[9].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 33;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F3A24; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[3].w[0] + 544u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3A1Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 384u, depth + 1u); else { c.pc = 0x0028BB40u; return; } if (c.pc != 0x004F3A1Cu) [[unlikely]] return; }
L_004F3A1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_004F3A40; } }
L_004F3A24:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], c.r[3].w[0] + 544u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3A3Cu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 384u, depth + 1u); else { c.pc = 0x0028BB40u; return; } if (c.pc != 0x004F3A3Cu) [[unlikely]] return; }
L_004F3A3C:
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_004F3A40:
    set32(c.r[3], 0u + 52u);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 220u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004F3A78; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 28268u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F3A78; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 142u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3A6Cu); set32(c.r[4], c.r[4].w[0] + 28208u);  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x004F3A6Cu) [[unlikely]] return; }
L_004F3A6C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3A78u); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_00B6(c, 26u, depth + 1u); else { c.pc = 0x004D83F0u; return; } if (c.pc != 0x004F3A78u) [[unlikely]] return; }
L_004F3A78:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 1360u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F3BD0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F3BD0; } }
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F3B10; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 4096u);
    c.budget -= 3;
L_004F3AB4:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004F3AFC; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_004F3AFC; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_004F3B10; } }
L_004F3AFC:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F3AB4u | kUnwind; return; } goto L_004F3AB4; } }
    c.budget -= 1;
L_004F3B10:
    set32(c.r[4], ld32((c.r[3].w[0] + 200u)));
    c.r[4].d[0] = c.r[4].d[0] | 4096ull;
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 7;
L_004F3B2C:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004F3B98; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 4096u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_004F3BD8; } }
L_004F3B90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_004F3BCC; } }
L_004F3B98:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_004F3BB0; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F3BB0:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F3B2Cu | kUnwind; return; } goto L_004F3B2C; } }
    breakpoint(c, 0x004F3BC0u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
L_004F3BCC:
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_004F3BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F3968u | kUnwind; return; } goto L_004F3968; } }
L_004F3BD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F3B90u | kUnwind; return; } goto L_004F3B90; } }
L_004F3BE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[6], 0u - 9u);
    c.r[8].d[0] = ld16((c.r[3].w[0] + 29166u));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[5].d[0] = ld16((c.r[3].w[0] + 29154u));
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0] + 29166u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[5].w[0] + 1u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 29154u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F3978u | kUnwind; return; } goto L_004F3978; } }
L_004F3C18:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.f[12] = ld32((c.r[16].w[0] + 72u));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3C2Cu); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 96u, depth + 1u); else { c.pc = 0x0028CF60u; return; } if (c.pc != 0x004F3C2Cu) [[unlikely]] return; }
L_004F3C2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F3894u | kUnwind; return; } goto L_004F3894; } }
L_004F3C34:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3C40u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 78u, depth + 1u); else { c.pc = 0x0028CD70u; return; } if (c.pc != 0x004F3C40u) [[unlikely]] return; }
L_004F3C40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 69u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F3408u | kUnwind; return; } goto L_004F3408; } }
L_004F3C48:
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] + 388u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3C64u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_00BC(c, 85u, depth + 1u); else { c.pc = 0x004F12A0u; return; } if (c.pc != 0x004F3C64u) [[unlikely]] return; }
L_004F3C64:
    c.r[5].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[3], 0u - 961u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F3468u | kUnwind; return; } goto L_004F3468; } }
L_004F3C88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3C94u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 21u, depth + 1u); else { c.pc = 0x0034C2A0u; return; } if (c.pc != 0x004F3C94u) [[unlikely]] return; }
L_004F3C94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F35BCu | kUnwind; return; } goto L_004F35BC; } }
L_004F3C9C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[17], c.r[2].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3CACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 31u, depth + 1u); else { c.pc = 0x003F42A0u; return; } if (c.pc != 0x004F3CACu) [[unlikely]] return; }
L_004F3CAC:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F3CB0:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3CBCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 209u, depth + 1u); else { c.pc = 0x003F38C0u; return; } if (c.pc != 0x004F3CBCu) [[unlikely]] return; }
L_004F3CBC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F3CB0u | kUnwind; return; } goto L_004F3CB0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] + 24576u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3CE8u); set32(c.r[5], c.r[3].w[0] + 32u);  if (depth < kMaxDepth) unit_0052(c, 171u, depth + 1u); else { c.pc = 0x0034B9C0u; return; } if (c.pc != 0x004F3CE8u) [[unlikely]] return; }
L_004F3CE8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 69u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F3F4C; } }
    set32(c.r[11], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[9], c.r[2].w[0] << 3);
    set32(c.r[8], 0u - 9u);
    set32(c.r[6], 0u - 3u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[10].d[0] = ld8((c.r[11].w[0] + 1496u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[11].w[0] + 1496u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[9], ld32((c.r[16].w[0] + 24u)));
    c.r[8].d[0] = ld16((c.r[9].w[0] + 544u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[9].w[0] + 544u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[9].w[0] + 544u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[9].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[9].w[0] + 544u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[9].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 33;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F3D98; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[3].w[0] + 544u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3D90u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 384u, depth + 1u); else { c.pc = 0x0028BB40u; return; } if (c.pc != 0x004F3D90u) [[unlikely]] return; }
L_004F3D90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_004F3DB4; } }
L_004F3D98:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], c.r[3].w[0] + 544u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3DB0u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 384u, depth + 1u); else { c.pc = 0x0028BB40u; return; } if (c.pc != 0x004F3DB0u) [[unlikely]] return; }
L_004F3DB0:
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_004F3DB4:
    set32(c.r[2], 0u + 52u);
    c.r[3].d[0] = ld8((c.r[6].w[0] + 220u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004F3DEC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28268u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F3DEC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 142u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3DE0u); set32(c.r[4], c.r[4].w[0] + 28208u);  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x004F3DE0u) [[unlikely]] return; }
L_004F3DE0:
    set32(c.r[4], ld32((c.r[28].w[0] - 28268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3DECu); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_00B6(c, 26u, depth + 1u); else { c.pc = 0x004D83F0u; return; } if (c.pc != 0x004F3DECu) [[unlikely]] return; }
L_004F3DEC:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 1360u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F34CCu | kUnwind; return; } goto L_004F34CC; } }
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F34CCu | kUnwind; return; } goto L_004F34CC; } }
    set32(c.r[2], c.r[3].w[0] + 8u);
    set32(c.r[3], ld32((c.r[3].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F3E80; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 4096u);
    c.budget -= 3;
L_004F3E28:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004F3E70; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_004F3E70; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004F3E80; } }
L_004F3E70:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F3E28u | kUnwind; return; } goto L_004F3E28; } }
L_004F3E80:
    set32(c.r[3], ld32((c.r[2].w[0] + 200u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[2].w[0] + 200u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.r[3].d[0] = c.r[7].d[0] << 56;
    set32(c.r[5], 0u + 10u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
L_004F3E9C:
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
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004F3F08; } }
    st8((c.r[8].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 4096u);
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
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F3F44; } }
L_004F3F00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004F3F3C; } }
L_004F3F08:
    set32(c.r[4], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[4].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_004F3F20; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F3F20:
    c.r[4].d[0] = c.r[7].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F3E9Cu | kUnwind; return; } goto L_004F3E9C; } }
    breakpoint(c, 0x004F3F30u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_004F3F3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F34CCu | kUnwind; return; } goto L_004F34CC; } }
L_004F3F44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F3F00u | kUnwind; return; } goto L_004F3F00; } }
L_004F3F4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3F5Cu); set32(c.r[4], c.r[4].w[0] - 3744u);  if (depth < kMaxDepth) unit_006F(c, 56u, depth + 1u); else { c.pc = 0x003BD160u; return; } if (c.pc != 0x004F3F5Cu) [[unlikely]] return; }
L_004F3F5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[8], 0u - 3u);
    st32((c.r[29].w[0] + 104u), 0u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[11], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[10].d[0] = ld16((c.r[11].w[0] + 544u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[11].w[0] + 544u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[11].w[0] + 544u));
    c.r[4].d[0] = c.r[8].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[11].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[11].w[0] + 544u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[11].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3FD0u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 366u, depth + 1u); else { c.pc = 0x0028B840u; return; } if (c.pc != 0x004F3FD0u) [[unlikely]] return; }
L_004F3FD0:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 531u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 531u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F34CCu | kUnwind; return; } goto L_004F34CC; } }
L_004F3FF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F3FFCu); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 21u, depth + 1u); else { c.pc = 0x0034C2A0u; return; } if (c.pc != 0x004F3FFCu) [[unlikely]] return; }
L_004F3FFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F35BCu | kUnwind; return; } goto L_004F35BC; } }
    [[clang::musttail]] return unit_00BD(c, 2u, depth);
}

}

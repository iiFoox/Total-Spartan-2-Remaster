#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006C[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 8, 9, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0,
    0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0,
    0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94,
    0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 104, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0,
    121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142,
    0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 148,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154,
    0, 155, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0,
    0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 204, 205, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0,
    0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 219,
    0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0,
    249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0,
};

void unit_006C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003B0000;
    case 2u: goto L_003B0020;
    case 3u: goto L_003B0024;
    case 4u: goto L_003B0090;
    case 5u: goto L_003B0098;
    case 6u: goto L_003B00A8;
    case 7u: goto L_003B00DC;
    case 8u: goto L_003B00E4;
    case 9u: goto L_003B00E8;
    case 10u: goto L_003B0100;
    case 11u: goto L_003B0208;
    case 12u: goto L_003B0228;
    case 13u: goto L_003B0294;
    case 14u: goto L_003B0310;
    case 15u: goto L_003B0330;
    case 16u: goto L_003B035C;
    case 17u: goto L_003B0374;
    case 18u: goto L_003B03A0;
    case 19u: goto L_003B03E0;
    case 20u: goto L_003B0434;
    case 21u: goto L_003B044C;
    case 22u: goto L_003B0470;
    case 23u: goto L_003B04B0;
    case 24u: goto L_003B0524;
    case 25u: goto L_003B0588;
    case 26u: goto L_003B05C8;
    case 27u: goto L_003B0610;
    case 28u: goto L_003B0630;
    case 29u: goto L_003B0650;
    case 30u: goto L_003B06F0;
    case 31u: goto L_003B0708;
    case 32u: goto L_003B0724;
    case 33u: goto L_003B072C;
    case 34u: goto L_003B078C;
    case 35u: goto L_003B07A0;
    case 36u: goto L_003B0868;
    case 37u: goto L_003B0888;
    case 38u: goto L_003B08A8;
    case 39u: goto L_003B08C8;
    case 40u: goto L_003B0958;
    case 41u: goto L_003B0970;
    case 42u: goto L_003B0990;
    case 43u: goto L_003B0A28;
    case 44u: goto L_003B0A70;
    case 45u: goto L_003B0A88;
    case 46u: goto L_003B0A90;
    case 47u: goto L_003B0AC0;
    case 48u: goto L_003B0AD0;
    case 49u: goto L_003B0B10;
    case 50u: goto L_003B0D90;
    case 51u: goto L_003B0DC0;
    case 52u: goto L_003B0DD0;
    case 53u: goto L_003B0DE0;
    case 54u: goto L_003B0EB4;
    case 55u: goto L_003B0F30;
    case 56u: goto L_003B0F94;
    case 57u: goto L_003B1030;
    case 58u: goto L_003B1040;
    case 59u: goto L_003B1050;
    case 60u: goto L_003B1060;
    case 61u: goto L_003B1070;
    case 62u: goto L_003B10E0;
    case 63u: goto L_003B1100;
    case 64u: goto L_003B1120;
    case 65u: goto L_003B11C0;
    case 66u: goto L_003B11D8;
    case 67u: goto L_003B11F4;
    case 68u: goto L_003B1224;
    case 69u: goto L_003B1230;
    case 70u: goto L_003B1250;
    case 71u: goto L_003B1260;
    case 72u: goto L_003B1280;
    case 73u: goto L_003B12A0;
    case 74u: goto L_003B1330;
    case 75u: goto L_003B1348;
    case 76u: goto L_003B1364;
    case 77u: goto L_003B1400;
    case 78u: goto L_003B1470;
    case 79u: goto L_003B14CC;
    case 80u: goto L_003B15A0;
    case 81u: goto L_003B162C;
    case 82u: goto L_003B1668;
    case 83u: goto L_003B1674;
    case 84u: goto L_003B16CC;
    case 85u: goto L_003B16E8;
    case 86u: goto L_003B1704;
    case 87u: goto L_003B1718;
    case 88u: goto L_003B1764;
    case 89u: goto L_003B1774;
    case 90u: goto L_003B1788;
    case 91u: goto L_003B179C;
    case 92u: goto L_003B17B4;
    case 93u: goto L_003B17F0;
    case 94u: goto L_003B17FC;
    case 95u: goto L_003B1810;
    case 96u: goto L_003B1820;
    case 97u: goto L_003B1834;
    case 98u: goto L_003B1848;
    case 99u: goto L_003B185C;
    case 100u: goto L_003B1880;
    case 101u: goto L_003B18AC;
    case 102u: goto L_003B18D8;
    case 103u: goto L_003B18E0;
    case 104u: goto L_003B18E8;
    case 105u: goto L_003B1954;
    case 106u: goto L_003B195C;
    case 107u: goto L_003B19E4;
    case 108u: goto L_003B19F4;
    case 109u: goto L_003B1A10;
    case 110u: goto L_003B1A4C;
    case 111u: goto L_003B1A70;
    case 112u: goto L_003B1A90;
    case 113u: goto L_003B1B38;
    case 114u: goto L_003B1B50;
    case 115u: goto L_003B1B6C;
    case 116u: goto L_003B1B74;
    case 117u: goto L_003B1C24;
    case 118u: goto L_003B1C88;
    case 119u: goto L_003B1CF8;
    case 120u: goto L_003B1D68;
    case 121u: goto L_003B1D80;
    case 122u: goto L_003B1D8C;
    case 123u: goto L_003B1DF0;
    case 124u: goto L_003B1E50;
    case 125u: goto L_003B1E5C;
    case 126u: goto L_003B1F88;
    case 127u: goto L_003B1FB0;
    case 128u: goto L_003B1FD0;
    case 129u: goto L_003B1FF0;
    case 130u: goto L_003B2010;
    case 131u: goto L_003B20A0;
    case 132u: goto L_003B20B8;
    case 133u: goto L_003B20D8;
    case 134u: goto L_003B212C;
    case 135u: goto L_003B2144;
    case 136u: goto L_003B215C;
    case 137u: goto L_003B2174;
    case 138u: goto L_003B219C;
    case 139u: goto L_003B21B4;
    case 140u: goto L_003B21CC;
    case 141u: goto L_003B2260;
    case 142u: goto L_003B22FC;
    case 143u: goto L_003B2314;
    case 144u: goto L_003B232C;
    case 145u: goto L_003B2358;
    case 146u: goto L_003B2364;
    case 147u: goto L_003B2370;
    case 148u: goto L_003B237C;
    case 149u: goto L_003B23A0;
    case 150u: goto L_003B247C;
    case 151u: goto L_003B24E4;
    case 152u: goto L_003B252C;
    case 153u: goto L_003B2550;
    case 154u: goto L_003B257C;
    case 155u: goto L_003B2584;
    case 156u: goto L_003B258C;
    case 157u: goto L_003B2594;
    case 158u: goto L_003B25E0;
    case 159u: goto L_003B25E8;
    case 160u: goto L_003B2620;
    case 161u: goto L_003B2640;
    case 162u: goto L_003B2648;
    case 163u: goto L_003B265C;
    case 164u: goto L_003B2698;
    case 165u: goto L_003B26A8;
    case 166u: goto L_003B26B8;
    case 167u: goto L_003B26CC;
    case 168u: goto L_003B26E0;
    case 169u: goto L_003B27A8;
    case 170u: goto L_003B27C0;
    case 171u: goto L_003B27F4;
    case 172u: goto L_003B2890;
    case 173u: goto L_003B28A0;
    case 174u: goto L_003B28B0;
    case 175u: goto L_003B28C0;
    case 176u: goto L_003B290C;
    case 177u: goto L_003B2914;
    case 178u: goto L_003B2930;
    case 179u: goto L_003B2970;
    case 180u: goto L_003B29B0;
    case 181u: goto L_003B29EC;
    case 182u: goto L_003B2A30;
    case 183u: goto L_003B2A74;
    case 184u: goto L_003B2B0C;
    case 185u: goto L_003B2B44;
    case 186u: goto L_003B2B88;
    case 187u: goto L_003B2B94;
    case 188u: goto L_003B2BD4;
    case 189u: goto L_003B2BE8;
    case 190u: goto L_003B2C0C;
    case 191u: goto L_003B2C88;
    case 192u: goto L_003B2CEC;
    case 193u: goto L_003B2DD8;
    case 194u: goto L_003B2E14;
    case 195u: goto L_003B2E24;
    case 196u: goto L_003B2EC8;
    case 197u: goto L_003B2F40;
    case 198u: goto L_003B2F48;
    case 199u: goto L_003B2F60;
    case 200u: goto L_003B2F74;
    case 201u: goto L_003B2FA0;
    case 202u: goto L_003B2FC0;
    case 203u: goto L_003B2FEC;
    case 204u: goto L_003B3110;
    case 205u: goto L_003B3114;
    case 206u: goto L_003B3124;
    case 207u: goto L_003B3138;
    case 208u: goto L_003B3144;
    case 209u: goto L_003B3178;
    case 210u: goto L_003B319C;
    case 211u: goto L_003B31C8;
    case 212u: goto L_003B320C;
    case 213u: goto L_003B3218;
    case 214u: goto L_003B3258;
    case 215u: goto L_003B326C;
    case 216u: goto L_003B3280;
    case 217u: goto L_003B32A0;
    case 218u: goto L_003B3378;
    case 219u: goto L_003B337C;
    case 220u: goto L_003B3394;
    case 221u: goto L_003B33C8;
    case 222u: goto L_003B340C;
    case 223u: goto L_003B3488;
    case 224u: goto L_003B34CC;
    case 225u: goto L_003B34F4;
    case 226u: goto L_003B35BC;
    case 227u: goto L_003B35E4;
    case 228u: goto L_003B3628;
    case 229u: goto L_003B3640;
    case 230u: goto L_003B3768;
    case 231u: goto L_003B3824;
    case 232u: goto L_003B3834;
    case 233u: goto L_003B3880;
    case 234u: goto L_003B3898;
    case 235u: goto L_003B38DC;
    case 236u: goto L_003B38E8;
    case 237u: goto L_003B3928;
    case 238u: goto L_003B393C;
    case 239u: goto L_003B3950;
    case 240u: goto L_003B3970;
    case 241u: goto L_003B3A38;
    case 242u: goto L_003B3A74;
    case 243u: goto L_003B3B20;
    case 244u: goto L_003B3B74;
    case 245u: goto L_003B3CB0;
    case 246u: goto L_003B3CBC;
    case 247u: goto L_003B3EB0;
    case 248u: goto L_003B3EF4;
    case 249u: goto L_003B3F00;
    case 250u: goto L_003B3F40;
    case 251u: goto L_003B3F54;
    case 252u: goto L_003B3F84;
    case 253u: goto L_003B3FC8;
    case 254u: goto L_003B3FF0;
    default: bad_entry(c, 0x003B0000u); return;
    }
L_003B0000:
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003B00A0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 736u));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003B00A0; } }
    goto L_003B0024;
L_003B0020:
    c.budget -= 1;
L_003B0024:
    set32(c.r[7], ld32((c.r[17].w[0] + 32u)));
    c.r[4].d[0] = ld8((c.r[7].w[0] + 736u));
    c.r[4].d[0] = c.r[4].d[0] << 59;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B0090; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003B004C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003B0050; } }
L_003B004C:
    c.r[4].d[0] = ld8((c.r[7].w[0] + 1267u));
    c.budget -= 1;
L_003B0050:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003B0090; } }
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    set32(c.r[4], 0u - 5u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    st32((c.r[7].w[0] + 688u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    st32((c.r[7].w[0] + 692u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    st32((c.r[7].w[0] + 696u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    st32((c.r[7].w[0] + 700u), c.f[0]);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 724u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 14;
L_003B0090:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B00B8; } }
L_003B0098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B00E4; } }
L_003B00A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B00A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 153u, depth + 1u); else { c.pc = 0x003AE9C0u; return; } if (c.pc != 0x003B00A8u) [[unlikely]] return; }
L_003B00A8:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0090u | kUnwind; return; } goto L_003B0090; } }
L_003B00B8:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 95u));
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 95u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B00DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 160u, depth + 1u); else { c.pc = 0x003AEC70u; return; } if (c.pc != 0x003B00DCu) [[unlikely]] return; }
L_003B00DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0098u | kUnwind; return; } goto L_003B0098; } }
L_003B00E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003B00E8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B0100:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 525u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B037C; } }
    c.f[1] = ld32((c.r[2].w[0] + 768u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B037C; } }
    c.f[5] = ld32((c.r[2].w[0] + 452u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[4] = ld32((c.r[2].w[0] + 456u));
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[3] = ld32((c.r[2].w[0] + 448u));  if (t) { goto L_003B0230; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40440000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B0238; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 344u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 300u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B0238; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003B01B8; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B01B8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B01B8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003B0238; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = c.r[3].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B0238; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B0238; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0208u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 439u, depth + 1u); else { c.pc = 0x00387F80u; return; } if (c.pc != 0x003B0208u) [[unlikely]] return; }
L_003B0208:
    set32(c.r[6], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[7], 0u + 72u);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[6].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0228u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 126u, depth + 1u); else { c.pc = 0x0028D410u; return; } if (c.pc != 0x003B0228u) [[unlikely]] return; }
L_003B0228:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003B0380; } }
L_003B0230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B0380; } }
L_003B0238:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    set32(c.r[7], c.r[29].w[0] + 68u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[2] = ld32((c.r[2].w[0] + 40u));
    set32(c.r[6], 0u + 10u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[5], c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.f[3] = ld32((c.r[2].w[0] + 36u));
    c.f[12] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[12]);
    st32((c.r[29].w[0] + 72u), c.f[4]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0294u); st32((c.r[7].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0029(c, 199u, depth + 1u); else { c.pc = 0x002A6A20u; return; } if (c.pc != 0x003B0294u) [[unlikely]] return; }
L_003B0294:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003B037C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 344u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 400u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B037C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 252u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 544u));
    c.r[2].d[0] = c.r[3].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003B02E4; } }
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B02E4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B02E4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003B0320; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 56u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B0308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B0380; } }
L_003B0308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0310u);  if (depth < kMaxDepth) unit_0062(c, 66u, depth + 1u); else { c.pc = 0x00389390u; return; } if (c.pc != 0x003B0310u) [[unlikely]] return; }
L_003B0310:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B0320; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B0380; } }
L_003B0320:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0330u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B0330u) [[unlikely]] return; }
L_003B0330:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[29].w[0] + 60u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B035Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 439u, depth + 1u); else { c.pc = 0x00387F80u; return; } if (c.pc != 0x003B035Cu) [[unlikely]] return; }
L_003B035C:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], 0u + 97u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0374u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 123u, depth + 1u); else { c.pc = 0x0028D390u; return; } if (c.pc != 0x003B0374u) [[unlikely]] return; }
L_003B0374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003B0380; } }
L_003B037C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B0380:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B03A0:
    set32(c.r[8], ld32((c.r[4].w[0] + 32u)));
    c.r[6].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 5u);
    set32(c.r[6], c.r[6].w[0] << 2);
    c.r[7].d[0] = ld8((c.r[8].w[0] + 811u));
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0] + 811u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_003B03D0; } }
    st32((c.r[4].w[0] + 88u), c.r[5].w[0]);
    c.budget -= 1;
L_003B03D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 120u), c.f[12]);  c.pc = t; return; }
L_003B03E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 40u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    c.r[6].d[0] = ld8((c.r[6].w[0] + 56u));
    set32(c.r[4], c.r[5].w[0] + 8u);
    st32((c.r[5].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[6].d[0] & 1ull;  if (t) { goto L_003B0428; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));  if (t) { goto L_003B042C; } }
L_003B0428:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B042C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B05E8; } }
L_003B0434:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_003B0A38; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B0A20; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 94u));
    c.budget -= 1;
L_003B044C:
    c.r[3].d[0] = c.r[4].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B05C8; } }
    c.r[2].d[0] = c.r[4].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0470u); c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_006B(c, 174u, depth + 1u); else { c.pc = 0x003AF130u; return; } if (c.pc != 0x003B0470u) [[unlikely]] return; }
L_003B0470:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 94u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B05C8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_003B05C8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B0508; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 32768ull;
    c.budget -= 3;
L_003B04B0:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003B04F8; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_003B04F8; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003B0508; } }
L_003B04F8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B04B0u | kUnwind; return; } goto L_003B04B0; } }
L_003B0508:
    set32(c.r[4], ld32((c.r[3].w[0] + 200u)));
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 7;
L_003B0524:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003B0590; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = 0ull | 32768ull;
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003B0A30; } }
L_003B0588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003B05C4; } }
L_003B0590:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_003B05A8; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B05A8:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0524u | kUnwind; return; } goto L_003B0524; } }
    breakpoint(c, 0x003B05B8u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
L_003B05C4:
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003B05C8:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 94u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 6);
    set32(c.r[3], 0u - 65u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B0A58; } }
L_003B05E8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 28u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 222u)));
    set32(c.r[6], c.r[5].w[0] + 8u);
    st8((c.r[5].w[0] + 220u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[5].w[0] + 216u), c.r[7].w[0]);
    set32(c.r[3], 0u + 10u);
    c.budget -= 10;
L_003B0610:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[7].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003B0680; } }
L_003B0630:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = c.r[7].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_003B09A0; } }
    c.budget -= 1;
L_003B0650:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[7].d[0];  if (t) { goto L_003B09A8; } }
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0630u | kUnwind; return; } goto L_003B0630; } }
    c.budget -= 1;
L_003B0680:
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[11], ld32((c.r[6].w[0] + 208u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[10], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[10].w[0] + 16u)));
    c.r[7].d[0] = c.r[7].d[0] & c.r[11].d[0];
    c.budget -= 9;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[8], c.r[10].w[0] + 16u);  if (t) { goto L_003B09B0; } }
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
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_003B0708; } }
    set32(c.r[7], c.r[10].w[0] + 1u);
    st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = c.r[7].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_003B09D0; } }
L_003B06F0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_003B0708; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003B0724; } }
L_003B0708:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0610u | kUnwind; return; } goto L_003B0610; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_003B0724:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0434u | kUnwind; return; } goto L_003B0434; } }
L_003B072C:
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B0748; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B0840; } }
    c.budget -= 1;
L_003B0748:
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003B0840; } }
    st32((c.r[16].w[0] + 80u), c.r[4].w[0]);
    c.r[2].d[0] = 0ull & 1ull;
    c.r[5].d[0] = ld8((c.r[16].w[0] + 95u));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 8912u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 95u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B078Cu); set32(c.r[5], c.r[17].w[0] + 1072u);  if (depth < kMaxDepth) unit_004F(c, 71u, depth + 1u); else { c.pc = 0x0033D6A0u; return; } if (c.pc != 0x003B078Cu) [[unlikely]] return; }
L_003B078C:
    st8((c.r[17].w[0] + 1267u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[17].w[0] + 1072u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B07A0u); st8((c.r[17].w[0] + 1266u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0040(c, 70u, depth + 1u); else { c.pc = 0x00301C10u; return; } if (c.pc != 0x003B07A0u) [[unlikely]] return; }
L_003B07A0:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 1202u));
    c.r[4].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 9u);
    set32(c.r[13], c.r[4].w[0] << 3);
    set32(c.r[11], 0u - 65u);
    set32(c.r[12], c.r[4].w[0] << 6);
    set32(c.r[8], c.r[4].w[0] << 8);
    set32(c.r[9], 0u - 33u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[7], 0u - 257u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[4], c.r[4].w[0] << 9);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[13].d[0] = c.r[3].d[0] | c.r[13].d[0];
    set32(c.r[5], 0u - 129u);
    st16((c.r[17].w[0] + 1202u), static_cast<std::uint16_t>(c.r[13].w[0]));
    set32(c.r[3], 0u - 513u);
    c.r[13].d[0] = ld16((c.r[17].w[0] + 1202u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st16((c.r[17].w[0] + 1202u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld16((c.r[17].w[0] + 1202u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st16((c.r[17].w[0] + 1202u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[17].w[0] + 1202u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[17].w[0] + 1202u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[17].w[0] + 1202u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[17].w[0] + 1202u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0] + 1202u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[17].w[0] + 1202u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 1236u), 0u);
    st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(0u));
    c.budget -= 40;
L_003B0840:
    set32(c.r[6], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 220u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0] + 220u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[6].w[0] + 8u);  if (t) { goto L_003B09D8; } }
    c.budget -= 1;
L_003B0868:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B09E0; } }
    set32(c.r[3], 0u + 10u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
L_003B0888:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[11], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[11].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003B08F8; } }
L_003B08A8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003B09E8; } }
    c.budget -= 1;
L_003B08C8:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_003B09F0; } }
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[11], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[11].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B08A8u | kUnwind; return; } goto L_003B08A8; } }
    c.budget -= 1;
L_003B08F8:
    set32(c.r[10], ld32((c.r[5].w[0] + 208u)));
    set32(c.r[6], ld32((c.r[11].w[0] + 16u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[10].d[0];
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[8], c.r[11].w[0] + 16u);  if (t) { goto L_003B09F8; } }
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
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003B0970; } }
    set32(c.r[6], c.r[10].w[0] + 1u);
    st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_003B0A18; } }
L_003B0958:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_003B0970; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003B0990; } }
L_003B0970:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0888u | kUnwind; return; } goto L_003B0888; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_003B0990:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B072Cu | kUnwind; return; } goto L_003B072C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0434u | kUnwind; return; } goto L_003B0434; } }
L_003B09A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0650u | kUnwind; return; } goto L_003B0650; } }
L_003B09A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0724u | kUnwind; return; } goto L_003B0724; } }
L_003B09B0:
    st8((c.r[10].w[0] + 8u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[10].w[0] + 12u), c.r[4].w[0]);
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 213u)));
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 213u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0708u | kUnwind; return; } goto L_003B0708; } }
L_003B09D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B06F0u | kUnwind; return; } goto L_003B06F0; } }
L_003B09D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0868u | kUnwind; return; } goto L_003B0868; } }
L_003B09E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0990u | kUnwind; return; } goto L_003B0990; } }
L_003B09E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B08C8u | kUnwind; return; } goto L_003B08C8; } }
L_003B09F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0990u | kUnwind; return; } goto L_003B0990; } }
L_003B09F8:
    st8((c.r[11].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[11].w[0] + 12u), c.r[7].w[0]);
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    st8((c.r[11].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 213u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 213u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0970u | kUnwind; return; } goto L_003B0970; } }
L_003B0A18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0958u | kUnwind; return; } goto L_003B0958; } }
L_003B0A20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0A28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 145u, depth + 1u); else { c.pc = 0x003AE780u; return; } if (c.pc != 0x003B0A28u) [[unlikely]] return; }
L_003B0A28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[16].w[0] + 94u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B044Cu | kUnwind; return; } goto L_003B044C; } }
L_003B0A30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0588u | kUnwind; return; } goto L_003B0588; } }
L_003B0A38:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 94u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 5);
    set32(c.r[3], 0u - 33u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B05C8u | kUnwind; return; } goto L_003B05C8; } }
L_003B0A58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B0A70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003B0AA8; } }
L_003B0A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0A90u); set32(c.r[4], ld32((c.r[16].w[0] + 264u)));  if (depth < kMaxDepth) unit_006C(c, 19u, depth + 1u); else { c.pc = 0x003B03E0u; return; } if (c.pc != 0x003B0A90u) [[unlikely]] return; }
L_003B0A90:
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0A88u | kUnwind; return; } goto L_003B0A88; } }
    c.budget -= 1;
L_003B0AA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B0AC0:
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B0AD8; } }
L_003B0AD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B0B04; } }
L_003B0AD8:
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = 0ull & 1ull;
    st8((c.r[4].w[0] + 85u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 5u);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 530u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 530u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0AD0u | kUnwind; return; } goto L_003B0AD0; } }
L_003B0B04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B0B10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[9].d[0] = 0ull & 1ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 8576u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], c.r[8].w[0] + 3536u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 3520u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[2], c.r[2].w[0] + 3472u);
    st32((c.r[4].w[0] + 16u), c.r[8].w[0]);
    set32(c.r[19], 0u - 3u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[8], 0u + 27u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[3], c.r[3].w[0] - 8560u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u + 211u);
    st32((c.r[4].w[0] + 32u), c.r[6].w[0]);
    set32(c.r[8], 0u - 2u);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[3], c.r[9].w[0] << 1);
    st32((c.r[4].w[0] + 40u), c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC61C0000u);
    st8((c.r[4].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[11].d[0] = c.r[5].d[0] | 17408ull;
    st8((c.r[4].w[0] + 85u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[4].w[0] + 88u), 0u);
    c.f[1] = c.r[5].w[0];
    st8((c.r[4].w[0] + 92u), static_cast<std::uint8_t>(0u));
    set32(c.r[18], 0u + 1u);
    c.r[20].d[0] = ld8((c.r[4].w[0] + 94u));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x40600000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[24], 0u - 33u);
    set32(c.r[25], c.r[9].w[0] << 5);
    set32(c.r[14], 0u - 9u);
    set32(c.r[15], c.r[9].w[0] << 3);
    set32(c.r[12], 0u - 65u);
    c.r[13].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[10], 0u + 17u);
    set32(c.r[6], 0u - 129u);
    c.r[20].d[0] = c.r[20].d[0] & c.r[8].d[0];
    set32(c.r[7], c.r[9].w[0] << 7);
    c.r[20].d[0] = c.r[20].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 94u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 95u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[8].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 95u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 95u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[19].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 112u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[4].w[0] + 177u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    st32((c.r[4].w[0] + 60u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[4].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[4].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    st32((c.r[4].w[0] + 76u), c.f[0]);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 104u), c.r[17].w[0]);
    st32((c.r[4].w[0] + 96u), c.r[16].w[0]);
    st32((c.r[4].w[0] + 100u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 94u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[24].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[25].d[0];
    st8((c.r[4].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 94u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[14].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 94u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[12].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[13].d[0];
    st8((c.r[4].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 128u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[4].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[4].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[4].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    st32((c.r[4].w[0] + 156u), c.f[0]);
    st32((c.r[4].w[0] + 160u), c.r[11].w[0]);
    st32((c.r[4].w[0] + 164u), 0u);
    st32((c.r[4].w[0] + 168u), 0u);
    st8((c.r[4].w[0] + 176u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 94u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 80u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 752u)));
    c.f[2] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 129;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 108u), c.f[2]);  if (t) { goto L_003B0D34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 108u), c.f[0]);  if (t) { goto L_003B0D34; } }
    st32((c.r[4].w[0] + 108u), c.f[1]);
    c.budget -= 1;
L_003B0D34:
    c.r[8].d[0] = ld8((c.r[4].w[0] + 95u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[6], 0u - 5u);
    set32(c.r[7], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 95u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 95u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B0D90:
    set32(c.r[7], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], 0u - 5u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 811u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 811u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 120u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 80u), 0u);  c.pc = t; return; }
L_003B0DC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B0DD0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B03E0u | kUnwind; return; } goto L_003B03E0; }
L_003B0DE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 8576u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 4208u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 4192u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 4176u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 4160u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 4144u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8544u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 8320u);
    st32((c.r[4].w[0] + 40u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[8].w[0]);
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 40;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B0FE8; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 160u));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003B0FE8; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 36u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[2], c.r[5].w[0] + 8u);
    set32(c.r[5], ld32((c.r[5].w[0] + 208u)));
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003B0F10; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003B0EB4:
    c.r[5].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003B0EFC; } }
    set32(c.r[5], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_003B0EFC; } }
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    st8((c.r[6].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[6].w[0] + 12u), c.r[5].w[0]);
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 213u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003B0F10; } }
L_003B0EFC:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[5].d[0] = c.r[8].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0EB4u | kUnwind; return; } goto L_003B0EB4; } }
    c.budget -= 1;
L_003B0F10:
    set32(c.r[6], ld32((c.r[2].w[0] + 200u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st32((c.r[2].w[0] + 200u), c.r[5].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.r[5].d[0] = c.r[9].d[0] << 56;
    set32(c.r[7], 0u + 10u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 8;
L_003B0F30:
    c.r[8].d[0] = c.r[9].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[10], c.r[2].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[10].w[0] + 8u));
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003B0F9C; } }
    st8((c.r[10].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00800000u);
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[8].w[0] + 1u);
    st32((c.r[10].w[0] + 16u), 0u);
    set32(c.r[5], 0u + 10u);
    st32((c.r[10].w[0] + 12u), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 213u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.budget -= 14;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003B1018; } }
L_003B0F94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 40u)));  if (t) { goto L_003B0FD4; } }
L_003B0F9C:
    set32(c.r[6], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[6].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_003B0FB8; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003B0FB8:
    c.r[6].d[0] = c.r[9].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0F30u | kUnwind; return; } goto L_003B0F30; } }
    breakpoint(c, 0x003B0FC8u);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 3;
L_003B0FD4:
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[10].w[0]), c.r[6].w[0]);
    st8((c.r[10].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_003B0FE8:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[4], 0u + 8u);
    st8((c.r[3].w[0] + 160u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[3].w[0] + 124u), 0u);
    set32(c.r[4], 0u - 17u);
    set32(c.r[6], ld32((c.r[3].w[0] + 32u)));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 811u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 811u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B1020; } }
L_003B1018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0F94u | kUnwind; return; } goto L_003B0F94; } }
L_003B1020:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B1030:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B1040:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B1050:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B1060:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B1070:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 2u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[24], c.r[4].w[0] + 36u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 36u)));
    st32((c.r[6].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[6].w[0] + 8u);  if (t) { goto L_003B10AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 213u)));  if (t) { goto L_003B10B0; } }
L_003B10AC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B10B0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B136C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], ld32((c.r[24].w[0])));
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[8], c.r[6].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 222u)));
    set32(c.r[5], c.r[7].w[0] + 8u);
    st8((c.r[7].w[0] + 220u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[7].w[0] + 216u), c.r[8].w[0]);
    set32(c.r[3], 0u + 10u);
    c.budget -= 10;
L_003B10E0:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[5].w[0] + c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[8].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[8].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003B1150; } }
L_003B1100:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = c.r[8].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_003B1378; } }
    c.budget -= 1;
L_003B1120:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == c.r[8].d[0];  if (t) { goto L_003B1380; } }
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[5].w[0] + c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[8].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1100u | kUnwind; return; } goto L_003B1100; } }
    c.budget -= 1;
L_003B1150:
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[12], ld32((c.r[5].w[0] + 208u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[11], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[11].w[0] + 16u)));
    c.r[8].d[0] = c.r[8].d[0] & c.r[12].d[0];
    c.budget -= 9;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[9], c.r[11].w[0] + 16u);  if (t) { goto L_003B1388; } }
    set32(c.r[8], ld32((c.r[9].w[0])));
    c.r[8].d[0] = c.r[8].d[0] | c.r[12].d[0];
    st32((c.r[9].w[0]), c.r[8].w[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[8], ld32((c.r[5].w[0] + 204u)));
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0] + 12u)));
    c.r[8].d[0] = c.r[8].d[0] & c.r[9].d[0];
    c.budget -= 13;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_003B11D8; } }
    set32(c.r[8], c.r[11].w[0] + 1u);
    st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = c.r[8].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[8].d[0] == c.r[3].d[0]; c.r[7].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_003B13A8; } }
L_003B11C0:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_003B11D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_003B11F4; } }
L_003B11D8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B10E0u | kUnwind; return; } goto L_003B10E0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[10], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_003B11F4:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_003B136C; } }
    set32(c.r[15], c.r[4].w[0] + 56u);
    set32(c.r[14], c.r[4].w[0] + 44u);
    set32(c.r[12], 0u + 10u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], 0u + 1u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[13], 0u + 2u);
    set32(c.r[9], 0u + 8u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[3], 0u - 17u);
    c.budget -= 10;
L_003B1224:
    set32(c.r[6], ld32((c.r[10].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[13].d[0];  if (t) { goto L_003B13B0; } }
L_003B1230:
    set32(c.r[16], ld32((c.r[24].w[0])));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 220u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 220u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[12].d[0]; set32(c.r[10], c.r[16].w[0] + 8u);  if (t) { goto L_003B1540; } }
L_003B1250:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[6].d[0];  if (t) { goto L_003B1548; } }
L_003B1260:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 212u)));
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[19], c.r[10].w[0] + c.r[16].w[0]);
    c.r[16].d[0] = ld8((c.r[19].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003B12D0; } }
L_003B1280:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 212u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    st8((c.r[10].w[0] + 212u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[16].d[0] = c.r[16].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == c.r[12].d[0];  if (t) { goto L_003B1550; } }
    c.budget -= 1;
L_003B12A0:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 212u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_003B1558; } }
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[19], c.r[10].w[0] + c.r[16].w[0]);
    c.r[16].d[0] = ld8((c.r[19].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1280u | kUnwind; return; } goto L_003B1280; } }
    c.budget -= 1;
L_003B12D0:
    set32(c.r[18], ld32((c.r[10].w[0] + 208u)));
    set32(c.r[16], ld32((c.r[19].w[0] + 16u)));
    c.r[16].d[0] = c.r[16].d[0] & c.r[18].d[0];
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[19].w[0] + 16u);  if (t) { goto L_003B1560; } }
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.r[16].d[0] = c.r[16].d[0] | c.r[18].d[0];
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 212u)));
    set32(c.r[16], ld32((c.r[10].w[0] + 204u)));
    set32(c.r[17], c.r[18].w[0] << 2);
    set32(c.r[17], c.r[17].w[0] + c.r[18].w[0]);
    set32(c.r[17], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[10].w[0] + c.r[17].w[0]);
    set32(c.r[17], ld32((c.r[17].w[0] + 12u)));
    c.r[16].d[0] = c.r[16].d[0] & c.r[17].d[0];
    c.budget -= 13;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003B1348; } }
    set32(c.r[16], c.r[18].w[0] + 1u);
    st8((c.r[10].w[0] + 212u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[16].d[0] = c.r[16].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[12].d[0]; c.r[6].d[0] = c.r[11].d[0] + 0ull;  if (t) { goto L_003B1580; } }
L_003B1330:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 212u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[16].d[0];  if (t) { goto L_003B1348; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_003B1364; } }
L_003B1348:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1260u | kUnwind; return; } goto L_003B1260; } }
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 212u)));
    set32(c.r[6], c.r[16].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[6].w[0]);
    c.budget -= 5;
L_003B1364:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1224u | kUnwind; return; } goto L_003B1224; } }
L_003B136C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003B1588; } }
L_003B1378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1120u | kUnwind; return; } goto L_003B1120; } }
L_003B1380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B11F4u | kUnwind; return; } goto L_003B11F4; } }
L_003B1388:
    st8((c.r[11].w[0] + 8u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = c.r[10].d[0] + 0ull;
    st32((c.r[11].w[0] + 12u), c.r[6].w[0]);
    st8((c.r[11].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 213u)));
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 213u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B11D8u | kUnwind; return; } goto L_003B11D8; } }
L_003B13A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B11C0u | kUnwind; return; } goto L_003B11C0; } }
L_003B13B0:
    set32(c.r[6], ld32((c.r[10].w[0])));
    st32((c.r[15].w[0]), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[15].w[0])));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1230u | kUnwind; return; } goto L_003B1230; } }
    set32(c.r[10], ld32((c.r[14].w[0])));
    set32(c.r[6], ld32((c.r[10].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003B1518; } }
    c.r[6].d[0] = ld8((c.r[10].w[0] + 160u));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[9].d[0];  if (t) { goto L_003B1518; } }
    set32(c.r[6], ld32((c.r[10].w[0] + 36u)));
    set32(c.r[17], c.r[6].w[0] + 8u);
    set32(c.r[6], ld32((c.r[6].w[0] + 208u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[8].d[0];
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003B1458; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003B1400:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003B1444; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[8].d[0];  if (t) { goto L_003B1444; } }
    set32(c.r[6], c.r[18].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[17].w[0] + c.r[6].w[0]);
    st8((c.r[6].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[6].w[0] + 12u), c.r[7].w[0]);
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 213u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 213u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_003B1458; } }
L_003B1444:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[6].d[0] = c.r[18].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1400u | kUnwind; return; } goto L_003B1400; } }
    c.budget -= 1;
L_003B1458:
    set32(c.r[6], ld32((c.r[17].w[0] + 200u)));
    c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];
    st32((c.r[17].w[0] + 200u), c.r[6].w[0]);
    c.r[25].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 214u)));
    c.r[18].d[0] = c.r[25].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.budget -= 6;
L_003B1470:
    c.r[6].d[0] = c.r[25].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[16], c.r[6].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + c.r[6].w[0]);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[17].w[0] + c.r[16].w[0]);
    c.r[19].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[19].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.r[19].d[0] = c.r[19].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_003B14D4; } }
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 12u), c.r[8].w[0]);
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 213u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    st8((c.r[17].w[0] + 213u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[17].w[0] + 214u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 214u)));
    c.budget -= 12;
    { const bool t = c.r[6].d[0] == c.r[12].d[0];  if (t) { goto L_003B1538; } }
L_003B14CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[10].w[0] + 40u)));  if (t) { goto L_003B150C; } }
L_003B14D4:
    set32(c.r[6], c.r[25].w[0] + 1u);
    c.r[25].d[0] = c.r[6].d[0] << 56;
    c.r[25].d[0] = static_cast<std::uint64_t>(c.r[25].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[25].d[0] != c.r[12].d[0];  if (t) { goto L_003B14F0; } }
    c.r[25].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003B14F0:
    c.r[6].d[0] = c.r[25].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1470u | kUnwind; return; } goto L_003B1470; } }
    breakpoint(c, 0x003B1500u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[10].w[0] + 40u)));
    c.budget -= 3;
L_003B150C:
    st32((c.r[16].w[0]), c.r[6].w[0]);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 3;
L_003B1518:
    st8((c.r[10].w[0] + 160u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[10].w[0] + 124u), 0u);
    set32(c.r[10], ld32((c.r[10].w[0] + 32u)));
    c.r[6].d[0] = ld8((c.r[10].w[0] + 811u));
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[10].w[0] + 811u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1230u | kUnwind; return; } goto L_003B1230; } }
L_003B1538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B14CCu | kUnwind; return; } goto L_003B14CC; } }
L_003B1540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[10].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1250u | kUnwind; return; } goto L_003B1250; } }
L_003B1548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1364u | kUnwind; return; } goto L_003B1364; } }
L_003B1550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[10].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B12A0u | kUnwind; return; } goto L_003B12A0; } }
L_003B1558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1364u | kUnwind; return; } goto L_003B1364; } }
L_003B1560:
    st8((c.r[19].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = c.r[11].d[0] + 0ull;
    st32((c.r[19].w[0] + 12u), c.r[7].w[0]);
    st8((c.r[19].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 213u)));
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[10].w[0] + 213u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1348u | kUnwind; return; } goto L_003B1348; } }
L_003B1580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[10].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1330u | kUnwind; return; } goto L_003B1330; } }
L_003B1588:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B15A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003B15E8; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B15E8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B15E8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003B1850; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 72u));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_003B167C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B1614; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B16CC; } }
L_003B1614:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B1720; } }
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B162Cu); c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003B162Cu) [[unlikely]] return; }
L_003B162C:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + 245u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B170C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[4], c.r[4].w[0] + 544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1668u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 153u, depth + 1u); else { c.pc = 0x0028D860u; return; } if (c.pc != 0x003B1668u) [[unlikely]] return; }
L_003B1668:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1674u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B1674u) [[unlikely]] return; }
L_003B1674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B16CC; } }
L_003B167C:
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B17A4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B1818; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B1828; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B183C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 212u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B183C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B16CCu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B16CCu) [[unlikely]] return; }
L_003B16CC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003B1864; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 552u));
    st16((c.r[17].w[0] + 80u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B16E8u); set32(c.r[4], ld32((c.r[17].w[0] + 48u)));  if (depth < kMaxDepth) unit_006B(c, 137u, depth + 1u); else { c.pc = 0x003AE380u; return; } if (c.pc != 0x003B16E8u) [[unlikely]] return; }
L_003B16E8:
    set32(c.r[6], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 94u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_003B1704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003B1868; } }
L_003B170C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1718u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B1718u) [[unlikely]] return; }
L_003B1718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B16CCu | kUnwind; return; } goto L_003B16CC; } }
L_003B1720:
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B176C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B177C; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B1790; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 212u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B1790; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1764u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B1764u) [[unlikely]] return; }
L_003B1764:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B16CCu | kUnwind; return; } goto L_003B16CC; } }
L_003B176C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1774u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B1774u) [[unlikely]] return; }
L_003B1774:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B16CCu | kUnwind; return; } goto L_003B16CC; } }
L_003B177C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1788u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B1788u) [[unlikely]] return; }
L_003B1788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B16CCu | kUnwind; return; } goto L_003B16CC; } }
L_003B1790:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B179Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B179Cu) [[unlikely]] return; }
L_003B179C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B16CCu | kUnwind; return; } goto L_003B16CC; } }
L_003B17A4:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B17B4u); c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003B17B4u) [[unlikely]] return; }
L_003B17B4:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + 250u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B1804; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[4], c.r[4].w[0] + 544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B17F0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 153u, depth + 1u); else { c.pc = 0x0028D860u; return; } if (c.pc != 0x003B17F0u) [[unlikely]] return; }
L_003B17F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B17FCu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B17FCu) [[unlikely]] return; }
L_003B17FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 64u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B16CCu | kUnwind; return; } goto L_003B16CC; } }
L_003B1804:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1810u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B1810u) [[unlikely]] return; }
L_003B1810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B17FCu | kUnwind; return; } goto L_003B17FC; } }
L_003B1818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1820u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B1820u) [[unlikely]] return; }
L_003B1820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B16CCu | kUnwind; return; } goto L_003B16CC; } }
L_003B1828:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1834u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B1834u) [[unlikely]] return; }
L_003B1834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B16CCu | kUnwind; return; } goto L_003B16CC; } }
L_003B183C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1848u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B1848u) [[unlikely]] return; }
L_003B1848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B16CCu | kUnwind; return; } goto L_003B16CC; } }
L_003B1850:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B185Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B185Cu) [[unlikely]] return; }
L_003B185C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1704u | kUnwind; return; } goto L_003B1704; } }
L_003B1864:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003B1868:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B1880:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B1964; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B18AC; } }
    st8((c.r[4].w[0] + 83u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003B18AC:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 72u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B19FC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 16272u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003B0000u < 16384u) { entry = entries_006C[(t - 0x003B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B18D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B18E0u);  if (depth < kMaxDepth) unit_006C(c, 80u, depth + 1u); else { c.pc = 0x003B15A0u; return; } if (c.pc != 0x003B18E0u) [[unlikely]] return; }
L_003B18E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B195C; } }
L_003B18E8:
    set32(c.r[7], ld32((c.r[4].w[0] + 40u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 80u)));
    c.r[6].d[0] = ld8((c.r[7].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; set32(c.r[3], c.r[7].w[0] + 544u);  if (t) { goto L_003B196C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[5].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003B192C; } }
    c.r[3].d[0] = c.r[5].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B192C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B192C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003B19EC; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[3], 0u - 65u);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 94u));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B195C; } }
L_003B1954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B195Cu); set32(c.r[4], ld32((c.r[4].w[0] + 48u)));  if (depth < kMaxDepth) unit_006B(c, 137u, depth + 1u); else { c.pc = 0x003AE380u; return; } if (c.pc != 0x003B195Cu) [[unlikely]] return; }
L_003B195C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B1A00; } }
L_003B1964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 83u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B18ACu | kUnwind; return; } goto L_003B18AC; } }
L_003B196C:
    set32(c.r[5], ld32((c.r[7].w[0] + 1440u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003B19FC; } }
    set32(c.r[6], ld32((c.r[7].w[0] + 1432u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[5].w[0];
    c.f[1] = ld32((c.r[6].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B19FC; } }
    c.r[11].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[9], 0u - 3u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[7], 0u - 17u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[5], 0u + 1u);
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[3].w[0]));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[3].w[0]));
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B19E4u); st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B19E4u) [[unlikely]] return; }
L_003B19E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B195Cu | kUnwind; return; } goto L_003B195C; } }
L_003B19EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B19F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B19F4u) [[unlikely]] return; }
L_003B19F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B195Cu | kUnwind; return; } goto L_003B195C; } }
L_003B19FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B1A00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B1A10:
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
L_003B1A4C:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[7].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003B1AC0; } }
    c.budget -= 1;
L_003B1A70:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = c.r[7].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_003B20E8; } }
    c.budget -= 1;
L_003B1A90:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[7].d[0];  if (t) { goto L_003B20F0; } }
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1A70u | kUnwind; return; } goto L_003B1A70; } }
    c.budget -= 1;
L_003B1AC0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[11], ld32((c.r[6].w[0] + 208u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[10], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[10].w[0] + 16u)));
    c.r[7].d[0] = c.r[7].d[0] & c.r[11].d[0];
    c.budget -= 10;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[8], c.r[10].w[0] + 16u);  if (t) { goto L_003B20F8; } }
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
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_003B1B50; } }
    set32(c.r[7], c.r[10].w[0] + 1u);
    st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = c.r[7].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_003B2118; } }
    c.budget -= 1;
L_003B1B38:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_003B1B50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003B1B6C; } }
L_003B1B50:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1A4Cu | kUnwind; return; } goto L_003B1A4C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_003B1B6C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003B20E0; } }
L_003B1B74:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], 0u + 8192u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B1F58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B1F18; } }
    set32(c.r[3], 0u + 16384u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B1EF8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B1EA8; } }
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B1E88; } }
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B1E68; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B1D98; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B1D70; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B1C90; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B1BF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B1F88; } }
L_003B1BF8:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B1C38; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B1C38; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1C24u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B1C24u) [[unlikely]] return; }
L_003B1C24:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_003B1C38; } }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 2;
L_003B1C38:
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B2120; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B2138; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B2150; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 212u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B2150; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1C88u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B1C88u) [[unlikely]] return; }
L_003B1C88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B1F88; } }
L_003B1C90:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 4u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B2168; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003B1F88; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B2190; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B21A8; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B21C0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 212u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B21C0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1CF8u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B1CF8u) [[unlikely]] return; }
L_003B1CF8:
    set32(c.r[10], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[10].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B1F88; } }
    c.r[9].d[0] = ld16((c.r[10].w[0] + 544u));
    set32(c.r[7], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[5], 0u - 1u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[10].w[0] + 544u));
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[10].w[0] + 544u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1D68u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 192u, depth + 1u); else { c.pc = 0x0028DE10u; return; } if (c.pc != 0x003B1D68u) [[unlikely]] return; }
L_003B1D68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B1F88; } }
L_003B1D70:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 4u));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003B21D8; } }
L_003B1D80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1D8Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B1D8Cu) [[unlikely]] return; }
L_003B1D8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B1F88; } }
    c.budget -= 1;
L_003B1D98:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 72u));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B1F88; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[2], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 82u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 72u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B1E50; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 16320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003B0000u < 16384u) { entry = entries_006C[(t - 0x003B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B1DF0:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 80u)));
    set32(c.r[9], c.r[3].w[0] + 544u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 552u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003B1E50; } }
    c.r[8].d[0] = ld16((c.r[9].w[0]));
    set32(c.r[6], 0u - 3u);
    set32(c.r[7], c.r[4].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] << 11);
    set32(c.r[2], 0u - 2049u);
    set32(c.r[4], 0u - 17u);
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
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 18;
L_003B1E50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1E5Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B1E5Cu) [[unlikely]] return; }
L_003B1E5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B1F88; } }
    c.budget -= 1;
L_003B1E68:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 82u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B1F88; } }
    c.budget -= 1;
L_003B1E88:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 83u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u - 2u);
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 82u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B1F88; } }
L_003B1EA8:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 293u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B1ED8; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 82u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B1F88; } }
    c.budget -= 1;
L_003B1ED8:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 83u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u - 2u);
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 82u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B1F88; } }
L_003B1EF8:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 82u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B1F88; } }
    c.budget -= 1;
L_003B1F18:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B1F88; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    st8((c.r[16].w[0] + 83u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B1F88; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 82u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B1F88; } }
L_003B1F58:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 284u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B1F88; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 82u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_003B1F88:
    set32(c.r[6], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], 0u + 10u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 220u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0] + 220u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[6].w[0] + 8u);  if (t) { goto L_003B2200; } }
    c.budget -= 1;
L_003B1FB0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003B2208; } }
    set32(c.r[3], 0u + 10u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
L_003B1FD0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[11], c.r[4].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[11].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003B2040; } }
L_003B1FF0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003B2210; } }
    c.budget -= 1;
L_003B2010:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_003B2218; } }
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[11], c.r[4].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[11].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1FF0u | kUnwind; return; } goto L_003B1FF0; } }
    c.budget -= 1;
L_003B2040:
    set32(c.r[10], ld32((c.r[4].w[0] + 208u)));
    set32(c.r[6], ld32((c.r[11].w[0] + 16u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[10].d[0];
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[8], c.r[11].w[0] + 16u);  if (t) { goto L_003B2220; } }
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
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003B20B8; } }
    set32(c.r[6], c.r[10].w[0] + 1u);
    st8((c.r[4].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_003B2240; } }
L_003B20A0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_003B20B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003B20D8; } }
L_003B20B8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1FD0u | kUnwind; return; } goto L_003B1FD0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_003B20D8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1B74u | kUnwind; return; } goto L_003B1B74; } }
L_003B20E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B2248; } }
L_003B20E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1A90u | kUnwind; return; } goto L_003B1A90; } }
L_003B20F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1B6Cu | kUnwind; return; } goto L_003B1B6C; } }
L_003B20F8:
    st8((c.r[10].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[10].w[0] + 12u), c.r[5].w[0]);
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 213u)));
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 213u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1B50u | kUnwind; return; } goto L_003B1B50; } }
L_003B2118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1B38u | kUnwind; return; } goto L_003B1B38; } }
L_003B2120:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B212Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B212Cu) [[unlikely]] return; }
L_003B212C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1F88u | kUnwind; return; } goto L_003B1F88; } }
    c.budget -= 1;
L_003B2138:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2144u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B2144u) [[unlikely]] return; }
L_003B2144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1F88u | kUnwind; return; } goto L_003B1F88; } }
    c.budget -= 1;
L_003B2150:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B215Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B215Cu) [[unlikely]] return; }
L_003B215C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1F88u | kUnwind; return; } goto L_003B1F88; } }
    c.budget -= 1;
L_003B2168:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2174u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B2174u) [[unlikely]] return; }
L_003B2174:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 64u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1F88u | kUnwind; return; } goto L_003B1F88; } }
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1F88u | kUnwind; return; } goto L_003B1F88; } }
    c.budget -= 1;
L_003B2190:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B219Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B219Cu) [[unlikely]] return; }
L_003B219C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1CF8u | kUnwind; return; } goto L_003B1CF8; } }
    c.budget -= 1;
L_003B21A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B21B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B21B4u) [[unlikely]] return; }
L_003B21B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1CF8u | kUnwind; return; } goto L_003B1CF8; } }
    c.budget -= 1;
L_003B21C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B21CCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B21CCu) [[unlikely]] return; }
L_003B21CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1CF8u | kUnwind; return; } goto L_003B1CF8; } }
    c.budget -= 1;
L_003B21D8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 82u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 83u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1D80u | kUnwind; return; } goto L_003B1D80; } }
    c.budget -= 1;
L_003B2200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1FB0u | kUnwind; return; } goto L_003B1FB0; } }
L_003B2208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B20D8u | kUnwind; return; } goto L_003B20D8; } }
L_003B2210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B2010u | kUnwind; return; } goto L_003B2010; } }
L_003B2218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B20D8u | kUnwind; return; } goto L_003B20D8; } }
L_003B2220:
    st8((c.r[11].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[11].w[0] + 12u), c.r[7].w[0]);
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    st8((c.r[11].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B20B8u | kUnwind; return; } goto L_003B20B8; } }
L_003B2240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B20A0u | kUnwind; return; } goto L_003B20A0; } }
L_003B2248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B2260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 6u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 72u));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B22B0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B22B0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B22B0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 212u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B2384; } }
L_003B22B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B22C0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B22C0:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003B2384; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003B2384; } }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003B2384; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 16368u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003B0000u < 16384u) { entry = entries_006C[(t - 0x003B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B22FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[2], ld32((c.r[2].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 95u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2314u); set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003B2314u) [[unlikely]] return; }
L_003B2314:
    c.f[2] = c.r[17].w[0];
    c.f[1] = 0u;
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 76u), c.f[0]);
    c.budget -= 6;
L_003B232C:
    set32(c.r[3], 0u + 1u);
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 82u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B2384; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B2384; } }
L_003B2358:
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003B2384; } }
L_003B2364:
    set32(c.r[3], 0u + 98u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003B2384; } }
L_003B2370:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003B2384; } }
L_003B237C:
    set32(c.r[3], 0u + 1u);
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003B2384:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B23A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.f[0] = ld32((c.r[4].w[0] + 76u));
    c.f[1] = ld32((c.r[3].w[0] + 280u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 76u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 82u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B24E4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 252u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 544u));
    c.r[4].d[0] = c.r[5].d[0] << 61;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003B2400; } }
    c.r[4].d[0] = c.r[5].d[0] << 62;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003B2400; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B2400:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003B24E4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43610000u);
    c.f[0] = c.r[4].w[0];
    c.f[2] = ld32((c.r[5].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B24E4; } }
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B2484; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 752u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 56u)));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 91u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 800u)));
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_003B2534; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 801u)));
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B2534; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B247C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B24E4; } }
L_003B2484:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    c.r[4].d[0] = c.r[4].d[0] << 62;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B24B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40C80000u);
    c.f[0] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B24D8; } }
L_003B24B0:
    c.r[4].d[0] = ld8((c.r[3].w[0] + 284u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B24E4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B24E4; } }
L_003B24D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B24E4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B24E4u) [[unlikely]] return; }
L_003B24E4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 72u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003B253C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003B253C; } }
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    st8((c.r[16].w[0] + 83u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B253C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B252Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B252Cu) [[unlikely]] return; }
L_003B252C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003B2540; } }
L_003B2534:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B247Cu | kUnwind; return; } goto L_003B247C; } }
L_003B253C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003B2540:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B2550:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B2664; } }
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[5], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003B2664; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 64u), 0u);  if (t) { goto L_003B2664; } }
L_003B257C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B26D8; } }
L_003B2584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B258Cu);  if (depth < kMaxDepth) unit_006C(c, 149u, depth + 1u); else { c.pc = 0x003B23A0u; return; } if (c.pc != 0x003B258Cu) [[unlikely]] return; }
L_003B258C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B265C; } }
L_003B2594:
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B26D4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B2690; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B26A0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B26B0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 212u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B26B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B25E0u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B25E0u) [[unlikely]] return; }
L_003B25E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B265C; } }
L_003B25E8:
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B26C0; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 80u)));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_003B26D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003B26C4; } }
L_003B2620:
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003B2638; } }
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 1;
L_003B2638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2640u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B2640u) [[unlikely]] return; }
L_003B2640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B265C; } }
L_003B2648:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 83u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B26D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B265Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B265Cu) [[unlikely]] return; }
L_003B265C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B26D4; } }
L_003B2664:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 72u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B26D4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 16416u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003B0000u < 16384u) { entry = entries_006C[(t - 0x003B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B2690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2698u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B2698u) [[unlikely]] return; }
L_003B2698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B265Cu | kUnwind; return; } goto L_003B265C; } }
L_003B26A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B26A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B26A8u) [[unlikely]] return; }
L_003B26A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B265Cu | kUnwind; return; } goto L_003B265C; } }
L_003B26B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B26B8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B26B8u) [[unlikely]] return; }
L_003B26B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B265Cu | kUnwind; return; } goto L_003B265C; } }
L_003B26C0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_003B26C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B26CCu);  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B26CCu) [[unlikely]] return; }
L_003B26CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B265Cu | kUnwind; return; } goto L_003B265C; } }
L_003B26D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B26D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B26E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 8576u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 10432u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[9], c.r[9].w[0] + 10416u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[2], c.r[2].w[0] + 10400u);
    st32((c.r[4].w[0] + 16u), c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] + 10384u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[11], 0u + 1u);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8544u);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 32u), 0u);
    set32(c.r[10], c.r[10].w[0] - 8336u);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[3], 0u - 2u);
    st32((c.r[4].w[0] + 40u), c.r[6].w[0]);
    c.r[9].d[0] = 0ull & 1ull;
    st32((c.r[4].w[0] + 44u), c.r[7].w[0]);
    set32(c.r[2], 0u + 9u);
    st32((c.r[4].w[0] + 48u), c.r[8].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[10].w[0]);
    st32((c.r[4].w[0] + 64u), 0u);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 82u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 82u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 83u), static_cast<std::uint8_t>(0u));
    c.budget -= 50;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B27A8u); st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006C(c, 141u, depth + 1u); else { c.pc = 0x003B2260u; return; } if (c.pc != 0x003B27A8u) [[unlikely]] return; }
L_003B27A8:
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 752u)));
    c.r[17].d[0] = ld8((c.r[2].w[0] + 95u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B27C0u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003B27C0u) [[unlikely]] return; }
L_003B27C0:
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 76u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 95u));
    c.r[1].d[0] = c.r[2].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B2850; } }
L_003B27F4:
    st32((c.r[16].w[0] + 64u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 752u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 111u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003B282C; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 82u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003B2848; } }
L_003B282C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 82u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_003B2848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B2870; } }
L_003B2850:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 82u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B27F4u | kUnwind; return; } goto L_003B27F4; } }
L_003B2870:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B2890:
    st32((c.r[4].w[0] + 56u), 0u);
    c.budget -= 3;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B2260u | kUnwind; return; } goto L_003B2260; }
L_003B28A0:
    st32((c.r[4].w[0] + 56u), 0u);
    c.budget -= 3;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B2260u | kUnwind; return; } goto L_003B2260; }
L_003B28B0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1880u | kUnwind; return; } goto L_003B1880; }
L_003B28C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00920000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[2].d[0] | 24782ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[5].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 208u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 8u);  if (t) { goto L_003B28F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));  if (t) { goto L_003B28FC; } }
L_003B28F8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B28FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B290C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B290Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 109u, depth + 1u); else { c.pc = 0x003B1A10u; return; } if (c.pc != 0x003B290Cu) [[unlikely]] return; }
L_003B290C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2914u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 153u, depth + 1u); else { c.pc = 0x003B2550u; return; } if (c.pc != 0x003B2914u) [[unlikely]] return; }
L_003B2914:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B2930:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B2964; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8336u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_003B2964; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8544u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_003B2964; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8576u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003B2964:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003B2970:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B29A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8320u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_003B29A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8544u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_003B29A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8576u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003B29A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003B29B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B29F4; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 525u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B29F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B29ECu);  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B29ECu) [[unlikely]] return; }
L_003B29EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003B2FAC; } }
L_003B29F4:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 752u)));
    c.r[7].d[0] = ld8((c.r[3].w[0] + 94u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 801u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 97u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B2A1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);  if (t) { goto L_003B2A74; } }
L_003B2A1C:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_003B2A74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2A30u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003B2A30u) [[unlikely]] return; }
L_003B2A30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B2F50; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B2A70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);  if (t) { goto L_003B2A74; } }
L_003B2A70:
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(3ll);
    c.budget -= 1;
L_003B2A74:
    set32(c.r[6], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[5], 0u + 4u);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 296u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_003B2F58; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B2FA8; } }
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_003B2DE0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B2DE0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B2D38; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B2BF0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B2AD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B2F48; } }
L_003B2AD4:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st8((c.r[3].w[0] + 804u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    st8((c.r[3].w[0] + 800u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 801u), static_cast<std::uint8_t>(0u));
    st32((c.r[3].w[0] + 796u), 0u);
    st32((c.r[17].w[0] + 72u), 0u);
    c.f[20] = ld32((c.r[2].w[0] - 20416u));
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 752u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 98u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2B0Cu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003B2B0Cu) [[unlikely]] return; }
L_003B2B0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[3] = c.r[2].w[0];
    c.f[1] = c.r[16].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = 0u;
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2B44u); st32((c.r[17].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B2B44u) [[unlikely]] return; }
L_003B2B44:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B2B9C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 107u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B2B9C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B2B88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2B88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B2B88u) [[unlikely]] return; }
L_003B2B88:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2B94u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B2B94u) [[unlikely]] return; }
L_003B2B94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B2F48; } }
L_003B2B9C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B2F68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[17].w[0] + 76u));
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B2BDC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2BD4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B2BD4u) [[unlikely]] return; }
L_003B2BD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B2F48; } }
L_003B2BDC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2BE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B2BE8u) [[unlikely]] return; }
L_003B2BE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B2F48; } }
L_003B2BF0:
    set32(c.r[3], ld32((c.r[6].w[0] + 208u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] + 8u);  if (t) { goto L_003B2C68; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003B2C0C:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B2C54; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003B2C54; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B2C68; } }
L_003B2C54:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B2C0Cu | kUnwind; return; } goto L_003B2C0C; } }
    c.budget -= 1;
L_003B2C68:
    set32(c.r[4], ld32((c.r[2].w[0] + 200u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 200u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.r[3].d[0] = c.r[7].d[0] << 56;
    set32(c.r[5], 0u + 10u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 8;
L_003B2C88:
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
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003B2CF4; } }
    st8((c.r[8].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00040000u);
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
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B2F7C; } }
L_003B2CEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_003B2D2C; } }
L_003B2CF4:
    set32(c.r[4], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[4].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_003B2D10; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003B2D10:
    c.r[4].d[0] = c.r[7].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B2C88u | kUnwind; return; } goto L_003B2C88; } }
    breakpoint(c, 0x003B2D20u);
    c.r[8].d[0] = 0ull + 0ull;
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003B2D2C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003B2D38:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 121u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003B2D68; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 122u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B2D68; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B2D68:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[4].d[0] = ld8((c.r[17].w[0] + 106u));
    set32(c.r[3], c.r[2].w[0] << 7);
    set32(c.r[2], 0u - 129u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 106u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 121u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003B2DB4; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 122u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B2DB4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B2DB4:
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[17].w[0] + 107u));
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2DD8u); st8((c.r[17].w[0] + 107u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006C(c, 202u, depth + 1u); else { c.pc = 0x003B2FC0u; return; } if (c.pc != 0x003B2DD8u) [[unlikely]] return; }
L_003B2DD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B2F48; } }
L_003B2DE0:
    set32(c.r[3], ld32((c.r[6].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003B2F84; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B2F84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003B2F84; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_003B2E14:
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B2FA8; } }
L_003B2E24:
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.r[4].d[0] = ld16((c.r[5].w[0] + 544u));
    c.r[4].d[0] = c.r[4].d[0] << 59;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 544u);  if (t) { goto L_003B2FA8; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 524u));
    c.r[4].d[0] = c.r[4].d[0] << 62;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003B2FA8; } }
    c.r[10].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[6], 0u - 3u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[7], 0u - 17u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[4], 0u - 2049u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[2], 0u + 58u);
    c.r[6].d[0] = c.r[10].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[9].d[0];
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[3].w[0]));
    c.r[6].d[0] = c.r[6].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[3].w[0]));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    st8((c.r[3].w[0] + 804u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 525u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 525u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], ld32((c.r[17].w[0] + 44u)));
    st16((c.r[16].w[0] + 162u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2EC8u); set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_0053(c, 271u, depth + 1u); else { c.pc = 0x0034FC20u; return; } if (c.pc != 0x003B2EC8u) [[unlikely]] return; }
L_003B2EC8:
    c.f[0] = ld32((c.r[2].w[0] + 108u));
    set32(c.r[4], 0u - 9u);
    c.f[1] = ld32((c.r[2].w[0] + 148u));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], 0u - 129u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    st32((c.r[16].w[0] + 168u), c.f[0]);
    st32((c.r[16].w[0] + 164u), c.f[1]);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 56u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 188u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[4].d[0] = ld16((c.r[2].w[0] + 58u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 112u));
    c.r[4].d[0] = c.r[4].d[0] & 32ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] ^ 32ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 7);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 28;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_003B2F94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2F40u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0062(c, 44u, depth + 1u); else { c.pc = 0x00388CD0u; return; } if (c.pc != 0x003B2F40u) [[unlikely]] return; }
L_003B2F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2F48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B2F48u) [[unlikely]] return; }
L_003B2F48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B2FA8; } }
L_003B2F50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B2A74u | kUnwind; return; } goto L_003B2A74; } }
L_003B2F58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2F60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B2F60u) [[unlikely]] return; }
L_003B2F60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B2FA8; } }
L_003B2F68:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2F74u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B2F74u) [[unlikely]] return; }
L_003B2F74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B2F48u | kUnwind; return; } goto L_003B2F48; } }
L_003B2F7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B2CECu | kUnwind; return; } goto L_003B2CEC; } }
L_003B2F84:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B2E24u | kUnwind; return; } goto L_003B2E24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 40u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B2E14u | kUnwind; return; } goto L_003B2E14; } }
L_003B2F94:
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2FA0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0062(c, 54u, depth + 1u); else { c.pc = 0x00388FF0u; return; } if (c.pc != 0x003B2FA0u) [[unlikely]] return; }
L_003B2FA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B2F40u | kUnwind; return; } goto L_003B2F40; } }
L_003B2FA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003B2FAC:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B2FC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    st8((c.r[3].w[0] + 804u), static_cast<std::uint8_t>(0u));
    c.f[20] = ld32((c.r[2].w[0] - 20416u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2FECu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003B2FECu) [[unlikely]] return; }
L_003B2FEC:
    c.f[2] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);
    c.r[3].d[0] = c.r[3].d[0] | 43579ull;
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 80u), c.f[1]);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[12], ld32((c.r[16].w[0] + 40u)));
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[2] = ld32((c.r[12].w[0] + 40u));
    c.f[5] = ld32((c.r[3].w[0] + 32u));
    c.f[6] = ld32((c.r[12].w[0] + 32u));
    c.f[4] = ld32((c.r[12].w[0] + 36u));
    c.f[3] = ld32((c.r[3].w[0] + 36u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 27;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B3144; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B3144; } }
    c.r[11].d[0] = ld16((c.r[12].w[0] + 544u));
    set32(c.r[9], 0u - 3u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[6], 0u - 17u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[4], 0u - 2049u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[2], 0u - 65u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st16((c.r[12].w[0] + 544u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[12].w[0] + 544u));
    c.r[6].d[0] = c.r[9].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[12].w[0] + 544u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[12].w[0] + 544u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[12].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 94u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 121u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 32;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], 0u + 1u);  if (t) { goto L_003B3180; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B3180; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], c.r[3].w[0] + 544u);
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[7], 0u + 99u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3110u); set32(c.r[6], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_0023(c, 114u, depth + 1u); else { c.pc = 0x0028D200u; return; } if (c.pc != 0x003B3110u) [[unlikely]] return; }
L_003B3110:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 107u));
    c.budget -= 1;
L_003B3114:
    c.r[2].d[0] = c.r[4].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B31A4; } }
L_003B3124:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3138u); set32(c.r[4], c.r[2].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 98u, depth + 1u); else { c.pc = 0x00395750u; return; } if (c.pc != 0x003B3138u) [[unlikely]] return; }
L_003B3138:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3144u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 439u, depth + 1u); else { c.pc = 0x00387F80u; return; } if (c.pc != 0x003B3144u) [[unlikely]] return; }
L_003B3144:
    st32((c.r[16].w[0] + 72u), 0u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[5].d[0] = ld8((c.r[16].w[0] + 106u));
    set32(c.r[4], c.r[3].w[0] << 7);
    set32(c.r[3], 0u - 129u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 106u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 107u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B31C0; } }
L_003B3178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003B3288; } }
L_003B3180:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], c.r[3].w[0] + 544u);
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[7], 0u + 101u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B319Cu); set32(c.r[6], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_0023(c, 114u, depth + 1u); else { c.pc = 0x0028D200u; return; } if (c.pc != 0x003B319Cu) [[unlikely]] return; }
L_003B319C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[16].w[0] + 107u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3114u | kUnwind; return; } goto L_003B3114; } }
L_003B31A4:
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 107u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3124u | kUnwind; return; } goto L_003B3124; } }
L_003B31C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B31C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B31C8u) [[unlikely]] return; }
L_003B31C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B3220; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 107u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B3220; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B320C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B320Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B320Cu) [[unlikely]] return; }
L_003B320C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3218u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B3218u) [[unlikely]] return; }
L_003B3218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3178u | kUnwind; return; } goto L_003B3178; } }
L_003B3220:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B3274; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B3260; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3258u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B3258u) [[unlikely]] return; }
L_003B3258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3178u | kUnwind; return; } goto L_003B3178; } }
L_003B3260:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B326Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B326Cu) [[unlikely]] return; }
L_003B326C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3178u | kUnwind; return; } goto L_003B3178; } }
L_003B3274:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3280u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B3280u) [[unlikely]] return; }
L_003B3280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3178u | kUnwind; return; } goto L_003B3178; } }
L_003B3288:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B32A0:
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
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003B32E0; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B32E0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B32E0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003B34D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[16].w[0] + 92u));
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B3328; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 5u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B3328; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B3378; } }
L_003B3328:
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[4].d[0] = ld16((c.r[5].w[0] + 544u));
    c.r[4].d[0] = c.r[4].d[0] << 59;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 544u);  if (t) { goto L_003B3370; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[4].d[0] = c.r[4].d[0] << 62;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B3414; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 525u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B338C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003B337C; } }
L_003B3370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003B337C; } }
L_003B3378:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003B337C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B34D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003B3870; } }
L_003B338C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3394u); set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_0062(c, 66u, depth + 1u); else { c.pc = 0x00389390u; return; } if (c.pc != 0x003B3394u) [[unlikely]] return; }
L_003B3394:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3378u | kUnwind; return; } goto L_003B3378; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 811u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B33D0; } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 552u));
    set32(c.r[3], 0u + 27u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[6].w[0] + 544u);  if (t) { goto L_003B33D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B33C8u);  if (depth < kMaxDepth) unit_0023(c, 150u, depth + 1u); else { c.pc = 0x0028D810u; return; } if (c.pc != 0x003B33C8u) [[unlikely]] return; }
L_003B33C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B337Cu | kUnwind; return; } goto L_003B337C; } }
L_003B33D0:
    c.r[5].d[0] = ld8((c.r[6].w[0] + 552u));
    set32(c.r[3], 0u + 27u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[6].w[0] + 544u);  if (t) { goto L_003B33FC; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B33FC; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003B33FC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3378u | kUnwind; return; } goto L_003B3378; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B340Cu);  if (depth < kMaxDepth) unit_0023(c, 147u, depth + 1u); else { c.pc = 0x0028D7C0u; return; } if (c.pc != 0x003B340Cu) [[unlikely]] return; }
L_003B340C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3378u | kUnwind; return; } goto L_003B3378; } }
L_003B3414:
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
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 811u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 23;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B3490; } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 552u));
    set32(c.r[3], 0u + 27u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[6].w[0] + 544u);  if (t) { goto L_003B3490; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3488u);  if (depth < kMaxDepth) unit_0023(c, 150u, depth + 1u); else { c.pc = 0x0028D810u; return; } if (c.pc != 0x003B3488u) [[unlikely]] return; }
L_003B3488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3378u | kUnwind; return; } goto L_003B3378; } }
L_003B3490:
    c.r[5].d[0] = ld8((c.r[6].w[0] + 552u));
    set32(c.r[3], 0u + 27u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[6].w[0] + 544u);  if (t) { goto L_003B34BC; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B34BC; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003B34BC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3378u | kUnwind; return; } goto L_003B3378; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B34CCu);  if (depth < kMaxDepth) unit_0023(c, 147u, depth + 1u); else { c.pc = 0x0028D7C0u; return; } if (c.pc != 0x003B34CCu) [[unlikely]] return; }
L_003B34CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3378u | kUnwind; return; } goto L_003B3378; } }
L_003B34D4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 106u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 106u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B34F4u); set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_006B(c, 137u, depth + 1u); else { c.pc = 0x003AE380u; return; } if (c.pc != 0x003B34F4u) [[unlikely]] return; }
L_003B34F4:
    set32(c.r[7], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_003B3568; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B3544; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 1496u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 1496u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = c.r[7].d[0] == 0ull; st32((c.r[6].w[0] + 1484u), c.r[7].w[0]);  if (t) { goto L_003B3568; } }
    c.r[3].d[0] = ld16((c.r[7].w[0] + 6u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 1488u), c.r[3].w[0]);  if (t) { goto L_003B3568; } }
L_003B3544:
    st32((c.r[16].w[0] + 64u), 0u);
    set32(c.r[3], 0u - 2u);
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    c.r[4].d[0] = 0ull & 1ull;
    c.r[5].d[0] = ld8((c.r[6].w[0] + 1496u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 1496u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[6].w[0] + 1484u), 0u);
    c.budget -= 9;
L_003B3568:
    set32(c.r[6], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 94u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003B383C; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B383C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003B383C; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_003B35BC:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 811u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B35EC; } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 552u));
    set32(c.r[3], 0u + 27u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[6].w[0] + 544u);  if (t) { goto L_003B35EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B35E4u);  if (depth < kMaxDepth) unit_0023(c, 150u, depth + 1u); else { c.pc = 0x0028D810u; return; } if (c.pc != 0x003B35E4u) [[unlikely]] return; }
L_003B35E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_003B362C; } }
L_003B35EC:
    c.r[5].d[0] = ld8((c.r[6].w[0] + 552u));
    set32(c.r[3], 0u + 27u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[6].w[0] + 544u);  if (t) { goto L_003B3618; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B3618; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003B3618:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_003B3628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3628u);  if (depth < kMaxDepth) unit_0023(c, 147u, depth + 1u); else { c.pc = 0x0028D7C0u; return; } if (c.pc != 0x003B3628u) [[unlikely]] return; }
L_003B3628:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_003B362C:
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B384C; } }
L_003B3640:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    st8((c.r[3].w[0] + 803u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B386C; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 811u));
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B3678; } }
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003B3678:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B386C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[4].d[0] = c.r[4].d[0] << 59;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B386C; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 524u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003B386C; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 752u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 804u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 93u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[7], c.r[3].w[0] + 752u);  if (t) { goto L_003B3760; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 49u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 97u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B3760; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 121u));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003B36FC; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 122u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003B36FC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B36FC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003B386C; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[4].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003B386C; } }
    c.r[4].d[0] = c.r[5].d[0] << 62;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003B386C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[16].w[0] + 80u));
    c.f[0] = ld32((c.r[4].w[0] - 20416u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B386C; } }
    c.f[1] = ld32((c.r[3].w[0] + 768u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B386C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[16].w[0] + 107u));  if (t) { goto L_003B3774; } }
L_003B3760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3768u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 180u, depth + 1u); else { c.pc = 0x003B29B0u; return; } if (c.pc != 0x003B3768u) [[unlikely]] return; }
L_003B3768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B3834; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 107u));
    c.budget -= 1;
L_003B3774:
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B37C8; } }
    c.f[1] = ld32((c.r[16].w[0] + 84u));
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B37C8; } }
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B37C8; } }
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B37C8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B386C; } }
L_003B37C8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B382C; } }
    c.r[3].d[0] = c.r[4].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B386C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 108u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], ld32((c.r[16].w[0] + 44u)));  if (t) { goto L_003B3864; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 185u));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003B3820; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_003B3820:
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_003B3824:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B386C; } }
L_003B382C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3834u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 202u, depth + 1u); else { c.pc = 0x003B2FC0u; return; } if (c.pc != 0x003B3834u) [[unlikely]] return; }
L_003B3834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B386C; } }
L_003B383C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3628u | kUnwind; return; } goto L_003B3628; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 40u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B35BCu | kUnwind; return; } goto L_003B35BC; } }
L_003B384C:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    c.f[1] = ld32((c.r[3].w[0] + 280u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3640u | kUnwind; return; } goto L_003B3640; } }
L_003B3864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3824u | kUnwind; return; } goto L_003B3824; } }
L_003B386C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003B3870:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B3880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 64u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3898u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B3898u) [[unlikely]] return; }
L_003B3898:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B38F0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 107u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B38F0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B38DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B38DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B38DCu) [[unlikely]] return; }
L_003B38DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B38E8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B38E8u) [[unlikely]] return; }
L_003B38E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B393C; } }
L_003B38F0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B3944; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B3930; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3928u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B3928u) [[unlikely]] return; }
L_003B3928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B393C; } }
L_003B3930:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B393Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B393Cu) [[unlikely]] return; }
L_003B393C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003B3958; } }
L_003B3944:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3950u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B3950u) [[unlikely]] return; }
L_003B3950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B393Cu | kUnwind; return; } goto L_003B393C; } }
L_003B3958:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B3970:
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.r[7].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[6].d[0] = c.r[7].d[0] << 62;
    c.r[6].d[0] = c.r[6].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[8], c.r[3].w[0] + 736u);  if (t) { goto L_003B3A24; } }
    c.r[6].d[0] = c.r[7].d[0] << 60;
    c.r[6].d[0] = c.r[6].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003B3A24; } }
    c.r[8].d[0] = ld8((c.r[3].w[0] + 807u));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_003B3AC8; } }
    c.r[7].d[0] = ld8((c.r[3].w[0] + 220u));
    set32(c.r[6], 0u + 56u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_003B3AD8; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_003B3B0C; } }
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
    { const bool t = c.r[6].d[0] != c.r[7].d[0];  if (t) { goto L_003B3B0C; } }
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
    { const bool t = c.r[3].d[0] == c.r[7].d[0]; c.f[2] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003B3A40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B3AF4; } }
L_003B3A24:
    c.r[4].d[0] = ld8((c.r[8].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 58;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003B3A7C; } }
L_003B3A38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B3B0C; } }
L_003B3A40:
    c.f[1] = ld32((c.r[6].w[0] + 56u));
    set32(c.r[3], 0u + 36u);
    c.f[0] = ld32((c.r[5].w[0] + 360u));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 552u));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003B3A68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 4;
L_003B3A68:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B3AFC; } }
L_003B3A74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B3B0C; } }
L_003B3A7C:
    c.r[10].d[0] = ld16((c.r[3].w[0] + 544u));
    set32(c.r[8], 0u - 3u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[6], 0u - 17u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[4], 0u - 2049u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[3].w[0] + 544u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[3].w[0] + 544u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3A38u | kUnwind; return; } goto L_003B3A38; } }
L_003B3AC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 92u), c.f[0]);  if (t) { goto L_003B3B0C; } }
L_003B3AD8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[5].w[0] - 20416u));
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 92u), c.f[0]);  if (t) { goto L_003B3B0C; } }
L_003B3AF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B3B0C; } }
L_003B3AFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 92u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3A74u | kUnwind; return; } goto L_003B3A74; } }
L_003B3B0C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B3B20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 811u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003B3B6C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 122u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B3FC8; } }
L_003B3B6C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003B3C08; } }
L_003B3B74:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003B3FC8; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 106u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B3C70; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 106u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B3C24; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B3C14; } }
    c.f[6] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[4] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[3] = ld32((c.r[3].w[0] + 40u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[2]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[6], c.f[1]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[4], c.f[0]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B3C24; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0] + 64u), c.r[17].w[0]);  if (t) { goto L_003B3C24; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_003B3C24; } }
L_003B3C08:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 40u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3B74u | kUnwind; return; } goto L_003B3B74; } }
L_003B3C14:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0] + 64u), c.r[17].w[0]);  if (t) { goto L_003B3C24; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    st32((c.r[18].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 2;
L_003B3C24:
    c.r[6].d[0] = ld8((c.r[18].w[0] + 107u));
    set32(c.r[5], 0u - 9u);
    set32(c.r[8], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[3], 0u - 129u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    set32(c.r[6], ld32((c.r[8].w[0] + 752u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 801u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 97u)));
    c.r[6].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    set32(c.r[6], c.r[6].w[0] << 3);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[18].w[0] + 107u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[18].w[0] + 106u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 106u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B3FC8; } }
L_003B3C70:
    c.r[16].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003B3CF0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_003B3CF0; } }
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[20] = ld32((c.r[4].w[0] + 104u));
    c.f[21] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[22] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3CB0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003B3CB0u) [[unlikely]] return; }
L_003B3CB0:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3CBCu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003B3CBCu) [[unlikely]] return; }
L_003B3CBC:
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
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B3FC8; } }
L_003B3CF0:
    set32(c.r[6], ld32((c.r[18].w[0] + 40u)));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], ld32((c.r[6].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 121u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[6].w[0] + 752u);  if (t) { goto L_003B3D24; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 122u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B3D24; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B3D24:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_003B3FC8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003B3D64; } }
    c.f[1] = ld32((c.r[6].w[0] + 768u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A20000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B3FC8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 284u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003B3FC8; } }
L_003B3D64:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 122u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003B3DAC; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B3DA0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 121u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
L_003B3DA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B3DAC; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003B3DAC:
    c.r[11].d[0] = ld8((c.r[18].w[0] + 107u));
    set32(c.r[9], 0u - 2u);
    c.r[10].d[0] = c.r[4].d[0] & 1ull;
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[7], 0u - 9u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], 0u - 5u);
    set32(c.r[2], 0u - 33u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[18].w[0] + 107u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[18].w[0] + 106u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[18].w[0] + 106u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[18].w[0] + 92u), c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[18].w[0] + 106u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[18].w[0] + 106u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[18].w[0] + 106u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 106u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 29;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0] + 64u), c.r[17].w[0]);  if (t) { goto L_003B3E28; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 6u));
    st32((c.r[18].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 2;
L_003B3E28:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 107u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B3E4C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_003B3E4C:
    c.r[6].d[0] = ld8((c.r[18].w[0] + 107u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], 0u - 5u);
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 129u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[18].w[0] + 107u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[18].w[0] + 106u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 106u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 107u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B3F5C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 752u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 98u)));
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { goto L_003B3F6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[18].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 2;
L_003B3EB0:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B3F08; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 107u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B3F08; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B3EF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3EF4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 62u, depth + 1u); else { c.pc = 0x003B5180u; return; } if (c.pc != 0x003B3EF4u) [[unlikely]] return; }
L_003B3EF4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3F00u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B3F00u) [[unlikely]] return; }
L_003B3F00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003B3FCC; } }
L_003B3F08:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 106u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B3FBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[18].w[0] + 76u));
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B3F48; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3F40u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B3F40u) [[unlikely]] return; }
L_003B3F40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B3FC8; } }
L_003B3F48:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3F54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B3F54u) [[unlikely]] return; }
L_003B3F54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B3FC8; } }
L_003B3F5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 72u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3EB0u | kUnwind; return; } goto L_003B3EB0; } }
L_003B3F6C:
    c.f[0] = c.r[16].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[21] = c.r[2].w[0];
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3F84u); c.f[20] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003B3F84u) [[unlikely]] return; }
L_003B3F84:
    c.f[2] = c.r[16].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[18].w[0] + 72u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3EB0u | kUnwind; return; } goto L_003B3EB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 72u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3EB0u | kUnwind; return; } goto L_003B3EB0; } }
L_003B3FBC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3FC8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006D(c, 71u, depth + 1u); else { c.pc = 0x003B53F0u; return; } if (c.pc != 0x003B3FC8u) [[unlikely]] return; }
L_003B3FC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003B3FCC:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B3FF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u - 9u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.budget -= 4;
    [[clang::musttail]] return unit_006D(c, 1u, depth);
}

}

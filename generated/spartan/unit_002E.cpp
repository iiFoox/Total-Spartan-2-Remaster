#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002E[4096] = {
    1, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18,
    0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0,
    0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41,
    0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 77, 0, 0, 0, 78, 0, 0, 0, 0,
    0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0,
    92, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96,
    0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0,
    0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0,
    0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0,
    208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0,
    0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 227,
    0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0,
    0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0,
    0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0,
    0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0,
    0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0,
    0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0,
    270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0,
    0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0,
    0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_002E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002B8000;
    case 2u: goto L_002B8008;
    case 3u: goto L_002B801C;
    case 4u: goto L_002B80E0;
    case 5u: goto L_002B80EC;
    case 6u: goto L_002B8130;
    case 7u: goto L_002B8160;
    case 8u: goto L_002B8180;
    case 9u: goto L_002B8290;
    case 10u: goto L_002B8310;
    case 11u: goto L_002B8320;
    case 12u: goto L_002B8334;
    case 13u: goto L_002B835C;
    case 14u: goto L_002B8364;
    case 15u: goto L_002B8394;
    case 16u: goto L_002B83CC;
    case 17u: goto L_002B83E0;
    case 18u: goto L_002B83FC;
    case 19u: goto L_002B840C;
    case 20u: goto L_002B842C;
    case 21u: goto L_002B84B8;
    case 22u: goto L_002B84F0;
    case 23u: goto L_002B8510;
    case 24u: goto L_002B8530;
    case 25u: goto L_002B8644;
    case 26u: goto L_002B8660;
    case 27u: goto L_002B86D0;
    case 28u: goto L_002B86E4;
    case 29u: goto L_002B8710;
    case 30u: goto L_002B8720;
    case 31u: goto L_002B8748;
    case 32u: goto L_002B8750;
    case 33u: goto L_002B8780;
    case 34u: goto L_002B87C0;
    case 35u: goto L_002B87E4;
    case 36u: goto L_002B87F0;
    case 37u: goto L_002B8804;
    case 38u: goto L_002B8810;
    case 39u: goto L_002B8820;
    case 40u: goto L_002B8840;
    case 41u: goto L_002B887C;
    case 42u: goto L_002B889C;
    case 43u: goto L_002B88B8;
    case 44u: goto L_002B8910;
    case 45u: goto L_002B8930;
    case 46u: goto L_002B8A30;
    case 47u: goto L_002B8A40;
    case 48u: goto L_002B8A50;
    case 49u: goto L_002B8AA8;
    case 50u: goto L_002B8AD0;
    case 51u: goto L_002B8AD8;
    case 52u: goto L_002B8B08;
    case 53u: goto L_002B8B18;
    case 54u: goto L_002B8B50;
    case 55u: goto L_002B8C50;
    case 56u: goto L_002B8C60;
    case 57u: goto L_002B8CE0;
    case 58u: goto L_002B8CE8;
    case 59u: goto L_002B8D18;
    case 60u: goto L_002B8D2C;
    case 61u: goto L_002B8D70;
    case 62u: goto L_002B8E80;
    case 63u: goto L_002B8E98;
    case 64u: goto L_002B8EB4;
    case 65u: goto L_002B8ECC;
    case 66u: goto L_002B8EF0;
    case 67u: goto L_002B8F00;
    case 68u: goto L_002B8F3C;
    case 69u: goto L_002B8F44;
    case 70u: goto L_002B8F74;
    case 71u: goto L_002B8FB0;
    case 72u: goto L_002B8FF0;
    case 73u: goto L_002B9070;
    case 74u: goto L_002B9098;
    case 75u: goto L_002B90C0;
    case 76u: goto L_002B90D8;
    case 77u: goto L_002B90DC;
    case 78u: goto L_002B90EC;
    case 79u: goto L_002B9108;
    case 80u: goto L_002B9120;
    case 81u: goto L_002B9140;
    case 82u: goto L_002B9240;
    case 83u: goto L_002B9288;
    case 84u: goto L_002B92A0;
    case 85u: goto L_002B93A0;
    case 86u: goto L_002B93A8;
    case 87u: goto L_002B93B8;
    case 88u: goto L_002B9420;
    case 89u: goto L_002B9430;
    case 90u: goto L_002B9440;
    case 91u: goto L_002B946C;
    case 92u: goto L_002B9480;
    case 93u: goto L_002B948C;
    case 94u: goto L_002B949C;
    case 95u: goto L_002B94C0;
    case 96u: goto L_002B94FC;
    case 97u: goto L_002B9504;
    case 98u: goto L_002B9534;
    case 99u: goto L_002B9570;
    case 100u: goto L_002B95A0;
    case 101u: goto L_002B95D4;
    case 102u: goto L_002B9610;
    case 103u: goto L_002B9620;
    case 104u: goto L_002B9710;
    case 105u: goto L_002B9784;
    case 106u: goto L_002B97A0;
    case 107u: goto L_002B9814;
    case 108u: goto L_002B9830;
    case 109u: goto L_002B98A4;
    case 110u: goto L_002B98C0;
    case 111u: goto L_002B98D0;
    case 112u: goto L_002B98E0;
    case 113u: goto L_002B9954;
    case 114u: goto L_002B9970;
    case 115u: goto L_002B99F0;
    case 116u: goto L_002B9A10;
    case 117u: goto L_002B9A20;
    case 118u: goto L_002B9A30;
    case 119u: goto L_002B9A40;
    case 120u: goto L_002B9A50;
    case 121u: goto L_002B9A60;
    case 122u: goto L_002B9AD4;
    case 123u: goto L_002B9AF0;
    case 124u: goto L_002B9B64;
    case 125u: goto L_002B9B80;
    case 126u: goto L_002B9B90;
    case 127u: goto L_002B9BA0;
    case 128u: goto L_002B9C14;
    case 129u: goto L_002B9C30;
    case 130u: goto L_002B9CA4;
    case 131u: goto L_002B9CC0;
    case 132u: goto L_002B9D34;
    case 133u: goto L_002B9D50;
    case 134u: goto L_002B9DC4;
    case 135u: goto L_002B9DE0;
    case 136u: goto L_002B9E54;
    case 137u: goto L_002B9E70;
    case 138u: goto L_002B9E80;
    case 139u: goto L_002B9EF4;
    case 140u: goto L_002B9F10;
    case 141u: goto L_002B9F84;
    case 142u: goto L_002B9FA0;
    case 143u: goto L_002BA014;
    case 144u: goto L_002BA030;
    case 145u: goto L_002BA0A4;
    case 146u: goto L_002BA0C0;
    case 147u: goto L_002BA134;
    case 148u: goto L_002BA150;
    case 149u: goto L_002BA1C4;
    case 150u: goto L_002BA1E0;
    case 151u: goto L_002BA1F0;
    case 152u: goto L_002BA264;
    case 153u: goto L_002BA280;
    case 154u: goto L_002BA2F4;
    case 155u: goto L_002BA310;
    case 156u: goto L_002BA394;
    case 157u: goto L_002BA3B0;
    case 158u: goto L_002BA424;
    case 159u: goto L_002BA440;
    case 160u: goto L_002BA4B4;
    case 161u: goto L_002BA4D0;
    case 162u: goto L_002BA544;
    case 163u: goto L_002BA560;
    case 164u: goto L_002BA570;
    case 165u: goto L_002BA5E4;
    case 166u: goto L_002BA600;
    case 167u: goto L_002BA610;
    case 168u: goto L_002BA670;
    case 169u: goto L_002BA680;
    case 170u: goto L_002BA6B0;
    case 171u: goto L_002BA6C0;
    case 172u: goto L_002BA6D0;
    case 173u: goto L_002BA6E0;
    case 174u: goto L_002BA6F0;
    case 175u: goto L_002BA700;
    case 176u: goto L_002BA790;
    case 177u: goto L_002BA79C;
    case 178u: goto L_002BA7A8;
    case 179u: goto L_002BA7B4;
    case 180u: goto L_002BA7C0;
    case 181u: goto L_002BA7CC;
    case 182u: goto L_002BA7D8;
    case 183u: goto L_002BA7E4;
    case 184u: goto L_002BA7F0;
    case 185u: goto L_002BA8A0;
    case 186u: goto L_002BA93C;
    case 187u: goto L_002BA948;
    case 188u: goto L_002BA954;
    case 189u: goto L_002BA960;
    case 190u: goto L_002BA96C;
    case 191u: goto L_002BA978;
    case 192u: goto L_002BA984;
    case 193u: goto L_002BA990;
    case 194u: goto L_002BA99C;
    case 195u: goto L_002BAA40;
    case 196u: goto L_002BAA70;
    case 197u: goto L_002BAA84;
    case 198u: goto L_002BAAA4;
    case 199u: goto L_002BAABC;
    case 200u: goto L_002BAAD0;
    case 201u: goto L_002BAAE0;
    case 202u: goto L_002BAAF0;
    case 203u: goto L_002BAB08;
    case 204u: goto L_002BAB20;
    case 205u: goto L_002BAB34;
    case 206u: goto L_002BAB50;
    case 207u: goto L_002BAB68;
    case 208u: goto L_002BAB80;
    case 209u: goto L_002BAB98;
    case 210u: goto L_002BABB0;
    case 211u: goto L_002BABC0;
    case 212u: goto L_002BABD0;
    case 213u: goto L_002BABE0;
    case 214u: goto L_002BAC78;
    case 215u: goto L_002BAC84;
    case 216u: goto L_002BAC90;
    case 217u: goto L_002BAC9C;
    case 218u: goto L_002BACA8;
    case 219u: goto L_002BACB4;
    case 220u: goto L_002BACC0;
    case 221u: goto L_002BACCC;
    case 222u: goto L_002BACD8;
    case 223u: goto L_002BAD00;
    case 224u: goto L_002BAD4C;
    case 225u: goto L_002BAD64;
    case 226u: goto L_002BAD70;
    case 227u: goto L_002BAD7C;
    case 228u: goto L_002BAD88;
    case 229u: goto L_002BAD94;
    case 230u: goto L_002BADA0;
    case 231u: goto L_002BADAC;
    case 232u: goto L_002BADB8;
    case 233u: goto L_002BADC4;
    case 234u: goto L_002BADF4;
    case 235u: goto L_002BAE10;
    case 236u: goto L_002BAE8C;
    case 237u: goto L_002BAE9C;
    case 238u: goto L_002BAF40;
    case 239u: goto L_002BAF64;
    case 240u: goto L_002BAF70;
    case 241u: goto L_002BAF90;
    case 242u: goto L_002BAFA0;
    case 243u: goto L_002BAFB0;
    case 244u: goto L_002BAFC0;
    case 245u: goto L_002BAFD0;
    case 246u: goto L_002BAFE0;
    case 247u: goto L_002BAFF0;
    case 248u: goto L_002BB010;
    case 249u: goto L_002BB0B0;
    case 250u: goto L_002BB0BC;
    case 251u: goto L_002BB0C8;
    case 252u: goto L_002BB0D4;
    case 253u: goto L_002BB0E0;
    case 254u: goto L_002BB0EC;
    case 255u: goto L_002BB0F8;
    case 256u: goto L_002BB104;
    case 257u: goto L_002BB110;
    case 258u: goto L_002BB1B0;
    case 259u: goto L_002BB1C0;
    case 260u: goto L_002BB260;
    case 261u: goto L_002BB26C;
    case 262u: goto L_002BB278;
    case 263u: goto L_002BB284;
    case 264u: goto L_002BB290;
    case 265u: goto L_002BB29C;
    case 266u: goto L_002BB2A8;
    case 267u: goto L_002BB2B4;
    case 268u: goto L_002BB2C0;
    case 269u: goto L_002BB370;
    case 270u: goto L_002BB380;
    case 271u: goto L_002BB654;
    case 272u: goto L_002BB66C;
    case 273u: goto L_002BB6D0;
    case 274u: goto L_002BB7F0;
    case 275u: goto L_002BB85C;
    case 276u: goto L_002BB978;
    case 277u: goto L_002BBA30;
    case 278u: goto L_002BBAC8;
    case 279u: goto L_002BBAE0;
    case 280u: goto L_002BBB10;
    case 281u: goto L_002BBB40;
    case 282u: goto L_002BBB90;
    case 283u: goto L_002BBBD4;
    case 284u: goto L_002BBC30;
    case 285u: goto L_002BBCE0;
    case 286u: goto L_002BBCF0;
    case 287u: goto L_002BBD90;
    case 288u: goto L_002BBDC0;
    case 289u: goto L_002BBDD8;
    case 290u: goto L_002BBE08;
    case 291u: goto L_002BBE30;
    case 292u: goto L_002BBE60;
    case 293u: goto L_002BBE6C;
    case 294u: goto L_002BBE88;
    case 295u: goto L_002BBE94;
    case 296u: goto L_002BBEF0;
    case 297u: goto L_002BBF10;
    case 298u: goto L_002BBF20;
    case 299u: goto L_002BBF40;
    case 300u: goto L_002BBF60;
    case 301u: goto L_002BBF74;
    case 302u: goto L_002BBFA0;
    case 303u: goto L_002BBFB0;
    default: bad_entry(c, 0x002B8000u); return;
    }
L_002B8000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8008u); set32(c.r[4], c.r[4].w[0] + 8912u);  if (depth < kMaxDepth) unit_004F(c, 71u, depth + 1u); else { c.pc = 0x0033D6A0u; return; } if (c.pc != 0x002B8008u) [[unlikely]] return; }
L_002B8008:
    st8((c.r[16].w[0] + 1267u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 1072u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B801Cu); st8((c.r[16].w[0] + 1266u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0040(c, 70u, depth + 1u); else { c.pc = 0x00301C10u; return; } if (c.pc != 0x002B801Cu) [[unlikely]] return; }
L_002B801C:
    c.r[6].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[5].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 9u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[12], 0u - 65u);
    set32(c.r[13], c.r[5].w[0] << 6);
    set32(c.r[9], c.r[5].w[0] << 8);
    set32(c.r[10], 0u - 33u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[8], 0u - 257u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[5], c.r[5].w[0] << 9);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[6], 0u - 129u);
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], 0u - 513u);
    c.r[14].d[0] = ld16((c.r[16].w[0] + 1202u));
    set32(c.r[3], 0u + 211u);
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 1236u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    st8((c.r[4].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 681u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 47;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B80E0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 91u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B8110; } }
L_002B80EC:
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B811C; } }
    set32(c.r[3], 0u + 211u);
    st8((c.r[4].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 681u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B811C; } }
L_002B8110:
    st32((c.r[4].w[0] + 80u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 68u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B80ECu | kUnwind; return; } goto L_002B80EC; } }
L_002B811C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8130:
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8154; } }
    set32(c.r[3], 0u + 211u);
    st8((c.r[4].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 681u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_002B8154:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8160:
    st8((c.r[4].w[0] + 88u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[9].d[0] ? 1ull : 0ull;
    st8((c.r[4].w[0] + 89u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    st32((c.r[4].w[0] + 76u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 90u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 91u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002B8180:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = 0ull & 1ull;
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[8], c.r[2].w[0] << 2);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[14], 0u - 2u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[15].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[11], 0u - 3u);
    c.r[13].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[10], c.r[10].w[0] - 27952u);
    set32(c.r[9], 0u + 11u);
    set32(c.r[7], 0u - 5u);
    set32(c.r[6], c.r[6].w[0] - 16688u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - 19040u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[13].d[0] = c.r[13].d[0] & c.r[14].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0]), c.r[10].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[14].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.budget -= 67;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 91u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002B8290:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.r[4].d[0] = ld16((c.r[5].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B82D8; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002B82D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B84C4; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 64u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B83E8; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 552u));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B83B8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8310u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B8310u) [[unlikely]] return; }
L_002B8310:
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8320u); set32(c.r[4], c.r[28].w[0] - 29236u);  if (depth < kMaxDepth) unit_0054(c, 88u, depth + 1u); else { c.pc = 0x00351700u; return; } if (c.pc != 0x002B8320u) [[unlikely]] return; }
L_002B8320:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B84C4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8334u); c.r[5].d[0] = ld8((c.r[17].w[0] + 96u));  if (depth < kMaxDepth) unit_001F(c, 271u, depth + 1u); else { c.pc = 0x0027E3A0u; return; } if (c.pc != 0x002B8334u) [[unlikely]] return; }
L_002B8334:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_002B839C; } }
L_002B835C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8364u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002B8364u) [[unlikely]] return; }
L_002B8364:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B84C4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_002B84C4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8394u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002B8394u) [[unlikely]] return; }
L_002B8394:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002B84C8; } }
L_002B839C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B835Cu | kUnwind; return; } goto L_002B835C; } }
L_002B83B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B83CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B83CCu) [[unlikely]] return; }
L_002B83CC:
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[28].w[0] - 29236u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B83E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0054(c, 89u, depth + 1u); else { c.pc = 0x00351720u; return; } if (c.pc != 0x002B83E0u) [[unlikely]] return; }
L_002B83E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B8394u | kUnwind; return; } goto L_002B8394; } }
L_002B83E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B83FCu); set32(c.r[16], c.r[5].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B83FCu) [[unlikely]] return; }
L_002B83FC:
    c.f[5] = ld32((c.r[2].w[0]));
    c.f[4] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 4;
L_002B840C:
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[20] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[21] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[22] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[12] = c.f[20];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B842Cu); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x002B842Cu) [[unlikely]] return; }
L_002B842C:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.f[1] = ld32((c.r[3].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002B8448; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 404u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B8448:
    st32((c.r[3].w[0] + 104u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.r[3].d[0] = c.r[2].d[0] | 34953ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[22]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EA20000u);
    c.r[3].d[0] = c.r[2].d[0] | 8738ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41180000u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[21], c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[1]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B84B8u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 269u, depth + 1u); else { c.pc = 0x0028AAE0u; return; } if (c.pc != 0x002B84B8u) [[unlikely]] return; }
L_002B84B8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B8394u | kUnwind; return; } goto L_002B8394; } }
L_002B84C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002B84C8:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B84F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8510u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002B8510u) [[unlikely]] return; }
L_002B8510:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B8530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 16352u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = 0ull & 1ull;
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[9], c.r[3].w[0] << 2);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[15], 0u - 2u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[24].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[14].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[12], 0u - 3u);
    c.r[13].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[11], c.r[11].w[0] - 27952u);
    set32(c.r[10], 0u + 10u);
    set32(c.r[8], 0u - 5u);
    set32(c.r[7], c.r[7].w[0] - 16688u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 18704u);
    c.r[14].d[0] = c.r[14].d[0] & c.r[15].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[24].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[14].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st32((c.r[4].w[0]), c.r[11].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[10].d[0] = c.r[10].d[0] & c.r[15].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[24].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0]), c.r[7].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 96u), c.r[6].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 69;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8644u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B8644u) [[unlikely]] return; }
L_002B8644:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B8660:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 28u)));
    c.r[4].d[0] = ld16((c.r[7].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[6], c.r[7].w[0] + 544u);  if (t) { goto L_002B86A0; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B87A4; } }
L_002B86A0:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    set32(c.r[3], 0u + 188u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B86EC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B86D0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[6], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B86D0u); set32(c.r[5], c.r[7].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B86D0u) [[unlikely]] return; }
L_002B86D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B86E4u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 306u, depth + 1u); else { c.pc = 0x0028AF90u; return; } if (c.pc != 0x002B86E4u) [[unlikely]] return; }
L_002B86E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8780; } }
L_002B86EC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B87A4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8710; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8710u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B8710u) [[unlikely]] return; }
L_002B8710:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8720u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 192u, depth + 1u); else { c.pc = 0x0028DE10u; return; } if (c.pc != 0x002B8720u) [[unlikely]] return; }
L_002B8720:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_002B8788; } }
L_002B8748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8750u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002B8750u) [[unlikely]] return; }
L_002B8750:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B87A4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_002B87A4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8780u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002B8780u) [[unlikely]] return; }
L_002B8780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002B87A8; } }
L_002B8788:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B8748u | kUnwind; return; } goto L_002B8748; } }
L_002B87A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002B87A8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B87C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B87E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x002B87E4u) [[unlikely]] return; }
L_002B87E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B87F0u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0002(c, 154u, depth + 1u); else { c.pc = 0x0020AF90u; return; } if (c.pc != 0x002B87F0u) [[unlikely]] return; }
L_002B87F0:
    st32((c.r[18].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[6], c.r[16].w[0] + 1u);
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8804u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x002B8804u) [[unlikely]] return; }
L_002B8804:
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8810u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002B8810u) [[unlikely]] return; }
L_002B8810:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 68u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8820u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x002B8820u) [[unlikely]] return; }
L_002B8820:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B8840:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B8910; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 18368u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8880; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B887Cu);  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x002B887Cu) [[unlikely]] return; }
L_002B887C:
    st32((c.r[16].w[0] + 64u), 0u);
    c.budget -= 1;
L_002B8880:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B88BC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B889Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B889Cu) [[unlikely]] return; }
L_002B889C:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B88B8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B88B8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B88B8u) [[unlikely]] return; }
L_002B88B8:
    st32((c.r[16].w[0] + 68u), 0u);
    c.budget -= 1;
L_002B88BC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B88F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B88F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B88F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002B88F8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B8910; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8910u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002B8910u) [[unlikely]] return; }
L_002B8910:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B8930:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = 0ull & 1ull;
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[8], c.r[2].w[0] << 2);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[14], 0u - 2u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[15].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[11], 0u - 3u);
    c.r[13].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[10], c.r[10].w[0] - 27952u);
    set32(c.r[9], 0u + 67u);
    set32(c.r[7], 0u - 5u);
    set32(c.r[6], c.r[6].w[0] - 16688u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - 18368u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[13].d[0] = c.r[13].d[0] & c.r[14].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0]), c.r[10].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[14].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 63;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 68u), 0u);  c.pc = t; return; }
L_002B8A30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8A40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8A50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] + 544u);  if (t) { goto L_002B8B3C; } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 8u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002B8B10; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B8B3C; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8AA8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_001F(c, 214u, depth + 1u); else { c.pc = 0x0027DE10u; return; } if (c.pc != 0x002B8AA8u) [[unlikely]] return; }
L_002B8AA8:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_002B8B20; } }
L_002B8AD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8AD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002B8AD8u) [[unlikely]] return; }
L_002B8AD8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B8B3C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_002B8B3C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8B08u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002B8B08u) [[unlikely]] return; }
L_002B8B08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8B18; } }
L_002B8B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8B18u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 195u, depth + 1u); else { c.pc = 0x0028DE70u; return; } if (c.pc != 0x002B8B18u) [[unlikely]] return; }
L_002B8B18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002B8B40; } }
L_002B8B20:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B8AD0u | kUnwind; return; } goto L_002B8AD0; } }
L_002B8B3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002B8B40:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B8B50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = 0ull & 1ull;
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[9], c.r[2].w[0] << 2);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[15], 0u - 2u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[24].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[12], 0u - 3u);
    c.r[14].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[13].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[11], c.r[11].w[0] - 27952u);
    set32(c.r[10], 0u + 71u);
    set32(c.r[8], 0u - 5u);
    set32(c.r[7], c.r[7].w[0] - 16688u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] - 18032u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[14].d[0] = c.r[14].d[0] & c.r[15].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[24].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[14].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st32((c.r[4].w[0]), c.r[11].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[10].d[0] = c.r[10].d[0] & c.r[15].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[24].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0]), c.r[7].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.budget -= 63;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_002B8C50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002B8C60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[6].d[0] = ld16((c.r[3].w[0] + 544u));
    set32(c.r[4], c.r[3].w[0] + 544u);
    c.r[3].d[0] = c.r[6].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002B8CA4; } }
    c.r[3].d[0] = c.r[6].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B8D54; } }
L_002B8CA4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 72u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B8D20; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B8D54; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_002B8D38; } }
L_002B8CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8CE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002B8CE8u) [[unlikely]] return; }
L_002B8CE8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B8D54; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_002B8D54; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8D18u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002B8D18u) [[unlikely]] return; }
L_002B8D18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002B8D58; } }
L_002B8D20:
    set32(c.r[6], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8D2Cu); set32(c.r[5], ld32((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_0023(c, 180u, depth + 1u); else { c.pc = 0x0028DC70u; return; } if (c.pc != 0x002B8D2Cu) [[unlikely]] return; }
L_002B8D2C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B8D18u | kUnwind; return; } goto L_002B8D18; } }
L_002B8D38:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B8CE0u | kUnwind; return; } goto L_002B8CE0; } }
L_002B8D54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002B8D58:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B8D70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = 0ull & 1ull;
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[10], c.r[2].w[0] << 2);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[24], 0u - 2u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[25].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[13], 0u - 3u);
    c.r[15].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[12], c.r[12].w[0] - 27952u);
    set32(c.r[11], 0u + 5u);
    set32(c.r[9], 0u - 5u);
    set32(c.r[8], c.r[8].w[0] - 16688u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] - 17696u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[15].d[0] = c.r[15].d[0] & c.r[24].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[25].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[13].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st32((c.r[4].w[0]), c.r[12].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[11].d[0] = c.r[11].d[0] & c.r[24].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[25].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[4].w[0]), c.r[8].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[7].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[6].w[0]);
    c.budget -= 65;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002B8E80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 72u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B8EA0; } }
L_002B8E98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002B8ED8; } }
L_002B8EA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8EB4u); set32(c.r[4], c.r[3].w[0] + 528u);  if (depth < kMaxDepth) unit_0049(c, 39u, depth + 1u); else { c.pc = 0x003247D0u; return; } if (c.pc != 0x002B8EB4u) [[unlikely]] return; }
L_002B8EB4:
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 73u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B8ED4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8ECCu); set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));  if (depth < kMaxDepth) unit_001F(c, 172u, depth + 1u); else { c.pc = 0x0027DA80u; return; } if (c.pc != 0x002B8ECCu) [[unlikely]] return; }
L_002B8ECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 73u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B8E98u | kUnwind; return; } goto L_002B8E98; } }
L_002B8ED4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B8ED8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B8EF0:
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 73u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002B8F00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], 0u - 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B8F7C; } }
L_002B8F3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8F44u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002B8F44u) [[unlikely]] return; }
L_002B8F44:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B8F98; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_002B8F98; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8F74u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002B8F74u) [[unlikely]] return; }
L_002B8F74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002B8F9C; } }
L_002B8F7C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B8F3Cu | kUnwind; return; } goto L_002B8F3C; } }
L_002B8F98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002B8F9C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B8FB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 544u));
    c.r[3].d[0] = c.r[5].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B90E4; } }
    c.r[3].d[0] = c.r[5].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B90E4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_002B8FF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41100000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    c.f[2] = ld32((c.r[4].w[0] + 40u));
    c.f[4] = ld32((c.r[4].w[0] + 36u));
    c.f[3] = ld32((c.r[5].w[0] + 36u));
    c.f[5] = ld32((c.r[5].w[0] + 32u));
    c.f[6] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);  if (t) { goto L_002B90A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B90A4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 28404u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B90A4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 73u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B90F4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 72u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B9110; } }
L_002B9070:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B912C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9098u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 178u, depth + 1u); else { c.pc = 0x0027DB60u; return; } if (c.pc != 0x002B9098u) [[unlikely]] return; }
L_002B9098:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 73u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B90DC; } }
L_002B90A4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 72u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B912C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 224u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B90C0u); set32(c.r[4], c.r[2].w[0] + 528u);  if (depth < kMaxDepth) unit_0049(c, 39u, depth + 1u); else { c.pc = 0x003247D0u; return; } if (c.pc != 0x002B90C0u) [[unlikely]] return; }
L_002B90C0:
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 73u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B912C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B90D8u); set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));  if (depth < kMaxDepth) unit_001F(c, 172u, depth + 1u); else { c.pc = 0x0027DA80u; return; } if (c.pc != 0x002B90D8u) [[unlikely]] return; }
L_002B90D8:
    st8((c.r[16].w[0] + 73u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002B90DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002B9130; } }
L_002B90E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B90ECu); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_001F(c, 248u, depth + 1u); else { c.pc = 0x0027E1F0u; return; } if (c.pc != 0x002B90ECu) [[unlikely]] return; }
L_002B90EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 28u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B8FF0u | kUnwind; return; } goto L_002B8FF0; } }
L_002B90F4:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002B912C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9108u);  if (depth < kMaxDepth) unit_001F(c, 172u, depth + 1u); else { c.pc = 0x0027DA80u; return; } if (c.pc != 0x002B9108u) [[unlikely]] return; }
L_002B9108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 73u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B90DCu | kUnwind; return; } goto L_002B90DC; } }
L_002B9110:
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 224u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9120u); set32(c.r[4], c.r[2].w[0] + 528u);  if (depth < kMaxDepth) unit_0049(c, 52u, depth + 1u); else { c.pc = 0x00324A00u; return; } if (c.pc != 0x002B9120u) [[unlikely]] return; }
L_002B9120:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B9070u | kUnwind; return; } goto L_002B9070; } }
L_002B912C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002B9130:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B9140:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = 0ull & 1ull;
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[10], c.r[2].w[0] << 2);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[24], 0u - 2u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[25].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[13], 0u - 3u);
    c.r[15].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[12], c.r[12].w[0] - 27952u);
    set32(c.r[11], 0u + 69u);
    set32(c.r[9], 0u - 5u);
    set32(c.r[8], c.r[8].w[0] - 16688u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] - 17360u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[15].d[0] = c.r[15].d[0] & c.r[24].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[25].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[13].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st32((c.r[4].w[0]), c.r[12].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[11].d[0] = c.r[11].d[0] & c.r[24].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[25].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[4].w[0]), c.r[8].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[7].w[0]);
    st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 64;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 68u), c.r[6].w[0]);  c.pc = t; return; }
L_002B9240:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 544u));
    set32(c.r[4], c.r[3].w[0] + 544u);
    c.r[3].d[0] = c.r[5].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B9274; } }
    c.r[3].d[0] = c.r[5].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B9288; } }
L_002B9274:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B9288; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9288u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 192u, depth + 1u); else { c.pc = 0x0028DE10u; return; } if (c.pc != 0x002B9288u) [[unlikely]] return; }
L_002B9288:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B92A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = 0ull & 1ull;
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[8], c.r[2].w[0] << 2);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[14], 0u - 2u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[15].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[11], 0u - 3u);
    c.r[13].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[10], c.r[10].w[0] - 27952u);
    set32(c.r[9], 0u + 4u);
    set32(c.r[7], 0u - 5u);
    set32(c.r[6], c.r[6].w[0] - 16688u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - 17024u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[13].d[0] = c.r[13].d[0] & c.r[14].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0]), c.r[10].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[14].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));
    c.budget -= 62;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_002B93A0:
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 8u);
    c.budget -= 2;
L_002B93A8:
    c.r[7].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[9].d[0];  if (t) { goto L_002B9404; } }
    c.budget -= 1;
L_002B93B8:
    set32(c.r[8], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[7], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[10].w[0] + 1u);
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    c.r[10].d[0] = c.r[3].d[0] << 56;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 56);
    c.r[3].d[0] = c.r[10].sd[0] < 6ll ? 1ull : 0ull;
    st16((c.r[7].w[0] + 46u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B93A8u | kUnwind; return; } goto L_002B93A8; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 25u));
    set32(c.r[3], 0u - 5u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B9418; } }
L_002B9404:
    c.r[3].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B93B8u | kUnwind; return; } goto L_002B93B8; } }
    c.budget -= 1;
L_002B9418:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9420:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9430:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002B9488; } }
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B946Cu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B946Cu) [[unlikely]] return; }
L_002B946C:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9480u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x002805A0u; return; } if (c.pc != 0x002B9480u) [[unlikely]] return; }
L_002B9480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002B94A4; } }
L_002B9488:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_002B948C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B949Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x002805A0u; return; } if (c.pc != 0x002B949Cu) [[unlikely]] return; }
L_002B949C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B9480u | kUnwind; return; } goto L_002B9480; } }
L_002B94A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B94C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], 0u - 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B953C; } }
L_002B94FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9504u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002B9504u) [[unlikely]] return; }
L_002B9504:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B9558; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_002B9558; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9534u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002B9534u) [[unlikely]] return; }
L_002B9534:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002B955C; } }
L_002B953C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B94FCu | kUnwind; return; } goto L_002B94FC; } }
L_002B9558:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002B955C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B9570:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B9610; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B95C4; } }
L_002B95A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B9600; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1316u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B9600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002B9614; } }
L_002B95C4:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B95D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B95D4u) [[unlikely]] return; }
L_002B95D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B95A0u | kUnwind; return; } goto L_002B95A0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 24u));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B95A0u | kUnwind; return; } goto L_002B95A0; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B95A0u | kUnwind; return; } goto L_002B95A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B9610; } }
L_002B9600:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9610u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002B9610u) [[unlikely]] return; }
L_002B9610:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B9614:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9620:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[14], 0u - 2u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = 0ull & 1ull;
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[9], c.r[2].w[0] << 2);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[15].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[11], 0u - 3u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[13].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[10], c.r[10].w[0] - 27952u);
    set32(c.r[8], 0u - 5u);
    set32(c.r[7], c.r[7].w[0] - 16688u);
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[13].d[0] = c.r[13].d[0] & c.r[14].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0]), c.r[10].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[14].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[8].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0]), c.r[7].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 58;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_002B9710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B9784; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 26480u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B976C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B976C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B976C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002B976C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B9784; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9784u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002B9784u) [[unlikely]] return; }
L_002B9784:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B97A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B9814; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 26144u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B97FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B97FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B97FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002B97FC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B9814; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9814u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002B9814u) [[unlikely]] return; }
L_002B9814:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B98A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 25808u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B988C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B988C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B988C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002B988C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B98A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B98A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002B98A4u) [[unlikely]] return; }
L_002B98A4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B98C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B98D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B98E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B9954; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 25472u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B993C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B993C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B993C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002B993C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B9954; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9954u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002B9954u) [[unlikely]] return; }
L_002B9954:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B99F0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 25136u);
    set32(c.r[2], c.r[2].w[0] - 24804u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_002B99D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B99D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B99D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002B99D8:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B99F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B99F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002B99F0u) [[unlikely]] return; }
L_002B99F0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9A10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 104u)));  c.pc = t; return; }
L_002B9A20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 72u)));  c.pc = t; return; }
L_002B9A30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002B9A40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 88u)));  c.pc = t; return; }
L_002B9A50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 84u)));  c.pc = t; return; }
L_002B9A60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B9AD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 24752u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9ABC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9ABC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9ABC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002B9ABC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B9AD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9AD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002B9AD4u) [[unlikely]] return; }
L_002B9AD4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9AF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B9B64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 24416u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9B4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9B4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9B4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002B9B4C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B9B64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9B64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002B9B64u) [[unlikely]] return; }
L_002B9B64:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9B80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9B90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B9C14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 24080u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9BFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9BFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9BFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002B9BFC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B9C14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9C14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002B9C14u) [[unlikely]] return; }
L_002B9C14:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9C30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B9CA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 23744u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9C8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9C8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9C8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002B9C8C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B9CA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9CA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002B9CA4u) [[unlikely]] return; }
L_002B9CA4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9CC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B9D34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 23408u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9D1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9D1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9D1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002B9D1C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B9D34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9D34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002B9D34u) [[unlikely]] return; }
L_002B9D34:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B9DC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 23072u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9DAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9DAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9DAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002B9DAC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B9DC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9DC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002B9DC4u) [[unlikely]] return; }
L_002B9DC4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9DE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B9E54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 22736u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9E3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9E3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9E3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002B9E3C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B9E54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9E54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002B9E54u) [[unlikely]] return; }
L_002B9E54:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9E70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9E80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B9EF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 22400u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9EDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9EDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9EDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002B9EDC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B9EF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9EF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002B9EF4u) [[unlikely]] return; }
L_002B9EF4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9F10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B9F84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 22064u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9F6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9F6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9F6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002B9F6C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B9F84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9F84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002B9F84u) [[unlikely]] return; }
L_002B9F84:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9FA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BA014; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 21728u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9FFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9FFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B9FFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002B9FFC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002BA014; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA014u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002BA014u) [[unlikely]] return; }
L_002BA014:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BA0A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 21392u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA08C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA08C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA08C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002BA08C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002BA0A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA0A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002BA0A4u) [[unlikely]] return; }
L_002BA0A4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA0C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BA134; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 21056u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA11C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA11C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA11C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002BA11C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002BA134; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA134u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002BA134u) [[unlikely]] return; }
L_002BA134:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BA1C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 20384u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA1AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA1AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA1AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002BA1AC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002BA1C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA1C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002BA1C4u) [[unlikely]] return; }
L_002BA1C4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA1E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BA1F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BA264; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 20048u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA24C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA24C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA24C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002BA24C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002BA264; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA264u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002BA264u) [[unlikely]] return; }
L_002BA264:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BA2F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 19712u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA2DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA2DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA2DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002BA2DC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002BA2F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA2F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002BA2F4u) [[unlikely]] return; }
L_002BA2F4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BA394; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 19376u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA37C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 19040u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA37C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA37C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA37C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002BA37C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002BA394; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA394u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002BA394u) [[unlikely]] return; }
L_002BA394:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA3B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BA424; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 18704u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA40C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA40C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA40C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002BA40C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002BA424; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA424u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002BA424u) [[unlikely]] return; }
L_002BA424:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BA4B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 18032u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA49C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA49C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA49C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002BA49C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002BA4B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA4B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002BA4B4u) [[unlikely]] return; }
L_002BA4B4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA4D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BA544; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 17696u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA52C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA52C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA52C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002BA52C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002BA544; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA544u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002BA544u) [[unlikely]] return; }
L_002BA544:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA560:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BA570:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BA5E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 17360u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA5CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA5CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA5CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002BA5CC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002BA5E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA5E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002BA5E4u) [[unlikely]] return; }
L_002BA5E4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA600:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BA610:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BA65C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 17024u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA65C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA65C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_002BA65C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 5;
L_002BA65C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_002BA670:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BA680:
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BA6A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA6A4; } }
L_002BA6A0:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 1;
L_002BA6A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BA6B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B9A30u | kUnwind; return; } goto L_002B9A30; }
L_002BA6C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B9A40u | kUnwind; return; } goto L_002B9A40; }
L_002BA6D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B9A50u | kUnwind; return; } goto L_002B9A50; }
L_002BA6E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADB80u | kUnwind; return; } [[clang::musttail]] return unit_002B(c, 170u, depth); }
L_002BA6F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BA700:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[21], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 13;
    { const bool t = c.r[21].d[0] == 0ull; c.r[23].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BA860; } }
    set32(c.r[20], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002BA854; } }
    set32(c.r[19], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002BA848; } }
    set32(c.r[18], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002BA83C; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002BA830; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BA824; } }
    set32(c.r[22], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002BA818; } }
    set32(c.r[4], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BA80C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA790u);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x002BA790u) [[unlikely]] return; }
L_002BA790:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BA80C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BA79C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BA818; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BA7A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BA824; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BA7B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BA830; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BA7C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BA83C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BA7CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BA848; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BA7D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BA854; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BA7E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BA860; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BA7F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BA800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BA868; } }
L_002BA800:
    c.r[2].d[0] = ld8((c.r[23].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_002BA868; } }
L_002BA80C:
    c.r[2].d[0] = ld8((c.r[22].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA79Cu | kUnwind; return; } goto L_002BA79C; } }
L_002BA818:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA7A8u | kUnwind; return; } goto L_002BA7A8; } }
L_002BA824:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA7B4u | kUnwind; return; } goto L_002BA7B4; } }
L_002BA830:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA7C0u | kUnwind; return; } goto L_002BA7C0; } }
L_002BA83C:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA7CCu | kUnwind; return; } goto L_002BA7CC; } }
L_002BA848:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA7D8u | kUnwind; return; } goto L_002BA7D8; } }
L_002BA854:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA7E4u | kUnwind; return; } goto L_002BA7E4; } }
L_002BA860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA7F0u | kUnwind; return; } goto L_002BA7F0; } }
L_002BA868:
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
L_002BA8A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[21], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 13;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002BAA0C; } }
    set32(c.r[20], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002BAA00; } }
    set32(c.r[19], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002BA9F4; } }
    set32(c.r[18], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002BA9E8; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002BA9DC; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BA9D0; } }
    set32(c.r[22], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002BA9C4; } }
    set32(c.r[23], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_002BA9B8; } }
    set32(c.r[4], ld32((c.r[23].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BA9AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA93Cu);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x002BA93Cu) [[unlikely]] return; }
L_002BA93C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BA9AC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BA948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BA9B8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BA954:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BA9C4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BA960:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BA9D0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BA96C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BA9DC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BA978:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BA9E8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BA984:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BA9F4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BA990:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BAA00; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BA99C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BAA0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BAA10; } }
L_002BA9AC:
    c.r[2].d[0] = ld8((c.r[23].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA948u | kUnwind; return; } goto L_002BA948; } }
L_002BA9B8:
    c.r[2].d[0] = ld8((c.r[22].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA954u | kUnwind; return; } goto L_002BA954; } }
L_002BA9C4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA960u | kUnwind; return; } goto L_002BA960; } }
L_002BA9D0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA96Cu | kUnwind; return; } goto L_002BA96C; } }
L_002BA9DC:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA978u | kUnwind; return; } goto L_002BA978; } }
L_002BA9E8:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA984u | kUnwind; return; } goto L_002BA984; } }
L_002BA9F4:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA990u | kUnwind; return; } goto L_002BA990; } }
L_002BAA00:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA99Cu | kUnwind; return; } goto L_002BA99C; } }
L_002BAA0C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002BAA10:
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
L_002BAA40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BAA8C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BAABC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAA70u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 498u, depth + 1u); else { c.pc = 0x002C1F70u; return; } if (c.pc != 0x002BAA70u) [[unlikely]] return; }
L_002BAA70:
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(0u));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 296u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAA84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BAA84u) [[unlikely]] return; }
L_002BAA84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002BAAC0; } }
L_002BAA8C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BAABC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAAA4u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 500u, depth + 1u); else { c.pc = 0x002C1FB0u; return; } if (c.pc != 0x002BAAA4u) [[unlikely]] return; }
L_002BAAA4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 292u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAABCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BAABCu) [[unlikely]] return; }
L_002BAABC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002BAAC0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BAAD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BAAE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BAAF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BAB10; } }
L_002BAB08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002BAB3C; } }
L_002BAB10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAB20u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 498u, depth + 1u); else { c.pc = 0x002C1F70u; return; } if (c.pc != 0x002BAB20u) [[unlikely]] return; }
L_002BAB20:
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(0u));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 296u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAB34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BAB34u) [[unlikely]] return; }
L_002BAB34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAB08u | kUnwind; return; } goto L_002BAB08; } }
L_002BAB3C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BAB50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BAB70; } }
L_002BAB68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002BABA0; } }
L_002BAB70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAB80u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 500u, depth + 1u); else { c.pc = 0x002C1FB0u; return; } if (c.pc != 0x002BAB80u) [[unlikely]] return; }
L_002BAB80:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 292u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAB98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BAB98u) [[unlikely]] return; }
L_002BAB98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAB68u | kUnwind; return; } goto L_002BAB68; } }
L_002BABA0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BABB0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_002E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BABC0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_002E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BABD0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] >> 63;  c.pc = t; return; }
L_002BABE0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[20], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 15;
    { const bool t = c.r[20].d[0] == 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BAE6C; } }
    set32(c.r[19], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002BAE60; } }
    set32(c.r[18], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002BAE54; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002BAE48; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BAE3C; } }
    set32(c.r[22], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002BAE30; } }
    set32(c.r[23], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_002BAE24; } }
    set32(c.r[4], ld32((c.r[23].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BAE18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAC78u);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x002BAC78u) [[unlikely]] return; }
L_002BAC78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BAE18; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BAC84:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BAE24; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BAC90:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BAE30; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BAC9C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BAE3C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BACA8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BAE48; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BACB4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BAE54; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BACC0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BAE60; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BACCC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BAE6C; } }
    st8((c.r[29].w[0] + 160u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002BACD8:
    c.r[5].d[0] = ld8((c.r[21].w[0] + 18u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = c.r[30].d[0] & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[21].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[21].w[0] + 16u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BAE7C; } }
    set32(c.r[20], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 1;
L_002BAD00:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002BAEF8; } }
    set32(c.r[19], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002BAEEC; } }
    set32(c.r[18], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002BAEE0; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002BAED4; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BAEC8; } }
    set32(c.r[22], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002BAEBC; } }
    set32(c.r[23], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_002BAEB0; } }
    goto L_002BAD50;
L_002BAD4C:
    c.budget -= 1;
L_002BAD50:
    set32(c.r[4], ld32((c.r[23].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BAEA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAD64u);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x002BAD64u) [[unlikely]] return; }
L_002BAD64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BAEA4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BAD70:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BAEB0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BAD7C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BAEBC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BAD88:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BAEC8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BAD94:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BAED4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BADA0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BAEE0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BADAC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BAEEC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BADB8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BAEF8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BADC4:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 160u));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BAF04; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002BADFC; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BADF4u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BADF4u) [[unlikely]] return; }
L_002BADF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BAE10; } }
L_002BADFC:
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAE10u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BAE10u) [[unlikely]] return; }
L_002BAE10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_002BAF08; } }
L_002BAE18:
    c.r[3].d[0] = ld8((c.r[23].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAC84u | kUnwind; return; } goto L_002BAC84; } }
L_002BAE24:
    c.r[3].d[0] = ld8((c.r[22].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAC90u | kUnwind; return; } goto L_002BAC90; } }
L_002BAE30:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAC9Cu | kUnwind; return; } goto L_002BAC9C; } }
L_002BAE3C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BACA8u | kUnwind; return; } goto L_002BACA8; } }
L_002BAE48:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BACB4u | kUnwind; return; } goto L_002BACB4; } }
L_002BAE54:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BACC0u | kUnwind; return; } goto L_002BACC0; } }
L_002BAE60:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BACCCu | kUnwind; return; } goto L_002BACCC; } }
L_002BAE6C:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 18u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 160u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BACD8u | kUnwind; return; } goto L_002BACD8; } }
L_002BAE7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAE8Cu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002BAE8Cu) [[unlikely]] return; }
L_002BAE8C:
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAE9Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 392u, depth + 1u); else { c.pc = 0x003FFF00u; return; } if (c.pc != 0x002BAE9Cu) [[unlikely]] return; }
L_002BAE9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[21].w[0] + 12u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAD00u | kUnwind; return; } goto L_002BAD00; } }
L_002BAEA4:
    c.r[3].d[0] = ld8((c.r[23].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAD70u | kUnwind; return; } goto L_002BAD70; } }
L_002BAEB0:
    c.r[3].d[0] = ld8((c.r[22].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAD7Cu | kUnwind; return; } goto L_002BAD7C; } }
L_002BAEBC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAD88u | kUnwind; return; } goto L_002BAD88; } }
L_002BAEC8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAD94u | kUnwind; return; } goto L_002BAD94; } }
L_002BAED4:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BADA0u | kUnwind; return; } goto L_002BADA0; } }
L_002BAEE0:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BADACu | kUnwind; return; } goto L_002BADAC; } }
L_002BAEEC:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BADB8u | kUnwind; return; } goto L_002BADB8; } }
L_002BAEF8:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[3].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BADC4u | kUnwind; return; } goto L_002BADC4; } }
L_002BAF04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_002BAF08:
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
L_002BAF40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 4u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002BAF64; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAF64u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x002BAF64u) [[unlikely]] return; }
L_002BAF64:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BAF70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 4u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BAF90; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAF90u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x002BAF90u) [[unlikely]] return; }
L_002BAF90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BAFA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_002BAFB0:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] - 10288u);  [[clang::musttail]] return unit_002F(c, 151u, depth); }
L_002BAFC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_002BAFD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] - 10288u);  [[clang::musttail]] return unit_002F(c, 151u, depth); }
L_002BAFE0:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] - 10288u);  [[clang::musttail]] return unit_002F(c, 151u, depth); }
L_002BAFF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 10228u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  c.pc = t; return; }
L_002BB010:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[21], ld32((c.r[4].w[0] + 12u)));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[21].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002BB17C; } }
    set32(c.r[20], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002BB170; } }
    set32(c.r[19], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002BB164; } }
    set32(c.r[18], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002BB158; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002BB14C; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BB140; } }
    set32(c.r[22], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002BB134; } }
    set32(c.r[23], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_002BB128; } }
    set32(c.r[4], ld32((c.r[23].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BB11C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB0B0u);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x002BB0B0u) [[unlikely]] return; }
L_002BB0B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB11C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB0BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB128; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB0C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB134; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB0D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB140; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB0E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB14C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB0EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB158; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB0F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB164; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB104:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB170; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB110:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_002BB180; } }
L_002BB11C:
    c.r[2].d[0] = ld8((c.r[23].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB0BCu | kUnwind; return; } goto L_002BB0BC; } }
L_002BB128:
    c.r[2].d[0] = ld8((c.r[22].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB0C8u | kUnwind; return; } goto L_002BB0C8; } }
L_002BB134:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB0D4u | kUnwind; return; } goto L_002BB0D4; } }
L_002BB140:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB0E0u | kUnwind; return; } goto L_002BB0E0; } }
L_002BB14C:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB0ECu | kUnwind; return; } goto L_002BB0EC; } }
L_002BB158:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB0F8u | kUnwind; return; } goto L_002BB0F8; } }
L_002BB164:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB104u | kUnwind; return; } goto L_002BB104; } }
L_002BB170:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB110u | kUnwind; return; } goto L_002BB110; } }
L_002BB17C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_002BB180:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002BB1B0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 18u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 1ull;  c.pc = t; return; }
L_002BB1C0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[21], ld32((c.r[4].w[0] + 12u)));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 14;
    { const bool t = c.r[21].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002BB330; } }
    set32(c.r[20], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002BB324; } }
    set32(c.r[19], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002BB318; } }
    set32(c.r[18], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002BB30C; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002BB300; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BB2F4; } }
    set32(c.r[22], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002BB2E8; } }
    set32(c.r[23], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_002BB2DC; } }
    set32(c.r[4], ld32((c.r[23].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BB2D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB260u);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x002BB260u) [[unlikely]] return; }
L_002BB260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB2D0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB26C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB2DC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB278:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB2E8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB2F4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB290:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB300; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB29C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB30C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB2A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB318; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB2B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB324; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB2C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB330; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BB338; } }
L_002BB2D0:
    c.r[2].d[0] = ld8((c.r[23].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB26Cu | kUnwind; return; } goto L_002BB26C; } }
L_002BB2DC:
    c.r[2].d[0] = ld8((c.r[22].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB278u | kUnwind; return; } goto L_002BB278; } }
L_002BB2E8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB284u | kUnwind; return; } goto L_002BB284; } }
L_002BB2F4:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB290u | kUnwind; return; } goto L_002BB290; } }
L_002BB300:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB29Cu | kUnwind; return; } goto L_002BB29C; } }
L_002BB30C:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB2A8u | kUnwind; return; } goto L_002BB2A8; } }
L_002BB318:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB2B4u | kUnwind; return; } goto L_002BB2B4; } }
L_002BB324:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 18u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB2C0u | kUnwind; return; } goto L_002BB2C0; } }
L_002BB330:
    c.r[2].d[0] = ld8((c.r[30].w[0] + 18u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 2;
L_002BB338:
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
L_002BB370:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BB380:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[10], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[10].w[0] << 4);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; c.f[0] = ld32((c.r[29].w[0] + 12u));  if (t) { goto L_002BB3A0; } }
    c.f[1] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_002BB3BC; } }
L_002BB3A0:
    set32(c.r[9], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[9].d[0] = c.r[9].d[0] | c.r[3].d[0];
    c.f[1] = c.r[9].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_002BB3BC:
    set32(c.r[9], ld32((c.r[4].w[0] + 36u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[3], c.r[9].w[0] << 4);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0; c.f[6] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);  if (t) { goto L_002BB3E0; } }
    c.f[1] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_002BB3FC; } }
L_002BB3E0:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_002BB3FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[3], c.r[10].w[0] + 1u);
    c.f[1] = c.r[4].w[0];
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0; c.f[8] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);  if (t) { goto L_002BB420; } }
    c.f[1] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_002BB43C; } }
L_002BB420:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_002BB43C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[3], c.r[9].w[0] + 1u);
    c.f[1] = c.r[4].w[0];
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0; c.f[5] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);  if (t) { goto L_002BB460; } }
    c.f[1] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_002BB47C; } }
L_002BB460:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_002BB47C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[1] = c.r[3].w[0];
    c.f[3] = ld32((c.r[6].w[0]));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BB4BC; } }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[6], c.f[1]);
    c.f[7] = fp::ee::div(c.fcr31, c.f[1], c.f[3]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB4C4; } }
L_002BB4BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[7] = c.r[3].w[0];
    c.budget -= 2;
L_002BB4C4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BB4F4; } }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[5], c.f[1]);
    c.f[6] = fp::ee::div(c.fcr31, c.f[1], c.f[3]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB4FC; } }
L_002BB4F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[6] = c.r[3].w[0];
    c.budget -= 2;
L_002BB4FC:
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BB530; } }
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[8], c.f[1]);
    c.f[5] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB538; } }
L_002BB530:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[5] = c.r[3].w[0];
    c.budget -= 2;
L_002BB538:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BB568; } }
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[4], c.f[1]);
    c.f[4] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB570; } }
L_002BB568:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[4] = c.r[3].w[0];
    c.budget -= 2;
L_002BB570:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BB58C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[8] = c.f[7];  if (t) { goto L_002BB590; } }
L_002BB58C:
    c.f[8] = c.f[6];
    c.budget -= 1;
L_002BB590:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BB5AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB5B0; } }
L_002BB5AC:
    c.f[6] = c.f[7];
    c.budget -= 1;
L_002BB5B0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BB5DC; } }
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[8]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BB5D4; } }
    c.f[8] = c.f[5];
    c.budget -= 1;
L_002BB5D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB5F0; } }
L_002BB5DC:
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[8]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BB5F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[8] = c.f[4];  if (t) { goto L_002BB5F0; } }
L_002BB5F0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BB624; } }
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[6]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BB618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB61C; } }
L_002BB618:
    c.f[4] = c.f[6];
    c.budget -= 1;
L_002BB61C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB640; } }
L_002BB624:
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[6]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BB638; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = c.f[5];  if (t) { goto L_002BB640; } }
L_002BB638:
    c.f[5] = c.f[6];
    c.f[4] = c.f[5];
    c.budget -= 2;
L_002BB640:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[8]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BB70C; } }
L_002BB654:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[8]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BB768; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_002BB66C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[2]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[3] = ld32((c.r[4].w[0] + 12u));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[11] = ld32((c.r[4].w[0]));  if (t) { goto L_002BB7A4; } }
    c.f[10] = ld32((c.r[6].w[0] + 8u));
    set32(c.r[3], c.r[29].w[0] + 16u);
    c.f[8] = ld32((c.r[6].w[0] + 4u));
    c.f[6] = ld32((c.r[6].w[0]));
    c.f[9] = ld32((c.r[5].w[0] + 8u));
    c.f[7] = ld32((c.r[5].w[0] + 4u));
    c.f[5] = ld32((c.r[5].w[0]));
    c.f[10] = fp::ee::mul(c.fcr31, c.f[10], c.f[4]);
    c.f[8] = fp::ee::mul(c.fcr31, c.f[8], c.f[4]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[6], c.f[4]);
    c.f[9] = fp::ee::add(c.fcr31, c.f[9], c.f[10]);
    c.f[7] = fp::ee::add(c.fcr31, c.f[7], c.f[8]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[29].w[0] + 24u), c.f[9]);
    st32((c.r[29].w[0] + 20u), c.f[7]);
    st32((c.r[29].w[0] + 16u), c.f[4]);
    c.budget -= 16;
L_002BB6D0:
    c.f[4] = ld32((c.r[3].w[0] + 4u));
    c.f[5] = ld32((c.r[3].w[0]));
    c.f[6] = ld32((c.r[3].w[0] + 8u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[1]);
    st32((c.r[7].w[0]), c.f[11]);
    st32((c.r[7].w[0] + 4u), c.f[1]);
    st32((c.r[7].w[0] + 8u), c.f[2]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[5], c.f[11]);
    st32((c.r[7].w[0] + 12u), c.f[3]);
    st32((c.r[8].w[0]), c.f[5]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[6], c.f[2]);
    st32((c.r[8].w[0] + 4u), c.f[4]);
    st32((c.r[8].w[0] + 8u), c.f[1]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 12u), c.f[0]);  if (t) { goto L_002BB7DC; } }
L_002BB70C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB654u | kUnwind; return; } goto L_002BB654; } }
    c.f[4] = ld32((c.r[5].w[0]));
    c.f[3] = ld32((c.r[6].w[0]));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[7].w[0]), c.f[4]);
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[7].w[0] + 4u), c.f[4]);
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[7].w[0] + 8u), c.f[4]);
    c.f[4] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[7].w[0] + 12u), c.f[4]);
    st32((c.r[8].w[0]), c.f[3]);
    st32((c.r[8].w[0] + 4u), c.f[2]);
    st32((c.r[8].w[0] + 8u), c.f[1]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 12u), c.f[0]);  if (t) { goto L_002BB7DC; } }
L_002BB768:
    c.f[6] = fp::ee::mul(c.fcr31, c.f[2], c.f[8]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[8]);
    c.f[5] = ld32((c.r[6].w[0] + 4u));
    c.f[7] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[8]);
    c.f[6] = fp::ee::add(c.fcr31, c.f[7], c.f[6]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[5]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 56u), c.f[6]);
    st32((c.r[29].w[0] + 52u), c.f[3]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 48u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB66Cu | kUnwind; return; } goto L_002BB66C; } }
L_002BB7A4:
    c.f[9] = ld32((c.r[5].w[0] + 8u));
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.f[8] = ld32((c.r[6].w[0] + 8u));
    c.f[7] = ld32((c.r[5].w[0] + 4u));
    c.f[6] = ld32((c.r[6].w[0] + 4u));
    c.f[5] = ld32((c.r[5].w[0]));
    c.f[4] = ld32((c.r[6].w[0]));
    c.f[8] = fp::ee::add(c.fcr31, c.f[9], c.f[8]);
    c.f[6] = fp::ee::add(c.fcr31, c.f[7], c.f[6]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[29].w[0] + 40u), c.f[8]);
    st32((c.r[29].w[0] + 36u), c.f[6]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 32u), c.f[4]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB6D0u | kUnwind; return; } goto L_002BB6D0; } }
L_002BB7DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BB7F0:
    c.f[1] = ld32((c.r[4].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A030000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 60u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002BB818; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB818:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BB844; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A030000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002BB844; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB844:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BB8EC; } }
    set32(c.r[8], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[8].d[0];  if (t) { goto L_002BB9B0; } }
L_002BB85C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[8].d[0];  if (t) { goto L_002BB8A8; } }
    c.f[1] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 50u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB88C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_002BB894; } }
L_002BB88C:
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.budget -= 2;
L_002BB894:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 49u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_002BB978; } }
L_002BB8A8:
    c.f[1] = ld32((c.r[4].w[0] + 60u));
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 50u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB8D0; } }
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 60u), c.f[0]);  if (t) { goto L_002BB8D8; } }
L_002BB8D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 2;
L_002BB8D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_002BB978; } }
L_002BB8EC:
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[1] = ld32((c.r[4].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BB940; } }
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 50u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB924; } }
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 60u), c.f[0]);  if (t) { goto L_002BB92C; } }
L_002BB924:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 2;
L_002BB92C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_002BB978; } }
L_002BB940:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 50u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB960; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_002BB968; } }
L_002BB960:
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.budget -= 2;
L_002BB968:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 49u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 4;
L_002BB978:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BBA24; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BBA24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BBA28; } }
L_002BB9B0:
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB85Cu | kUnwind; return; } goto L_002BB85C; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 50u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB9D8; } }
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 60u), c.f[0]);  if (t) { goto L_002BB9E0; } }
L_002BB9D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 2;
L_002BB9E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 50u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BBA08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_002BBA10; } }
L_002BBA08:
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.budget -= 2;
L_002BBA10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 49u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 36u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB978u | kUnwind; return; } goto L_002BB978; } }
L_002BBA24:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BBA28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BBA30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    set32(c.r[3], c.f[1]);
    set32(c.r[2], c.r[2].w[0] >> 4);
    st32((c.r[4].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] >> 4);
    st32((c.r[4].w[0] + 44u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    set32(c.r[3], c.f[1]);
    set32(c.r[2], c.r[2].w[0] >> 4);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] >> 4);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 30;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BBAC0; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BBAC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BBACC; } }
L_002BBAC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBAC8u);  if (depth < kMaxDepth) unit_002E(c, 279u, depth + 1u); else { c.pc = 0x002BBAE0u; return; } if (c.pc != 0x002BBAC8u) [[unlikely]] return; }
L_002BBAC8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BBACC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BBAE0:
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BBD28; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BBB0C; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002BBB10; } }
L_002BBB0C:
    st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002BBB10:
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BBD34; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BBB3C; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 49u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002BBB40; } }
L_002BBB3C:
    st8((c.r[4].w[0] + 49u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002BBB40:
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 16u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = c.f[2] & fp::kAbs;
    c.f[1] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BBBB0; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BBD40; } }
    c.f[0] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.budget -= 4;
L_002BBB90:
    st8((c.r[4].w[0] + 50u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    c.f[4] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 56u), c.f[0]);  if (t) { goto L_002BBBF0; } }
L_002BBBB0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BBD50; } }
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.budget -= 4;
L_002BBBD4:
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st8((c.r[4].w[0] + 50u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[4] = c.r[3].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.budget -= 7;
L_002BBBF0:
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x49740000u);
    c.r[3].d[0] = c.r[3].d[0] | 9216ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BBD60; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC9740000u);
    c.r[3].d[0] = c.r[3].d[0] | 9216ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BBC30; } }
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.budget -= 1;
L_002BBC30:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002BBC48; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002BBC64; } }
L_002BBC48:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_002BBC64:
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = 0u;
    c.f[2] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002BBC98; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002BBCB4; } }
L_002BBC98:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_002BBCB4:
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = 0u;
    set32(c.r[3], 0u + 1u);
    c.f[2] = c.r[5].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 48u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002BBD68; } }
L_002BBCE0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 49u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002BBD78; } }
L_002BBCF0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 50u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BBD10; } }
    c.f[1] = ld32((c.r[4].w[0] + 60u));
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 60u), c.f[0]);  if (t) { goto L_002BBD20; } }
L_002BBD10:
    c.f[1] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.budget -= 4;
L_002BBD20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BBD88; } }
L_002BBD28:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BBB10u | kUnwind; return; } goto L_002BBB10; } }
L_002BBD34:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 49u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BBB40u | kUnwind; return; } goto L_002BBB40; } }
L_002BBD40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x49740000u);
    c.r[3].d[0] = c.r[3].d[0] | 9216ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BBB90u | kUnwind; return; } goto L_002BBB90; } }
L_002BBD50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x49740000u);
    c.r[3].d[0] = c.r[3].d[0] | 9216ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BBBD4u | kUnwind; return; } goto L_002BBBD4; } }
L_002BBD60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BBC30u | kUnwind; return; } goto L_002BBC30; } }
L_002BBD68:
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 60u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BBCE0u | kUnwind; return; } goto L_002BBCE0; } }
L_002BBD78:
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 64u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BBCF0u | kUnwind; return; } goto L_002BBCF0; } }
L_002BBD88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BBD90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 16080u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 16083u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 16076u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 16072u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BBE00; } }
L_002BBDC0:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 8072u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBDD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x002BBDD8u) [[unlikely]] return; }
L_002BBDD8:
    set32(c.r[3], ld32((c.r[17].w[0] + 16076u)));
    set32(c.r[2], 0u + 2000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    st32((c.r[17].w[0] + 16076u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 16076u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16072u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BBDC0u | kUnwind; return; } goto L_002BBDC0; } }
L_002BBE00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBE08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 456u, depth + 1u); else { c.pc = 0x004FFE70u; return; } if (c.pc != 0x002BBE08u) [[unlikely]] return; }
L_002BBE08:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 16080u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 16083u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BBE30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16232u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002BBE68; } }
L_002BBE60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BBECC; } }
L_002BBE68:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BBE6C:
    set32(c.r[2], ld32((c.r[19].w[0] + 16228u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBE88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BBE88u) [[unlikely]] return; }
L_002BBE88:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBE94u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x002BBE94u) [[unlikely]] return; }
L_002BBE94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BBEB0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 16228u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_002BBECC; } }
L_002BBEB0:
    set32(c.r[2], ld32((c.r[19].w[0] + 16232u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BBE6Cu | kUnwind; return; } goto L_002BBE6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BBE60u | kUnwind; return; } goto L_002BBE60; } }
L_002BBECC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002BBEF0:
    set32(c.r[2], ld32((c.r[4].w[0] + 16220u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_002BBF10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 16224u)));  c.pc = t; return; }
L_002BBF20:
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_002BBF40:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_002BBF60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[8], c.r[8].w[0] + 816u);
    set32(c.r[7], c.r[29].w[0]);
    set32(c.r[6], 0u + 25u);
    c.budget -= 5;
L_002BBF74:
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BBF74u | kUnwind; return; } goto L_002BBF74; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[12].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[29].w[0]);
    set32(c.r[8], c.r[8].w[0] - 15920u);
    c.budget -= 4;
L_002BBFA0:
    set32(c.r[6], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[10], ld32((c.r[9].w[0])));
    set32(c.r[11], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_002BBFB0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BBFE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.r[6].d[0] = c.r[7].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002BBFE8; } }
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BBFB0u | kUnwind; return; } goto L_002BBFB0; } }
    c.budget -= 1;
L_002BBFE8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.r[3].d[0] = c.r[7].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[6].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_002F(c, 2u, depth); } }
    [[clang::musttail]] return unit_002F(c, 1u, depth);
}

}

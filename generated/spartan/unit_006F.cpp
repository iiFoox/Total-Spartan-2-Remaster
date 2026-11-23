#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006F[4096] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60,
    0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69,
    0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0,
    0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0,
    0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0,
    0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0,
    159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0,
    164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0,
    184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0,
    0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0,
    0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0,
    0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0,
    0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_006F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003BC000;
    case 2u: goto L_003BC00C;
    case 3u: goto L_003BC014;
    case 4u: goto L_003BC038;
    case 5u: goto L_003BC040;
    case 6u: goto L_003BC04C;
    case 7u: goto L_003BC05C;
    case 8u: goto L_003BC070;
    case 9u: goto L_003BC084;
    case 10u: goto L_003BC0A0;
    case 11u: goto L_003BC0C8;
    case 12u: goto L_003BC0E0;
    case 13u: goto L_003BC120;
    case 14u: goto L_003BC140;
    case 15u: goto L_003BC160;
    case 16u: goto L_003BC284;
    case 17u: goto L_003BC324;
    case 18u: goto L_003BC334;
    case 19u: goto L_003BC380;
    case 20u: goto L_003BC3D4;
    case 21u: goto L_003BC3F0;
    case 22u: goto L_003BC494;
    case 23u: goto L_003BC49C;
    case 24u: goto L_003BC500;
    case 25u: goto L_003BC548;
    case 26u: goto L_003BC590;
    case 27u: goto L_003BC5A0;
    case 28u: goto L_003BC680;
    case 29u: goto L_003BC690;
    case 30u: goto L_003BC6B0;
    case 31u: goto L_003BC6DC;
    case 32u: goto L_003BC720;
    case 33u: goto L_003BC780;
    case 34u: goto L_003BC7D0;
    case 35u: goto L_003BC83C;
    case 36u: goto L_003BC8E8;
    case 37u: goto L_003BC900;
    case 38u: goto L_003BC940;
    case 39u: goto L_003BC9DC;
    case 40u: goto L_003BCA00;
    case 41u: goto L_003BCA2C;
    case 42u: goto L_003BCA84;
    case 43u: goto L_003BCACC;
    case 44u: goto L_003BCB1C;
    case 45u: goto L_003BCB6C;
    case 46u: goto L_003BCBC8;
    case 47u: goto L_003BCC10;
    case 48u: goto L_003BCC5C;
    case 49u: goto L_003BCD00;
    case 50u: goto L_003BCD3C;
    case 51u: goto L_003BCD58;
    case 52u: goto L_003BD0B0;
    case 53u: goto L_003BD0E0;
    case 54u: goto L_003BD0FC;
    case 55u: goto L_003BD150;
    case 56u: goto L_003BD160;
    case 57u: goto L_003BD188;
    case 58u: goto L_003BD1A0;
    case 59u: goto L_003BD1E8;
    case 60u: goto L_003BD1FC;
    case 61u: goto L_003BD204;
    case 62u: goto L_003BD25C;
    case 63u: goto L_003BD270;
    case 64u: goto L_003BD280;
    case 65u: goto L_003BD2CC;
    case 66u: goto L_003BD2E0;
    case 67u: goto L_003BD2E8;
    case 68u: goto L_003BD340;
    case 69u: goto L_003BD37C;
    case 70u: goto L_003BD390;
    case 71u: goto L_003BD398;
    case 72u: goto L_003BD3F0;
    case 73u: goto L_003BD410;
    case 74u: goto L_003BD450;
    case 75u: goto L_003BD464;
    case 76u: goto L_003BD46C;
    case 77u: goto L_003BD4C4;
    case 78u: goto L_003BD4E0;
    case 79u: goto L_003BD5A0;
    case 80u: goto L_003BD5CC;
    case 81u: goto L_003BD5F4;
    case 82u: goto L_003BD61C;
    case 83u: goto L_003BD644;
    case 84u: goto L_003BD66C;
    case 85u: goto L_003BD694;
    case 86u: goto L_003BD6BC;
    case 87u: goto L_003BD6E0;
    case 88u: goto L_003BD6F0;
    case 89u: goto L_003BD700;
    case 90u: goto L_003BD73C;
    case 91u: goto L_003BD748;
    case 92u: goto L_003BD794;
    case 93u: goto L_003BD7C0;
    case 94u: goto L_003BD7F0;
    case 95u: goto L_003BD800;
    case 96u: goto L_003BD8B4;
    case 97u: goto L_003BD8C0;
    case 98u: goto L_003BD8E0;
    case 99u: goto L_003BD8F0;
    case 100u: goto L_003BD920;
    case 101u: goto L_003BD964;
    case 102u: goto L_003BD984;
    case 103u: goto L_003BD998;
    case 104u: goto L_003BD9CC;
    case 105u: goto L_003BDA40;
    case 106u: goto L_003BDA50;
    case 107u: goto L_003BDA60;
    case 108u: goto L_003BDB0C;
    case 109u: goto L_003BDB24;
    case 110u: goto L_003BDB38;
    case 111u: goto L_003BDB48;
    case 112u: goto L_003BDB98;
    case 113u: goto L_003BDBD4;
    case 114u: goto L_003BDBE4;
    case 115u: goto L_003BDC30;
    case 116u: goto L_003BDC40;
    case 117u: goto L_003BDC6C;
    case 118u: goto L_003BDC7C;
    case 119u: goto L_003BDC90;
    case 120u: goto L_003BDCC0;
    case 121u: goto L_003BDCD0;
    case 122u: goto L_003BDD80;
    case 123u: goto L_003BDD90;
    case 124u: goto L_003BDDA0;
    case 125u: goto L_003BDDB0;
    case 126u: goto L_003BDDC0;
    case 127u: goto L_003BDDD0;
    case 128u: goto L_003BDE4C;
    case 129u: goto L_003BDE80;
    case 130u: goto L_003BDE90;
    case 131u: goto L_003BDF94;
    case 132u: goto L_003BE028;
    case 133u: goto L_003BE058;
    case 134u: goto L_003BE068;
    case 135u: goto L_003BE08C;
    case 136u: goto L_003BE110;
    case 137u: goto L_003BE118;
    case 138u: goto L_003BE180;
    case 139u: goto L_003BE1B8;
    case 140u: goto L_003BE240;
    case 141u: goto L_003BE2C4;
    case 142u: goto L_003BE2CC;
    case 143u: goto L_003BE2E4;
    case 144u: goto L_003BE2F8;
    case 145u: goto L_003BE314;
    case 146u: goto L_003BE360;
    case 147u: goto L_003BE394;
    case 148u: goto L_003BE3A0;
    case 149u: goto L_003BE418;
    case 150u: goto L_003BE450;
    case 151u: goto L_003BE458;
    case 152u: goto L_003BE468;
    case 153u: goto L_003BE480;
    case 154u: goto L_003BE490;
    case 155u: goto L_003BE4A0;
    case 156u: goto L_003BE4B0;
    case 157u: goto L_003BE4E0;
    case 158u: goto L_003BE4F0;
    case 159u: goto L_003BE500;
    case 160u: goto L_003BE510;
    case 161u: goto L_003BE550;
    case 162u: goto L_003BE560;
    case 163u: goto L_003BE570;
    case 164u: goto L_003BE580;
    case 165u: goto L_003BE590;
    case 166u: goto L_003BE5A0;
    case 167u: goto L_003BE5B0;
    case 168u: goto L_003BE5C0;
    case 169u: goto L_003BE5F0;
    case 170u: goto L_003BE674;
    case 171u: goto L_003BE690;
    case 172u: goto L_003BE6C0;
    case 173u: goto L_003BE6F0;
    case 174u: goto L_003BE710;
    case 175u: goto L_003BE730;
    case 176u: goto L_003BE760;
    case 177u: goto L_003BE790;
    case 178u: goto L_003BE7A0;
    case 179u: goto L_003BE7E0;
    case 180u: goto L_003BE840;
    case 181u: goto L_003BE8A0;
    case 182u: goto L_003BE8E0;
    case 183u: goto L_003BE8F0;
    case 184u: goto L_003BE900;
    case 185u: goto L_003BE910;
    case 186u: goto L_003BE920;
    case 187u: goto L_003BE930;
    case 188u: goto L_003BE940;
    case 189u: goto L_003BE950;
    case 190u: goto L_003BE960;
    case 191u: goto L_003BE970;
    case 192u: goto L_003BE980;
    case 193u: goto L_003BE9CC;
    case 194u: goto L_003BE9E8;
    case 195u: goto L_003BEA04;
    case 196u: goto L_003BEA2C;
    case 197u: goto L_003BEA38;
    case 198u: goto L_003BEA44;
    case 199u: goto L_003BEA50;
    case 200u: goto L_003BEA5C;
    case 201u: goto L_003BEA68;
    case 202u: goto L_003BEA94;
    case 203u: goto L_003BEABC;
    case 204u: goto L_003BEAC8;
    case 205u: goto L_003BEAD4;
    case 206u: goto L_003BEAE0;
    case 207u: goto L_003BEAEC;
    case 208u: goto L_003BEAF8;
    case 209u: goto L_003BEB24;
    case 210u: goto L_003BEB40;
    case 211u: goto L_003BEB74;
    case 212u: goto L_003BEBB8;
    case 213u: goto L_003BEC00;
    case 214u: goto L_003BEC34;
    case 215u: goto L_003BEC68;
    case 216u: goto L_003BECC4;
    case 217u: goto L_003BECFC;
    case 218u: goto L_003BED50;
    case 219u: goto L_003BED68;
    case 220u: goto L_003BED88;
    case 221u: goto L_003BEE88;
    case 222u: goto L_003BEF10;
    case 223u: goto L_003BEF20;
    case 224u: goto L_003BEF7C;
    case 225u: goto L_003BEFBC;
    case 226u: goto L_003BF000;
    case 227u: goto L_003BF03C;
    case 228u: goto L_003BF0D0;
    case 229u: goto L_003BF110;
    case 230u: goto L_003BF154;
    case 231u: goto L_003BF190;
    case 232u: goto L_003BF204;
    case 233u: goto L_003BF218;
    case 234u: goto L_003BF22C;
    case 235u: goto L_003BF280;
    case 236u: goto L_003BF294;
    case 237u: goto L_003BF2E4;
    case 238u: goto L_003BF33C;
    case 239u: goto L_003BF3C0;
    case 240u: goto L_003BF3EC;
    case 241u: goto L_003BF420;
    case 242u: goto L_003BF470;
    case 243u: goto L_003BF480;
    case 244u: goto L_003BF530;
    case 245u: goto L_003BF540;
    case 246u: goto L_003BF570;
    case 247u: goto L_003BF5A0;
    case 248u: goto L_003BF5F8;
    case 249u: goto L_003BF620;
    case 250u: goto L_003BF6F4;
    case 251u: goto L_003BF7C4;
    case 252u: goto L_003BF7E4;
    case 253u: goto L_003BF80C;
    case 254u: goto L_003BF85C;
    case 255u: goto L_003BF86C;
    case 256u: goto L_003BF884;
    case 257u: goto L_003BF88C;
    case 258u: goto L_003BF8AC;
    case 259u: goto L_003BF8E4;
    case 260u: goto L_003BF8F0;
    case 261u: goto L_003BF904;
    case 262u: goto L_003BF914;
    case 263u: goto L_003BF924;
    case 264u: goto L_003BF9A0;
    case 265u: goto L_003BF9D4;
    case 266u: goto L_003BFA14;
    case 267u: goto L_003BFA28;
    case 268u: goto L_003BFA50;
    case 269u: goto L_003BFA5C;
    case 270u: goto L_003BFA90;
    case 271u: goto L_003BFADC;
    case 272u: goto L_003BFBD8;
    case 273u: goto L_003BFBF8;
    case 274u: goto L_003BFC34;
    case 275u: goto L_003BFCD0;
    case 276u: goto L_003BFE34;
    case 277u: goto L_003BFE84;
    case 278u: goto L_003BFEAC;
    case 279u: goto L_003BFEF4;
    case 280u: goto L_003BFF00;
    case 281u: goto L_003BFF40;
    default: bad_entry(c, 0x003BC000u); return;
    }
L_003BC000:
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[8].w[0]);  if (t) { goto L_003BC054; } }
L_003BC00C:
    set32(c.r[3], c.r[9].w[0] + 1u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 2;
L_003BC014:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[7].d[0] = c.r[9].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BC05C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC038u);  if (depth < kMaxDepth) unit_006E(c, 275u, depth + 1u); else { c.pc = 0x003BBD20u; return; } if (c.pc != 0x003BC038u) [[unlikely]] return; }
L_003BC038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BC060; } }
L_003BC040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBF9Cu | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 287u, depth); } }
    set32(c.r[9], 0u - 1u);
    c.budget -= 1;
L_003BC04C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBFC4u | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 288u, depth); } }
L_003BC054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], ld32((c.r[4].w[0] + 8u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC00Cu | kUnwind; return; } goto L_003BC00C; } }
L_003BC05C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003BC060:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BC070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC084u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 10u, depth + 1u); else { c.pc = 0x003BC0A0u; return; } if (c.pc != 0x003BC084u) [[unlikely]] return; }
L_003BC084:
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BC0A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BC0C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BC0C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC0C8u); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003BC0C8u) [[unlikely]] return; }
L_003BC0C8:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BC0E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003BC140; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003BC128; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BC120; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BC120; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC120u); set32(c.r[4], c.r[2].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003BC120u) [[unlikely]] return; }
L_003BC120:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 2;
L_003BC128:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003BC140; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC140u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003BC140u) [[unlikely]] return; }
L_003BC140:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BC160:
    set32(c.r[29], c.r[29].w[0] - 352u);
    set32(c.r[9], 0u + 1u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 322u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    set32(c.r[8], 0u - 2u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[23], c.r[29].w[0] + 180u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[22], c.r[29].w[0] + 176u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[29].w[0] + 172u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[21], c.r[29].w[0] + 316u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[29].w[0] + 168u), c.r[9].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1264u);
    st32((c.r[29].w[0] + 188u), c.r[9].w[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[9].d[0] = ld8((c.r[3].w[0]));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 304u), c.r[4].w[0]);
    set32(c.r[30], c.r[29].w[0] + 216u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC61C0000u);
    set32(c.r[19], c.r[29].w[0] + 264u);
    c.r[4].d[0] = c.r[4].d[0] | 16384ull;
    set32(c.r[5], c.r[29].w[0] + 164u);
    st32((c.r[20].w[0]), c.r[4].w[0]);
    set32(c.r[6], 0u - 3u);
    st32((c.r[22].w[0]), c.r[4].w[0]);
    c.r[8].d[0] = c.r[9].d[0] & c.r[8].d[0];
    st32((c.r[23].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = c.r[8].d[0] | c.r[2].d[0];
    set32(c.r[4], 0u + 140u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    st32((c.r[29].w[0] + 160u), c.r[4].w[0]);
    set32(c.r[4], 0u + 3u);
    st16((c.r[29].w[0] + 308u), static_cast<std::uint16_t>(0u));
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[5], c.r[29].w[0] + 268u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[5].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    set32(c.r[5], c.r[29].w[0] + 304u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st16((c.r[29].w[0] + 310u), static_cast<std::uint16_t>(0u));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 312u), 0u);
    st32((c.r[21].w[0]), 0u);
    st16((c.r[29].w[0] + 320u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 192u), 0u);
    st32((c.r[29].w[0] + 200u), 0u);
    st32((c.r[29].w[0] + 204u), 0u);
    st32((c.r[29].w[0] + 208u), 0u);
    st32((c.r[29].w[0] + 184u), 0u);
    st32((c.r[29].w[0] + 212u), 0u);
    st32((c.r[30].w[0]), 0u);
    st32((c.r[29].w[0] + 260u), 0u);
    st32((c.r[19].w[0]), 0u);
    st32((c.r[29].w[0] + 276u), 0u);
    st32((c.r[29].w[0] + 280u), 0u);
    st32((c.r[29].w[0] + 284u), 0u);
    c.budget -= 73;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC284u); st32((c.r[29].w[0] + 288u), 0u);  if (depth < kMaxDepth) unit_002F(c, 141u, depth + 1u); else { c.pc = 0x002BD200u; return; } if (c.pc != 0x003BC284u) [[unlikely]] return; }
L_003BC284:
    st32((c.r[19].w[0]), 0u);
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[2], c.r[29].w[0] + 268u);
    st32((c.r[2].w[0]), 0u);
    c.f[4] = ld32((c.r[17].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[5], c.r[29].w[0] + 228u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    st32((c.r[20].w[0]), c.f[1]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 252u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 336u), c.f[0]);
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[17].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[2], 0u + 1u);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 256u), c.r[3].w[0]);
    st32((c.r[22].w[0]), c.f[4]);
    st32((c.r[29].w[0] + 248u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 160u);
    st32((c.r[23].w[0]), c.f[3]);
    st32((c.r[30].w[0]), c.r[19].w[0]);
    st32((c.r[29].w[0] + 340u), c.f[2]);
    st32((c.r[29].w[0] + 220u), 0u);
    st32((c.r[29].w[0] + 344u), c.f[1]);
    st32((c.r[29].w[0] + 224u), 0u);
    st32((c.r[29].w[0] + 348u), c.f[0]);
    st32((c.r[29].w[0] + 240u), 0u);
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC324u); st32((c.r[29].w[0] + 244u), 0u);  if (depth < kMaxDepth) unit_006F(c, 107u, depth + 1u); else { c.pc = 0x003BDA60u; return; } if (c.pc != 0x003BC324u) [[unlikely]] return; }
L_003BC324:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC334u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 139u, depth + 1u); else { c.pc = 0x002BD1C0u; return; } if (c.pc != 0x003BC334u) [[unlikely]] return; }
L_003BC334:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[21].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 16352u);
    st32((c.r[29].w[0] + 312u), 0u);
    st32((c.r[29].w[0] + 304u), c.r[3].w[0]);
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
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_003BC380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003BC3D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 1264u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003BC3BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_003BC3BC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003BC3D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC3D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003BC3D4u) [[unlikely]] return; }
L_003BC3D4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BC3F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 5u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003BC56C; } }
    c.f[0] = ld32((c.r[18].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xB8510000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BC4D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38510000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BC4D0; } }
    c.f[0] = ld32((c.r[18].w[0] + 164u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BC4D8; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BC4D8; } }
    c.f[0] = ld32((c.r[18].w[0] + 168u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BC4E0; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BC4E0; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003BC494:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BC4E8; } }
L_003BC49C:
    c.f[3] = ld32((c.r[18].w[0] + 144u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 148u));
    c.f[1] = ld32((c.r[18].w[0] + 152u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { goto L_003BC56C; } }
L_003BC4D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC494u | kUnwind; return; } goto L_003BC494; } }
L_003BC4D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC494u | kUnwind; return; } goto L_003BC494; } }
L_003BC4E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC494u | kUnwind; return; } goto L_003BC494; } }
L_003BC4E8:
    set32(c.r[5], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC500u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_007A(c, 310u, depth + 1u); else { c.pc = 0x003EB3E0u; return; } if (c.pc != 0x003BC500u) [[unlikely]] return; }
L_003BC500:
    c.f[5] = ld32((c.r[18].w[0] + 160u));
    set32(c.r[5], ld32((c.r[18].w[0] + 96u)));
    c.f[4] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[3] = ld32((c.r[18].w[0] + 164u));
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.f[2] = ld32((c.r[29].w[0] + 84u));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[18].w[0] + 168u));
    c.r[8].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 80u), c.f[4]);
    st32((c.r[29].w[0] + 84u), c.f[2]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC548u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_007A(c, 310u, depth + 1u); else { c.pc = 0x003EB3E0u; return; } if (c.pc != 0x003BC548u) [[unlikely]] return; }
L_003BC548:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC49Cu | kUnwind; return; } goto L_003BC49C; } }
L_003BC56C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003BC590:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 176u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 180u), c.f[12]);  c.pc = t; return; }
L_003BC5A0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC61C0000u);
    c.r[3].d[0] = c.r[2].d[0] | 16384ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 120u);
    set32(c.r[7], 0u + 1u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[6], c.r[29].w[0] + 72u);
    set32(c.r[2], 0u + 140u);
    set32(c.r[5], c.r[29].w[0] + 124u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[8], c.r[29].w[0] + 20u);
    set32(c.r[2], 0u + 3u);
    st32((c.r[5].w[0]), 0u);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[2], 0u + 5u);
    st32((c.r[29].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 80u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[29].w[0] + 60u), 0u);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 40u), 0u);
    st32((c.r[29].w[0] + 44u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[6].w[0]), 0u);
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 136u), 0u);
    st32((c.r[29].w[0] + 140u), 0u);
    st32((c.r[29].w[0] + 144u), 0u);
    st32((c.r[29].w[0] + 76u), 0u);
    st32((c.r[3].w[0]), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 100u), 0u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 56;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC680u); st32((c.r[3].w[0]), c.r[7].w[0]);  if (depth < kMaxDepth) unit_006F(c, 107u, depth + 1u); else { c.pc = 0x003BDA60u; return; } if (c.pc != 0x003BC680u) [[unlikely]] return; }
L_003BC680:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003BC690:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC6B0u); st8((c.r[2].w[0] - 3552u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006F(c, 79u, depth + 1u); else { c.pc = 0x003BD5A0u; return; } if (c.pc != 0x003BC6B0u) [[unlikely]] return; }
L_003BC6B0:
    st32((c.r[29].w[0] + 32u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 40u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC6DCu); set32(c.r[6], c.r[29].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BC6DCu) [[unlikely]] return; }
L_003BC6DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 92u)));
    c.f[0] = ld32((c.r[3].w[0] + 2432u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[6].w[0] + 16u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = ld32((c.r[5].w[0] + 2436u));
    st32((c.r[6].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2440u));
    st32((c.r[6].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 2444u));
    st32((c.r[6].w[0] + 28u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BC720:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BC744; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[12] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);  if (t) { goto L_003BC754; } }
L_003BC744:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::ee::sub(c.fcr31, c.f[12], c.f[0]);
    c.budget -= 4;
L_003BC754:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[12], c.f[12]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[12], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[12], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[12], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 20400u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::ee::mul(c.fcr31, c.f[13], c.f[0]);  c.pc = t; return; }
L_003BC780:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BC7A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[12] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);  if (t) { goto L_003BC7B4; } }
L_003BC7A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::ee::sub(c.fcr31, c.f[12], c.f[0]);
    c.budget -= 4;
L_003BC7B4:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[12], c.f[12]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[12], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 20400u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::ee::mul(c.fcr31, c.f[13], c.f[0]);  c.pc = t; return; }
L_003BC7D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[20] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BC948; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BC950; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BC950; } }
    c.f[2] = ld32((c.r[4].w[0] + 28u));
    c.budget -= 1;
L_003BC83C:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BC864; } }
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_003BC8E8; } }
L_003BC864:
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BC8A8; } }
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 24u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 44u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);  if (t) { goto L_003BC8E8; } }
L_003BC8A8:
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BC95C; } }
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BC8E8; } }
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 8;
L_003BC8E8:
    c.f[8] = ld32((c.r[4].w[0] + 52u));
    c.f[7] = 0u;
    fpu_compare(c, fp::key(c.f[8]) <= fp::key(c.f[7]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BC964; } }
L_003BC900:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BC9D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BC940; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC940u); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_0039(c, 228u, depth + 1u); else { c.pc = 0x002E7C10u; return; } if (c.pc != 0x003BC940u) [[unlikely]] return; }
L_003BC940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[20];  if (t) { goto L_003BC9E4; } }
L_003BC948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[20];  if (t) { goto L_003BC9E4; } }
L_003BC950:
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[4].w[0] + 28u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC83Cu | kUnwind; return; } goto L_003BC83C; } }
L_003BC95C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[4].w[0] + 44u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC8E8u | kUnwind; return; } goto L_003BC8E8; } }
L_003BC964:
    c.f[4] = ld32((c.r[4].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[6] = ld32((c.r[4].w[0] + 8u));
    c.f[5] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = c.r[2].w[0];
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[8]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[7]));
    st32((c.r[29].w[0] + 40u), c.f[5]);
    st32((c.r[29].w[0] + 36u), c.f[3]);
    c.budget -= 25;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 32u), c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC900u | kUnwind; return; } goto L_003BC900; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[7];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC900u | kUnwind; return; } goto L_003BC900; } }
L_003BC9D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC9DCu); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_0039(c, 227u, depth + 1u); else { c.pc = 0x002E7C00u; return; } if (c.pc != 0x003BC9DCu) [[unlikely]] return; }
L_003BC9DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC940u | kUnwind; return; } goto L_003BC940; } }
L_003BC9E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BCA00:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003BCCA8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 17024u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003BC000u < 16384u) { entry = entries_006F[(t - 0x003BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003BCA2C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[3].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    c.r[7].d[0] = c.r[3].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    st32((c.r[4].w[0] + 32u), c.r[7].w[0]);
    c.r[5].d[0] = c.r[3].d[0] | 26214ull;
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43480000u);
    st32((c.r[4].w[0] + 44u), c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[4].w[0] + 48u), c.r[5].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_003BCCD0; } }
L_003BCA84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[4].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), c.r[5].w[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_003BCCD0; } }
L_003BCACC:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[4].w[0] + 20u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[3].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43160000u);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[4].w[0] + 40u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[5].w[0]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_003BCCD0; } }
L_003BCB1C:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[4].w[0] + 20u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[3].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43160000u);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    st32((c.r[4].w[0] + 40u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[5].w[0]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_003BCCD0; } }
L_003BCB6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[5].d[0] = c.r[3].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    st32((c.r[4].w[0] + 32u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[4].w[0] + 48u), c.r[5].w[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_003BCCD0; } }
L_003BCBC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    st32((c.r[4].w[0] + 24u), c.r[8].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[7].d[0] = c.r[3].d[0] | 39322ull;
    st32((c.r[4].w[0] + 32u), c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[4].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_003BCCD0; } }
L_003BCC10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43AF0000u);
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[8].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[4].w[0] + 32u), c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[4].w[0] + 36u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[5].w[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_003BCCD0; } }
L_003BCC5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    st32((c.r[4].w[0] + 24u), c.r[9].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43AF0000u);
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[8].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[4].w[0] + 32u), c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[4].w[0] + 36u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[5].w[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_003BCCD0; } }
L_003BCCA8:
    st32((c.r[4].w[0] + 20u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    c.budget -= 10;
L_003BCCD0:
    c.f[3] = ld32((c.r[6].w[0]));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.f[0]);  c.pc = t; return; }
L_003BCD00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29239u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003BCD34; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29240u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003BCD34:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BCD44; } }
L_003BCD3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003BD094; } }
L_003BCD44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.f[12] = ld32((c.r[2].w[0] - 20412u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCD58u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 34u, depth + 1u); else { c.pc = 0x003BC7D0u; return; } if (c.pc != 0x003BCD58u) [[unlikely]] return; }
L_003BCD58:
    c.f[4] = ld32((c.r[18].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[2] = ld32((c.r[18].w[0] + 64u));
    c.f[1] = c.r[3].w[0];
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.f[2] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[2]);
    c.budget -= 13;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003BCD98; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BCD98; } }
    set32(c.r[3], c.r[3].w[0] - 256u);
    c.budget -= 1;
L_003BCD98:
    c.f[2] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[3].w[0] + 19152u);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.f[7] = ld32((c.r[5].w[0]));
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] >= 0; c.f[2] = fp::cvt_s_w(c.f[2]);  if (t) { goto L_003BCDCC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BCDCC; } }
    set32(c.r[3], c.r[3].w[0] - 256u);
    c.budget -= 1;
L_003BCDCC:
    c.f[3] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 19152u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[5] = ld32((c.r[4].w[0]));
    c.f[6] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.f[2] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[5], c.f[7]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[7]);
    c.f[2] = fp::cvt_w_s(c.f[6]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);
    set32(c.r[4], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 18;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003BCE20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BCE20; } }
    set32(c.r[3], c.r[3].w[0] - 256u);
    c.budget -= 1;
L_003BCE20:
    c.f[2] = fp::cvt_w_s(c.f[6]);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[3].w[0] + 19152u);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.f[8] = ld32((c.r[5].w[0]));
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] >= 0; c.f[2] = fp::cvt_s_w(c.f[2]);  if (t) { goto L_003BCE54; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BCE54; } }
    set32(c.r[3], c.r[3].w[0] - 256u);
    c.budget -= 1;
L_003BCE54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 19152u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[3].d[0] | 52429ull;
    c.f[6] = fp::ee::sub(c.fcr31, c.f[6], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43400000u);
    c.f[2] = c.r[3].w[0];
    c.f[7] = ld32((c.r[5].w[0]));
    c.f[9] = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    c.f[5] = 0u;
    c.f[2] = fp::ee::sub(c.fcr31, c.f[7], c.f[8]);
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[8]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[2]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[3] = c.r[4].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[3] = fp::cvt_w_s(c.f[9]);
    set32(c.r[4], c.f[3]);
    c.budget -= 24;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003BCEC0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BCEC0; } }
    set32(c.r[3], c.r[3].w[0] - 256u);
    c.budget -= 1;
L_003BCEC0:
    c.f[3] = fp::cvt_w_s(c.f[9]);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[3].w[0] + 19152u);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.f[8] = ld32((c.r[5].w[0]));
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] >= 0; c.f[3] = fp::cvt_s_w(c.f[3]);  if (t) { goto L_003BCEF4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BCEF4; } }
    set32(c.r[3], c.r[3].w[0] - 256u);
    c.budget -= 1;
L_003BCEF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 19152u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[7] = ld32((c.r[4].w[0]));
    c.f[6] = fp::ee::sub(c.fcr31, c.f[9], c.f[3]);
    c.f[5] = 0u;
    c.f[9] = fp::cvt_w_s(c.f[4]);
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[8]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[7], c.f[8]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[5]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[0], c.f[5]);
    c.f[3] = c.r[3].w[0];
    set32(c.r[4], c.f[9]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[5]);
    c.budget -= 20;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003BCF50; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BCF50; } }
    set32(c.r[3], c.r[3].w[0] - 256u);
    c.budget -= 1;
L_003BCF50:
    c.f[5] = fp::cvt_w_s(c.f[4]);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[3].w[0] + 19152u);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.f[9] = ld32((c.r[5].w[0]));
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] >= 0; c.f[5] = fp::cvt_s_w(c.f[5]);  if (t) { goto L_003BCF84; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BCF84; } }
    set32(c.r[3], c.r[3].w[0] - 256u);
    c.budget -= 1;
L_003BCF84:
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 68u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[3].w[0] + 19152u);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    c.f[7] = fp::ee::sub(c.fcr31, c.f[4], c.f[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.f[8] = ld32((c.r[6].w[0]));
    c.f[5] = 0u;
    c.f[6] = ld32((c.r[16].w[0] + 8u));
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[9]);
    c.f[5] = ld32((c.r[17].w[0] + 8u));
    c.f[4] = c.r[3].w[0];
    c.f[8] = fp::ee::sub(c.fcr31, c.f[8], c.f[9]);
    c.f[7] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[8]);
    c.f[10] = fp::ee::mul(c.fcr31, c.f[0], c.f[7]);
    c.f[9] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.f[8] = ld32((c.r[16].w[0] + 4u));
    c.f[7] = ld32((c.r[17].w[0] + 4u));
    c.f[6] = ld32((c.r[16].w[0]));
    c.f[5] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[8] = fp::ee::sub(c.fcr31, c.f[8], c.f[7]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[8], c.f[8]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[9]);
    c.f[5] = fp::ee::sqrt(c.fcr31, c.f[5]);
    c.f[5] = fp::ee::div(c.fcr31, c.f[4], c.f[5]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[8], c.f[5]);
    c.f[7] = fp::ee::mul(c.fcr31, c.f[6], c.f[5]);
    st32((c.r[5].w[0]), c.f[4]);
    c.f[4] = ld32((c.r[29].w[0] + 68u));
    c.f[5] = fp::ee::mul(c.fcr31, c.f[9], c.f[5]);
    c.f[6] = fp::ee::mul(c.fcr31, c.f[4], c.f[10]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[7], c.f[10]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[4].w[0]), c.f[5]);
    c.f[5] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[29].w[0] + 64u), c.f[7]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[6]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[10]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.budget -= 68;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCD3Cu | kUnwind; return; } goto L_003BCD3C; } }
L_003BD094:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BD0B0:
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_003BD0CC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BD0CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BD0E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[13]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BD104; } }
L_003BD0FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD140; } }
L_003BD104:
    st32((c.r[4].w[0] + 36u), c.f[12]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    st32((c.r[4].w[0] + 32u), c.f[12]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[4].w[0] + 40u), c.f[13]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43160000u);
    st32((c.r[4].w[0] + 52u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 56u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 68u), c.f[14]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD0FCu | kUnwind; return; } goto L_003BD0FC; } }
L_003BD140:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BD150:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCA00u | kUnwind; return; } goto L_003BCA00; }
L_003BD160:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[4], c.r[16].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD188u); st32((c.r[29].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_006F(c, 40u, depth + 1u); else { c.pc = 0x003BCA00u; return; } if (c.pc != 0x003BD188u) [[unlikely]] return; }
L_003BD188:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BD1A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BD25C; } }
    c.r[6].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_003BD1D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003BD260; } }
L_003BD1D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 86u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 87u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD1E8u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));  if (depth < kMaxDepth) unit_006F(c, 79u, depth + 1u); else { c.pc = 0x003BD5A0u; return; } if (c.pc != 0x003BD1E8u) [[unlikely]] return; }
L_003BD1E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD1FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BD1FCu) [[unlikely]] return; }
L_003BD1FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD204u); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_007A(c, 87u, depth + 1u); else { c.pc = 0x003E8BC0u; return; } if (c.pc != 0x003BD204u) [[unlikely]] return; }
L_003BD204:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[16].w[0] + 140u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[16].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    st32((c.r[16].w[0] + 124u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD25Cu); set32(c.r[5], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BD25Cu) [[unlikely]] return; }
L_003BD25C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003BD260:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BD270:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BD280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 84u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BD348; } }
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BD400; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 85u));
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003BD400; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 85u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 86u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 87u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD2CCu); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 85u)));  if (depth < kMaxDepth) unit_006F(c, 79u, depth + 1u); else { c.pc = 0x003BD5A0u; return; } if (c.pc != 0x003BD2CCu) [[unlikely]] return; }
L_003BD2CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD2E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BD2E0u) [[unlikely]] return; }
L_003BD2E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD2E8u); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_007A(c, 87u, depth + 1u); else { c.pc = 0x003E8BC0u; return; } if (c.pc != 0x003BD2E8u) [[unlikely]] return; }
L_003BD2E8:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[16].w[0] + 140u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[16].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    st32((c.r[16].w[0] + 124u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD340u); set32(c.r[5], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BD340u) [[unlikely]] return; }
L_003BD340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003BD404; } }
L_003BD348:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 82u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BD3F0; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 83u));
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003BD3F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 83u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 86u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 87u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD37Cu); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 83u)));  if (depth < kMaxDepth) unit_006F(c, 79u, depth + 1u); else { c.pc = 0x003BD5A0u; return; } if (c.pc != 0x003BD37Cu) [[unlikely]] return; }
L_003BD37C:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD390u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BD390u) [[unlikely]] return; }
L_003BD390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD398u); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_007A(c, 87u, depth + 1u); else { c.pc = 0x003E8BC0u; return; } if (c.pc != 0x003BD398u) [[unlikely]] return; }
L_003BD398:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[16].w[0] + 140u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[16].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    st32((c.r[16].w[0] + 124u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD3F0u); set32(c.r[5], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BD3F0u) [[unlikely]] return; }
L_003BD3F0:
    st8((c.r[16].w[0] + 84u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 85u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD340u | kUnwind; return; } goto L_003BD340; } }
L_003BD400:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003BD404:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BD410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 82u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BD4C4; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 83u));
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003BD4C4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 83u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 86u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 87u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD450u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 83u)));  if (depth < kMaxDepth) unit_006F(c, 79u, depth + 1u); else { c.pc = 0x003BD5A0u; return; } if (c.pc != 0x003BD450u) [[unlikely]] return; }
L_003BD450:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD464u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BD464u) [[unlikely]] return; }
L_003BD464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD46Cu); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_007A(c, 87u, depth + 1u); else { c.pc = 0x003E8BC0u; return; } if (c.pc != 0x003BD46Cu) [[unlikely]] return; }
L_003BD46C:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[16].w[0] + 140u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[16].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    st32((c.r[16].w[0] + 124u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD4C4u); set32(c.r[5], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BD4C4u) [[unlikely]] return; }
L_003BD4C4:
    st8((c.r[16].w[0] + 84u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 7u);
    st8((c.r[16].w[0] + 85u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BD4E0:
    set32(c.r[9], 0u + 7u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[3], c.r[3].w[0] - 27616u);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 27344u);
    set32(c.r[5], 0u + 5u);
    st32((c.r[4].w[0] + 92u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[3].w[0] - 26848u);
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[4].w[0] + 88u)));
    c.f[0] = ld32((c.r[4].w[0] + 128u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[8].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 132u));
    st32((c.r[8].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 136u));
    st32((c.r[8].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 140u));
    st32((c.r[8].w[0] + 28u), c.f[0]);
    set32(c.r[8], ld32((c.r[4].w[0] + 92u)));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    st32((c.r[8].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    st32((c.r[8].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 120u));
    st32((c.r[8].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 124u));
    st32((c.r[8].w[0] + 28u), c.f[0]);
    st8((c.r[3].w[0] - 3552u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 32u), c.r[7].w[0]);
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 81u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 82u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 83u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 86u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 87u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 84u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 85u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 176u), static_cast<std::uint8_t>(0u));
    c.budget -= 46;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 177u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003BD5A0:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003BD6E0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 17056u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003BC000u < 16384u) { entry = entries_006F[(t - 0x003BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003BD5CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[3].w[0] - 27616u);
    set32(c.r[6], c.r[6].w[0] - 27344u);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[4].w[0] + 92u), c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] - 26848u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003BD6E0; } }
L_003BD5F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[3].w[0] - 26624u);
    set32(c.r[6], c.r[6].w[0] - 26528u);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[4].w[0] + 92u), c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] - 26480u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003BD6E0; } }
L_003BD61C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[3].w[0] - 26432u);
    set32(c.r[6], c.r[6].w[0] - 26288u);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[4].w[0] + 92u), c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] - 26224u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003BD6E0; } }
L_003BD644:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[3].w[0] - 26176u);
    set32(c.r[6], c.r[6].w[0] - 26064u);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[4].w[0] + 92u), c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] - 25984u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003BD6E0; } }
L_003BD66C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[3].w[0] - 25936u);
    set32(c.r[6], c.r[6].w[0] - 25728u);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[4].w[0] + 92u), c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] - 25552u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003BD6E0; } }
L_003BD694:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[3].w[0] - 25504u);
    set32(c.r[6], c.r[6].w[0] - 25392u);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[4].w[0] + 92u), c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] - 25344u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003BD6E0; } }
L_003BD6BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[3].w[0] - 25296u);
    set32(c.r[6], c.r[6].w[0] - 25184u);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[4].w[0] + 92u), c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] - 25120u);
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 9;
L_003BD6E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_003BD6F0:
    st8((c.r[4].w[0] + 84u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 85u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003BD700:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], 0u + 8u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[2].w[0] - 3552u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 86u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    st8((c.r[4].w[0] + 87u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[2].w[0] - 29024u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003BD79C; } }
L_003BD73C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD748u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_006F(c, 79u, depth + 1u); else { c.pc = 0x003BD5A0u; return; } if (c.pc != 0x003BD748u) [[unlikely]] return; }
L_003BD748:
    c.f[0] = ld32((c.r[16].w[0] + 320u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[12] = 0u;
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 324u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 328u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 332u));
    st32((c.r[29].w[0] + 92u), c.f[0]);
    st32((c.r[3].w[0] - 26080u), c.r[16].w[0]);
    st32((c.r[2].w[0] - 26016u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD794u); set32(c.r[6], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BD794u) [[unlikely]] return; }
L_003BD794:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003BD7A8; } }
L_003BD79C:
    st8((c.r[17].w[0] + 84u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 85u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD73Cu | kUnwind; return; } goto L_003BD73C; } }
L_003BD7A8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003BD7C0:
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 16u), c.f[3]);
    st32((c.r[4].w[0] + 20u), c.f[2]);
    st32((c.r[4].w[0] + 24u), c.f[1]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.f[0]);  c.pc = t; return; }
L_003BD7F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BD800:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].d[0] = c.r[8].d[0] & 255ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.f[3] = ld32((c.r[6].w[0]));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 120u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[7], c.r[29].w[0] + 116u);
    set32(c.r[4], c.r[29].w[0] + 124u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 112u), c.f[3]);
    st32((c.r[7].w[0]), c.f[2]);
    st32((c.r[5].w[0]), c.f[1]);
    c.budget -= 25;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[4].w[0]), c.f[0]);  if (t) { goto L_003BD898; } }
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003BD898; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[7].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 9;
L_003BD898:
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    st8((c.r[18].w[0] + 86u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 87u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[2], ld32((c.r[2].w[0] - 29024u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BD9A0; } }
L_003BD8B4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD8C0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 79u, depth + 1u); else { c.pc = 0x003BD5A0u; return; } if (c.pc != 0x003BD8C0u) [[unlikely]] return; }
L_003BD8C0:
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BD8E0; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD8E0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BD8E0u) [[unlikely]] return; }
L_003BD8E0:
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD8F0u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x003BD8F0u) [[unlikely]] return; }
L_003BD8F0:
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    set32(c.r[16], c.r[29].w[0] + 100u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    c.f[21] = ld32((c.r[17].w[0] + 72u));
    c.f[20] = ld32((c.r[17].w[0] + 112u));
    st32((c.r[16].w[0]), c.f[0]);
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD920u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BD920u) [[unlikely]] return; }
L_003BD920:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BD948; } }
    c.f[1] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BD948; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40100000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003BD948:
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD964u); set32(c.r[6], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BD964u) [[unlikely]] return; }
L_003BD964:
    set32(c.r[4], ld32((c.r[18].w[0] + 92u)));
    c.f[12] = c.f[21];
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD984u); set32(c.r[6], c.r[2].w[0] + 16u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BD984u) [[unlikely]] return; }
L_003BD984:
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD998u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BD998u) [[unlikely]] return; }
L_003BD998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_003BDA18; } }
L_003BD9A0:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003BD9C4; } }
    set32(c.r[2], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & 35ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BD9C4; } }
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_003BD9C4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003BD9FC; } }
L_003BD9CC:
    c.r[2].d[0] = c.r[3].d[0] ^ 4ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BD9E4; } }
    c.r[2].d[0] = c.r[3].d[0] ^ 8ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_003BD9E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD8B4u | kUnwind; return; } goto L_003BD8B4; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 85u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD8B4u | kUnwind; return; } goto L_003BD8B4; } }
L_003BD9FC:
    st8((c.r[18].w[0] + 84u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 7u);
    st8((c.r[18].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 82u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 83u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD9CCu | kUnwind; return; } goto L_003BD9CC; } }
L_003BDA18:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003BDA40:
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), 0u);  c.pc = t; return; }
L_003BDA50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BDA60:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.f[3] = ld32((c.r[5].w[0] + 12u));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[2] = ld32((c.r[5].w[0] + 16u));
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[1] = ld32((c.r[5].w[0] + 20u));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[18].d[0] = ld8((c.r[5].w[0] + 68u));
    c.f[20] = ld32((c.r[5].w[0] + 80u));
    c.r[17].d[0] = ld8((c.r[5].w[0] + 84u));
    c.r[16].d[0] = ld8((c.r[5].w[0] + 76u));
    st32((c.r[29].w[0] + 144u), c.f[3]);
    st32((c.r[29].w[0] + 148u), c.f[2]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 25;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 152u), c.f[1]);  if (t) { goto L_003BDAD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 20412u));
    c.f[20] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 3;
L_003BDAD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], 0u + 7u);
    st8((c.r[2].w[0] - 3552u), static_cast<std::uint8_t>(0u));
    st32((c.r[21].w[0] + 144u), 0u);
    st32((c.r[21].w[0] + 148u), 0u);
    st32((c.r[21].w[0] + 152u), 0u);
    st32((c.r[21].w[0] + 160u), 0u);
    st32((c.r[21].w[0] + 164u), 0u);
    st32((c.r[21].w[0] + 168u), 0u);
    st8((c.r[21].w[0] + 81u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[21].w[0]));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003BDC38; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_003BDB0C:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDB24u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 95u, depth + 1u); else { c.pc = 0x003BD800u; return; } if (c.pc != 0x003BDB24u) [[unlikely]] return; }
L_003BDB24:
    set32(c.r[4], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDB38u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BDB38u) [[unlikely]] return; }
L_003BDB38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDB48u); set32(c.r[4], c.r[4].w[0] - 1808u);  if (depth < kMaxDepth) unit_0012(c, 44u, depth + 1u); else { c.pc = 0x00248E50u; return; } if (c.pc != 0x003BDB48u) [[unlikely]] return; }
L_003BDB48:
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_003BDBDC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F350000u);
    set32(c.r[3], c.r[3].w[0] + 3184u);
    c.r[2].d[0] = c.r[2].d[0] | 1267ull;
    c.f[3] = ld32((c.r[3].w[0] + 32u));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[3].w[0] + 56u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    st32((c.r[3].w[0] + 16u), c.f[3]);
    st32((c.r[3].w[0] + 20u), c.f[2]);
    st32((c.r[3].w[0] + 24u), c.f[1]);
    st32((c.r[3].w[0] + 28u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDB98u); set32(c.r[4], ld32((c.r[21].w[0] + 88u)));  if (depth < kMaxDepth) unit_007A(c, 87u, depth + 1u); else { c.pc = 0x003E8BC0u; return; } if (c.pc != 0x003BDB98u) [[unlikely]] return; }
L_003BDB98:
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[10].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[4].w[0] - 3552u);
    c.f[13] = c.r[3].w[0];
    set32(c.r[5], c.r[5].w[0] + 2432u);
    c.f[12] = c.f[20];
    set32(c.r[6], c.r[29].w[0] + 128u);
    set32(c.r[7], c.r[29].w[0] + 144u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDBD4u); c.r[8].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 273u, depth + 1u); else { c.pc = 0x003EAB50u; return; } if (c.pc != 0x003BDBD4u) [[unlikely]] return; }
L_003BDBD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BDC28; } }
L_003BDBDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDBE4u); set32(c.r[4], ld32((c.r[21].w[0] + 88u)));  if (depth < kMaxDepth) unit_007A(c, 87u, depth + 1u); else { c.pc = 0x003E8BC0u; return; } if (c.pc != 0x003BDBE4u) [[unlikely]] return; }
L_003BDBE4:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[21].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[21].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[21].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[21].w[0] + 140u), c.f[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 92u)));
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[21].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[21].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    st32((c.r[21].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    st32((c.r[21].w[0] + 124u), c.f[0]);
    c.budget -= 17;
L_003BDC28:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_003BDC64; } }
L_003BDC30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_003BDC98; } }
L_003BDC38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDC40u); set32(c.r[4], ld32((c.r[21].w[0] + 88u)));  if (depth < kMaxDepth) unit_007A(c, 87u, depth + 1u); else { c.pc = 0x003E8BC0u; return; } if (c.pc != 0x003BDC40u) [[unlikely]] return; }
L_003BDC40:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 140u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BDB0Cu | kUnwind; return; } goto L_003BDB0C; } }
L_003BDC64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDC6Cu); set32(c.r[4], ld32((c.r[21].w[0] + 88u)));  if (depth < kMaxDepth) unit_007A(c, 87u, depth + 1u); else { c.pc = 0x003E8BC0u; return; } if (c.pc != 0x003BDC6Cu) [[unlikely]] return; }
L_003BDC6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDC7Cu); set32(c.r[4], c.r[4].w[0] - 1808u);  if (depth < kMaxDepth) unit_0012(c, 51u, depth + 1u); else { c.pc = 0x00248EF0u; return; } if (c.pc != 0x003BDC7Cu) [[unlikely]] return; }
L_003BDC7C:
    set32(c.r[2], ld32((c.r[21].w[0] + 92u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 1808u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDC90u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0012(c, 52u, depth + 1u); else { c.pc = 0x00248F30u; return; } if (c.pc != 0x003BDC90u) [[unlikely]] return; }
L_003BDC90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BDC30u | kUnwind; return; } goto L_003BDC30; } }
L_003BDC98:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003BDCC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 48u));  c.pc = t; return; }
L_003BDCD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] - 27532u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] - 27312u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] - 26808u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] - 26540u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] - 26496u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] - 26440u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] - 26348u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] - 26256u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] - 26184u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] - 26092u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] - 26032u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] - 25944u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] - 25852u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] - 25696u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] - 25512u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] - 25420u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] - 25360u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] - 25304u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] - 25212u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] - 25152u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 43;
    { st32((c.r[2].w[0] - 25080u), c.r[4].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD4E0u | kUnwind; return; } goto L_003BD4E0; }
L_003BDD80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 96u);  c.pc = t; return; }
L_003BDD90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 112u);  c.pc = t; return; }
L_003BDDA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 240u);  c.pc = t; return; }
L_003BDDB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 256u));  c.pc = t; return; }
L_003BDDC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 193u));  c.pc = t; return; }
L_003BDDD0:
    c.f[2] = ld32((c.r[4].w[0] + 96u));
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BDE54; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BDE54; } }
    c.f[2] = ld32((c.r[4].w[0] + 100u));
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BDE5C; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BDE5C; } }
    c.f[2] = ld32((c.r[4].w[0] + 104u));
    c.f[1] = ld32((c.r[4].w[0] + 120u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BDE64; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BDE64; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003BDE4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BDE6C; } }
L_003BDE54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BDE4Cu | kUnwind; return; } goto L_003BDE4C; } }
L_003BDE5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BDE4Cu | kUnwind; return; } goto L_003BDE4C; } }
L_003BDE64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BDE4Cu | kUnwind; return; } goto L_003BDE4C; } }
L_003BDE6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BDE80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 48u), c.f[12]);  c.pc = t; return; }
L_003BDE90:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[4] = ld32((c.r[5].w[0]));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[5] = ld32((c.r[2].w[0] - 20412u));
    c.f[21] = c.f[12];
    c.f[3] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.f[20] = ld32((c.r[29].w[0] + 76u));
    c.f[5] = fp::ee::div(c.fcr31, c.f[21], c.f[5]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 120u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 26;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);  if (t) { goto L_003BDEFC; } }
    c.f[4] = c.f[0];
    c.budget -= 1;
L_003BDEFC:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 29752u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 128u);
    set32(c.r[7], c.r[29].w[0] + 96u);
    set32(c.r[8], 0u + 1u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[4], c.f[5]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[5]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[4], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[9], c.r[4].w[0] >> 4);
    set32(c.r[4], c.r[9].w[0] << 4);
    set32(c.r[9], c.r[4].w[0] - c.r[9].w[0]);
    set32(c.r[4], c.r[9].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - c.r[9].w[0]);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.f[12] = ld32((c.r[2].w[0] + 36u));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[9], c.f[0]);
    set32(c.r[3], c.r[9].w[0] >> 4);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF94u); set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 170u, depth + 1u); else { c.pc = 0x00203F80u; return; } if (c.pc != 0x003BDF94u) [[unlikely]] return; }
L_003BDF94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BDFC0; } }
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[17].w[0] + 240u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[17].w[0] + 244u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[17].w[0] + 248u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 252u), c.f[0]);  if (t) { goto L_003BDFF4; } }
L_003BDFC0:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[5] = ld32((c.r[16].w[0] + 4u));
    c.f[4] = ld32((c.r[29].w[0] + 132u));
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = ld32((c.r[29].w[0] + 136u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[17].w[0] + 240u), c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[17].w[0] + 244u), c.f[4]);
    st32((c.r[17].w[0] + 248u), c.f[2]);
    st32((c.r[17].w[0] + 252u), c.f[20]);
    c.budget -= 13;
L_003BDFF4:
    c.f[0] = ld32((c.r[17].w[0] + 240u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 63898ull;
    c.f[1] = c.r[2].w[0];
    c.f[2] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BE120; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BE028; } }
    st32((c.r[17].w[0] + 240u), c.f[1]);
    c.budget -= 1;
L_003BE028:
    c.f[1] = ld32((c.r[17].w[0] + 248u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BE128; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 63898ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BE058; } }
    st32((c.r[17].w[0] + 248u), c.f[0]);
    c.budget -= 1;
L_003BE058:
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    set32(c.r[5], c.r[17].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE068u); set32(c.r[6], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_0029(c, 178u, depth + 1u); else { c.pc = 0x002A63A0u; return; } if (c.pc != 0x003BE068u) [[unlikely]] return; }
L_003BE068:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.f[1] = ld32((c.r[29].w[0] + 156u));
    c.f[0] = ld32((c.r[17].w[0] + 244u));
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    c.f[20] = ld32((c.r[2].w[0] + 68u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BE144; } }
L_003BE08C:
    c.f[0] = c.f[20] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    st32((c.r[29].w[0] + 88u), 0u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 240u));
    set32(c.r[5], c.r[17].w[0] + 240u);
    c.f[0] = ld32((c.r[17].w[0] + 248u));
    set32(c.r[2], ld32((c.r[28].w[0] - 29752u)));
    c.f[12] = 0u;
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[7], c.r[29].w[0] + 96u);
    set32(c.r[8], 0u + 3u);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[3], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.r[3].w[0] >> 4);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[9], c.f[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[9].w[0] >> 4);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE110u); set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 166u, depth + 1u); else { c.pc = 0x00203940u; return; } if (c.pc != 0x003BE110u) [[unlikely]] return; }
L_003BE110:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BE14C; } }
L_003BE118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 256u), c.f[21]);  if (t) { goto L_003BE15C; } }
L_003BE120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 240u), c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE028u | kUnwind; return; } goto L_003BE028; } }
L_003BE128:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 63898ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 248u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE058u | kUnwind; return; } goto L_003BE058; } }
L_003BE144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 244u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE08Cu | kUnwind; return; } goto L_003BE08C; } }
L_003BE14C:
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 244u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE118u | kUnwind; return; } goto L_003BE118; } }
L_003BE15C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003BE180:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 96u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 100u));
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    st32((c.r[4].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE1B8u); st32((c.r[4].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_007A(c, 88u, depth + 1u); else { c.pc = 0x003E8BD0u; return; } if (c.pc != 0x003BE1B8u) [[unlikely]] return; }
L_003BE1B8:
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[5], c.r[29].w[0] + 52u);
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[3], c.r[29].w[0] + 60u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[16].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22903u));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BE2EC; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29239u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BE214; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29240u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003BE214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BE2EC; } }
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[3] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 36u), c.f[2]);
    st32((c.r[29].w[0] + 32u), c.f[3]);
    st32((c.r[29].w[0] + 40u), c.f[1]);
    st32((c.r[29].w[0] + 44u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    c.budget -= 9;
L_003BE240:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[3] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 32u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[4] = ld32((c.r[29].w[0] + 32u));  if (t) { goto L_003BE31C; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BE31C; } }
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BE324; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BE324; } }
    c.f[2] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BE32C; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BE32C; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003BE2C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BE334; } }
L_003BE2CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E330000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE2E4u); set32(c.r[5], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_006F(c, 130u, depth + 1u); else { c.pc = 0x003BDE90u; return; } if (c.pc != 0x003BE2E4u) [[unlikely]] return; }
L_003BE2E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003BE354; } }
L_003BE2EC:
    set32(c.r[4], c.r[16].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE2F8u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0075(c, 14u, depth + 1u); else { c.pc = 0x003D4220u; return; } if (c.pc != 0x003BE2F8u) [[unlikely]] return; }
L_003BE2F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[16].w[0] + 192u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE314u); set32(c.r[7], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0075(c, 86u, depth + 1u); else { c.pc = 0x003D5960u; return; } if (c.pc != 0x003BE314u) [[unlikely]] return; }
L_003BE314:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[16].w[0] + 16u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE240u | kUnwind; return; } goto L_003BE240; } }
L_003BE31C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE2C4u | kUnwind; return; } goto L_003BE2C4; } }
L_003BE324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE2C4u | kUnwind; return; } goto L_003BE2C4; } }
L_003BE32C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE2C4u | kUnwind; return; } goto L_003BE2C4; } }
L_003BE334:
    st32((c.r[16].w[0] + 16u), c.f[4]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE2CCu | kUnwind; return; } goto L_003BE2CC; } }
L_003BE354:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BE360:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40100000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 64u), 0u);
    c.f[20] = c.f[12];
    st32((c.r[4].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 72u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE394u); st32((c.r[4].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_007A(c, 92u, depth + 1u); else { c.pc = 0x003E8D90u; return; } if (c.pc != 0x003BE394u) [[unlikely]] return; }
L_003BE394:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE3A0u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_007A(c, 88u, depth + 1u); else { c.pc = 0x003E8BD0u; return; } if (c.pc != 0x003BE3A0u) [[unlikely]] return; }
L_003BE3A0:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[16].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    st32((c.r[16].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    st32((c.r[16].w[0] + 124u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    st32((c.r[16].w[0] + 240u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    st32((c.r[16].w[0] + 244u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 120u));
    st32((c.r[16].w[0] + 248u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 124u));
    st32((c.r[16].w[0] + 252u), c.f[0]);
    st32((c.r[16].w[0] + 256u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 30;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE418u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BE418u) [[unlikely]] return; }
L_003BE418:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 192u);
    st8((c.r[16].w[0] + 192u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 2u);
    st8((c.r[16].w[0] + 193u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[16].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[16].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[16].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE450u); st32((c.r[16].w[0] + 220u), c.f[0]);  if (depth < kMaxDepth) unit_0075(c, 88u, depth + 1u); else { c.pc = 0x003D5A30u; return; } if (c.pc != 0x003BE450u) [[unlikely]] return; }
L_003BE450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE458u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 85u, depth + 1u); else { c.pc = 0x003E8B20u; return; } if (c.pc != 0x003BE458u) [[unlikely]] return; }
L_003BE458:
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[16].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE468u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0075(c, 21u, depth + 1u); else { c.pc = 0x003D4480u; return; } if (c.pc != 0x003BE468u) [[unlikely]] return; }
L_003BE468:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BE480:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 64u);  c.pc = t; return; }
L_003BE490:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 80u));  c.pc = t; return; }
L_003BE4A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 84u));  c.pc = t; return; }
L_003BE4B0:
    c.f[1] = ld32((c.r[4].w[0] + 84u));
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BE4E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 96u);  c.pc = t; return; }
L_003BE4F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 112u));  c.pc = t; return; }
L_003BE500:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 116u));  c.pc = t; return; }
L_003BE510:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 8u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BE528; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 9u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003BE528:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BE538; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 10u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003BE538:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BE548; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 11u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003BE548:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BE550:
    set32(c.r[2], ld32((c.r[4].w[0] + 128u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_003BE560:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 177u));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003BE570:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 177u));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003BE580:
    set32(c.r[2], ld32((c.r[4].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003BE590:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 160u);  c.pc = t; return; }
L_003BE5A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 136u));  c.pc = t; return; }
L_003BE5B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 185u));  c.pc = t; return; }
L_003BE5C0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 177u));
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003BE5DC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003BE5DC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BE5DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BE5F0:
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.f[2] = ld32((c.r[4].w[0] + 80u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BE60C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BE60C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BE628; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BE628; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BE628:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BE67C; } }
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.f[2] = ld32((c.r[4].w[0] + 84u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BE64C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BE64C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BE668; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BE668; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BE668:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BE67C; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003BE674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BE684; } }
L_003BE67C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE674u | kUnwind; return; } goto L_003BE674; } }
L_003BE684:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BE690:
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 96u), c.f[3]);
    st32((c.r[4].w[0] + 100u), c.f[2]);
    st32((c.r[4].w[0] + 104u), c.f[1]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 108u), c.f[0]);  c.pc = t; return; }
L_003BE6C0:
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 64u), c.f[3]);
    st32((c.r[4].w[0] + 68u), c.f[2]);
    st32((c.r[4].w[0] + 72u), c.f[1]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 76u), c.f[0]);  c.pc = t; return; }
L_003BE6F0:
    c.f[0] = ld32((c.r[4].w[0] + 244u));
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 252u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 116u), c.f[0]);  c.pc = t; return; }
L_003BE710:
    c.f[0] = ld32((c.r[4].w[0] + 240u));
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 248u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 116u), c.f[0]);  c.pc = t; return; }
L_003BE730:
    st32((c.r[4].w[0] + 128u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    st32((c.r[4].w[0] + 132u), c.r[5].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 136u), 0u);
    st32((c.r[4].w[0] + 140u), 0u);
    st8((c.r[4].w[0] + 149u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 185u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003BE760:
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[10].w[0] + 128u);
    c.budget -= 10;
    { set32(c.r[5], c.r[10].w[0] + 16u);  [[clang::musttail]] return unit_0078(c, 215u, depth); }
L_003BE790:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 128u);  [[clang::musttail]] return unit_0078(c, 215u, depth); }
L_003BE7A0:
    c.f[3] = ld32((c.r[5].w[0]));
    set32(c.r[2], 0u + 1u);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    st8((c.r[4].w[0] + 192u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    st8((c.r[4].w[0] + 193u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 208u), c.f[3]);
    st32((c.r[4].w[0] + 212u), c.f[2]);
    st32((c.r[4].w[0] + 216u), c.f[1]);
    st32((c.r[4].w[0] + 220u), c.f[0]);
    set32(c.r[5], 0u + 2u);
    c.budget -= 14;
    { set32(c.r[4], c.r[4].w[0] + 192u);  [[clang::musttail]] return unit_0075(c, 88u, depth); }
L_003BE7E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[8] = ld32((c.r[4].w[0] + 112u));
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[6] = ld32((c.r[5].w[0] + 4u));
    c.f[5] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[7] = ld32((c.r[6].w[0] + 4u));
    c.f[4] = ld32((c.r[6].w[0] + 8u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[8]);
    c.f[6] = fp::ee::mul(c.fcr31, c.f[6], c.f[8]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[8]);
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 12u));
    c.f[6] = fp::ee::add(c.fcr31, c.f[6], c.f[7]);
    st32((c.r[7].w[0]), c.f[2]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[7].w[0] + 4u), c.f[6]);
    st32((c.r[7].w[0] + 8u), c.f[4]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[7]);
    st32((c.r[7].w[0] + 12u), c.f[1]);
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BE840:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[7] = ld32((c.r[4].w[0] + 112u));
    c.f[2] = ld32((c.r[4].w[0] + 96u));
    c.f[5] = ld32((c.r[4].w[0] + 100u));
    c.f[4] = ld32((c.r[4].w[0] + 104u));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[6] = ld32((c.r[5].w[0] + 4u));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[7]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[7]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[7]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[6]);
    st32((c.r[6].w[0]), c.f[1]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[6].w[0] + 4u), c.f[5]);
    st32((c.r[6].w[0] + 8u), c.f[3]);
    st32((c.r[6].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[6]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BE8A0:
    c.f[3] = ld32((c.r[5].w[0]));
    set32(c.r[2], 0u + 1u);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    st8((c.r[4].w[0] + 192u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    st8((c.r[4].w[0] + 193u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 208u), c.f[3]);
    st32((c.r[4].w[0] + 212u), c.f[2]);
    st32((c.r[4].w[0] + 216u), c.f[1]);
    st32((c.r[4].w[0] + 220u), c.f[0]);
    set32(c.r[5], 0u + 2u);
    c.budget -= 14;
    { set32(c.r[4], c.r[4].w[0] + 192u);  [[clang::musttail]] return unit_0075(c, 88u, depth); }
L_003BE8E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 128u);  [[clang::musttail]] return unit_0078(c, 193u, depth); }
L_003BE8F0:
    c.budget -= 2;
    { set32(c.r[6], 0u + 1u);  [[clang::musttail]] return unit_0075(c, 166u, depth); }
L_003BE900:
    st8((c.r[4].w[0] + 49u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003BE910:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003BE920:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BE930:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BE940:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BE950:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BE960:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BE970:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BE980:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 22906u));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BEB24; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE9CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BE9CCu) [[unlikely]] return; }
L_003BE9CC:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE9E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BE9E8u) [[unlikely]] return; }
L_003BE9E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 3344u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEA04u); set32(c.r[5], c.r[5].w[0] + 17168u);  if (depth < kMaxDepth) unit_0054(c, 121u, depth + 1u); else { c.pc = 0x00351EE0u; return; } if (c.pc != 0x003BEA04u) [[unlikely]] return; }
L_003BEA04:
    c.f[12] = ld32((c.r[16].w[0] + 84u));
    set32(c.r[17], c.r[16].w[0] + 64u);
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.facc = fp::ee::mul(c.fcr31, c.f[12], c.f[12]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[20] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEA2Cu);  if (depth < kMaxDepth) unit_0003(c, 42u, depth + 1u); else { c.pc = 0x0020D578u; return; } if (c.pc != 0x003BEA2Cu) [[unlikely]] return; }
L_003BEA2C:
    c.f[12] = ld32((c.r[17].w[0] + 16u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEA38u); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 42u, depth + 1u); else { c.pc = 0x0020D578u; return; } if (c.pc != 0x003BEA38u) [[unlikely]] return; }
L_003BEA38:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEA44u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 42u, depth + 1u); else { c.pc = 0x0020D578u; return; } if (c.pc != 0x003BEA44u) [[unlikely]] return; }
L_003BEA44:
    c.f[12] = ld32((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEA50u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 42u, depth + 1u); else { c.pc = 0x0020D578u; return; } if (c.pc != 0x003BEA50u) [[unlikely]] return; }
L_003BEA50:
    c.f[12] = ld32((c.r[17].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEA5Cu); c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 42u, depth + 1u); else { c.pc = 0x0020D578u; return; } if (c.pc != 0x003BEA5Cu) [[unlikely]] return; }
L_003BEA5C:
    c.f[12] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEA68u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 42u, depth + 1u); else { c.pc = 0x0020D578u; return; } if (c.pc != 0x003BEA68u) [[unlikely]] return; }
L_003BEA68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 3152u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEA94u); set32(c.r[5], c.r[5].w[0] + 17186u);  if (depth < kMaxDepth) unit_0054(c, 121u, depth + 1u); else { c.pc = 0x00351EE0u; return; } if (c.pc != 0x003BEA94u) [[unlikely]] return; }
L_003BEA94:
    c.f[12] = ld32((c.r[16].w[0] + 116u));
    set32(c.r[17], c.r[16].w[0] + 96u);
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.facc = fp::ee::mul(c.fcr31, c.f[12], c.f[12]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[20] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEABCu);  if (depth < kMaxDepth) unit_0003(c, 42u, depth + 1u); else { c.pc = 0x0020D578u; return; } if (c.pc != 0x003BEABCu) [[unlikely]] return; }
L_003BEABC:
    c.f[12] = ld32((c.r[17].w[0] + 16u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEAC8u); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 42u, depth + 1u); else { c.pc = 0x0020D578u; return; } if (c.pc != 0x003BEAC8u) [[unlikely]] return; }
L_003BEAC8:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEAD4u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 42u, depth + 1u); else { c.pc = 0x0020D578u; return; } if (c.pc != 0x003BEAD4u) [[unlikely]] return; }
L_003BEAD4:
    c.f[12] = ld32((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEAE0u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 42u, depth + 1u); else { c.pc = 0x0020D578u; return; } if (c.pc != 0x003BEAE0u) [[unlikely]] return; }
L_003BEAE0:
    c.f[12] = ld32((c.r[17].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEAECu); c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 42u, depth + 1u); else { c.pc = 0x0020D578u; return; } if (c.pc != 0x003BEAECu) [[unlikely]] return; }
L_003BEAEC:
    c.f[12] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEAF8u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 42u, depth + 1u); else { c.pc = 0x0020D578u; return; } if (c.pc != 0x003BEAF8u) [[unlikely]] return; }
L_003BEAF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 2960u);
    set32(c.r[5], c.r[5].w[0] + 17235u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEB24u); c.r[11].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 121u, depth + 1u); else { c.pc = 0x00351EE0u; return; } if (c.pc != 0x003BEB24u) [[unlikely]] return; }
L_003BEB24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 22897u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BEEE4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 29100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BED90; } }
L_003BEB40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[3], c.r[3].w[0] + 3324u);
    c.f[3] = c.r[4].w[0];
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = ld8((c.r[28].w[0] - 32268u));  if (t) { goto L_003BEE94; } }
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_003BEE94; } }
    c.r[4].d[0] = ld16((c.r[5].w[0] + 32u));
    c.budget -= 1;
L_003BEB74:
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 52;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BEB98; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 4;
L_003BEB98:
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003BEE9C; } }
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_003BEE9C; } }
    c.r[4].d[0] = ld16((c.r[5].w[0] + 32u));
    c.budget -= 1;
L_003BEBB8:
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 53;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BEBE0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 5;
L_003BEBE0:
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003BEEA4; } }
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_003BEEA4; } }
    c.r[4].d[0] = ld16((c.r[5].w[0] + 42u));
    c.budget -= 1;
L_003BEC00:
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 59;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003BEEAC; } }
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003BEEBC; } }
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_003BEEBC; } }
    c.r[4].d[0] = ld16((c.r[5].w[0] + 42u));
    c.budget -= 1;
L_003BEC34:
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 57;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003BEEC4; } }
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003BEED4; } }
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_003BEED4; } }
    c.r[4].d[0] = ld16((c.r[5].w[0] + 32u));
    c.budget -= 1;
L_003BEC68:
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 59;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BECA4; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003BECFC; } }
    c.f[1] = ld32((c.r[28].w[0] - 31744u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = 0u;
    c.f[2] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 31744u), c.f[0]);  if (t) { goto L_003BECFC; } }
L_003BECA4:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BEEDC; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003BEEDC; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 32u));
    c.budget -= 1;
L_003BECC4:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BECFC; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003BECFC; } }
    c.f[1] = ld32((c.r[28].w[0] - 31744u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = 0u;
    c.f[2] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[28].w[0] - 31744u), c.f[0]);
    c.budget -= 7;
L_003BECFC:
    c.f[0] = ld32((c.r[28].w[0] - 31744u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[12] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BED20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 31744u), c.f[12]);  if (t) { goto L_003BED48; } }
L_003BED20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BED40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BED44; } }
L_003BED40:
    c.f[12] = c.f[0];
    c.budget -= 1;
L_003BED44:
    st32((c.r[28].w[0] - 31744u), c.f[12]);
    c.budget -= 1;
L_003BED48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BED50u);  if (depth < kMaxDepth) unit_0003(c, 42u, depth + 1u); else { c.pc = 0x0020D578u; return; } if (c.pc != 0x003BED50u) [[unlikely]] return; }
L_003BED50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 2768u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BED68u); set32(c.r[5], c.r[5].w[0] + 17284u);  if (depth < kMaxDepth) unit_0054(c, 121u, depth + 1u); else { c.pc = 0x00351EE0u; return; } if (c.pc != 0x003BED68u) [[unlikely]] return; }
L_003BED68:
    c.f[13] = ld32((c.r[28].w[0] - 31744u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C10000u);
    c.r[3].d[0] = c.r[2].d[0] | 39322ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BED88u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_0075(c, 93u, depth + 1u); else { c.pc = 0x003D5BC0u; return; } if (c.pc != 0x003BED88u) [[unlikely]] return; }
L_003BED88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_003BEEE8; } }
L_003BED90:
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] - 2636u), c.r[3].w[0]);
    c.r[14].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u + 127u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[2].w[0] - 2628u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] - 2627u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] - 2626u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x47800000u);
    st8((c.r[2].w[0] - 2625u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[13], c.r[14].w[0] << 2);
    st32((c.r[2].w[0] - 2616u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0] - 2632u), c.r[5].w[0]);
    set32(c.r[2], 0u + 30u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[15].d[0] = ld8((c.r[4].w[0] - 2600u));
    set32(c.r[12], 0u - 5u);
    c.r[10].d[0] = ld16((c.r[28].w[0] - 32632u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 2u);
    c.r[4].d[0] = c.r[15].d[0] & c.r[4].d[0];
    st32((c.r[7].w[0] - 2608u), c.r[10].w[0]);
    c.r[14].d[0] = c.r[4].d[0] | c.r[14].d[0];
    set32(c.r[10], 0u - 3u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[6].w[0] - 2600u), static_cast<std::uint8_t>(c.r[14].w[0]));
    st32((c.r[4].w[0] - 2624u), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43D70000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] - 2620u), c.r[6].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] - 2604u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 2768u);
    c.r[2].d[0] = ld8((c.r[5].w[0] - 2600u));
    set32(c.r[6], c.r[6].w[0] - 2784u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[12].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[13].d[0];
    set32(c.r[5], c.r[5].w[0] - 208u);
    st8((c.r[9].w[0] - 2600u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[8].w[0] - 2600u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[11].d[0];
    c.budget -= 62;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEE88u); st8((c.r[7].w[0] - 2600u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x003BEE88u) [[unlikely]] return; }
L_003BEE88:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29100u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BEB40u | kUnwind; return; } goto L_003BEB40; } }
L_003BEE94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BEB74u | kUnwind; return; } goto L_003BEB74; } }
L_003BEE9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BEBB8u | kUnwind; return; } goto L_003BEBB8; } }
L_003BEEA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BEC00u | kUnwind; return; } goto L_003BEC00; } }
L_003BEEAC:
    c.f[0] = ld32((c.r[28].w[0] - 31744u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 31744u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BECFCu | kUnwind; return; } goto L_003BECFC; } }
L_003BEEBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BEC34u | kUnwind; return; } goto L_003BEC34; } }
L_003BEEC4:
    c.f[0] = ld32((c.r[28].w[0] - 31744u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 31744u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BECFCu | kUnwind; return; } goto L_003BECFC; } }
L_003BEED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BEC68u | kUnwind; return; } goto L_003BEC68; } }
L_003BEEDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BECC4u | kUnwind; return; } goto L_003BECC4; } }
L_003BEEE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_003BEEE8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003BEF10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003BEF20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 3324u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[23] = ld32((c.r[4].w[0] + 280u));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.f[22] = ld32((c.r[4].w[0] + 248u));
    c.f[24] = 0u;
    c.f[20] = ld32((c.r[29].w[0] + 76u));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 19;
    { const bool t = c.r[4].d[0] == 0ull; c.f[21] = c.f[24];  if (t) { goto L_003BF234; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003BF234; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 32u));
    c.budget -= 1;
L_003BEF7C:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 54;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BF0B0; } }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[4].d[0] = c.r[4].d[0] | 55050ull;
    c.f[1] = c.r[4].w[0];
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BF23C; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003BF23C; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 32u));
    c.budget -= 1;
L_003BEFBC:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 52;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BEFE0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 4;
L_003BEFE0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BF244; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003BF244; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 32u));
    c.budget -= 1;
L_003BF000:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BF01C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[23] = fp::ee::add(c.fcr31, c.f[23], c.f[1]);  if (t) { goto L_003BF054; } }
L_003BF01C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BF24C; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003BF24C; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 32u));
    c.budget -= 1;
L_003BF03C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BF054; } }
    c.f[23] = fp::ee::sub(c.fcr31, c.f[23], c.f[1]);
    c.budget -= 1;
L_003BF054:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BF078; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 280u));  if (t) { goto L_003BF0A4; } }
L_003BF078:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC80000u);
    c.r[2].d[0] = c.r[2].d[0] | 61206ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[23]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BF09C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BF0A0; } }
L_003BF09C:
    c.f[1] = c.f[23];
    c.budget -= 1;
L_003BF0A0:
    c.f[0] = ld32((c.r[16].w[0] + 280u));
    c.budget -= 1;
L_003BF0A4:
    c.f[23] = c.f[1];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[24] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003BF1F8; } }
L_003BF0B0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BF254; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003BF254; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 32u));
    c.budget -= 1;
L_003BF0D0:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BF1F8; } }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[4].d[0] = c.r[4].d[0] | 55050ull;
    c.f[1] = c.r[4].w[0];
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BF25C; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003BF25C; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 32u));
    c.budget -= 1;
L_003BF110:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 52;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BF134; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 4;
L_003BF134:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BF264; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003BF264; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 32u));
    c.budget -= 1;
L_003BF154:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BF170; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[22] = fp::ee::add(c.fcr31, c.f[22], c.f[1]);  if (t) { goto L_003BF1A8; } }
L_003BF170:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BF26C; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003BF26C; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 32u));
    c.budget -= 1;
L_003BF190:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BF1A8; } }
    c.f[22] = fp::ee::sub(c.fcr31, c.f[22], c.f[1]);
    c.budget -= 1;
L_003BF1A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1200000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BF1C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 248u));  if (t) { goto L_003BF1F0; } }
L_003BF1C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BF1E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BF1EC; } }
L_003BF1E8:
    c.f[1] = c.f[22];
    c.budget -= 1;
L_003BF1EC:
    c.f[0] = ld32((c.r[16].w[0] + 248u));
    c.budget -= 1;
L_003BF1F0:
    c.f[22] = c.f[1];
    c.f[21] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 2;
L_003BF1F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF204u); set32(c.r[4], ld32((c.r[2].w[0] + 88u)));  if (depth < kMaxDepth) unit_007A(c, 87u, depth + 1u); else { c.pc = 0x003E8BC0u; return; } if (c.pc != 0x003BF204u) [[unlikely]] return; }
L_003BF204:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[24]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BF274; } }
L_003BF218:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BF328; } }
L_003BF22C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003BF3A0; } }
L_003BF234:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BEF7Cu | kUnwind; return; } goto L_003BEF7C; } }
L_003BF23C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BEFBCu | kUnwind; return; } goto L_003BEFBC; } }
L_003BF244:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BF000u | kUnwind; return; } goto L_003BF000; } }
L_003BF24C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BF03Cu | kUnwind; return; } goto L_003BF03C; } }
L_003BF254:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BF0D0u | kUnwind; return; } goto L_003BF0D0; } }
L_003BF25C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BF110u | kUnwind; return; } goto L_003BF110; } }
L_003BF264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BF154u | kUnwind; return; } goto L_003BF154; } }
L_003BF26C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BF190u | kUnwind; return; } goto L_003BF190; } }
L_003BF274:
    c.f[12] = c.f[23];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF280u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_0075(c, 94u, depth + 1u); else { c.pc = 0x003D5C40u; return; } if (c.pc != 0x003BF280u) [[unlikely]] return; }
L_003BF280:
    c.f[12] = ld32((c.r[16].w[0] + 240u));
    c.f[13] = ld32((c.r[16].w[0] + 248u));
    c.f[14] = ld32((c.r[16].w[0] + 284u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF294u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_0075(c, 92u, depth + 1u); else { c.pc = 0x003D5B50u; return; } if (c.pc != 0x003BF294u) [[unlikely]] return; }
L_003BF294:
    c.f[2] = ld32((c.r[16].w[0] + 112u));
    c.f[5] = ld32((c.r[16].w[0] + 240u));
    c.f[6] = ld32((c.r[16].w[0] + 116u));
    c.f[3] = ld32((c.r[16].w[0] + 248u));
    c.f[1] = ld32((c.r[16].w[0] + 268u));
    c.f[0] = ld32((c.r[16].w[0] + 264u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[2], c.f[5]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[6], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[2] = fp::ee::sqrt(c.fcr31, c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[16].w[0] + 112u), c.f[1]);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF2E4u); set32(c.r[4], ld32((c.r[2].w[0] + 88u)));  if (depth < kMaxDepth) unit_007A(c, 87u, depth + 1u); else { c.pc = 0x003E8BC0u; return; } if (c.pc != 0x003BF2E4u) [[unlikely]] return; }
L_003BF2E4:
    c.f[6] = ld32((c.r[16].w[0] + 112u));
    c.f[1] = ld32((c.r[16].w[0] + 96u));
    c.f[5] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[3] = ld32((c.r[16].w[0] + 116u));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[6]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[6]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[16].w[0] + 20u), c.f[2]);
    st32((c.r[16].w[0] + 24u), c.f[4]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), c.f[20]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BF218u | kUnwind; return; } goto L_003BF218; } }
L_003BF328:
    c.f[12] = ld32((c.r[16].w[0] + 240u));
    set32(c.r[4], c.r[16].w[0] + 240u);
    c.f[14] = ld32((c.r[16].w[0] + 284u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF33Cu); c.f[13] = c.f[22];  if (depth < kMaxDepth) unit_0075(c, 92u, depth + 1u); else { c.pc = 0x003D5B50u; return; } if (c.pc != 0x003BF33Cu) [[unlikely]] return; }
L_003BF33C:
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[7] = ld32((c.r[16].w[0] + 16u));
    c.f[6] = ld32((c.r[16].w[0] + 24u));
    c.f[5] = ld32((c.r[16].w[0] + 28u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.f[4] = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    set32(c.r[4], ld32((c.r[3].w[0] + 88u)));
    c.f[1] = ld32((c.r[4].w[0] + 68u));
    set32(c.r[3], ld32((c.r[3].w[0] + 88u)));
    c.f[3] = ld32((c.r[4].w[0] + 72u));
    c.f[2] = ld32((c.r[4].w[0] + 76u));
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    st32((c.r[3].w[0] + 64u), c.f[0]);
    st32((c.r[3].w[0] + 68u), c.f[1]);
    st32((c.r[3].w[0] + 72u), c.f[3]);
    st32((c.r[3].w[0] + 76u), c.f[2]);
    st32((c.r[16].w[0] + 16u), c.f[7]);
    st32((c.r[16].w[0] + 20u), c.f[4]);
    st32((c.r[16].w[0] + 24u), c.f[6]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), c.f[5]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BF22Cu | kUnwind; return; } goto L_003BF22C; } }
L_003BF3A0:
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003BF3C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF3ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BF3ECu) [[unlikely]] return; }
L_003BF3EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BF3FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003BF520; } }
L_003BF3FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[3].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF420u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BF420u) [[unlikely]] return; }
L_003BF420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BF51C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C10000u);
    c.r[3].d[0] = c.r[3].d[0] | 18350ull;
    c.f[0] = c.r[3].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 120u));
    c.f[1] = ld32((c.r[4].w[0] + 136u));
    c.f[4] = ld32((c.r[4].w[0] + 112u));
    c.f[3] = ld32((c.r[4].w[0] + 128u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BF478; } }
L_003BF470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BF51C; } }
L_003BF478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF480u); set32(c.r[4], ld32((c.r[4].w[0] + 88u)));  if (depth < kMaxDepth) unit_007A(c, 87u, depth + 1u); else { c.pc = 0x003E8BC0u; return; } if (c.pc != 0x003BF480u) [[unlikely]] return; }
L_003BF480:
    c.f[5] = ld32((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C10000u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = c.r[3].w[0];
    c.f[4] = 0u;
    c.f[6] = fp::ee::sub(c.fcr31, c.f[5], c.f[3]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[5], c.f[5]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[2] = fp::ee::sqrt(c.fcr31, c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BF51C; } }
    c.f[3] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[2] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[6], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[4], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[5], c.f[2]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BF470u | kUnwind; return; } goto L_003BF470; } }
L_003BF51C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003BF520:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BF530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003BF540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[12] = c.r[2].w[0];
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] + 192u);
    set32(c.r[5], c.r[3].w[0] + 16u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF570u); set32(c.r[7], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0075(c, 86u, depth + 1u); else { c.pc = 0x003D5960u; return; } if (c.pc != 0x003BF570u) [[unlikely]] return; }
L_003BF570:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BF5A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 44u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], c.r[29].w[0] + 40u);
    c.f[0] = ld32((c.r[4].w[0] + 268u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[12], c.f[0]);
    st32((c.r[29].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 264u));
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[12], c.f[0]);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 240u));
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 44u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 248u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[4], c.r[16].w[0] + 240u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF5F8u); st32((c.r[29].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0075(c, 89u, depth + 1u); else { c.pc = 0x003D5AE0u; return; } if (c.pc != 0x003BF5F8u) [[unlikely]] return; }
L_003BF5F8:
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BF620:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[2] = ld32((c.r[5].w[0]));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[4] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    st32((c.r[29].w[0] + 20u), c.f[25]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[3] = ld32((c.r[4].w[0] + 448u));
    c.f[20] = ld32((c.r[29].w[0] + 140u));
    c.f[21] = ld32((c.r[29].w[0] + 108u));
    c.f[22] = ld32((c.r[29].w[0] + 124u));
    c.f[23] = ld32((c.r[29].w[0] + 156u));
    c.f[24] = ld32((c.r[29].w[0] + 172u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 28;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003BFA30; } }
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BFA30; } }
    c.f[3] = ld32((c.r[18].w[0] + 452u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BFA38; } }
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BFA38; } }
    c.f[3] = ld32((c.r[18].w[0] + 456u));
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BFA40; } }
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BFA40; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003BF6F4:
    ld128((c.r[17].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.f[12] = ld32((c.r[17].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[6] = ld32((c.r[17].w[0] + 4u));
    c.f[4] = ld32((c.r[17].w[0] + 8u));
    c.f[2] = 0u;
    st128((c.r[18].w[0] + 448u) & ~15u, c.r[3]);
    st32((c.r[18].w[0] + 464u), c.f[12]);
    c.f[3] = ld32((c.r[18].w[0] + 16u));
    st32((c.r[16].w[0]), c.f[3]);
    c.f[3] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[16].w[0] + 4u), c.f[3]);
    c.f[3] = ld32((c.r[18].w[0] + 24u));
    st32((c.r[16].w[0] + 8u), c.f[3]);
    c.f[3] = ld32((c.r[18].w[0] + 28u));
    st32((c.r[16].w[0] + 12u), c.f[3]);
    st8((c.r[18].w[0] + 50u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[3] = ld32((c.r[18].w[0] + 16u));
    c.f[7] = ld32((c.r[18].w[0] + 20u));
    c.f[5] = ld32((c.r[18].w[0] + 24u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[3], c.f[1]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);
    st32((c.r[18].w[0] + 64u), c.f[1]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[18].w[0] + 68u), c.f[6]);
    st32((c.r[18].w[0] + 72u), c.f[4]);
    st32((c.r[18].w[0] + 76u), c.f[0]);
    st32((c.r[18].w[0] + 68u), 0u);
    c.f[1] = ld32((c.r[18].w[0] + 72u));
    c.f[0] = ld32((c.r[18].w[0] + 64u));
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 39;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[18].w[0] + 80u), c.f[1]);  if (t) { goto L_003BFA48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[25] = c.r[2].w[0];
    c.f[0] = ld32((c.r[18].w[0] + 64u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[25], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[18].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 72u));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[18].w[0] + 72u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 84u), c.f[0]);
    c.budget -= 13;
L_003BF7C4:
    st8((c.r[18].w[0] + 11u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF7E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BF7E4u) [[unlikely]] return; }
L_003BF7E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BF83C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 176u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BF83C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF80Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 149u, depth + 1u); else { c.pc = 0x003D6A10u; return; } if (c.pc != 0x003BF80Cu) [[unlikely]] return; }
L_003BF80C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BF83C; } }
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[18].w[0] + 28u), c.f[0]);
    st8((c.r[18].w[0] + 50u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
L_003BF83C:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 176u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BF85C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF85Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 173u, depth + 1u); else { c.pc = 0x003D6E50u; return; } if (c.pc != 0x003BF85Cu) [[unlikely]] return; }
L_003BF85C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF86Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BF86Cu) [[unlikely]] return; }
L_003BF86C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BF8D4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF884u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BF884u) [[unlikely]] return; }
L_003BF884:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BFA80; } }
L_003BF88C:
    set32(c.r[2], ld32((c.r[18].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BF8D4; } }
    set32(c.r[4], c.r[18].w[0] + 128u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF8ACu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 212u, depth + 1u); else { c.pc = 0x003E2AA0u; return; } if (c.pc != 0x003BF8ACu) [[unlikely]] return; }
L_003BF8AC:
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[18].w[0] + 28u), c.f[0]);
    st8((c.r[18].w[0] + 50u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
L_003BF8D4:
    set32(c.r[4], c.r[18].w[0] + 288u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF8E4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 162u, depth + 1u); else { c.pc = 0x004D2EC0u; return; } if (c.pc != 0x003BF8E4u) [[unlikely]] return; }
L_003BF8E4:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 50u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BFAC4; } }
L_003BF8F0:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 50u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BF904; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 51u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003BF904:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 51u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003BFAEC; } }
L_003BF914:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = ld8((c.r[3].w[0] - 22903u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BFBAC; } }
L_003BF924:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BFBC0; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 480u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BFA14; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    st8((c.r[18].w[0] + 480u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[12] = c.r[2].w[0];
    ld128((c.r[18].w[0] + 64u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[18].w[0] + 240u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[14] = c.r[2].w[0];
    st128((c.r[18].w[0] + 96u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    st32((c.r[18].w[0] + 112u), c.f[0]);
    c.f[3] = ld32((c.r[18].w[0] + 84u));
    st32((c.r[18].w[0] + 116u), c.f[3]);
    c.f[0] = ld32((c.r[18].w[0] + 248u));
    c.f[2] = ld32((c.r[18].w[0] + 112u));
    c.f[1] = ld32((c.r[18].w[0] + 240u));
    c.f[13] = ld32((c.r[28].w[0] - 31744u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[3], c.f[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[20] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF9A0u);  if (depth < kMaxDepth) unit_0075(c, 93u, depth + 1u); else { c.pc = 0x003D5BC0u; return; } if (c.pc != 0x003BF9A0u) [[unlikely]] return; }
L_003BF9A0:
    c.f[3] = ld32((c.r[18].w[0] + 268u));
    c.f[2] = ld32((c.r[18].w[0] + 264u));
    c.f[1] = ld32((c.r[18].w[0] + 240u));
    c.f[0] = ld32((c.r[18].w[0] + 248u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[20], c.f[3]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[20], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[18].w[0] + 112u), c.f[1]);
    st32((c.r[18].w[0] + 116u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF9D4u); set32(c.r[4], ld32((c.r[2].w[0] + 88u)));  if (depth < kMaxDepth) unit_007A(c, 87u, depth + 1u); else { c.pc = 0x003E8BC0u; return; } if (c.pc != 0x003BF9D4u) [[unlikely]] return; }
L_003BF9D4:
    c.f[6] = ld32((c.r[18].w[0] + 112u));
    c.f[1] = ld32((c.r[18].w[0] + 96u));
    c.f[5] = ld32((c.r[18].w[0] + 104u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[3] = ld32((c.r[18].w[0] + 116u));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[6]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[6]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[18].w[0] + 20u), c.f[2]);
    st32((c.r[18].w[0] + 24u), c.f[4]);
    st32((c.r[18].w[0] + 28u), c.f[22]);
    c.budget -= 16;
L_003BFA14:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 480u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BFC94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFA28u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x003BEF20u; return; } if (c.pc != 0x003BFA28u) [[unlikely]] return; }
L_003BFA28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_003BFC98; } }
L_003BFA30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BF6F4u | kUnwind; return; } goto L_003BF6F4; } }
L_003BFA38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BF6F4u | kUnwind; return; } goto L_003BF6F4; } }
L_003BFA40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BF6F4u | kUnwind; return; } goto L_003BF6F4; } }
L_003BFA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFA50u);  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003BFA50u) [[unlikely]] return; }
L_003BFA50:
    c.f[12] = ld32((c.r[17].w[0] + 16u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFA5Cu); st32((c.r[18].w[0] + 64u), c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003BFA5Cu) [[unlikely]] return; }
L_003BFA5C:
    st32((c.r[18].w[0] + 72u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.f[25] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 84u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BF7C4u | kUnwind; return; } goto L_003BF7C4; } }
L_003BFA80:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFA90u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 149u, depth + 1u); else { c.pc = 0x003D6A10u; return; } if (c.pc != 0x003BFA90u) [[unlikely]] return; }
L_003BFA90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BF88Cu | kUnwind; return; } goto L_003BF88C; } }
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[18].w[0] + 28u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 50u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BF88Cu | kUnwind; return; } goto L_003BF88C; } }
L_003BFAC4:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFADCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BFADCu) [[unlikely]] return; }
L_003BFADC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BF8F0u | kUnwind; return; } goto L_003BF8F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 51u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BF904u | kUnwind; return; } goto L_003BF904; } }
L_003BFAEC:
    c.f[5] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[4] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = 0u;
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.f[6] = ld32((c.r[17].w[0] + 8u));
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[5]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[0]);
    st32((c.r[18].w[0] + 96u), c.f[1]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[6]);
    st32((c.r[18].w[0] + 100u), c.f[4]);
    st32((c.r[18].w[0] + 104u), c.f[3]);
    st32((c.r[18].w[0] + 108u), c.f[24]);
    st32((c.r[18].w[0] + 100u), 0u);
    c.f[3] = ld32((c.r[18].w[0] + 96u));
    c.f[1] = ld32((c.r[18].w[0] + 104u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[25], c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[18].w[0] + 96u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 100u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[18].w[0] + 100u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 104u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[18].w[0] + 104u), c.f[1]);
    c.f[4] = ld32((c.r[18].w[0] + 112u));
    c.f[1] = ld32((c.r[18].w[0] + 96u));
    c.f[3] = ld32((c.r[18].w[0] + 100u));
    c.f[2] = ld32((c.r[18].w[0] + 104u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[4]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[16].w[0]), c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    st32((c.r[16].w[0] + 4u), c.f[3]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    st32((c.r[16].w[0] + 12u), c.f[23]);
    c.f[1] = ld32((c.r[18].w[0] + 116u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 48;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BF914u | kUnwind; return; } goto L_003BF914; } }
L_003BFBAC:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 480u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BFC94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BF924u | kUnwind; return; } goto L_003BF924; } }
L_003BFBC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    set32(c.r[4], c.r[18].w[0] + 240u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFBD8u); st8((c.r[18].w[0] + 480u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0075(c, 94u, depth + 1u); else { c.pc = 0x003D5C40u; return; } if (c.pc != 0x003BFBD8u) [[unlikely]] return; }
L_003BFBD8:
    c.f[13] = ld32((c.r[28].w[0] - 31744u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C10000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFBF8u); set32(c.r[4], c.r[18].w[0] + 240u);  if (depth < kMaxDepth) unit_0075(c, 93u, depth + 1u); else { c.pc = 0x003D5BC0u; return; } if (c.pc != 0x003BFBF8u) [[unlikely]] return; }
L_003BFBF8:
    c.f[3] = ld32((c.r[18].w[0] + 268u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[2] = ld32((c.r[18].w[0] + 264u));
    c.f[4] = c.r[2].w[0];
    c.f[1] = ld32((c.r[18].w[0] + 240u));
    c.f[0] = ld32((c.r[18].w[0] + 248u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[4], c.f[3]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[4], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[18].w[0] + 112u), c.f[1]);
    st32((c.r[18].w[0] + 116u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFC34u); set32(c.r[4], ld32((c.r[2].w[0] + 88u)));  if (depth < kMaxDepth) unit_007A(c, 87u, depth + 1u); else { c.pc = 0x003E8BC0u; return; } if (c.pc != 0x003BFC34u) [[unlikely]] return; }
L_003BFC34:
    c.f[6] = ld32((c.r[18].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40100000u);
    c.f[1] = ld32((c.r[18].w[0] + 96u));
    c.f[5] = ld32((c.r[18].w[0] + 104u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[3] = ld32((c.r[18].w[0] + 116u));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[6]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[6]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[18].w[0] + 20u), c.f[2]);
    st32((c.r[18].w[0] + 24u), c.f[4]);
    st32((c.r[18].w[0] + 28u), c.f[21]);
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 72u), 0u);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 76u), c.f[20]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BFA14u | kUnwind; return; } goto L_003BFA14; } }
L_003BFC94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003BFC98:
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003BFCD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[10] = ld32((c.r[29].w[0] + 76u));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.f[11] = ld32((c.r[4].w[0] + 240u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[11]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BFD04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[5].w[0]));  if (t) { goto L_003BFD24; } }
L_003BFD04:
    c.f[11] = ld32((c.r[16].w[0] + 244u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[11]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BFD1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BFD20; } }
L_003BFD1C:
    c.f[11] = c.f[12];
    c.budget -= 1;
L_003BFD20:
    c.f[2] = ld32((c.r[5].w[0]));
    c.budget -= 1;
L_003BFD24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[9] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[8] = ld32((c.r[17].w[0] + 8u));
    c.f[7] = 0u;
    c.f[6] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[7]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[2], c.f[9]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[1], c.f[8]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[6], c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[5], c.f[2]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[7], c.f[2]);
    c.f[4] = ld32((c.r[17].w[0] + 4u));
    c.f[5] = fp::ee::mul(c.fcr31, c.f[3], c.f[11]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[11]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[11]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[8], c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[9], c.f[5]);
    st32((c.r[16].w[0] + 16u), c.f[1]);
    st32((c.r[16].w[0] + 20u), c.f[3]);
    st32((c.r[16].w[0] + 24u), c.f[2]);
    st32((c.r[16].w[0] + 28u), c.f[10]);
    c.f[2] = ld32((c.r[16].w[0] + 240u));
    c.f[1] = ld32((c.r[16].w[0] + 248u));
    c.f[3] = ld32((c.r[16].w[0] + 272u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[11], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    st32((c.r[16].w[0] + 20u), c.f[1]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[2] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[9]);
    st32((c.r[16].w[0] + 64u), c.f[1]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[8]);
    st32((c.r[16].w[0] + 68u), c.f[3]);
    st32((c.r[16].w[0] + 72u), c.f[2]);
    st32((c.r[16].w[0] + 76u), c.f[0]);
    st32((c.r[16].w[0] + 68u), 0u);
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    fpu_compare(c, fp::key(c.f[7]) == fp::key(c.f[0]));
    c.budget -= 55;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 80u), c.f[0]);  if (t) { goto L_003BFEEC; } }
    c.f[2] = fp::ee::div(c.fcr31, c.f[6], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 72u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 84u), c.f[0]);
    c.budget -= 13;
L_003BFE34:
    ld128((c.r[16].w[0] + 64u) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 192u);
    set32(c.r[5], 0u + 2u);
    st128((c.r[16].w[0] + 96u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    st32((c.r[16].w[0] + 116u), c.f[0]);
    st8((c.r[16].w[0] + 192u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 193u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[16].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[16].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[16].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFE84u); st32((c.r[16].w[0] + 220u), c.f[0]);  if (depth < kMaxDepth) unit_0075(c, 88u, depth + 1u); else { c.pc = 0x003D5A30u; return; } if (c.pc != 0x003BFE84u) [[unlikely]] return; }
L_003BFE84:
    st32((c.r[16].w[0] + 128u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 288u);
    st32((c.r[16].w[0] + 136u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 140u), 0u);
    st8((c.r[16].w[0] + 149u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFEACu); st8((c.r[16].w[0] + 185u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00B4(c, 168u, depth + 1u); else { c.pc = 0x004D32F0u; return; } if (c.pc != 0x003BFEACu) [[unlikely]] return; }
L_003BFEAC:
    st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 50u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 51u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003BFF20; } }
L_003BFEEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFEF4u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003BFEF4u) [[unlikely]] return; }
L_003BFEF4:
    c.f[12] = ld32((c.r[17].w[0] + 16u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFF00u); st32((c.r[16].w[0] + 64u), c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003BFF00u) [[unlikely]] return; }
L_003BFF00:
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BFE34u | kUnwind; return; } goto L_003BFE34; } }
L_003BFF20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BFF40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 7984u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] - 8176u);
    st32((c.r[4].w[0] + 24u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    st32((c.r[4].w[0] + 20u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st32((c.r[4].w[0] + 16u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    st8((c.r[4].w[0] + 15u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 14u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st8((c.r[4].w[0] + 13u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 11u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0]), c.r[7].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 80u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 100u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 116u), 0u);
    st8((c.r[4].w[0] + 177u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 128u), 0u);
    st32((c.r[4].w[0] + 132u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 136u), 0u);
    st32((c.r[4].w[0] + 140u), 0u);
    st8((c.r[4].w[0] + 149u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 185u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 232u), c.r[2].w[0]);
    st8((c.r[4].w[0] + 192u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 193u), static_cast<std::uint8_t>(0u));
    c.budget -= 48;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0000u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_0075(c, 97u, depth + 1u); else { c.pc = 0x003D5CB0u; return; } if (c.pc != 0x003C0000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0070(c, 1u, depth);
}

}

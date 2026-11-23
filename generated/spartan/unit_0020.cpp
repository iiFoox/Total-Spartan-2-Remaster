#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0020[4096] = {
    1, 2, 0, 0, 3, 0, 0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0,
    12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21,
    0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0,
    0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28,
    0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0,
    0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 59,
    0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 93, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 110, 0, 0, 0, 111,
    0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113,
    0, 114, 0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132,
    0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0,
    0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0,
    0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0,
    0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212,
    0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0,
    0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0,
    0, 224, 0, 225, 0, 0, 226, 0, 227, 0, 228, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 233,
    0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0,
    0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0,
    262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0,
    0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    267, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0,
    0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279,
    0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0,
    289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308,
    0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 313, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0,
};

void unit_0020(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00280000;
    case 2u: goto L_00280004;
    case 3u: goto L_00280010;
    case 4u: goto L_00280020;
    case 5u: goto L_00280028;
    case 6u: goto L_00280030;
    case 7u: goto L_00280040;
    case 8u: goto L_00280048;
    case 9u: goto L_00280050;
    case 10u: goto L_00280060;
    case 11u: goto L_00280070;
    case 12u: goto L_00280080;
    case 13u: goto L_00280094;
    case 14u: goto L_002800A8;
    case 15u: goto L_002800BC;
    case 16u: goto L_002800C8;
    case 17u: goto L_00280114;
    case 18u: goto L_00280140;
    case 19u: goto L_00280148;
    case 20u: goto L_00280174;
    case 21u: goto L_0028017C;
    case 22u: goto L_002801A0;
    case 23u: goto L_002801D4;
    case 24u: goto L_00280210;
    case 25u: goto L_0028026C;
    case 26u: goto L_0028028C;
    case 27u: goto L_002802D8;
    case 28u: goto L_002802FC;
    case 29u: goto L_00280304;
    case 30u: goto L_00280400;
    case 31u: goto L_00280428;
    case 32u: goto L_0028042C;
    case 33u: goto L_00280460;
    case 34u: goto L_0028048C;
    case 35u: goto L_00280498;
    case 36u: goto L_002804C4;
    case 37u: goto L_002804D0;
    case 38u: goto L_002804F8;
    case 39u: goto L_00280500;
    case 40u: goto L_00280530;
    case 41u: goto L_00280550;
    case 42u: goto L_0028055C;
    case 43u: goto L_00280588;
    case 44u: goto L_002805A0;
    case 45u: goto L_002805D4;
    case 46u: goto L_00280600;
    case 47u: goto L_00280624;
    case 48u: goto L_00280640;
    case 49u: goto L_00280668;
    case 50u: goto L_00280678;
    case 51u: goto L_0028069C;
    case 52u: goto L_00280700;
    case 53u: goto L_00280710;
    case 54u: goto L_00280734;
    case 55u: goto L_00280784;
    case 56u: goto L_002807A8;
    case 57u: goto L_002807B8;
    case 58u: goto L_002807F8;
    case 59u: goto L_002807FC;
    case 60u: goto L_0028080C;
    case 61u: goto L_00280824;
    case 62u: goto L_00280854;
    case 63u: goto L_00280884;
    case 64u: goto L_002808B0;
    case 65u: goto L_00280928;
    case 66u: goto L_00280944;
    case 67u: goto L_00280980;
    case 68u: goto L_00280998;
    case 69u: goto L_002809B4;
    case 70u: goto L_002809D0;
    case 71u: goto L_00280A50;
    case 72u: goto L_00280A68;
    case 73u: goto L_00280A80;
    case 74u: goto L_00280B40;
    case 75u: goto L_00280B4C;
    case 76u: goto L_00280B88;
    case 77u: goto L_00280B98;
    case 78u: goto L_00280BD8;
    case 79u: goto L_00280C04;
    case 80u: goto L_00280DB8;
    case 81u: goto L_00280DC8;
    case 82u: goto L_00280E00;
    case 83u: goto L_00280E3C;
    case 84u: goto L_00280EA8;
    case 85u: goto L_00280EB4;
    case 86u: goto L_00280F8C;
    case 87u: goto L_00280FC0;
    case 88u: goto L_00281060;
    case 89u: goto L_00281190;
    case 90u: goto L_002811C4;
    case 91u: goto L_002811E0;
    case 92u: goto L_002811F0;
    case 93u: goto L_002811F4;
    case 94u: goto L_00281220;
    case 95u: goto L_002812DC;
    case 96u: goto L_0028142C;
    case 97u: goto L_0028147C;
    case 98u: goto L_00281490;
    case 99u: goto L_002814B0;
    case 100u: goto L_002814C4;
    case 101u: goto L_00281560;
    case 102u: goto L_00281580;
    case 103u: goto L_002815A0;
    case 104u: goto L_002815C8;
    case 105u: goto L_002815D8;
    case 106u: goto L_002815EC;
    case 107u: goto L_00281640;
    case 108u: goto L_0028164C;
    case 109u: goto L_00281668;
    case 110u: goto L_0028166C;
    case 111u: goto L_0028167C;
    case 112u: goto L_00281688;
    case 113u: goto L_002816FC;
    case 114u: goto L_00281704;
    case 115u: goto L_0028170C;
    case 116u: goto L_0028171C;
    case 117u: goto L_00281728;
    case 118u: goto L_00281740;
    case 119u: goto L_00281748;
    case 120u: goto L_00281780;
    case 121u: goto L_002817A8;
    case 122u: goto L_002817B4;
    case 123u: goto L_002817E0;
    case 124u: goto L_00281844;
    case 125u: goto L_0028184C;
    case 126u: goto L_0028185C;
    case 127u: goto L_002818B0;
    case 128u: goto L_002818D8;
    case 129u: goto L_00281908;
    case 130u: goto L_00281938;
    case 131u: goto L_00281964;
    case 132u: goto L_0028197C;
    case 133u: goto L_0028198C;
    case 134u: goto L_00281994;
    case 135u: goto L_002819B4;
    case 136u: goto L_00281A50;
    case 137u: goto L_00281A58;
    case 138u: goto L_00281A78;
    case 139u: goto L_00281A8C;
    case 140u: goto L_00281A9C;
    case 141u: goto L_00281AB0;
    case 142u: goto L_00281B5C;
    case 143u: goto L_00281BBC;
    case 144u: goto L_00281C08;
    case 145u: goto L_00281C34;
    case 146u: goto L_00281C50;
    case 147u: goto L_00281C68;
    case 148u: goto L_00281C74;
    case 149u: goto L_00281CBC;
    case 150u: goto L_00281CD4;
    case 151u: goto L_00281CE0;
    case 152u: goto L_00281D08;
    case 153u: goto L_00281D34;
    case 154u: goto L_00281D6C;
    case 155u: goto L_00281D84;
    case 156u: goto L_00281DA8;
    case 157u: goto L_00281DF0;
    case 158u: goto L_00281E00;
    case 159u: goto L_00281E10;
    case 160u: goto L_00281E20;
    case 161u: goto L_00281E40;
    case 162u: goto L_00281E50;
    case 163u: goto L_00281E60;
    case 164u: goto L_00281E70;
    case 165u: goto L_00281EC4;
    case 166u: goto L_00281F80;
    case 167u: goto L_00281FE4;
    case 168u: goto L_00282014;
    case 169u: goto L_00282130;
    case 170u: goto L_002821E4;
    case 171u: goto L_00282214;
    case 172u: goto L_00282228;
    case 173u: goto L_00282250;
    case 174u: goto L_0028226C;
    case 175u: goto L_0028246C;
    case 176u: goto L_00282610;
    case 177u: goto L_00282638;
    case 178u: goto L_0028270C;
    case 179u: goto L_00282754;
    case 180u: goto L_00282798;
    case 181u: goto L_002827E0;
    case 182u: goto L_00282834;
    case 183u: goto L_0028287C;
    case 184u: goto L_002828C0;
    case 185u: goto L_00282908;
    case 186u: goto L_0028294C;
    case 187u: goto L_00282994;
    case 188u: goto L_002829D4;
    case 189u: goto L_00282A1C;
    case 190u: goto L_00282A5C;
    case 191u: goto L_00282AA4;
    case 192u: goto L_00282AEC;
    case 193u: goto L_00282B10;
    case 194u: goto L_00282B28;
    case 195u: goto L_00282B84;
    case 196u: goto L_00282BA4;
    case 197u: goto L_00282BAC;
    case 198u: goto L_00282BF8;
    case 199u: goto L_00282C0C;
    case 200u: goto L_00282C58;
    case 201u: goto L_00282C78;
    case 202u: goto L_00282CC8;
    case 203u: goto L_00282CE0;
    case 204u: goto L_00282CF4;
    case 205u: goto L_00282D54;
    case 206u: goto L_00282DA8;
    case 207u: goto L_00282DB0;
    case 208u: goto L_00282E74;
    case 209u: goto L_00282EB8;
    case 210u: goto L_00282EE8;
    case 211u: goto L_00282F6C;
    case 212u: goto L_00282F7C;
    case 213u: goto L_00282F8C;
    case 214u: goto L_00282F9C;
    case 215u: goto L_00282FF8;
    case 216u: goto L_00283004;
    case 217u: goto L_00283010;
    case 218u: goto L_0028301C;
    case 219u: goto L_00283028;
    case 220u: goto L_00283034;
    case 221u: goto L_00283040;
    case 222u: goto L_0028306C;
    case 223u: goto L_00283078;
    case 224u: goto L_00283084;
    case 225u: goto L_0028308C;
    case 226u: goto L_00283098;
    case 227u: goto L_002830A0;
    case 228u: goto L_002830A8;
    case 229u: goto L_002830BC;
    case 230u: goto L_002830C4;
    case 231u: goto L_002830D8;
    case 232u: goto L_002830E8;
    case 233u: goto L_002830FC;
    case 234u: goto L_00283104;
    case 235u: goto L_00283138;
    case 236u: goto L_00283188;
    case 237u: goto L_0028319C;
    case 238u: goto L_002831B8;
    case 239u: goto L_002831BC;
    case 240u: goto L_002831E8;
    case 241u: goto L_00283230;
    case 242u: goto L_00283244;
    case 243u: goto L_00283270;
    case 244u: goto L_00283284;
    case 245u: goto L_00283298;
    case 246u: goto L_002832FC;
    case 247u: goto L_00283338;
    case 248u: goto L_0028336C;
    case 249u: goto L_002833C4;
    case 250u: goto L_002833D4;
    case 251u: goto L_00283410;
    case 252u: goto L_00283420;
    case 253u: goto L_00283430;
    case 254u: goto L_00283440;
    case 255u: goto L_0028344C;
    case 256u: goto L_00283478;
    case 257u: goto L_002834F0;
    case 258u: goto L_00283510;
    case 259u: goto L_002835C0;
    case 260u: goto L_002835D8;
    case 261u: goto L_002835EC;
    case 262u: goto L_00283600;
    case 263u: goto L_00283664;
    case 264u: goto L_00283684;
    case 265u: goto L_002836A8;
    case 266u: goto L_002836D8;
    case 267u: goto L_00283700;
    case 268u: goto L_0028370C;
    case 269u: goto L_0028371C;
    case 270u: goto L_00283778;
    case 271u: goto L_002837B8;
    case 272u: goto L_002837EC;
    case 273u: goto L_00283810;
    case 274u: goto L_00283840;
    case 275u: goto L_00283858;
    case 276u: goto L_002838C0;
    case 277u: goto L_002838EC;
    case 278u: goto L_00283910;
    case 279u: goto L_0028397C;
    case 280u: goto L_0028399C;
    case 281u: goto L_002839F0;
    case 282u: goto L_00283A04;
    case 283u: goto L_00283A50;
    case 284u: goto L_00283A60;
    case 285u: goto L_00283A70;
    case 286u: goto L_00283AB0;
    case 287u: goto L_00283AE4;
    case 288u: goto L_00283AF4;
    case 289u: goto L_00283B00;
    case 290u: goto L_00283B2C;
    case 291u: goto L_00283B60;
    case 292u: goto L_00283B74;
    case 293u: goto L_00283BC0;
    case 294u: goto L_00283BEC;
    case 295u: goto L_00283C18;
    case 296u: goto L_00283C38;
    case 297u: goto L_00283C50;
    case 298u: goto L_00283C70;
    case 299u: goto L_00283CA4;
    case 300u: goto L_00283CCC;
    case 301u: goto L_00283CF4;
    case 302u: goto L_00283D1C;
    case 303u: goto L_00283D44;
    case 304u: goto L_00283D60;
    case 305u: goto L_00283DC0;
    case 306u: goto L_00283E24;
    case 307u: goto L_00283E40;
    case 308u: goto L_00283E7C;
    case 309u: goto L_00283E90;
    case 310u: goto L_00283EF0;
    case 311u: goto L_00283F30;
    case 312u: goto L_00283F50;
    case 313u: goto L_00283F84;
    case 314u: goto L_00283F94;
    case 315u: goto L_00283FA4;
    case 316u: goto L_00283FF0;
    default: bad_entry(c, 0x00280000u); return;
    }
L_00280000:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[11].d[0];  if (t) { goto L_00280010; } }
    goto L_00280008;
L_00280004:
    c.budget -= 1;
L_00280008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));  if (t) { goto L_002801DC; } }
L_00280010:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[10].d[0];  if (t) { goto L_002800BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));  if (t) { goto L_002801DC; } }
L_00280020:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[12].d[0];  if (t) { goto L_00280030; } }
L_00280028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[12].w[0]));  if (t) { goto L_002801DC; } }
L_00280030:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[9].d[0];  if (t) { goto L_002800BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));  if (t) { goto L_002801DC; } }
L_00280040:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[13].d[0];  if (t) { goto L_00280050; } }
L_00280048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[13].w[0]));  if (t) { goto L_002801DC; } }
L_00280050:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[6].d[0];  if (t) { goto L_002800BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_002801DC; } }
L_00280060:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[14].d[0];  if (t) { goto L_00280070; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));  if (t) { goto L_002801DC; } }
L_00280070:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[5].d[0];  if (t) { goto L_002800BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002801DC; } }
L_00280080:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[15].d[0];  if (t) { goto L_00280094; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 1480u), c.r[8].w[0]);  if (t) { goto L_002801DC; } }
L_00280094:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[4].d[0];  if (t) { goto L_002800BC; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 1480u), c.r[8].w[0]);  if (t) { goto L_002801DC; } }
L_002800A8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[24].d[0];  if (t) { goto L_002800BC; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[24].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 1480u), c.r[8].w[0]);  if (t) { goto L_002801DC; } }
L_002800BC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[25].d[0];  if (t) { goto L_002801DC; } }
    c.budget -= 1;
L_002800C8:
    set32(c.r[16], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[16].d[0] & 255ull;
    c.r[16].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027FF7Cu | kUnwind; return; } [[clang::musttail]] return unit_001F(c, 393u, depth); } }
    c.r[5].d[0] = c.r[20].d[0] & 255ull;
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_002801A8; } }
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0028017C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 23504u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00280000u < 16384u) { entry = entries_0020[(t - 0x00280000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00280114:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[9].d[0] = ld8((c.r[3].w[0] + 220u));
    set32(c.r[4], c.r[4].w[0] - 10288u);
    set32(c.r[8], ld32((c.r[2].w[0] - 4176u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], c.r[3].w[0] + 32u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[9].d[0] ^ 31ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280140u); c.r[9].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_002F(c, 120u, depth + 1u); else { c.pc = 0x002BCC70u; return; } if (c.pc != 0x00280140u) [[unlikely]] return; }
L_00280140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002801A0; } }
L_00280148:
    st64((c.r[29].w[0]), 0ull);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[8], ld32((c.r[2].w[0] - 4176u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], c.r[3].w[0] + 32u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280174u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 128u, depth + 1u); else { c.pc = 0x002BCF60u; return; } if (c.pc != 0x00280174u) [[unlikely]] return; }
L_00280174:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002801A0; } }
L_0028017C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 10288u);
    set32(c.r[6], c.r[3].w[0] + 32u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002801A0u); st64((c.r[29].w[0]), 0ull);  if (depth < kMaxDepth) unit_002F(c, 128u, depth + 1u); else { c.pc = 0x002BCF60u; return; } if (c.pc != 0x002801A0u) [[unlikely]] return; }
L_002801A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_002801E0; } }
L_002801A8:
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[4].w[0] + 1476u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_002801D4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 23568u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00280000u < 16384u) { entry = entries_0020[(t - 0x00280000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002801D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 1480u), c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002801A0u | kUnwind; return; } goto L_002801A0; } }
L_002801DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_002801E0:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00280210:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 529u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00280428; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 527u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00280428; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 86u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028028C; } }
    c.r[16].d[0] = ld8((c.r[4].w[0] + 87u));
    set32(c.r[5], 0u + 100u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[5].d[0];  if (t) { goto L_00280278; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028026Cu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x0028026Cu) [[unlikely]] return; }
L_0028026C:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0028028C; } }
L_00280278:
    set32(c.r[2], ld32((c.r[18].w[0] + 752u)));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 86u));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 88u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028028Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 392u, depth + 1u); else { c.pc = 0x0027FF00u; return; } if (c.pc != 0x0028028Cu) [[unlikely]] return; }
L_0028028C:
    set32(c.r[4], ld32((c.r[18].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 86u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002802AC; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 87u));
    c.r[1].d[0] = c.r[3].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00280428; } }
L_002802AC:
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 86u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002802FC; } }
    c.r[16].d[0] = ld8((c.r[4].w[0] + 87u));
    set32(c.r[5], 0u + 100u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[5].d[0];  if (t) { goto L_002802E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002802D8u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x002802D8u) [[unlikely]] return; }
L_002802D8:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002802FC; } }
L_002802E4:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 752u)));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 86u));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 88u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002802FCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 392u, depth + 1u); else { c.pc = 0x0027FF00u; return; } if (c.pc != 0x002802FCu) [[unlikely]] return; }
L_002802FC:
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00280304:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1476u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00280328; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00280340; } }
L_00280328:
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00280304u | kUnwind; return; } goto L_00280304; } }
    c.budget -= 1;
L_00280340:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00280428; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = ld16((c.r[3].w[0] - 4180u));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00280364; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00280380; } }
L_00280364:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_00280380:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002803A8; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_002803C4; } }
L_002803A8:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 7;
L_002803C4:
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 5816u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 762u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00280428; } }
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280400u); set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x00280400u) [[unlikely]] return; }
L_00280400:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00280428; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 752u)));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 88u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280428u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001F(c, 392u, depth + 1u); else { c.pc = 0x0027FF00u; return; } if (c.pc != 0x00280428u) [[unlikely]] return; }
L_00280428:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028042C:
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 1476u));
    c.r[1].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 1476u);  if (t) { goto L_002804D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 23440u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00280000u < 16384u) { entry = entries_0020[(t - 0x00280000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00280460:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 220u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[8], ld32((c.r[2].w[0] - 4176u)));
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] + 32u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] ^ 31ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028048Cu); c.r[10].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_002F(c, 120u, depth + 1u); else { c.pc = 0x002BCC70u; return; } if (c.pc != 0x0028048Cu) [[unlikely]] return; }
L_0028048C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002804F8; } }
    c.budget -= 1;
L_00280498:
    st64((c.r[29].w[0]), 0ull);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[8], ld32((c.r[2].w[0] - 4176u)));
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] + 32u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002804C4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 128u, depth + 1u); else { c.pc = 0x002BCF60u; return; } if (c.pc != 0x002804C4u) [[unlikely]] return; }
L_002804C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002804F8; } }
    c.budget -= 1;
L_002804D0:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[8], ld32((c.r[18].w[0] + 1480u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] + 32u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002804F8u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 128u, depth + 1u); else { c.pc = 0x002BCF60u; return; } if (c.pc != 0x002804F8u) [[unlikely]] return; }
L_002804F8:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00280500:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028042Cu | kUnwind; return; } goto L_0028042C; } }
    st32((c.r[18].w[0] + 1480u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00280530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[5].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00280564; } }
L_00280550:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 528u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0028057C; } }
L_0028055C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1494u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00280590; } }
L_00280564:
    set32(c.r[3], 0u - 9u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00280550u | kUnwind; return; } goto L_00280550; } }
L_0028057C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280588u); st8((c.r[16].w[0] + 528u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x00280588u) [[unlikely]] return; }
L_00280588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028055Cu | kUnwind; return; } goto L_0028055C; } }
L_00280590:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002805A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 762u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002805D4u); set32(c.r[4], c.r[19].w[0] + 752u);  if (depth < kMaxDepth) unit_0064(c, 317u, depth + 1u); else { c.pc = 0x00392EC0u; return; } if (c.pc != 0x002805D4u) [[unlikely]] return; }
L_002805D4:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.r[1].d[0] = c.r[17].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00280600; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00280600; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00280600; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280600u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 32u, depth + 1u); else { c.pc = 0x00468830u; return; } if (c.pc != 0x00280600u) [[unlikely]] return; }
L_00280600:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00280680; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00280680; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280624u); set32(c.r[4], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_0028(c, 48u, depth + 1u); else { c.pc = 0x002A0930u; return; } if (c.pc != 0x00280624u) [[unlikely]] return; }
L_00280624:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_002806A4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002806A4; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280640u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 53u, depth + 1u); else { c.pc = 0x00280710u; return; } if (c.pc != 0x00280640u) [[unlikely]] return; }
L_00280640:
    set32(c.r[4], ld32((c.r[19].w[0] + 1348u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 1356u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00280678; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00280668; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 308u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00280668u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00280668u) [[unlikely]] return; }
L_00280668:
    set32(c.r[5], ld32((c.r[19].w[0] + 1356u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280678u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x00280678u) [[unlikely]] return; }
L_00280678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002806DC; } }
L_00280680:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00280624u | kUnwind; return; } goto L_00280624; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 212u)));
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028069Cu); set32(c.r[4], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_0028(c, 48u, depth + 1u); else { c.pc = 0x002A0930u; return; } if (c.pc != 0x0028069Cu) [[unlikely]] return; }
L_0028069C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00280624u | kUnwind; return; } goto L_00280624; } }
L_002806A4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00280678u | kUnwind; return; } goto L_00280678; } }
    c.r[4].d[0] = ld8((c.r[19].w[0] + 523u));
    c.r[2].d[0] = c.r[4].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00280678u | kUnwind; return; } goto L_00280678; } }
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[19].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1416u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00280678u | kUnwind; return; } goto L_00280678; } }
L_002806DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00280700:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00280710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 192u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00280734u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00280734u) [[unlikely]] return; }
L_00280734:
    c.r[7].d[0] = ld8((c.r[17].w[0] + 529u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[4], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 530u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 530u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 1416u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1564u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280784u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 39u, depth + 1u); else { c.pc = 0x002A8900u; return; } if (c.pc != 0x00280784u) [[unlikely]] return; }
L_00280784:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002807B0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 1360u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00280A3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002807A8u);  if (depth < kMaxDepth) unit_0066(c, 270u, depth + 1u); else { c.pc = 0x0039AE10u; return; } if (c.pc != 0x002807A8u) [[unlikely]] return; }
L_002807A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00280A40; } }
L_002807B0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002808C0; } }
L_002807B8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002807F8; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 529u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002807F8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002807F8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 752u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 82u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 118u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002807F8u); set32(c.r[4], c.r[2].w[0] + 168u);  if (depth < kMaxDepth) unit_0027(c, 184u, depth + 1u); else { c.pc = 0x0029FBD0u; return; } if (c.pc != 0x002807F8u) [[unlikely]] return; }
L_002807F8:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 522u));
    c.budget -= 1;
L_002807FC:
    c.r[2].d[0] = c.r[2].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028094C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028080C:
    st8((c.r[17].w[0] + 528u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 672u), 0u);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00280824u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00280824u) [[unlikely]] return; }
L_00280824:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00280998; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 672u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00280884; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 676u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00280884; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 264u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00280854u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00280854u) [[unlikely]] return; }
L_00280854:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00280884; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29688u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 5760u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00280884; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 676u)));
    c.f[12] = 0u;
    set32(c.r[4], c.r[4].w[0] + 5632u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280884u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 103u, depth + 1u); else { c.pc = 0x0031D1F0u; return; } if (c.pc != 0x00280884u) [[unlikely]] return; }
L_00280884:
    set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 5760u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00280998; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 672u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00280988; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 264u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002808B0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002808B0u) [[unlikely]] return; }
L_002808B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00280998; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));  if (t) { goto L_0028098C; } }
L_002808C0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 529u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002807B8u | kUnwind; return; } goto L_002807B8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002808F4; } }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[3], ld32((c.r[17].w[0] + 1524u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002808F4; } }
    st32((c.r[17].w[0] + 1520u), 0u);
    c.budget -= 1;
L_002808F4:
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 1520u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002807B8u | kUnwind; return; } goto L_002807B8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 212u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 100u);
    set32(c.r[7], 0u + 26u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u - 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280928u); set32(c.r[4], c.r[2].w[0] + 168u);  if (depth < kMaxDepth) unit_0028(c, 4u, depth + 1u); else { c.pc = 0x002A0020u; return; } if (c.pc != 0x00280928u) [[unlikely]] return; }
L_00280928:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 752u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 82u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 118u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280944u); set32(c.r[4], c.r[2].w[0] + 168u);  if (depth < kMaxDepth) unit_0027(c, 184u, depth + 1u); else { c.pc = 0x0029FBD0u; return; } if (c.pc != 0x00280944u) [[unlikely]] return; }
L_00280944:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[17].w[0] + 522u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002807FCu | kUnwind; return; } goto L_002807FC; } }
L_0028094C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 220u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 19520u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 19u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 522u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280980u); st8((c.r[17].w[0] + 520u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001F(c, 322u, depth + 1u); else { c.pc = 0x0027E770u; return; } if (c.pc != 0x00280980u) [[unlikely]] return; }
L_00280980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028080Cu | kUnwind; return; } goto L_0028080C; } }
L_00280988:
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    c.budget -= 1;
L_0028098C:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280998u); set32(c.r[4], c.r[2].w[0] + 5632u);  if (depth < kMaxDepth) unit_0047(c, 63u, depth + 1u); else { c.pc = 0x0031CE80u; return; } if (c.pc != 0x00280998u) [[unlikely]] return; }
L_00280998:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 676u), 0u);  if (t) { goto L_002809D8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002809D8; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 527u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002809B4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 529u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00280A3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002809D0u); set32(c.r[4], c.r[17].w[0] + 3520u);  if (depth < kMaxDepth) unit_0053(c, 73u, depth + 1u); else { c.pc = 0x0034CDB0u; return; } if (c.pc != 0x002809D0u) [[unlikely]] return; }
L_002809D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002807A8u | kUnwind; return; } goto L_002807A8; } }
L_002809D8:
    set32(c.r[3], ld32((c.r[17].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002809F8; } }
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[4], ld32((c.r[17].w[0] + 1524u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002809F8; } }
    st32((c.r[17].w[0] + 1520u), 0u);
    c.budget -= 1;
L_002809F8:
    set32(c.r[3], ld32((c.r[17].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002809B4u | kUnwind; return; } goto L_002809B4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00280A20; } }
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[4], ld32((c.r[17].w[0] + 1524u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00280A20; } }
    st32((c.r[17].w[0] + 1520u), 0u);
    c.budget -= 1;
L_00280A20:
    set32(c.r[3], ld32((c.r[17].w[0] + 1520u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 220u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002809B4u | kUnwind; return; } goto L_002809B4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 527u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002809B4u | kUnwind; return; } goto L_002809B4; } }
L_00280A3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00280A40:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00280A50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280A68u); set32(c.r[4], c.r[4].w[0] + 752u);  if (depth < kMaxDepth) unit_0064(c, 315u, depth + 1u); else { c.pc = 0x00392E80u; return; } if (c.pc != 0x00280A68u) [[unlikely]] return; }
L_00280A68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00280A80:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[4].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00280AE0; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00280AE0; } }
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00280DC8; } }
L_00280AE0:
    st32((c.r[16].w[0] + 1440u), 0u);
    c.r[8].d[0] = 0ull & 1ull;
    st32((c.r[16].w[0] + 1416u), 0u);
    set32(c.r[6], 0u - 9u);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 523u));
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[4], 0u - 3u);
    set32(c.r[5], c.r[8].w[0] << 1);
    set32(c.r[3], 0u - 2u);
    set32(c.r[2], 0u + 35u);
    c.r[6].d[0] = c.r[9].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 523u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 523u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 220u));
    c.budget -= 24;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00280BA0; } }
L_00280B40:
    set32(c.r[5], ld32((c.r[16].w[0] + 1360u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00280BAC; } }
L_00280B4C:
    st8((c.r[16].w[0] + 1538u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 530u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00280BD0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 752u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 82u)));
    st16((c.r[16].w[0] + 762u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 220u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 1564u)));  if (t) { goto L_00280B88; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280B88u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_002A(c, 140u, depth + 1u); else { c.pc = 0x002AA2B0u; return; } if (c.pc != 0x00280B88u) [[unlikely]] return; }
L_00280B88:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280B98u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_002A(c, 111u, depth + 1u); else { c.pc = 0x002A9AE0u; return; } if (c.pc != 0x00280B98u) [[unlikely]] return; }
L_00280B98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_00280DCC; } }
L_00280BA0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1494u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00280B40u | kUnwind; return; } goto L_00280B40; } }
L_00280BAC:
    c.r[4].d[0] = ld8((c.r[5].w[0] + 292u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 292u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00280B4Cu | kUnwind; return; } goto L_00280B4C; } }
L_00280BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280BD8u); set32(c.r[4], c.r[16].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 173u, depth + 1u); else { c.pc = 0x00396E30u; return; } if (c.pc != 0x00280BD8u) [[unlikely]] return; }
L_00280BD8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 220u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 19520u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 520u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280C04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 322u, depth + 1u); else { c.pc = 0x0027E770u; return; } if (c.pc != 0x00280C04u) [[unlikely]] return; }
L_00280C04:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[4].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 65u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[2], 0u - 129u);
    set32(c.r[3], c.r[4].w[0] << 7);
    set32(c.r[21], 0u - 2u);
    set32(c.r[18], c.r[4].w[0] << 5);
    set32(c.r[25], c.r[4].w[0] << 1);
    set32(c.r[15], c.r[4].w[0] << 2);
    set32(c.r[14], c.r[4].w[0] << 3);
    set32(c.r[12], c.r[4].w[0] << 4);
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    set32(c.r[10], c.r[4].w[0] << 8);
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    set32(c.r[8], c.r[4].w[0] << 9);
    st8((c.r[16].w[0] + 523u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[7], c.r[4].w[0] << 6);
    c.r[22].d[0] = ld8((c.r[16].w[0] + 523u));
    set32(c.r[6], c.r[4].w[0] << 10);
    set32(c.r[19], 0u - 5u);
    c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[17], 0u - 33u);
    set32(c.r[24], 0u - 3u);
    set32(c.r[13], 0u - 9u);
    set32(c.r[11], 0u - 17u);
    set32(c.r[9], 0u - 257u);
    set32(c.r[23], 0u - 513u);
    set32(c.r[30], 0u - 1025u);
    c.r[22].d[0] = c.r[22].d[0] & c.r[2].d[0];
    c.r[22].d[0] = c.r[22].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 523u), static_cast<std::uint8_t>(c.r[22].w[0]));
    c.r[22].d[0] = ld8((c.r[16].w[0] + 1496u));
    c.r[21].d[0] = c.r[22].d[0] & c.r[21].d[0];
    c.r[4].d[0] = c.r[21].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 1496u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 1484u), 0u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 526u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[19].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[20].d[0];
    st8((c.r[16].w[0] + 526u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 526u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[17].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[18].d[0];
    st8((c.r[16].w[0] + 526u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 672u), 0u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 524u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[24].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[25].d[0];
    st8((c.r[16].w[0] + 524u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 1388u), 0u);
    st32((c.r[16].w[0] + 1392u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1396u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[24].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[25].d[0];
    st32((c.r[16].w[0] + 1396u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1396u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[19].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[15].d[0];
    st32((c.r[16].w[0] + 1396u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1396u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 1396u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1396u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[17].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[18].d[0];
    st32((c.r[16].w[0] + 1396u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1396u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[13].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[14].d[0];
    st32((c.r[16].w[0] + 1396u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1396u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[11].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[12].d[0];
    st32((c.r[16].w[0] + 1396u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1396u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[9].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[10].d[0];
    st32((c.r[16].w[0] + 1396u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1396u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[23].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[8].d[0];
    st32((c.r[16].w[0] + 1396u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1396u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    st32((c.r[16].w[0] + 1396u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1396u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[30].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st32((c.r[16].w[0] + 1396u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 496u), 0u);
    st32((c.r[16].w[0] + 500u), 0u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 220u));
    c.budget -= 105;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 1564u)));  if (t) { goto L_00280DB8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280DB8u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_002A(c, 140u, depth + 1u); else { c.pc = 0x002AA2B0u; return; } if (c.pc != 0x00280DB8u) [[unlikely]] return; }
L_00280DB8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280DC8u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_002A(c, 111u, depth + 1u); else { c.pc = 0x002A9AE0u; return; } if (c.pc != 0x00280DC8u) [[unlikely]] return; }
L_00280DC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_00280DCC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00280E00:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 188u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 160u);
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280E3Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 104u, depth + 1u); else { c.pc = 0x00202720u; return; } if (c.pc != 0x00280E3Cu) [[unlikely]] return; }
L_00280E3C:
    c.f[2] = ld32((c.r[19].w[0]));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[3], c.r[29].w[0] + 148u);
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.f[12] = 0u;
    set32(c.r[6], c.r[29].w[0] + 128u);
    set32(c.r[7], c.r[29].w[0] + 96u);
    set32(c.r[8], 0u + 3u);
    st32((c.r[29].w[0] + 144u), c.f[2]);
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    st32((c.r[3].w[0]), c.f[2]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 8u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 152u), c.f[3]);
    c.f[2] = ld32((c.r[19].w[0] + 12u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[1]);
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[29].w[0] + 156u), c.f[2]);
    st32((c.r[29].w[0] + 136u), 0u);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00280EA8u); st32((c.r[29].w[0] + 132u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 166u, depth + 1u); else { c.pc = 0x00203940u; return; } if (c.pc != 0x00280EA8u) [[unlikely]] return; }
L_00280EA8:
    c.r[7].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00280FFC; } }
L_00280EB4:
    c.r[6].d[0] = ld8((c.r[20].w[0] + 525u));
    c.r[5].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 9u);
    set32(c.r[4], c.r[5].w[0] << 3);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[7].d[0] == 0ull; st8((c.r[20].w[0] + 525u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00280F30; } }
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], 0u - 5u);
    st32((c.r[20].w[0] + 508u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[20].w[0] + 416u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[20].w[0] + 420u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[20].w[0] + 424u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[20].w[0] + 428u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 120u)));
    st16((c.r[20].w[0] + 504u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 122u)));
    st16((c.r[20].w[0] + 506u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[20].w[0] + 524u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[20].w[0] + 524u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 124u)));
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 537u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00280F84; } }
L_00280F30:
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    set32(c.r[6], 0u - 1u);
    set32(c.r[4], 0u - 5u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[3], 0u + 3u);
    st32((c.r[20].w[0] + 508u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[20].w[0] + 416u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[20].w[0] + 420u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[20].w[0] + 424u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[20].w[0] + 428u), c.f[0]);
    st16((c.r[20].w[0] + 504u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[20].w[0] + 506u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[20].w[0] + 524u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[20].w[0] + 524u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[20].w[0] + 537u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 21;
L_00280F84:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0028100C; } }
L_00280F8C:
    set32(c.r[5], ld32((c.r[20].w[0] + 1564u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[16].d[0];  if (t) { goto L_0028103C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 1568u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00281018; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 1572u)));
    st32((c.r[4].w[0] + 1572u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 1572u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00280FC0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 1568u)));
    st32((c.r[4].w[0] + 1568u), c.r[3].w[0]);
    c.budget -= 2;
L_00280FC0:
    st32((c.r[20].w[0] + 1564u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 1564u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 264u)));
    st32((c.r[20].w[0] + 1572u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 1572u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00280FE4; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 1560u)));
    st32((c.r[4].w[0] + 1568u), c.r[3].w[0]);
    c.budget -= 2;
L_00280FE4:
    set32(c.r[4], ld32((c.r[20].w[0] + 1560u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 1564u)));
    st32((c.r[3].w[0] + 264u), c.r[4].w[0]);
    st32((c.r[20].w[0] + 1568u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00281040; } }
L_00280FFC:
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[17], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00280EB4u | kUnwind; return; } goto L_00280EB4; } }
L_0028100C:
    c.f[0] = ld32((c.r[20].w[0] + 508u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00280F8Cu | kUnwind; return; } goto L_00280F8C; } }
L_00281018:
    set32(c.r[3], ld32((c.r[20].w[0] + 1572u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00281034; } }
    st32((c.r[5].w[0] + 264u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 1572u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 1568u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00280FC0u | kUnwind; return; } goto L_00280FC0; } }
L_00281034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 264u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00280FC0u | kUnwind; return; } goto L_00280FC0; } }
L_0028103C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00281040:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00281060:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    st32((c.r[4].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[4].w[0] + 124u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1564u)));
    st32((c.r[4].w[0] + 1556u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 25;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[16].w[0] + 32u);  if (t) { goto L_00281404; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 524u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[4] = ld32((c.r[19].w[0]));
    set32(c.r[3], 0u - 9u);
    c.f[2] = c.r[2].w[0];
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.f[3] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 524u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 32u), c.f[4]);
    st32((c.r[16].w[0] + 36u), c.f[3]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 29752u)));
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1564u)));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[3], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.r[3].w[0] >> 4);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[6], c.f[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] >> 4);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 39;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[5].w[0] + c.r[2].w[0]);  if (t) { goto L_002814F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[17].d[0];  if (t) { goto L_002811C4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1568u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002814CC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1572u)));
    st32((c.r[3].w[0] + 1572u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1572u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00281190; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1568u)));
    st32((c.r[3].w[0] + 1568u), c.r[2].w[0]);
    c.budget -= 2;
L_00281190:
    st32((c.r[16].w[0] + 1564u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1564u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 264u)));
    st32((c.r[16].w[0] + 1572u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1572u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002811B4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1560u)));
    st32((c.r[3].w[0] + 1568u), c.r[2].w[0]);
    c.budget -= 2;
L_002811B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 1560u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1564u)));
    st32((c.r[2].w[0] + 264u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1568u), 0u);
    c.budget -= 4;
L_002811C4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002811E0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002811E0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 140u, depth + 1u); else { c.pc = 0x002AA2B0u; return; } if (c.pc != 0x002811E0u) [[unlikely]] return; }
L_002811E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002811F0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 111u, depth + 1u); else { c.pc = 0x002A9AE0u; return; } if (c.pc != 0x002811F0u) [[unlikely]] return; }
L_002811F0:
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.budget -= 1;
L_002811F4:
    set32(c.r[4], c.r[16].w[0] + 3504u);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[16].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[16].w[0] + 124u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1564u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281220u); st32((c.r[16].w[0] + 1556u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0053(c, 94u, depth + 1u); else { c.pc = 0x0034D640u; return; } if (c.pc != 0x00281220u) [[unlikely]] return; }
L_00281220:
    st8((c.r[16].w[0] + 3552u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = 0ull & 1ull;
    st32((c.r[16].w[0] + 3568u), 0u);
    set32(c.r[3], 0u - 2u);
    st32((c.r[16].w[0] + 3572u), 0u);
    set32(c.r[13], 0u - 3u);
    st32((c.r[16].w[0] + 3576u), 0u);
    set32(c.r[14], c.r[4].w[0] << 1);
    c.r[15].d[0] = ld8((c.r[16].w[0] + 724u));
    set32(c.r[9], 0u - 17u);
    set32(c.r[12], c.r[4].w[0] << 4);
    set32(c.r[10], 0u - 5u);
    set32(c.r[11], c.r[4].w[0] << 2);
    set32(c.r[7], 0u - 9u);
    set32(c.r[8], c.r[4].w[0] << 3);
    set32(c.r[5], 0u - 129u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[15].d[0] = c.r[15].d[0] & c.r[3].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 724u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld8((c.r[16].w[0] + 724u));
    c.r[13].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st8((c.r[16].w[0] + 724u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[16].w[0] + 724u));
    c.r[9].d[0] = c.r[13].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[12].d[0];
    st8((c.r[16].w[0] + 724u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[16].w[0] + 496u), 0u);
    st32((c.r[16].w[0] + 500u), 0u);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 525u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[10].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[11].d[0];
    st8((c.r[16].w[0] + 525u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[16].w[0] + 530u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[10].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[11].d[0];
    st8((c.r[16].w[0] + 530u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[16].w[0] + 525u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 525u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 526u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.budget -= 47;
    { const bool t = c.r[18].d[0] != 0ull; st8((c.r[16].w[0] + 526u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00281520; } }
L_002812DC:
    st32((c.r[16].w[0] + 1472u), 0u);
    c.r[7].d[0] = 0ull & 1ull;
    st32((c.r[16].w[0] + 1440u), 0u);
    set32(c.r[5], 0u - 3u);
    st32((c.r[16].w[0] + 1416u), 0u);
    set32(c.r[6], c.r[7].w[0] << 1);
    st32((c.r[16].w[0] + 1388u), 0u);
    set32(c.r[24], 0u - 5u);
    st32((c.r[16].w[0] + 1392u), 0u);
    set32(c.r[25], c.r[7].w[0] << 2);
    set32(c.r[8], ld32((c.r[16].w[0] + 1396u)));
    set32(c.r[18], 0u - 129u);
    set32(c.r[19], c.r[7].w[0] << 7);
    set32(c.r[15], 0u - 33u);
    set32(c.r[17], c.r[7].w[0] << 5);
    set32(c.r[3], 0u - 9u);
    set32(c.r[4], c.r[7].w[0] << 3);
    set32(c.r[13], 0u - 17u);
    set32(c.r[14], c.r[7].w[0] << 4);
    set32(c.r[11], 0u - 257u);
    set32(c.r[12], c.r[7].w[0] << 8);
    set32(c.r[9], 0u - 513u);
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    set32(c.r[10], c.r[7].w[0] << 9);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    set32(c.r[8], c.r[7].w[0] << 6);
    st32((c.r[16].w[0] + 1396u), c.r[5].w[0]);
    set32(c.r[6], c.r[7].w[0] << 10);
    set32(c.r[20], ld32((c.r[16].w[0] + 1396u)));
    set32(c.r[7], 0u - 65u);
    set32(c.r[5], 0u - 1025u);
    c.r[24].d[0] = c.r[20].d[0] & c.r[24].d[0];
    c.r[24].d[0] = c.r[24].d[0] | c.r[25].d[0];
    st32((c.r[16].w[0] + 1396u), c.r[24].w[0]);
    set32(c.r[24], ld32((c.r[16].w[0] + 1396u)));
    c.r[18].d[0] = c.r[24].d[0] & c.r[18].d[0];
    c.r[18].d[0] = c.r[18].d[0] | c.r[19].d[0];
    st32((c.r[16].w[0] + 1396u), c.r[18].w[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 1396u)));
    c.r[15].d[0] = c.r[18].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[17].d[0];
    st32((c.r[16].w[0] + 1396u), c.r[15].w[0]);
    set32(c.r[15], ld32((c.r[16].w[0] + 1396u)));
    c.r[15].d[0] = c.r[15].d[0] & c.r[3].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 1396u), c.r[15].w[0]);
    set32(c.r[15], ld32((c.r[16].w[0] + 1396u)));
    c.r[13].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st32((c.r[16].w[0] + 1396u), c.r[13].w[0]);
    set32(c.r[13], ld32((c.r[16].w[0] + 1396u)));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st32((c.r[16].w[0] + 1396u), c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[16].w[0] + 1396u)));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st32((c.r[16].w[0] + 1396u), c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[16].w[0] + 1396u)));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st32((c.r[16].w[0] + 1396u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 1396u)));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st32((c.r[16].w[0] + 1396u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 1456u), 0u);
    st32((c.r[16].w[0] + 1460u), 0u);
    st32((c.r[16].w[0] + 1464u), 0u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 526u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 74;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00281538; } }
L_00281404:
    c.f[3] = ld32((c.r[19].w[0]));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[29].w[0] + 96u), c.f[3]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028142Cu); st32((c.r[29].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0020(c, 82u, depth + 1u); else { c.pc = 0x00280E00u; return; } if (c.pc != 0x0028142Cu) [[unlikely]] return; }
L_0028142C:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22911u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002811F0u | kUnwind; return; } goto L_002811F0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028147C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 1556u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028147Cu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 161u, depth + 1u); else { c.pc = 0x002AA7C0u; return; } if (c.pc != 0x0028147Cu) [[unlikely]] return; }
L_0028147C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1556u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281490u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 130u, depth + 1u); else { c.pc = 0x002A9FC0u; return; } if (c.pc != 0x00281490u) [[unlikely]] return; }
L_00281490:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 1564u)));  if (t) { goto L_002814B0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002814B0u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 149u, depth + 1u); else { c.pc = 0x002AA4A0u; return; } if (c.pc != 0x002814B0u) [[unlikely]] return; }
L_002814B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002814C4u); set32(c.r[6], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_002A(c, 120u, depth + 1u); else { c.pc = 0x002A9CD0u; return; } if (c.pc != 0x002814C4u) [[unlikely]] return; }
L_002814C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 32u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002811F4u | kUnwind; return; } goto L_002811F4; } }
L_002814CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 1572u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002814E8; } }
    st32((c.r[4].w[0] + 264u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1572u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 1568u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00281190u | kUnwind; return; } goto L_00281190; } }
L_002814E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 264u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00281190u | kUnwind; return; } goto L_00281190; } }
L_002814F0:
    st32((c.r[16].w[0] + 1564u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1564u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 264u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00281510; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1560u)));
    st32((c.r[3].w[0] + 1568u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1572u), c.r[3].w[0]);
    c.budget -= 3;
L_00281510:
    set32(c.r[3], ld32((c.r[16].w[0] + 1560u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1564u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 264u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002811C4u | kUnwind; return; } goto L_002811C4; } }
L_00281520:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 524u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 524u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 536u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002812DCu | kUnwind; return; } goto L_002812DC; } }
L_00281538:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00281560:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1564u)));
    c.budget -= 6;
    { c.r[6].d[0] = c.r[2].d[0] + 0ull;  [[clang::musttail]] return unit_002A(c, 18u, depth); }
L_00281580:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1564u)));
    c.budget -= 6;
    { c.r[6].d[0] = c.r[2].d[0] + 0ull;  [[clang::musttail]] return unit_002A(c, 25u, depth); }
L_002815A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002815C8u); set32(c.r[5], c.r[16].w[0] + 68u);  if (depth < kMaxDepth) unit_0028(c, 278u, depth + 1u); else { c.pc = 0x002A3460u; return; } if (c.pc != 0x002815C8u) [[unlikely]] return; }
L_002815C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 212u)));
    set32(c.r[5], c.r[16].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002815D8u); set32(c.r[4], c.r[2].w[0] + 168u);  if (depth < kMaxDepth) unit_0027(c, 163u, depth + 1u); else { c.pc = 0x0029F490u; return; } if (c.pc != 0x002815D8u) [[unlikely]] return; }
L_002815D8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    st16((c.r[17].w[0] + 762u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 216u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002815ECu); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0094(c, 80u, depth + 1u); else { c.pc = 0x00451080u; return; } if (c.pc != 0x002815ECu) [[unlikely]] return; }
L_002815EC:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 212u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 212u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 44u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00281610; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00281610:
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 212u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(31ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002816E8; } }
L_00281640:
    set32(c.r[4], ld32((c.r[17].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028164Cu); set32(c.r[5], c.r[16].w[0] + 102u);  if (depth < kMaxDepth) unit_0028(c, 147u, depth + 1u); else { c.pc = 0x002A19F0u; return; } if (c.pc != 0x0028164Cu) [[unlikely]] return; }
L_0028164C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 92u));
    set32(c.r[2], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002816F4; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281668u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 217u, depth + 1u); else { c.pc = 0x002A2720u; return; } if (c.pc != 0x00281668u) [[unlikely]] return; }
L_00281668:
    set32(c.r[18], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 1;
L_0028166C:
    c.r[3].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00281704; } }
    c.r[18].d[0] = ld8((c.r[16].w[0] + 100u));
    c.budget -= 1;
L_0028167C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00281740; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 101u));
    c.budget -= 1;
L_00281688:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00281764; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 524u));
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 524u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 1352u)));
    st32((c.r[17].w[0] + 1372u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 1364u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_00281764; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 212u)));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 1364u)));
    st8((c.r[3].w[0] + 172u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00281768; } }
L_002816E8:
    set32(c.r[2], 0u + 30u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 44u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00281640u | kUnwind; return; } goto L_00281640; } }
L_002816F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002816FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 213u, depth + 1u); else { c.pc = 0x002A2690u; return; } if (c.pc != 0x002816FCu) [[unlikely]] return; }
L_002816FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[16].w[0] + 96u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028166Cu | kUnwind; return; } goto L_0028166C; } }
L_00281704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028170Cu); set32(c.r[4], ld32((c.r[17].w[0] + 212u)));  if (depth < kMaxDepth) unit_0028(c, 80u, depth + 1u); else { c.pc = 0x002A1280u; return; } if (c.pc != 0x0028170Cu) [[unlikely]] return; }
L_0028170C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00281720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028171Cu); set32(c.r[4], ld32((c.r[17].w[0] + 1564u)));  if (depth < kMaxDepth) unit_002A(c, 192u, depth + 1u); else { c.pc = 0x002AB100u; return; } if (c.pc != 0x0028171Cu) [[unlikely]] return; }
L_0028171C:
    c.budget -= 1;
L_00281720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281728u); set32(c.r[4], ld32((c.r[17].w[0] + 212u)));  if (depth < kMaxDepth) unit_0028(c, 82u, depth + 1u); else { c.pc = 0x002A12A0u; return; } if (c.pc != 0x00281728u) [[unlikely]] return; }
L_00281728:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00281704u | kUnwind; return; } goto L_00281704; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[16].w[0] + 100u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028167Cu | kUnwind; return; } goto L_0028167C; } }
L_00281740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281748u); set32(c.r[4], ld32((c.r[17].w[0] + 212u)));  if (depth < kMaxDepth) unit_0028(c, 79u, depth + 1u); else { c.pc = 0x002A1270u; return; } if (c.pc != 0x00281748u) [[unlikely]] return; }
L_00281748:
    set32(c.r[3], c.r[18].w[0] - 1u);
    c.r[18].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00281740u | kUnwind; return; } goto L_00281740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 101u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00281688u | kUnwind; return; } goto L_00281688; } }
L_00281764:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00281768:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00281780:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 212u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 12u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002817A8u); set32(c.r[4], c.r[2].w[0] + 168u);  if (depth < kMaxDepth) unit_0027(c, 162u, depth + 1u); else { c.pc = 0x0029F3E0u; return; } if (c.pc != 0x002817A8u) [[unlikely]] return; }
L_002817A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002817B4u); set32(c.r[5], c.r[16].w[0] + 68u);  if (depth < kMaxDepth) unit_0028(c, 277u, depth + 1u); else { c.pc = 0x002A3420u; return; } if (c.pc != 0x002817B4u) [[unlikely]] return; }
L_002817B4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 762u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 216u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 26u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 212u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 44u)));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 212u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002817E0u); set32(c.r[5], c.r[16].w[0] + 102u);  if (depth < kMaxDepth) unit_0028(c, 148u, depth + 1u); else { c.pc = 0x002A1A30u; return; } if (c.pc != 0x002817E0u) [[unlikely]] return; }
L_002817E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 29024u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 6u);  if (t) { goto L_0028181C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00281818; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028180C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 6u);  if (t) { goto L_0028181C; } }
L_0028180C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 29020u)));  if (t) { goto L_0028181C; } }
L_00281818:
    set32(c.r[4], 0u + 6u);
    c.budget -= 1;
L_0028181C:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00281878; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1536u)));
    set32(c.r[2], 0u + 4u);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00281880; } }
    st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_00281844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028184Cu); set32(c.r[4], ld32((c.r[17].w[0] + 212u)));  if (depth < kMaxDepth) unit_0028(c, 80u, depth + 1u); else { c.pc = 0x002A1280u; return; } if (c.pc != 0x0028184Cu) [[unlikely]] return; }
L_0028184C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028185Cu); set32(c.r[4], ld32((c.r[17].w[0] + 212u)));  if (depth < kMaxDepth) unit_0028(c, 78u, depth + 1u); else { c.pc = 0x002A1260u; return; } if (c.pc != 0x0028185Cu) [[unlikely]] return; }
L_0028185C:
    st8((c.r[16].w[0] + 100u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 101u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00281890; } }
L_00281878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00281844u | kUnwind; return; } goto L_00281844; } }
L_00281880:
    set32(c.r[2], ld32((c.r[17].w[0] + 212u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00281844u | kUnwind; return; } goto L_00281844; } }
L_00281890:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002818B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 672u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002818D8u); c.r[18].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002818D8u) [[unlikely]] return; }
L_002818D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028197C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 672u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00281938; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 676u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00281938; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 264u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00281908u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00281908u) [[unlikely]] return; }
L_00281908:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00281938; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 5760u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00281938; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 676u)));
    c.f[12] = 0u;
    set32(c.r[4], c.r[3].w[0] + 5632u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281938u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 103u, depth + 1u); else { c.pc = 0x0031D1F0u; return; } if (c.pc != 0x00281938u) [[unlikely]] return; }
L_00281938:
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 5760u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028197C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 672u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0028196C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 264u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00281964u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00281964u) [[unlikely]] return; }
L_00281964:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028197C; } }
L_0028196C:
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028197Cu); set32(c.r[4], c.r[2].w[0] + 5632u);  if (depth < kMaxDepth) unit_0047(c, 63u, depth + 1u); else { c.pc = 0x0031CE80u; return; } if (c.pc != 0x0028197Cu) [[unlikely]] return; }
L_0028197C:
    st32((c.r[18].w[0] + 676u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 1564u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028198Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 32u, depth + 1u); else { c.pc = 0x002A8700u; return; } if (c.pc != 0x0028198Cu) [[unlikely]] return; }
L_0028198C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281994u); set32(c.r[4], c.r[18].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 29u, depth + 1u); else { c.pc = 0x003946C0u; return; } if (c.pc != 0x00281994u) [[unlikely]] return; }
L_00281994:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 531u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002819B4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002819B4u); set32(c.r[4], c.r[4].w[0] - 16848u);  if (depth < kMaxDepth) unit_007A(c, 231u, depth + 1u); else { c.pc = 0x003EA0E0u; return; } if (c.pc != 0x002819B4u) [[unlikely]] return; }
L_002819B4:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 544u));
    set32(c.r[2], 0u - 3u);
    c.r[9].d[0] = 0ull & 1ull;
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[12], 0u - 17u);
    c.r[13].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[10], 0u - 2049u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[8], 0u - 2u);
    set32(c.r[6], 0u - 129u);
    set32(c.r[7], c.r[9].w[0] << 7);
    set32(c.r[4], c.r[18].w[0] + 544u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[5].d[0] = c.r[2].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[9].w[0] << 6);
    st16((c.r[18].w[0] + 544u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], 0u - 65u);
    c.r[14].d[0] = ld16((c.r[18].w[0] + 544u));
    set32(c.r[5], 0u - 1u);
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st16((c.r[18].w[0] + 544u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld16((c.r[18].w[0] + 544u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st16((c.r[18].w[0] + 544u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[18].w[0] + 524u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[18].w[0] + 524u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[18].w[0] + 523u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[18].w[0] + 523u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[18].w[0] + 524u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281A50u); st8((c.r[18].w[0] + 524u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0023(c, 189u, depth + 1u); else { c.pc = 0x0028DDB0u; return; } if (c.pc != 0x00281A50u) [[unlikely]] return; }
L_00281A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281A58u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 255u, depth + 1u); else { c.pc = 0x003D7EA0u; return; } if (c.pc != 0x00281A58u) [[unlikely]] return; }
L_00281A58:
    set32(c.r[4], ld32((c.r[18].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00281A8C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 296u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00281A78u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00281A78u) [[unlikely]] return; }
L_00281A78:
    set32(c.r[4], ld32((c.r[18].w[0] + 1348u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00281A8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00281A8Cu) [[unlikely]] return; }
L_00281A8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[18].w[0] + 1072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281A9Cu); set32(c.r[4], c.r[4].w[0] + 8912u);  if (depth < kMaxDepth) unit_004F(c, 71u, depth + 1u); else { c.pc = 0x0033D6A0u; return; } if (c.pc != 0x00281A9Cu) [[unlikely]] return; }
L_00281A9C:
    st8((c.r[18].w[0] + 1267u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[18].w[0] + 1072u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281AB0u); st8((c.r[18].w[0] + 1266u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0040(c, 70u, depth + 1u); else { c.pc = 0x00301C10u; return; } if (c.pc != 0x00281AB0u) [[unlikely]] return; }
L_00281AB0:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1202u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[2], 0u - 9u);
    set32(c.r[12], c.r[3].w[0] << 3);
    set32(c.r[10], 0u - 65u);
    set32(c.r[11], c.r[3].w[0] << 6);
    set32(c.r[7], c.r[3].w[0] << 8);
    set32(c.r[8], 0u - 33u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[6], 0u - 257u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[3], c.r[3].w[0] << 9);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[12].d[0] = c.r[2].d[0] | c.r[12].d[0];
    set32(c.r[4], 0u - 129u);
    st16((c.r[18].w[0] + 1202u), static_cast<std::uint16_t>(c.r[12].w[0]));
    set32(c.r[2], 0u - 513u);
    c.r[12].d[0] = ld16((c.r[18].w[0] + 1202u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st16((c.r[18].w[0] + 1202u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld16((c.r[18].w[0] + 1202u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[18].w[0] + 1202u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[18].w[0] + 1202u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[18].w[0] + 1202u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[18].w[0] + 1202u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[18].w[0] + 1202u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1202u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[18].w[0] + 1202u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 1236u), 0u);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 522u));
    c.r[2].d[0] = c.r[2].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 42;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00281B90; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 1564u)));
    c.budget -= 1;
L_00281B5C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00281BE4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 1568u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00281BC4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1572u)));
    st32((c.r[3].w[0] + 1572u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 1572u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00281BE4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1568u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 1568u), c.r[2].w[0]);  if (t) { goto L_00281BE4; } }
L_00281B90:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 220u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 19520u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 19u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281BBCu); st32((c.r[3].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 322u, depth + 1u); else { c.pc = 0x0027E770u; return; } if (c.pc != 0x00281BBCu) [[unlikely]] return; }
L_00281BBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 1564u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00281B5Cu | kUnwind; return; } goto L_00281B5C; } }
L_00281BC4:
    set32(c.r[2], ld32((c.r[18].w[0] + 1572u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00281BE0; } }
    st32((c.r[4].w[0] + 264u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 1572u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 1568u), 0u);  if (t) { goto L_00281BE4; } }
L_00281BE0:
    st32((c.r[4].w[0] + 264u), 0u);
    c.budget -= 1;
L_00281BE4:
    st32((c.r[18].w[0] + 1564u), 0u);
    st32((c.r[18].w[0] + 1568u), 0u);
    st32((c.r[18].w[0] + 1572u), 0u);
    st32((c.r[18].w[0] + 1556u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1336u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00281C48; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00281C08:
    set32(c.r[2], ld32((c.r[18].w[0] + 1340u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 1340u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00281C34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00281C34u) [[unlikely]] return; }
L_00281C34:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1336u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00281C08u | kUnwind; return; } goto L_00281C08; } }
L_00281C48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281C50u); set32(c.r[4], c.r[18].w[0] + 1340u);  if (depth < kMaxDepth) unit_0021(c, 152u, depth + 1u); else { c.pc = 0x002862B0u; return; } if (c.pc != 0x00281C50u) [[unlikely]] return; }
L_00281C50:
    st8((c.r[18].w[0] + 1336u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[18].w[0] + 1360u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00281C6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281C68u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0066(c, 235u, depth + 1u); else { c.pc = 0x0039A790u; return; } if (c.pc != 0x00281C68u) [[unlikely]] return; }
L_00281C68:
    st32((c.r[18].w[0] + 1360u), 0u);
    c.budget -= 1;
L_00281C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281C74u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 298u, depth + 1u); else { c.pc = 0x00283C70u; return; } if (c.pc != 0x00281C74u) [[unlikely]] return; }
L_00281C74:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 1497u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 1497u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1497u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00281CD4; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00281CC4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281CBCu); set32(c.r[4], c.r[4].w[0] - 16128u);  if (depth < kMaxDepth) unit_0086(c, 141u, depth + 1u); else { c.pc = 0x00419E60u; return; } if (c.pc != 0x00281CBCu) [[unlikely]] return; }
L_00281CBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[18].w[0] + 240u);  if (t) { goto L_00281CD8; } }
L_00281CC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281CD4u); set32(c.r[4], c.r[4].w[0] - 16128u);  if (depth < kMaxDepth) unit_0086(c, 145u, depth + 1u); else { c.pc = 0x0041A030u; return; } if (c.pc != 0x00281CD4u) [[unlikely]] return; }
L_00281CD4:
    set32(c.r[4], c.r[18].w[0] + 240u);
    c.budget -= 1;
L_00281CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281CE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 303u, depth + 1u); else { c.pc = 0x002468F0u; return; } if (c.pc != 0x00281CE0u) [[unlikely]] return; }
L_00281CE0:
    set32(c.r[4], ld32((c.r[18].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00281D6C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00281D64; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 216u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 18800u);
    c.budget -= 4;
L_00281D08:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00281D44; } }
    c.r[16].d[0] = c.r[5].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] - 18800u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281D34u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0094(c, 85u, depth + 1u); else { c.pc = 0x00451110u; return; } if (c.pc != 0x00281D34u) [[unlikely]] return; }
L_00281D34:
    set32(c.r[2], c.r[28].w[0] - 29848u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00281D6C; } }
L_00281D44:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[2].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00281D08u | kUnwind; return; } goto L_00281D08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 216u), 0u);  if (t) { goto L_00281D70; } }
L_00281D64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281D6Cu);  if (depth < kMaxDepth) unit_0094(c, 85u, depth + 1u); else { c.pc = 0x00451110u; return; } if (c.pc != 0x00281D6Cu) [[unlikely]] return; }
L_00281D6C:
    st32((c.r[18].w[0] + 216u), 0u);
    c.budget -= 1;
L_00281D70:
    set32(c.r[4], ld32((c.r[18].w[0] + 1320u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00281D84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281D84u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 273u, depth + 1u); else { c.pc = 0x003BBCC0u; return; } if (c.pc != 0x00281D84u) [[unlikely]] return; }
L_00281D84:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 531u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00281DA8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281DA8u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 116u, depth + 1u); else { c.pc = 0x002BCC00u; return; } if (c.pc != 0x00281DA8u) [[unlikely]] return; }
L_00281DA8:
    c.r[8].d[0] = ld8((c.r[18].w[0] + 523u));
    set32(c.r[6], 0u - 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[4], c.r[4].w[0] - 15840u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[18].w[0] + 523u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[18].w[0] + 523u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281DF0u); st32((c.r[18].w[0] + 1416u), 0u);  if (depth < kMaxDepth) unit_0091(c, 158u, depth + 1u); else { c.pc = 0x004463C0u; return; } if (c.pc != 0x00281DF0u) [[unlikely]] return; }
L_00281DF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281E00u); set32(c.r[4], c.r[4].w[0] - 14992u);  if (depth < kMaxDepth) unit_0091(c, 158u, depth + 1u); else { c.pc = 0x004463C0u; return; } if (c.pc != 0x00281E00u) [[unlikely]] return; }
L_00281E00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281E10u); set32(c.r[4], c.r[4].w[0] - 14144u);  if (depth < kMaxDepth) unit_0091(c, 158u, depth + 1u); else { c.pc = 0x004463C0u; return; } if (c.pc != 0x00281E10u) [[unlikely]] return; }
L_00281E10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00281E20u); set32(c.r[4], c.r[4].w[0] - 13072u);  if (depth < kMaxDepth) unit_0091(c, 158u, depth + 1u); else { c.pc = 0x004463C0u; return; } if (c.pc != 0x00281E20u) [[unlikely]] return; }
L_00281E20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00281E40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00281E50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00281E60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00281E70:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 224u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 224u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0] + 224u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00281EC4u); c.r[19].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00281EC4u) [[unlikely]] return; }
L_00281EC4:
    c.f[5] = ld32((c.r[19].w[0] + 16u));
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    c.f[4] = ld32((c.r[19].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.f[3] = ld32((c.r[19].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[1] = ld32((c.r[29].w[0] + 188u));
    c.r[6].d[0] = 0ull | 0ull;
    c.f[2] = ld32((c.r[19].w[0] + 28u));
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.f[0] = c.r[2].w[0];
    c.r[6].d[0] = c.r[6].d[0] << 16;
    st32((c.r[20].w[0] + 464u), c.f[5]);
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    st32((c.r[20].w[0] + 468u), c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    st32((c.r[20].w[0] + 472u), c.f[3]);
    c.r[4].d[0] = c.r[2].d[0] | 4059ull;
    st32((c.r[20].w[0] + 476u), c.f[1]);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 93u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[7], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[2], 0u - 33u);
    c.f[0] = c.r[4].w[0];
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    st32((c.r[29].w[0] + 184u), c.f[3]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.f[1]);
    st32((c.r[29].w[0] + 176u), c.f[5]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.f[3] = c.r[5].w[0];
    st32((c.r[29].w[0] + 180u), c.f[4]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[20].w[0] + 104u), c.f[0]);
    c.r[4].d[0] = ld8((c.r[20].w[0] + 524u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 46;
    { const bool t = c.r[7].d[0] != 0ull; st8((c.r[20].w[0] + 524u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00282114; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 1;
L_00281F80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[3].w[0] - 19520u);
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 28u));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[6].d[0] = ld8((c.r[20].w[0] + 220u));
    set32(c.r[3], c.r[6].w[0] - 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(63ll) ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00282138; } }
    c.r[4].d[0] = c.r[5].d[0] << (c.r[3].w[0] & 63u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[3].d[0] | 96ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00282138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00282138; } }
L_00281FE4:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00282008; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & 39ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00282008; } }
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_00282008:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00282014; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00282014:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028203C; } }
    c.f[2] = ld32((c.r[19].w[0] + 16u));
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.f[1] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    st32((c.r[29].w[0] + 160u), c.f[2]);
    st32((c.r[29].w[0] + 164u), c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 168u), c.f[0]);  if (t) { goto L_00282060; } }
L_0028203C:
    c.f[3] = ld32((c.r[19].w[0]));
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[29].w[0] + 144u), c.f[3]);
    st32((c.r[29].w[0] + 148u), c.f[2]);
    st32((c.r[29].w[0] + 152u), c.f[1]);
    st32((c.r[29].w[0] + 156u), c.f[0]);
    c.budget -= 9;
L_00282060:
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[16], c.r[29].w[0] + 200u);
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[29].w[0] + 196u), c.f[2]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    set32(c.r[3], c.r[2].w[0] >> 4);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    st32((c.r[29].w[0] + 200u), c.f[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    st32((c.r[29].w[0] + 204u), c.f[2]);
    set32(c.r[2], c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 1564u)));
    set32(c.r[5], c.r[2].w[0] >> 4);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 34;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_00282168; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 1568u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00282148; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 1572u)));
    st32((c.r[3].w[0] + 1572u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 1572u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00282168; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 1568u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 1568u), c.r[2].w[0]);  if (t) { goto L_00282168; } }
L_00282114:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 3768u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282130u); c.r[6].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_006E(c, 285u, depth + 1u); else { c.pc = 0x003BBF60u; return; } if (c.pc != 0x00282130u) [[unlikely]] return; }
L_00282130:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 136u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00281F80u | kUnwind; return; } goto L_00281F80; } }
L_00282138:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00282014u | kUnwind; return; } goto L_00282014; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[6].w[0] - 67u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00281FE4u | kUnwind; return; } goto L_00281FE4; } }
L_00282148:
    set32(c.r[2], ld32((c.r[20].w[0] + 1572u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00282164; } }
    st32((c.r[4].w[0] + 264u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 1572u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 1568u), 0u);  if (t) { goto L_00282168; } }
L_00282164:
    st32((c.r[4].w[0] + 264u), 0u);
    c.budget -= 1;
L_00282168:
    st32((c.r[20].w[0] + 1564u), 0u);
    st32((c.r[20].w[0] + 1568u), 0u);
    st32((c.r[20].w[0] + 1572u), 0u);
    st32((c.r[20].w[0] + 1564u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 1564u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 264u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00282194; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 1560u)));
    st32((c.r[3].w[0] + 1568u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 1572u), c.r[3].w[0]);
    c.budget -= 3;
L_00282194:
    set32(c.r[3], ld32((c.r[20].w[0] + 1560u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[20].w[0] + 1564u)));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[2].w[0] + 264u), c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[20].w[0] + 220u));
    set32(c.r[2], c.r[5].w[0] - 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(63ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002833DC; } }
    c.r[3].d[0] = c.r[4].d[0] << (c.r[2].w[0] & 63u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[2].d[0] | 96ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002833DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002833DC; } }
L_002821E4:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00282208; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & 39ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00282208; } }
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_00282208:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00282214; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00282214:
    c.r[2].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282228u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0020(c, 82u, depth + 1u); else { c.pc = 0x00280E00u; return; } if (c.pc != 0x00282228u) [[unlikely]] return; }
L_00282228:
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[4], c.r[20].w[0] + 240u);
    st32((c.r[20].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    st32((c.r[20].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[20].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 204u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282250u); st32((c.r[20].w[0] + 44u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 311u, depth + 1u); else { c.pc = 0x00246CD0u; return; } if (c.pc != 0x00282250u) [[unlikely]] return; }
L_00282250:
    set32(c.r[2], c.r[20].w[0] + 1576u);
    st32((c.r[20].w[0] + 1556u), 0u);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    st32((c.r[20].w[0] + 3500u), c.r[2].w[0]);
    c.budget -= 7;
L_0028226C:
    set32(c.r[3], c.r[20].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 1576u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 8u);
    st8((c.r[3].w[0] + 1577u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1916ll) ? 1ull : 0ull;
    st8((c.r[3].w[0] + 1578u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 1579u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 1580u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 1581u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 1582u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0] + 1583u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028226Cu | kUnwind; return; } goto L_0028226C; } }
    set32(c.r[3], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[3].w[0] + 1576u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st8((c.r[2].w[0] + 1576u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = 0ull & 1ull;
    set32(c.r[2], c.r[4].w[0] + 2u);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[18], 0u - 5u);
    set32(c.r[2], c.r[4].w[0] + 3u);
    st8((c.r[3].w[0] + 1576u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[4], 0u - 9u);
    st8((c.r[2].w[0] + 1576u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[6].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    st32((c.r[20].w[0] + 64u), 0u);
    st32((c.r[20].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[24], c.r[6].w[0] << 2);
    st32((c.r[20].w[0] + 72u), 0u);
    set32(c.r[2], 0u - 3u);
    c.r[7].d[0] = ld8((c.r[20].w[0] + 524u));
    set32(c.r[17], 0u - 2u);
    set32(c.r[15], 0u - 17u);
    set32(c.r[16], c.r[6].w[0] << 4);
    set32(c.r[13], 0u - 33u);
    set32(c.r[14], c.r[6].w[0] << 5);
    set32(c.r[11], 0u - 65u);
    set32(c.r[12], c.r[6].w[0] << 6);
    set32(c.r[9], 0u - 129u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[8], c.r[6].w[0] << 7);
    set32(c.r[22], 0u + 76u);
    c.r[7].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[5].d[0];
    st8((c.r[20].w[0] + 524u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st16((c.r[20].w[0] + 1494u), static_cast<std::uint16_t>(0u));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[25].d[0] = ld8((c.r[20].w[0] + 1496u));
    c.r[25].d[0] = c.r[25].d[0] & c.r[2].d[0];
    c.r[25].d[0] = c.r[25].d[0] | c.r[3].d[0];
    st8((c.r[20].w[0] + 1496u), static_cast<std::uint8_t>(c.r[25].w[0]));
    c.r[25].d[0] = ld8((c.r[20].w[0] + 1496u));
    c.r[18].d[0] = c.r[25].d[0] & c.r[18].d[0];
    c.r[18].d[0] = c.r[18].d[0] | c.r[24].d[0];
    st8((c.r[20].w[0] + 1496u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[18].d[0] = ld8((c.r[20].w[0] + 523u));
    c.r[4].d[0] = c.r[18].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[20].w[0] + 523u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[20].w[0] + 523u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st8((c.r[20].w[0] + 523u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[20].w[0] + 530u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st8((c.r[20].w[0] + 530u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[20].w[0] + 529u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st8((c.r[20].w[0] + 529u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[20].w[0] + 526u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[17].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[20].w[0] + 526u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[20].w[0] + 527u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 528u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld8((c.r[20].w[0] + 524u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[15].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[16].d[0];
    st8((c.r[20].w[0] + 524u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[20].w[0] + 1497u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[20].w[0] + 1497u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 525u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[15].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[16].d[0];
    st8((c.r[20].w[0] + 525u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 529u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[15].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[16].d[0];
    st8((c.r[20].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 525u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[13].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[14].d[0];
    st8((c.r[20].w[0] + 525u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 525u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[11].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[12].d[0];
    st8((c.r[20].w[0] + 525u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 525u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[10].d[0];
    st8((c.r[20].w[0] + 525u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[11].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[12].d[0];
    st8((c.r[20].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[13].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[14].d[0];
    st8((c.r[20].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st8((c.r[20].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 526u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[15].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[20].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 220u));
    c.budget -= 116;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_002833EC; } }
L_0028246C:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 529u));
    c.r[13].d[0] = 0ull & 1ull;
    set32(c.r[14], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[11], 0u - 65u);
    set32(c.r[12], c.r[13].w[0] << 6);
    set32(c.r[18], 0u - 129u);
    set32(c.r[22], c.r[13].w[0] << 7);
    set32(c.r[9], 0u - 17u);
    set32(c.r[10], c.r[13].w[0] << 4);
    set32(c.r[7], 0u - 5u);
    set32(c.r[8], c.r[13].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] & c.r[14].d[0];
    set32(c.r[6], c.r[13].w[0] << 5);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[17], c.r[13].w[0] << 1);
    st8((c.r[20].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[13].w[0] << 3);
    st8((c.r[20].w[0] + 1538u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u - 33u);
    st8((c.r[20].w[0] + 1539u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], 0u - 3u);
    st8((c.r[20].w[0] + 1540u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 9u);
    c.r[24].d[0] = ld8((c.r[20].w[0] + 529u));
    c.r[15].sd[0] = static_cast<std::int32_t>(0xC0C00000u);
    set32(c.r[4], c.r[20].w[0] + 752u);
    c.r[24].d[0] = c.r[24].d[0] & c.r[11].d[0];
    c.r[24].d[0] = c.r[24].d[0] | c.r[12].d[0];
    st8((c.r[20].w[0] + 529u), static_cast<std::uint8_t>(c.r[24].w[0]));
    c.r[24].d[0] = ld8((c.r[20].w[0] + 529u));
    c.r[18].d[0] = c.r[24].d[0] & c.r[18].d[0];
    c.r[18].d[0] = c.r[18].d[0] | c.r[22].d[0];
    st8((c.r[20].w[0] + 529u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[18].d[0] = ld8((c.r[20].w[0] + 523u));
    c.r[18].d[0] = c.r[18].d[0] & c.r[9].d[0];
    c.r[18].d[0] = c.r[18].d[0] | c.r[10].d[0];
    st8((c.r[20].w[0] + 523u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[18].d[0] = ld8((c.r[20].w[0] + 529u));
    c.r[18].d[0] = c.r[18].d[0] & c.r[7].d[0];
    c.r[18].d[0] = c.r[18].d[0] | c.r[8].d[0];
    st8((c.r[20].w[0] + 529u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[18].d[0] = ld8((c.r[20].w[0] + 523u));
    c.r[14].d[0] = c.r[18].d[0] & c.r[14].d[0];
    c.r[13].d[0] = c.r[14].d[0] | c.r[13].d[0];
    st8((c.r[20].w[0] + 523u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[20].w[0] + 524u));
    c.r[13].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[12].d[0];
    st8((c.r[20].w[0] + 524u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[20].w[0] + 529u));
    c.r[13].d[0] = c.r[13].d[0] & c.r[5].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[6].d[0];
    st8((c.r[20].w[0] + 529u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[20].w[0] + 530u));
    c.r[13].d[0] = c.r[13].d[0] & c.r[9].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[10].d[0];
    st8((c.r[20].w[0] + 530u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[20].w[0] + 530u));
    c.r[13].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[12].d[0];
    st8((c.r[20].w[0] + 530u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[20].w[0] + 531u));
    c.r[13].d[0] = c.r[13].d[0] & c.r[16].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[17].d[0];
    st8((c.r[20].w[0] + 531u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[20].w[0] + 531u));
    c.r[13].d[0] = c.r[13].d[0] & c.r[7].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[8].d[0];
    st8((c.r[20].w[0] + 531u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[20].w[0] + 531u));
    c.r[13].d[0] = c.r[13].d[0] & c.r[2].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[3].d[0];
    st8((c.r[20].w[0] + 531u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[20].w[0] + 531u));
    c.r[9].d[0] = c.r[13].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[20].w[0] + 531u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[20].w[0] + 531u));
    c.r[5].d[0] = c.r[9].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[20].w[0] + 531u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[20].w[0] + 531u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[11].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[12].d[0];
    st8((c.r[20].w[0] + 531u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[20].w[0] + 1497u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[8].d[0];
    st8((c.r[20].w[0] + 1497u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[20].w[0] + 532u), c.r[15].w[0]);
    st8((c.r[20].w[0] + 1476u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 1477u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 1478u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 1479u), static_cast<std::uint8_t>(0u));
    st32((c.r[20].w[0] + 1480u), 0u);
    st32((c.r[20].w[0] + 1472u), 0u);
    st32((c.r[20].w[0] + 1456u), 0u);
    st32((c.r[20].w[0] + 1460u), 0u);
    st32((c.r[20].w[0] + 1464u), 0u);
    c.r[5].d[0] = ld8((c.r[20].w[0] + 526u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 105;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282610u); st8((c.r[20].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0065(c, 173u, depth + 1u); else { c.pc = 0x00396E30u; return; } if (c.pc != 0x00282610u) [[unlikely]] return; }
L_00282610:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 94u));
    set32(c.r[2], 0u - 9u);
    c.r[5].d[0] = ld8((c.r[20].w[0] + 530u));
    set32(c.r[4], c.r[20].w[0] + 752u);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282638u); st8((c.r[20].w[0] + 530u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0065(c, 36u, depth + 1u); else { c.pc = 0x003948D0u; return; } if (c.pc != 0x00282638u) [[unlikely]] return; }
L_00282638:
    c.r[8].d[0] = ld8((c.r[20].w[0] + 523u));
    set32(c.r[6], 0u - 65u);
    c.r[5].d[0] = 0ull & 1ull;
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[3], 0u - 129u);
    set32(c.r[4], c.r[5].w[0] << 7);
    set32(c.r[2], 0u - 2u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[20].w[0] + 523u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[20].w[0] + 523u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[20].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 1496u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[20].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[20].w[0] + 1484u), 0u);
    st32((c.r[20].w[0] + 1532u), 0u);
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    st32((c.r[20].w[0] + 508u), c.f[0]);
    st8((c.r[20].w[0] + 1280u), static_cast<std::uint8_t>(0u));
    st32((c.r[20].w[0] + 672u), 0u);
    st32((c.r[20].w[0] + 676u), 0u);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 220u));
    c.budget -= 28;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00282ADC; } }
    set32(c.r[2], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00282A54; } }
    set32(c.r[2], 0u + 51u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002829CC; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00282944; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002828B8; } }
    set32(c.r[2], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028281C; } }
    set32(c.r[2], 0u + 53u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00282790; } }
    set32(c.r[2], 0u + 56u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00282704; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 216u), 0u);  if (t) { goto L_00282B14; } }
L_00282704:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[28].w[0] - 29848u);
    c.budget -= 2;
L_0028270C:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028275C; } }
    c.r[5].d[0] = c.r[4].d[0] << 56;
    set32(c.r[3], c.r[28].w[0] - 29848u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[2].w[0] << 6);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 18800u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282754u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0094(c, 100u, depth + 1u); else { c.pc = 0x004512F0u; return; } if (c.pc != 0x00282754u) [[unlikely]] return; }
L_00282754:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 216u), c.r[16].w[0]);  if (t) { goto L_0028277C; } }
L_0028275C:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028270Cu | kUnwind; return; } goto L_0028270C; } }
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 216u), c.r[16].w[0]);
    c.budget -= 2;
L_0028277C:
    set32(c.r[2], 0u + 200u);
    set32(c.r[3], ld32((c.r[20].w[0] + 216u)));
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00282B14; } }
L_00282790:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[28].w[0] - 29848u);
    c.budget -= 2;
L_00282798:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002827E8; } }
    c.r[5].d[0] = c.r[4].d[0] << 56;
    set32(c.r[3], c.r[28].w[0] - 29848u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[2].w[0] << 6);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 18800u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002827E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0094(c, 100u, depth + 1u); else { c.pc = 0x004512F0u; return; } if (c.pc != 0x002827E0u) [[unlikely]] return; }
L_002827E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 216u), c.r[16].w[0]);  if (t) { goto L_00282808; } }
L_002827E8:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00282798u | kUnwind; return; } goto L_00282798; } }
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 216u), c.r[16].w[0]);
    c.budget -= 2;
L_00282808:
    set32(c.r[2], 0u + 100u);
    set32(c.r[3], ld32((c.r[20].w[0] + 216u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00282B14; } }
L_0028281C:
    set32(c.r[2], ld32((c.r[28].w[0] - 28268u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 200u)));
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_00282B14; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[28].w[0] - 29848u);
    c.budget -= 2;
L_00282834:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00282884; } }
    c.r[5].d[0] = c.r[4].d[0] << 56;
    set32(c.r[3], c.r[28].w[0] - 29848u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[2].w[0] << 6);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 18800u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028287Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0094(c, 100u, depth + 1u); else { c.pc = 0x004512F0u; return; } if (c.pc != 0x0028287Cu) [[unlikely]] return; }
L_0028287C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 216u), c.r[16].w[0]);  if (t) { goto L_002828A4; } }
L_00282884:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00282834u | kUnwind; return; } goto L_00282834; } }
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 216u), c.r[16].w[0]);
    c.budget -= 2;
L_002828A4:
    set32(c.r[2], 0u + 300u);
    set32(c.r[3], ld32((c.r[20].w[0] + 216u)));
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00282B14; } }
L_002828B8:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[28].w[0] - 29848u);
    c.budget -= 2;
L_002828C0:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00282910; } }
    c.r[5].d[0] = c.r[4].d[0] << 56;
    set32(c.r[3], c.r[28].w[0] - 29848u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[2].w[0] << 6);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 18800u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282908u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0094(c, 100u, depth + 1u); else { c.pc = 0x004512F0u; return; } if (c.pc != 0x00282908u) [[unlikely]] return; }
L_00282908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 216u), c.r[16].w[0]);  if (t) { goto L_00282930; } }
L_00282910:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002828C0u | kUnwind; return; } goto L_002828C0; } }
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 216u), c.r[16].w[0]);
    c.budget -= 2;
L_00282930:
    set32(c.r[2], 0u + 100u);
    set32(c.r[3], ld32((c.r[20].w[0] + 216u)));
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00282B14; } }
L_00282944:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[28].w[0] - 29848u);
    c.budget -= 2;
L_0028294C:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028299C; } }
    c.r[5].d[0] = c.r[4].d[0] << 56;
    set32(c.r[3], c.r[28].w[0] - 29848u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[2].w[0] << 6);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 18800u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282994u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0094(c, 100u, depth + 1u); else { c.pc = 0x004512F0u; return; } if (c.pc != 0x00282994u) [[unlikely]] return; }
L_00282994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 216u), c.r[16].w[0]);  if (t) { goto L_002829BC; } }
L_0028299C:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028294Cu | kUnwind; return; } goto L_0028294C; } }
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 216u), c.r[16].w[0]);
    c.budget -= 2;
L_002829BC:
    set32(c.r[2], 0u + 100u);
    set32(c.r[3], ld32((c.r[20].w[0] + 216u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00282B14; } }
L_002829CC:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[28].w[0] - 29848u);
    c.budget -= 2;
L_002829D4:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00282A24; } }
    c.r[5].d[0] = c.r[4].d[0] << 56;
    set32(c.r[3], c.r[28].w[0] - 29848u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[2].w[0] << 6);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 18800u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282A1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0094(c, 100u, depth + 1u); else { c.pc = 0x004512F0u; return; } if (c.pc != 0x00282A1Cu) [[unlikely]] return; }
L_00282A1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 216u), c.r[16].w[0]);  if (t) { goto L_00282A44; } }
L_00282A24:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002829D4u | kUnwind; return; } goto L_002829D4; } }
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 216u), c.r[16].w[0]);
    c.budget -= 2;
L_00282A44:
    set32(c.r[2], 0u + 100u);
    set32(c.r[3], ld32((c.r[20].w[0] + 216u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00282B14; } }
L_00282A54:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[28].w[0] - 29848u);
    c.budget -= 2;
L_00282A5C:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00282AAC; } }
    c.r[5].d[0] = c.r[4].d[0] << 56;
    set32(c.r[3], c.r[28].w[0] - 29848u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[2].w[0] << 6);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 18800u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282AA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0094(c, 100u, depth + 1u); else { c.pc = 0x004512F0u; return; } if (c.pc != 0x00282AA4u) [[unlikely]] return; }
L_00282AA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 216u), c.r[16].w[0]);  if (t) { goto L_00282ACC; } }
L_00282AAC:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00282A5Cu | kUnwind; return; } goto L_00282A5C; } }
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 216u), c.r[16].w[0]);
    c.budget -= 2;
L_00282ACC:
    set32(c.r[2], 0u + 100u);
    set32(c.r[3], ld32((c.r[20].w[0] + 216u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00282B14; } }
L_00282ADC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282AECu); set32(c.r[4], c.r[4].w[0] - 19264u);  if (depth < kMaxDepth) unit_0094(c, 100u, depth + 1u); else { c.pc = 0x004512F0u; return; } if (c.pc != 0x00282AECu) [[unlikely]] return; }
L_00282AEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 19264u);
    st32((c.r[20].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 212u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 216u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    st16((c.r[2].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282B10u); set32(c.r[4], ld32((c.r[20].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 85u, depth + 1u); else { c.pc = 0x00451110u; return; } if (c.pc != 0x00282B10u) [[unlikely]] return; }
L_00282B10:
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00282B14:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 220u));
    set32(c.r[2], 0u + 25u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00283400; } }
    c.r[4].d[0] = ld8((c.r[20].w[0] + 220u));
    c.budget -= 1;
L_00282B28:
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 530u));
    c.r[4].d[0] = c.r[4].d[0] ^ 21ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[20].w[0] + 530u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 1352u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00282B88; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 3500u)));
    set32(c.r[2], c.r[3].w[0] + 64u);
    st32((c.r[20].w[0] + 3500u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 3500u)));
    c.r[2].d[0] = c.r[2].sd[0] < 1924ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00282B74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00282B7C; } }
L_00282B74:
    set32(c.r[2], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[4], c.r[2].w[0] + 1576u);
    c.budget -= 2;
L_00282B7C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00283418; } }
L_00282B84:
    st32((c.r[20].w[0] + 1352u), c.r[4].w[0]);
    c.budget -= 1;
L_00282B88:
    set32(c.r[2], ld32((c.r[20].w[0] + 1352u)));
    st32((c.r[2].w[0] + 28u), c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 1352u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00282BA4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00282BA4u) [[unlikely]] return; }
L_00282BA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282BACu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 37u, depth + 1u); else { c.pc = 0x00284E10u; return; } if (c.pc != 0x00282BACu) [[unlikely]] return; }
L_00282BAC:
    set32(c.r[2], ld32((c.r[20].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 89u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00282C0C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 3500u)));
    set32(c.r[2], c.r[3].w[0] + 304u);
    st32((c.r[20].w[0] + 3500u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 3500u)));
    c.r[2].d[0] = c.r[2].sd[0] < 1924ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00282BE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00282BE8; } }
L_00282BE0:
    set32(c.r[2], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[4], c.r[2].w[0] + 1576u);
    c.budget -= 2;
L_00282BE8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00282BFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282BF8u);  if (depth < kMaxDepth) unit_0066(c, 250u, depth + 1u); else { c.pc = 0x0039A990u; return; } if (c.pc != 0x00282BF8u) [[unlikely]] return; }
L_00282BF8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00282BFC:
    st32((c.r[20].w[0] + 1360u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 1360u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282C0Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 222u, depth + 1u); else { c.pc = 0x0039A530u; return; } if (c.pc != 0x00282C0Cu) [[unlikely]] return; }
L_00282C0C:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00282C78; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 1364u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00282C5C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 3500u)));
    set32(c.r[2], c.r[3].w[0] + 208u);
    st32((c.r[20].w[0] + 3500u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 3500u)));
    c.r[2].d[0] = c.r[2].sd[0] < 1924ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00282C48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00282C50; } }
L_00282C48:
    set32(c.r[2], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[4], c.r[2].w[0] + 1576u);
    c.budget -= 2;
L_00282C50:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00283428; } }
L_00282C58:
    st32((c.r[20].w[0] + 1364u), c.r[4].w[0]);
    c.budget -= 1;
L_00282C5C:
    set32(c.r[2], ld32((c.r[20].w[0] + 1364u)));
    st32((c.r[2].w[0] + 28u), c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 1364u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00282C78u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00282C78u) [[unlikely]] return; }
L_00282C78:
    set32(c.r[2], ld32((c.r[20].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 89u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00282CE0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 1384u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00282CCC; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 3500u)));
    set32(c.r[2], c.r[3].w[0] + 80u);
    st32((c.r[20].w[0] + 3500u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 3500u)));
    c.r[2].d[0] = c.r[2].sd[0] < 1924ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00282CB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00282CC0; } }
L_00282CB8:
    set32(c.r[2], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[4], c.r[2].w[0] + 1576u);
    c.budget -= 2;
L_00282CC0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00283438; } }
L_00282CC8:
    st32((c.r[20].w[0] + 1384u), c.r[4].w[0]);
    c.budget -= 1;
L_00282CCC:
    set32(c.r[4], ld32((c.r[20].w[0] + 1384u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00282CE0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00282CE0u) [[unlikely]] return; }
L_00282CE0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1336u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00283448; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 220u));
    c.budget -= 1;
L_00282CF4:
    set32(c.r[2], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00283494; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00283494; } }
    set32(c.r[2], 0u + 67u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00283494; } }
    set32(c.r[2], 0u + 68u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00283494; } }
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00283494; } }
    set32(c.r[2], 0u + 38u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00283494; } }
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00283494; } }
    set32(c.r[2], 0u + 57u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00283494; } }
L_00282D54:
    c.r[10].d[0] = ld16((c.r[20].w[0] + 544u));
    set32(c.r[8], 0u - 3u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[6], 0u - 17u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[4], c.r[20].w[0] + 544u);
    set32(c.r[5], 0u - 1u);
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[20].w[0] + 544u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[20].w[0] + 544u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[20].w[0] + 544u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[20].w[0] + 544u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282DA8u); st16((c.r[20].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0023(c, 192u, depth + 1u); else { c.pc = 0x0028DE10u; return; } if (c.pc != 0x00282DA8u) [[unlikely]] return; }
L_00282DA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282DB0u); set32(c.r[4], c.r[20].w[0] + 240u);  if (depth < kMaxDepth) unit_0011(c, 308u, depth + 1u); else { c.pc = 0x00246B40u; return; } if (c.pc != 0x00282DB0u) [[unlikely]] return; }
L_00282DB0:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00282DC8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 1364u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1372u), c.r[2].w[0]);  if (t) { goto L_00282DD0; } }
L_00282DC8:
    set32(c.r[2], ld32((c.r[20].w[0] + 1352u)));
    st32((c.r[20].w[0] + 1372u), c.r[2].w[0]);
    c.budget -= 2;
L_00282DD0:
    set32(c.r[10], ld32((c.r[20].w[0] + 1372u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[8], 0u - 65u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[4], 0u - 129u);
    set32(c.r[7], c.r[2].w[0] << 7);
    set32(c.r[5], 0u - 3u);
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] << 5);
    st32((c.r[29].w[0] + 128u), 0u);
    set32(c.r[2], 0u - 33u);
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[20].w[0] + 1380u), c.r[10].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    c.r[10].d[0] = ld8((c.r[20].w[0] + 523u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[20].w[0] + 523u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[20].w[0] + 523u));
    c.r[4].d[0] = c.r[8].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    st8((c.r[20].w[0] + 523u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[20].w[0] + 524u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[20].w[0] + 524u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[20].w[0] + 526u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[20].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 526u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[20].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[20].w[0] + 480u), 0u);
    st32((c.r[20].w[0] + 484u), 0u);
    st32((c.r[20].w[0] + 488u), 0u);
    st32((c.r[20].w[0] + 492u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 1376u)));
    c.budget -= 41;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 136u), 0u);  if (t) { goto L_002834B0; } }
L_00282E74:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 220u));
    set32(c.r[4], 0u + 1u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], c.r[5].w[0] - 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(63ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002834BC; } }
    c.r[3].d[0] = c.r[4].d[0] << (c.r[2].w[0] & 63u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[2].d[0] | 96ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002834BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002834BC; } }
L_00282EB8:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00282EDC; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & 39ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00282EDC; } }
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_00282EDC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00282EE8; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00282EE8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00282F28; } }
    c.r[6].d[0] = ld8((c.r[20].w[0] + 526u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 5u);
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[20].w[0] + 526u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[20].w[0] + 524u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 524u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00282F58; } }
L_00282F28:
    c.r[6].d[0] = ld8((c.r[20].w[0] + 524u));
    set32(c.r[4], 0u - 2u);
    c.r[5].d[0] = 0ull & 1ull;
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[20].w[0] + 524u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[20].w[0] + 526u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[20].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 12;
L_00282F58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282F6Cu); st32((c.r[20].w[0] + 672u), 0u);  if (depth < kMaxDepth) unit_0091(c, 158u, depth + 1u); else { c.pc = 0x004463C0u; return; } if (c.pc != 0x00282F6Cu) [[unlikely]] return; }
L_00282F6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282F7Cu); set32(c.r[4], c.r[4].w[0] - 14992u);  if (depth < kMaxDepth) unit_0091(c, 158u, depth + 1u); else { c.pc = 0x004463C0u; return; } if (c.pc != 0x00282F7Cu) [[unlikely]] return; }
L_00282F7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282F8Cu); set32(c.r[4], c.r[4].w[0] - 14144u);  if (depth < kMaxDepth) unit_0091(c, 158u, depth + 1u); else { c.pc = 0x004463C0u; return; } if (c.pc != 0x00282F8Cu) [[unlikely]] return; }
L_00282F8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00282F9Cu); set32(c.r[4], c.r[4].w[0] - 13072u);  if (depth < kMaxDepth) unit_0091(c, 158u, depth + 1u); else { c.pc = 0x004463C0u; return; } if (c.pc != 0x00282F9Cu) [[unlikely]] return; }
L_00282F9C:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 1496u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[2].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[20].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[20].w[0] + 1520u), 0u);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1497u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[20].w[0] + 1497u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 220u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(80ll) ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[20].w[0] + 204u), 0u);  if (t) { goto L_00283040; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 23056u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00280000u < 16384u) { entry = entries_0020[(t - 0x00280000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00282FF8:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 204u), c.r[2].w[0]);  if (t) { goto L_00283040; } }
L_00283004:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 204u), c.r[2].w[0]);  if (t) { goto L_00283040; } }
L_00283010:
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 204u), c.r[2].w[0]);  if (t) { goto L_00283040; } }
L_0028301C:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 204u), c.r[2].w[0]);  if (t) { goto L_00283040; } }
L_00283028:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 204u), c.r[2].w[0]);  if (t) { goto L_00283040; } }
L_00283034:
    set32(c.r[2], ld32((c.r[20].w[0] + 204u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[20].w[0] + 204u), c.r[2].w[0]);
    c.budget -= 3;
L_00283040:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 220u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(80ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[20].w[0] + 208u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002830A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 23376u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00280000u < 16384u) { entry = entries_0020[(t - 0x00280000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0028306C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 208u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002830A8; } }
L_00283078:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 208u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002830A8; } }
L_00283084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 208u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002830A8; } }
L_0028308C:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 208u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002830A8; } }
L_00283098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 208u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002830A8; } }
L_002830A0:
    set32(c.r[2], 0u + 7u);
    st8((c.r[20].w[0] + 208u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002830A8:
    set32(c.r[4], ld32((c.r[20].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002830C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002830BCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 152u, depth + 1u); else { c.pc = 0x002A1AC0u; return; } if (c.pc != 0x002830BCu) [[unlikely]] return; }
L_002830BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002830C4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 213u, depth + 1u); else { c.pc = 0x002A2690u; return; } if (c.pc != 0x002830C4u) [[unlikely]] return; }
L_002830C4:
    set32(c.r[4], ld32((c.r[20].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002830E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002830D8u);  if (depth < kMaxDepth) unit_0094(c, 85u, depth + 1u); else { c.pc = 0x00451110u; return; } if (c.pc != 0x002830D8u) [[unlikely]] return; }
L_002830D8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002830E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002830E8u); set32(c.r[4], ld32((c.r[20].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 79u, depth + 1u); else { c.pc = 0x00451070u; return; } if (c.pc != 0x002830E8u) [[unlikely]] return; }
L_002830E8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002834CC; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002830FCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 103u, depth + 1u); else { c.pc = 0x002815A0u; return; } if (c.pc != 0x002830FCu) [[unlikely]] return; }
L_002830FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[20].w[0] + 220u));  if (t) { goto L_002834D0; } }
L_00283104:
    set32(c.r[2], ld32((c.r[2].w[0] - 29024u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00283174; } }
    c.r[5].d[0] = ld8((c.r[20].w[0] + 524u));
    set32(c.r[2], 0u - 65u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[20].w[0] + 524u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[20].w[0] + 1352u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283138u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x00283138u) [[unlikely]] return; }
L_00283138:
    set32(c.r[2], ld32((c.r[20].w[0] + 1352u)));
    st32((c.r[20].w[0] + 1372u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 1364u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00283174; } }
    set32(c.r[6], ld32((c.r[20].w[0] + 212u)));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 1364u)));
    st8((c.r[3].w[0] + 172u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
L_00283174:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 29024u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002834E0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 40u)));
    c.budget -= 1;
L_00283188:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002831B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028319Cu);  if (depth < kMaxDepth) unit_00BF(c, 275u, depth + 1u); else { c.pc = 0x004FE840u; return; } if (c.pc != 0x0028319Cu) [[unlikely]] return; }
L_0028319C:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002834E8; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002831B8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 217u, depth + 1u); else { c.pc = 0x002A2720u; return; } if (c.pc != 0x002831B8u) [[unlikely]] return; }
L_002831B8:
    vu::sub4<1>(c.vu0, 15u, 1u, 1u, 1u);
    c.budget -= 1;
L_002831BC:
    c.r[5].d[0] = ld8((c.r[19].w[0] + 92u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    vu::sub4<1>(c.vu0, 15u, 2u, 2u, 2u);
    st128((c.r[20].w[0] + 176u) & ~15u, c.vu0.vf[0]);
    vu::mr32_4(c.vu0, 15u, 3u, 0u);
    vu::addbc4<1>(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    st128((c.r[20].w[0] + 160u) & ~15u, c.vu0.vf[3]);
    vu::addbc4<1>(c.vu0, 4u, 2u, 0u, c.vu0.vf[0].w[3]);
    st128((c.r[20].w[0] + 128u) & ~15u, c.vu0.vf[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002831E8u); st128((c.r[20].w[0] + 144u) & ~15u, c.vu0.vf[2]);  if (depth < kMaxDepth) unit_001F(c, 322u, depth + 1u); else { c.pc = 0x0027E770u; return; } if (c.pc != 0x002831E8u) [[unlikely]] return; }
L_002831E8:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 95u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00283218; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028320C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 1384u)));  if (t) { goto L_00283224; } }
L_0028320C:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 808u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00283220; } }
L_00283218:
    set32(c.r[2], 0u + 3u);
    st8((c.r[20].w[0] + 808u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00283220:
    set32(c.r[2], ld32((c.r[20].w[0] + 1384u)));
    c.budget -= 1;
L_00283224:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00283260; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00283230:
    c.r[6].d[0] = ld8((c.r[19].w[0] + 44u));
    set32(c.r[4], ld32((c.r[20].w[0] + 1384u)));
    set32(c.r[7], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283244u); c.r[5].d[0] = c.r[16].d[0] & 255ull;  if (depth < kMaxDepth) unit_009C(c, 170u, depth + 1u); else { c.pc = 0x00471A30u; return; } if (c.pc != 0x00283244u) [[unlikely]] return; }
L_00283244:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00283230u | kUnwind; return; } goto L_00283230; } }
    c.budget -= 1;
L_00283260:
    set32(c.r[5], ld32((c.r[20].w[0] + 1376u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283270u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x00283270u) [[unlikely]] return; }
L_00283270:
    c.r[4].d[0] = ld8((c.r[20].w[0] + 524u));
    c.r[3].d[0] = c.r[4].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002834F8; } }
L_00283284:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00283518; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 32u)));
    c.budget -= 1;
L_00283298:
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00283374; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00283304; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002832C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002833C4; } }
L_002832C4:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002833C4; } }
    c.r[6].d[0] = ld8((c.r[20].w[0] + 811u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 3u);
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], c.r[20].w[0] + 752u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[20].w[0] + 811u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002832FCu); st8((c.r[20].w[0] + 808u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0065(c, 15u, depth + 1u); else { c.pc = 0x00394350u; return; } if (c.pc != 0x002832FCu) [[unlikely]] return; }
L_002832FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002833C4; } }
L_00283304:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002833C4; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002833C4; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00283338u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00283338u) [[unlikely]] return; }
L_00283338:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002833C4; } }
    c.r[6].d[0] = ld8((c.r[20].w[0] + 811u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 3u);
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], c.r[20].w[0] + 752u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[20].w[0] + 811u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028336Cu); st8((c.r[20].w[0] + 808u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0065(c, 15u, depth + 1u); else { c.pc = 0x00394350u; return; } if (c.pc != 0x0028336Cu) [[unlikely]] return; }
L_0028336C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002833C4; } }
L_00283374:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002833C4; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002833C4; } }
    c.r[6].d[0] = ld8((c.r[20].w[0] + 811u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 3u);
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], c.r[20].w[0] + 752u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[20].w[0] + 811u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002833C4u); st8((c.r[20].w[0] + 808u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0065(c, 15u, depth + 1u); else { c.pc = 0x00394350u; return; } if (c.pc != 0x002833C4u) [[unlikely]] return; }
L_002833C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 20336u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00283520; } }
L_002833D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_00283594; } }
L_002833DC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00282214u | kUnwind; return; } goto L_00282214; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[5].w[0] - 67u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002821E4u | kUnwind; return; } goto L_002821E4; } }
L_002833EC:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 525u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 525u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028246Cu | kUnwind; return; } goto L_0028246C; } }
L_00283400:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283410u); set32(c.r[4], c.r[4].w[0] + 23456u);  if (depth < kMaxDepth) unit_009E(c, 17u, depth + 1u); else { c.pc = 0x004784F0u; return; } if (c.pc != 0x00283410u) [[unlikely]] return; }
L_00283410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[20].w[0] + 220u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00282B28u | kUnwind; return; } goto L_00282B28; } }
L_00283418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283420u);  if (depth < kMaxDepth) unit_002E(c, 84u, depth + 1u); else { c.pc = 0x002B92A0u; return; } if (c.pc != 0x00283420u) [[unlikely]] return; }
L_00283420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00282B84u | kUnwind; return; } goto L_00282B84; } }
L_00283428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283430u);  if (depth < kMaxDepth) unit_0033(c, 309u, depth + 1u); else { c.pc = 0x002CF7C0u; return; } if (c.pc != 0x00283430u) [[unlikely]] return; }
L_00283430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00282C58u | kUnwind; return; } goto L_00282C58; } }
L_00283438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283440u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 183u, depth + 1u); else { c.pc = 0x00471CA0u; return; } if (c.pc != 0x00283440u) [[unlikely]] return; }
L_00283440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00282CC8u | kUnwind; return; } goto L_00282CC8; } }
L_00283448:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028344C:
    set32(c.r[2], ld32((c.r[20].w[0] + 1340u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 28u), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 1340u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00283478u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00283478u) [[unlikely]] return; }
L_00283478:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1336u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028344Cu | kUnwind; return; } goto L_0028344C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[20].w[0] + 220u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00282CF4u | kUnwind; return; } goto L_00282CF4; } }
L_00283494:
    c.r[4].d[0] = ld8((c.r[20].w[0] + 529u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00282D54u | kUnwind; return; } goto L_00282D54; } }
L_002834B0:
    set32(c.r[2], ld32((c.r[20].w[0] + 1372u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1376u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00282E74u | kUnwind; return; } goto L_00282E74; } }
L_002834BC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00282EE8u | kUnwind; return; } goto L_00282EE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[5].w[0] - 67u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00282EB8u | kUnwind; return; } goto L_00282EB8; } }
L_002834CC:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 220u));
    c.budget -= 1;
L_002834D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002831B8u | kUnwind; return; } goto L_002831B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00283104u | kUnwind; return; } goto L_00283104; } }
L_002834E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00283188u | kUnwind; return; } goto L_00283188; } }
L_002834E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002834F0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 197u, depth + 1u); else { c.pc = 0x002A2380u; return; } if (c.pc != 0x002834F0u) [[unlikely]] return; }
L_002834F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; vu::sub4<1>(c.vu0, 15u, 1u, 1u, 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002831BCu | kUnwind; return; } goto L_002831BC; } }
L_002834F8:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283510u); c.r[6].d[0] = c.r[2].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0020(c, 88u, depth + 1u); else { c.pc = 0x00281060u; return; } if (c.pc != 0x00283510u) [[unlikely]] return; }
L_00283510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00283284u | kUnwind; return; } goto L_00283284; } }
L_00283518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00283298u | kUnwind; return; } goto L_00283298; } }
L_00283520:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x91A20000u);
    set32(c.r[5], ld32((c.r[3].w[0] - 20360u)));
    c.r[3].d[0] = c.r[4].d[0] | 46021ull;
    set32(c.r[8], c.r[20].w[0] - c.r[5].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[8].w[0]);
    set32(c.r[9], c.r[8].w[0] >> 31);
    c.r[6].d[0] = c.hi.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[7], ld32((c.r[3].w[0] - 20340u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[8], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 11));
    set32(c.r[9], c.r[8].w[0] + c.r[9].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[8], c.r[7].w[0] + 1u);
    set32(c.r[6], ld32((c.r[3].w[0] - 20348u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    st32((c.r[4].w[0] - 20340u), c.r[8].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], 0u - 2u);
    st32((c.r[4].w[0]), c.r[9].w[0]);
    c.r[4].d[0] = ld8((c.r[20].w[0] + 523u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 29;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002833D4u | kUnwind; return; } goto L_002833D4; } }
L_00283594:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002835C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 531u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002835E0; } }
L_002835D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002835F4; } }
L_002835E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002835ECu); set32(c.r[4], c.r[4].w[0] - 16848u);  if (depth < kMaxDepth) unit_007A(c, 231u, depth + 1u); else { c.pc = 0x003EA0E0u; return; } if (c.pc != 0x002835ECu) [[unlikely]] return; }
L_002835EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002835D8u | kUnwind; return; } goto L_002835D8; } }
L_002835F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00283600:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u - 2u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1497u));
    c.r[5].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 1497u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[2].w[0] - 19168u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 24;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = c.f[12];  if (t) { goto L_00283848; } }
    st32((c.r[20].w[0] + 400u), c.r[16].w[0]);
    c.budget -= 1;
L_00283664:
    set32(c.r[2], ld32((c.r[20].w[0] + 400u)));
    c.r[16].d[0] = ld8((c.r[2].w[0] + 40u));
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002836F0; } }
    c.r[1].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002836F0; } }
L_00283684:
    set32(c.r[2], ld32((c.r[20].w[0] + 400u)));
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002836D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002836A8u); set32(c.r[4], c.r[20].w[0] + 240u);  if (depth < kMaxDepth) unit_0011(c, 303u, depth + 1u); else { c.pc = 0x002468F0u; return; } if (c.pc != 0x002836A8u) [[unlikely]] return; }
L_002836A8:
    set32(c.r[3], ld32((c.r[20].w[0] + 344u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 29600u);
    set32(c.r[5], c.r[20].w[0] + 240u);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1564u));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002836D8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0053(c, 272u, depth + 1u); else { c.pc = 0x0034FC50u; return; } if (c.pc != 0x002836D8u) [[unlikely]] return; }
L_002836D8:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00283684u | kUnwind; return; } goto L_00283684; } }
    c.budget -= 1;
L_002836F0:
    set32(c.r[2], ld32((c.r[20].w[0] + 400u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283700u); set32(c.r[4], c.r[20].w[0] + 240u);  if (depth < kMaxDepth) unit_0011(c, 303u, depth + 1u); else { c.pc = 0x002468F0u; return; } if (c.pc != 0x00283700u) [[unlikely]] return; }
L_00283700:
    set32(c.r[4], c.r[20].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028370Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0011(c, 312u, depth + 1u); else { c.pc = 0x00246D10u; return; } if (c.pc != 0x0028370Cu) [[unlikely]] return; }
L_0028370C:
    st32((c.r[20].w[0] + 108u), c.f[20]);
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[20].w[0] + 220u), static_cast<std::uint8_t>(c.r[19].w[0]));  if (t) { goto L_00283860; } }
L_0028371C:
    c.r[4].d[0] = ld8((c.r[20].w[0] + 526u));
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[20].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 220u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00283868; } }
    set32(c.r[2], 0u + 67u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00283868; } }
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00283868; } }
    set32(c.r[2], 0u + 68u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00283868; } }
    set32(c.r[2], c.r[3].w[0] - 38u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00283868; } }
L_00283778:
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.r[2].d[0] = 0ull & 1ull;
    c.r[5].d[0] = ld8((c.r[20].w[0] + 523u));
    set32(c.r[3], 0u - 65u);
    set32(c.r[4], c.r[2].w[0] << 6);
    c.f[1] = ld32((c.r[18].w[0]));
    set32(c.r[2], 0u + 57u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[20].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[20].w[0] + 192u), c.f[1]);
    st32((c.r[20].w[0] + 196u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 220u));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00283888; } }
L_002837B8:
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EB30000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[2] = ld32((c.r[20].w[0] + 192u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    st32((c.r[20].w[0] + 200u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 220u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002837ECu); set32(c.r[4], c.r[20].w[0] + 1536u);  if (depth < kMaxDepth) unit_0032(c, 19u, depth + 1u); else { c.pc = 0x002C8610u; return; } if (c.pc != 0x002837ECu) [[unlikely]] return; }
L_002837EC:
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EB30000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    set32(c.r[4], c.r[20].w[0] + 1072u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283810u); st32((c.r[20].w[0] + 1448u), c.f[0]);  if (depth < kMaxDepth) unit_0040(c, 41u, depth + 1u); else { c.pc = 0x00300F30u; return; } if (c.pc != 0x00283810u) [[unlikely]] return; }
L_00283810:
    set32(c.r[3], ld32((c.r[20].w[0] + 344u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 29600u);
    set32(c.r[5], c.r[20].w[0] + 240u);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1564u));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283840u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0053(c, 272u, depth + 1u); else { c.pc = 0x0034FC50u; return; } if (c.pc != 0x00283840u) [[unlikely]] return; }
L_00283840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00283894; } }
L_00283848:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283858u); set32(c.r[4], c.r[4].w[0] - 16848u);  if (depth < kMaxDepth) unit_007A(c, 234u, depth + 1u); else { c.pc = 0x003EA180u; return; } if (c.pc != 0x00283858u) [[unlikely]] return; }
L_00283858:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 400u), c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00283664u | kUnwind; return; } goto L_00283664; } }
L_00283860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 212u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028371Cu | kUnwind; return; } goto L_0028371C; } }
L_00283868:
    c.r[4].d[0] = ld8((c.r[20].w[0] + 526u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00283778u | kUnwind; return; } goto L_00283778; } }
L_00283888:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 192u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002837B8u | kUnwind; return; } goto L_002837B8; } }
L_00283894:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002838C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 400u), c.r[5].w[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 400u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002838ECu); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_0011(c, 302u, depth + 1u); else { c.pc = 0x002468E0u; return; } if (c.pc != 0x002838ECu) [[unlikely]] return; }
L_002838EC:
    st8((c.r[17].w[0] + 220u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00283910:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00283A0C; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00283A0C; } }
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00283974; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 762u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_00283974:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00283A0C; } }
L_0028397C:
    set32(c.r[4], ld32((c.r[19].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0028399C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 296u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028399Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028399Cu) [[unlikely]] return; }
L_0028399C:
    set32(c.r[16], ld32((c.r[19].w[0] + 1348u)));
    st32((c.r[19].w[0] + 1348u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 1348u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_002839B8; } }
    st32((c.r[3].w[0] + 28u), c.r[19].w[0]);
    c.budget -= 1;
L_002839B8:
    set32(c.r[5], ld32((c.r[19].w[0] + 1348u)));
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 25u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; st8((c.r[5].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002839F0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002839F0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002839F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002839F0u) [[unlikely]] return; }
L_002839F0:
    set32(c.r[4], ld32((c.r[19].w[0] + 1348u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 292u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00283A04u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00283A04u) [[unlikely]] return; }
L_00283A04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00283A2C; } }
L_00283A0C:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 24u));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028397Cu | kUnwind; return; } goto L_0028397C; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028397Cu | kUnwind; return; } goto L_0028397C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00283A2C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00283A50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00283A60:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00280000u < 16384u) { entry = entries_0020[(t - 0x00280000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00283A70:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1336u)));
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00283A90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00283AA0; } }
L_00283A90:
    set32(c.r[2], ld32((c.r[4].w[0] + 1340u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_00283AA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00283AB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 1336u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1336u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283AE4u); set32(c.r[4], c.r[18].w[0] + 1340u);  if (depth < kMaxDepth) unit_0021(c, 151u, depth + 1u); else { c.pc = 0x002862A0u; return; } if (c.pc != 0x00283AE4u) [[unlikely]] return; }
L_00283AE4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1336u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00283AFC; } }
L_00283AF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00283B48; } }
L_00283AFC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00283B00:
    set32(c.r[2], ld32((c.r[18].w[0] + 1340u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 28u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 1340u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00283B2Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00283B2Cu) [[unlikely]] return; }
L_00283B2C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1336u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00283B00u | kUnwind; return; } goto L_00283B00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00283AF4u | kUnwind; return; } goto L_00283AF4; } }
L_00283B48:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00283B60:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1336u)));
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00283BA8; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 1340u)));
    c.budget -= 1;
L_00283B74:
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 24u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00283B94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00283BAC; } }
L_00283B94:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00283B74u | kUnwind; return; } goto L_00283B74; } }
    c.budget -= 1;
L_00283BA8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00283BAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00283BC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1336u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00283C30; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00283BEC:
    set32(c.r[2], ld32((c.r[18].w[0] + 1340u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 1340u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00283C18u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00283C18u) [[unlikely]] return; }
L_00283C18:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1336u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00283BECu | kUnwind; return; } goto L_00283BEC; } }
    c.budget -= 1;
L_00283C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283C38u); set32(c.r[4], c.r[18].w[0] + 1340u);  if (depth < kMaxDepth) unit_0021(c, 152u, depth + 1u); else { c.pc = 0x002862B0u; return; } if (c.pc != 0x00283C38u) [[unlikely]] return; }
L_00283C38:
    st8((c.r[18].w[0] + 1336u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[18].w[0] + 1360u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00283C54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283C50u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0066(c, 235u, depth + 1u); else { c.pc = 0x0039A790u; return; } if (c.pc != 0x00283C50u) [[unlikely]] return; }
L_00283C50:
    st32((c.r[18].w[0] + 1360u), 0u);
    c.budget -= 1;
L_00283C54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00283C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1352u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00283CA8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00283CA4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00283CA4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00283CA4u) [[unlikely]] return; }
L_00283CA4:
    st32((c.r[16].w[0] + 1352u), 0u);
    c.budget -= 1;
L_00283CA8:
    set32(c.r[4], ld32((c.r[16].w[0] + 1356u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00283CD0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00283CCC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00283CCCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00283CCCu) [[unlikely]] return; }
L_00283CCC:
    st32((c.r[16].w[0] + 1356u), 0u);
    c.budget -= 1;
L_00283CD0:
    set32(c.r[4], ld32((c.r[16].w[0] + 1364u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00283CF8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00283CF4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00283CF4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00283CF4u) [[unlikely]] return; }
L_00283CF4:
    st32((c.r[16].w[0] + 1364u), 0u);
    c.budget -= 1;
L_00283CF8:
    set32(c.r[4], ld32((c.r[16].w[0] + 1384u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00283D20; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00283D1C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00283D1Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00283D1Cu) [[unlikely]] return; }
L_00283D1C:
    st32((c.r[16].w[0] + 1384u), 0u);
    c.budget -= 1;
L_00283D20:
    set32(c.r[4], ld32((c.r[16].w[0] + 1368u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00283D48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00283D44; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00283D44u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00283D44u) [[unlikely]] return; }
L_00283D44:
    st32((c.r[16].w[0] + 1368u), 0u);
    c.budget -= 1;
L_00283D48:
    st32((c.r[16].w[0] + 1348u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00283D60:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00283DAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 22672u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_00283DAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_00283DAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_00283DAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 5;
L_00283DAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00283DC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00283E24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00283E0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00283E0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_00283E0C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00283E24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283E24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00283E24u) [[unlikely]] return; }
L_00283E24:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00283E40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00283E7C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00283E7C; } }
    st8((c.r[4].w[0] + 404u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[4].w[0] + 1348u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00283E7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00283E7Cu) [[unlikely]] return; }
L_00283E7C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00283E90:
    c.r[10].d[0] = ld16((c.r[4].w[0] + 544u));
    set32(c.r[8], 0u - 3u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[6], 0u - 17u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[11], c.r[4].w[0] + 544u);
    set32(c.r[5], 0u - 1u);
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[4].w[0] + 544u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[4].w[0] + 544u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0] + 544u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[4].w[0] + 544u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[4].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 22;
    { c.r[4].d[0] = c.r[11].d[0] + 0ull;  [[clang::musttail]] return unit_0023(c, 192u, depth); }
L_00283EF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[2].w[0] << 6);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u - 65u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 524u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 524u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 1380u)));
    st32((c.r[4].w[0] + 1372u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1372u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283F30u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x00283F30u) [[unlikely]] return; }
L_00283F30:
    set32(c.r[3], ld32((c.r[16].w[0] + 1364u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00283F40; } }
    st8((c.r[3].w[0] + 172u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00283F40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00283F50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 65u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 524u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != 0ull; st8((c.r[4].w[0] + 524u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00283F9C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1352u)));
    c.budget -= 1;
L_00283F84:
    st32((c.r[16].w[0] + 1372u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1364u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00283FAC; } }
L_00283F94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00283FD8; } }
L_00283F9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00283FA4u); set32(c.r[5], ld32((c.r[16].w[0] + 1352u)));  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x00283FA4u) [[unlikely]] return; }
L_00283FA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 1352u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00283F84u | kUnwind; return; } goto L_00283F84; } }
L_00283FAC:
    set32(c.r[7], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[3], 0u - 2u);
    c.r[5].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u + 1u);
    c.r[6].d[0] = ld8((c.r[7].w[0]));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1364u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 172u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00283F94u | kUnwind; return; } goto L_00283F94; } }
L_00283FD8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00283FF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 524u));
    c.budget -= 4;
    [[clang::musttail]] return unit_0021(c, 1u, depth);
}

}

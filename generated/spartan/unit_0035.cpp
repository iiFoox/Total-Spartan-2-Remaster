#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0035[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 16, 0, 0, 0, 17, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0, 0, 21, 22, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0,
    0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0,
    0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 41, 0, 42, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 57, 0, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    63, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0,
    0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0,
    0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0,
    0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0,
    0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0,
    0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0,
    0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0,
    0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0,
    163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 174, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0,
    0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0,
    0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 257,
    0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    261, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0,
    0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 274, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0,
};

void unit_0035(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002D4000;
    case 2u: goto L_002D4058;
    case 3u: goto L_002D4138;
    case 4u: goto L_002D4140;
    case 5u: goto L_002D4160;
    case 6u: goto L_002D4180;
    case 7u: goto L_002D41B4;
    case 8u: goto L_002D420C;
    case 9u: goto L_002D4214;
    case 10u: goto L_002D4230;
    case 11u: goto L_002D4284;
    case 12u: goto L_002D42FC;
    case 13u: goto L_002D435C;
    case 14u: goto L_002D4390;
    case 15u: goto L_002D43A0;
    case 16u: goto L_002D43A8;
    case 17u: goto L_002D43B8;
    case 18u: goto L_002D43C0;
    case 19u: goto L_002D43D0;
    case 20u: goto L_002D43D8;
    case 21u: goto L_002D43E8;
    case 22u: goto L_002D43EC;
    case 23u: goto L_002D4414;
    case 24u: goto L_002D4440;
    case 25u: goto L_002D4478;
    case 26u: goto L_002D448C;
    case 27u: goto L_002D4498;
    case 28u: goto L_002D44CC;
    case 29u: goto L_002D4530;
    case 30u: goto L_002D4544;
    case 31u: goto L_002D4550;
    case 32u: goto L_002D4598;
    case 33u: goto L_002D45AC;
    case 34u: goto L_002D45D8;
    case 35u: goto L_002D4614;
    case 36u: goto L_002D46F4;
    case 37u: goto L_002D4704;
    case 38u: goto L_002D4740;
    case 39u: goto L_002D4750;
    case 40u: goto L_002D4758;
    case 41u: goto L_002D4764;
    case 42u: goto L_002D476C;
    case 43u: goto L_002D4798;
    case 44u: goto L_002D47B8;
    case 45u: goto L_002D47EC;
    case 46u: goto L_002D4820;
    case 47u: goto L_002D48AC;
    case 48u: goto L_002D48E0;
    case 49u: goto L_002D4918;
    case 50u: goto L_002D492C;
    case 51u: goto L_002D4938;
    case 52u: goto L_002D4990;
    case 53u: goto L_002D4AEC;
    case 54u: goto L_002D4B30;
    case 55u: goto L_002D4B90;
    case 56u: goto L_002D4BA0;
    case 57u: goto L_002D4BA8;
    case 58u: goto L_002D4BB8;
    case 59u: goto L_002D4BC0;
    case 60u: goto L_002D4BD0;
    case 61u: goto L_002D4BD8;
    case 62u: goto L_002D4BE8;
    case 63u: goto L_002D4C00;
    case 64u: goto L_002D4C0C;
    case 65u: goto L_002D4C20;
    case 66u: goto L_002D4C48;
    case 67u: goto L_002D4C7C;
    case 68u: goto L_002D4CC0;
    case 69u: goto L_002D4CF8;
    case 70u: goto L_002D4D0C;
    case 71u: goto L_002D4D18;
    case 72u: goto L_002D4D50;
    case 73u: goto L_002D4D70;
    case 74u: goto L_002D4DE4;
    case 75u: goto L_002D4DF4;
    case 76u: goto L_002D4EBC;
    case 77u: goto L_002D4ECC;
    case 78u: goto L_002D4F54;
    case 79u: goto L_002D4F6C;
    case 80u: goto L_002D4F84;
    case 81u: goto L_002D4FB4;
    case 82u: goto L_002D4FC4;
    case 83u: goto L_002D5000;
    case 84u: goto L_002D5074;
    case 85u: goto L_002D5084;
    case 86u: goto L_002D50B4;
    case 87u: goto L_002D51C8;
    case 88u: goto L_002D51D4;
    case 89u: goto L_002D51E4;
    case 90u: goto L_002D5258;
    case 91u: goto L_002D5278;
    case 92u: goto L_002D5288;
    case 93u: goto L_002D52A8;
    case 94u: goto L_002D52E0;
    case 95u: goto L_002D5334;
    case 96u: goto L_002D53C8;
    case 97u: goto L_002D53F8;
    case 98u: goto L_002D5494;
    case 99u: goto L_002D54B0;
    case 100u: goto L_002D54D4;
    case 101u: goto L_002D5578;
    case 102u: goto L_002D5588;
    case 103u: goto L_002D55A8;
    case 104u: goto L_002D55D4;
    case 105u: goto L_002D5600;
    case 106u: goto L_002D560C;
    case 107u: goto L_002D56F8;
    case 108u: goto L_002D5758;
    case 109u: goto L_002D5774;
    case 110u: goto L_002D57C0;
    case 111u: goto L_002D57E4;
    case 112u: goto L_002D5848;
    case 113u: goto L_002D58D8;
    case 114u: goto L_002D58E0;
    case 115u: goto L_002D58F0;
    case 116u: goto L_002D5924;
    case 117u: goto L_002D594C;
    case 118u: goto L_002D5998;
    case 119u: goto L_002D59C0;
    case 120u: goto L_002D59F4;
    case 121u: goto L_002D5A50;
    case 122u: goto L_002D5A6C;
    case 123u: goto L_002D5AB0;
    case 124u: goto L_002D5B24;
    case 125u: goto L_002D5B34;
    case 126u: goto L_002D5B58;
    case 127u: goto L_002D5BB0;
    case 128u: goto L_002D5BEC;
    case 129u: goto L_002D5C0C;
    case 130u: goto L_002D5C30;
    case 131u: goto L_002D5CA0;
    case 132u: goto L_002D5CB0;
    case 133u: goto L_002D5CE4;
    case 134u: goto L_002D5D74;
    case 135u: goto L_002D5D94;
    case 136u: goto L_002D5DE8;
    case 137u: goto L_002D5DF4;
    case 138u: goto L_002D5E44;
    case 139u: goto L_002D5E9C;
    case 140u: goto L_002D5EB0;
    case 141u: goto L_002D5EEC;
    case 142u: goto L_002D5F48;
    case 143u: goto L_002D6058;
    case 144u: goto L_002D6118;
    case 145u: goto L_002D61A4;
    case 146u: goto L_002D61B0;
    case 147u: goto L_002D623C;
    case 148u: goto L_002D624C;
    case 149u: goto L_002D627C;
    case 150u: goto L_002D62D8;
    case 151u: goto L_002D62E8;
    case 152u: goto L_002D6328;
    case 153u: goto L_002D6334;
    case 154u: goto L_002D6390;
    case 155u: goto L_002D63E4;
    case 156u: goto L_002D63F4;
    case 157u: goto L_002D6434;
    case 158u: goto L_002D6440;
    case 159u: goto L_002D6488;
    case 160u: goto L_002D64A4;
    case 161u: goto L_002D64A8;
    case 162u: goto L_002D64EC;
    case 163u: goto L_002D6500;
    case 164u: goto L_002D6520;
    case 165u: goto L_002D6548;
    case 166u: goto L_002D65BC;
    case 167u: goto L_002D65E8;
    case 168u: goto L_002D6620;
    case 169u: goto L_002D668C;
    case 170u: goto L_002D66D8;
    case 171u: goto L_002D66E8;
    case 172u: goto L_002D6710;
    case 173u: goto L_002D675C;
    case 174u: goto L_002D6784;
    case 175u: goto L_002D6788;
    case 176u: goto L_002D6798;
    case 177u: goto L_002D682C;
    case 178u: goto L_002D6858;
    case 179u: goto L_002D6888;
    case 180u: goto L_002D68D4;
    case 181u: goto L_002D6978;
    case 182u: goto L_002D6984;
    case 183u: goto L_002D69A8;
    case 184u: goto L_002D6A08;
    case 185u: goto L_002D6A1C;
    case 186u: goto L_002D6A94;
    case 187u: goto L_002D6AD8;
    case 188u: goto L_002D6B3C;
    case 189u: goto L_002D6C04;
    case 190u: goto L_002D6C10;
    case 191u: goto L_002D6C1C;
    case 192u: goto L_002D6C80;
    case 193u: goto L_002D6C8C;
    case 194u: goto L_002D6CDC;
    case 195u: goto L_002D6D20;
    case 196u: goto L_002D6D24;
    case 197u: goto L_002D6D44;
    case 198u: goto L_002D6D5C;
    case 199u: goto L_002D6D84;
    case 200u: goto L_002D6DA4;
    case 201u: goto L_002D6DB4;
    case 202u: goto L_002D6E28;
    case 203u: goto L_002D6E3C;
    case 204u: goto L_002D6E48;
    case 205u: goto L_002D6EAC;
    case 206u: goto L_002D6EB8;
    case 207u: goto L_002D6EC4;
    case 208u: goto L_002D6F2C;
    case 209u: goto L_002D6F90;
    case 210u: goto L_002D6F9C;
    case 211u: goto L_002D6FA8;
    case 212u: goto L_002D6FB8;
    case 213u: goto L_002D6FEC;
    case 214u: goto L_002D7028;
    case 215u: goto L_002D7044;
    case 216u: goto L_002D7054;
    case 217u: goto L_002D70B0;
    case 218u: goto L_002D7104;
    case 219u: goto L_002D7184;
    case 220u: goto L_002D71B4;
    case 221u: goto L_002D71E0;
    case 222u: goto L_002D7200;
    case 223u: goto L_002D7244;
    case 224u: goto L_002D7260;
    case 225u: goto L_002D72B8;
    case 226u: goto L_002D7308;
    case 227u: goto L_002D7310;
    case 228u: goto L_002D7430;
    case 229u: goto L_002D74D4;
    case 230u: goto L_002D74E8;
    case 231u: goto L_002D7530;
    case 232u: goto L_002D7574;
    case 233u: goto L_002D7594;
    case 234u: goto L_002D75A4;
    case 235u: goto L_002D75BC;
    case 236u: goto L_002D75D8;
    case 237u: goto L_002D763C;
    case 238u: goto L_002D7648;
    case 239u: goto L_002D76CC;
    case 240u: goto L_002D76E8;
    case 241u: goto L_002D77C4;
    case 242u: goto L_002D7808;
    case 243u: goto L_002D7828;
    case 244u: goto L_002D7838;
    case 245u: goto L_002D7840;
    case 246u: goto L_002D785C;
    case 247u: goto L_002D78AC;
    case 248u: goto L_002D78FC;
    case 249u: goto L_002D792C;
    case 250u: goto L_002D7958;
    case 251u: goto L_002D7964;
    case 252u: goto L_002D7990;
    case 253u: goto L_002D7A9C;
    case 254u: goto L_002D7AC4;
    case 255u: goto L_002D7AD4;
    case 256u: goto L_002D7AF4;
    case 257u: goto L_002D7AFC;
    case 258u: goto L_002D7B08;
    case 259u: goto L_002D7B10;
    case 260u: goto L_002D7B38;
    case 261u: goto L_002D7C00;
    case 262u: goto L_002D7C14;
    case 263u: goto L_002D7C20;
    case 264u: goto L_002D7D00;
    case 265u: goto L_002D7D28;
    case 266u: goto L_002D7D40;
    case 267u: goto L_002D7D74;
    case 268u: goto L_002D7D90;
    case 269u: goto L_002D7D9C;
    case 270u: goto L_002D7DCC;
    case 271u: goto L_002D7E00;
    case 272u: goto L_002D7E2C;
    case 273u: goto L_002D7E38;
    case 274u: goto L_002D7EA0;
    case 275u: goto L_002D7EA4;
    case 276u: goto L_002D7FF4;
    default: bad_entry(c, 0x002D4000u); return;
    }
L_002D4000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D400C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D400C:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43960000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[4].w[0] + 76u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[2] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[19].w[0] + 524u));  if (t) { goto L_002D4098; } }
L_002D4058:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 220u));
    set32(c.r[3], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D4084; } }
    set32(c.r[2], 0u + 56u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002D407C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4094; } }
L_002D407C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));  if (t) { goto L_002D4094; } }
L_002D4084:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 552u));
    set32(c.r[3], 0u + 170u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D4160; } }
L_002D4094:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 524u));
    c.budget -= 1;
L_002D4098:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D40CC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 1388u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D40CC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 1396u)));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
L_002D40CC:
    c.r[12].d[0] = ld16((c.r[19].w[0] + 544u));
    set32(c.r[8], 0u - 3u);
    c.r[13].d[0] = ld8((c.r[19].w[0] + 523u));
    c.r[7].d[0] = c.r[2].d[0] & 255ull;
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[9], 0u - 17u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 544u);
    c.r[8].d[0] = c.r[12].d[0] & c.r[8].d[0];
    c.r[11].d[0] = c.r[8].d[0] | c.r[11].d[0];
    c.r[13].d[0] = c.r[13].d[0] << 56;
    st16((c.r[19].w[0] + 544u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[12].d[0] = c.r[13].d[0] >> 63;
    c.r[11].d[0] = ld16((c.r[19].w[0] + 544u));
    c.r[8].d[0] = 0ull < c.r[12].d[0] ? 1ull : 0ull;
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st16((c.r[19].w[0] + 544u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[19].w[0] + 544u));
    c.r[2].d[0] = c.r[9].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4138u); st16((c.r[19].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 321u, depth + 1u); else { c.pc = 0x0028B1C0u; return; } if (c.pc != 0x002D4138u) [[unlikely]] return; }
L_002D4138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002D4164; } }
L_002D4140:
    set32(c.r[4], ld32((c.r[19].w[0] + 1348u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 7u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 312u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4160u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D4160u) [[unlikely]] return; }
L_002D4160:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002D4164:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D4180:
    set32(c.r[29], c.r[29].w[0] - 416u);
    set32(c.r[6], 0u - 1u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], 0u + 28u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D41B4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x002D41B4u) [[unlikely]] return; }
L_002D41B4:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 525u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D461C; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002D4624; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 808u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D41FC; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D41FC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D41FC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D4624; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002D4624; } }
L_002D420C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002D4230; } }
L_002D4214:
    set32(c.r[2], ld32((c.r[20].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 119u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 62;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4634; } }
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 762u)));
    c.budget -= 1;
L_002D4230:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002D4614; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4258; } }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[3], ld32((c.r[20].w[0] + 1524u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D4258; } }
    st32((c.r[20].w[0] + 1520u), 0u);
    c.budget -= 1;
L_002D4258:
    set32(c.r[2], ld32((c.r[20].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D46C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D46B4; } }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[3], ld32((c.r[20].w[0] + 1524u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D46B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1520u), 0u);  if (t) { goto L_002D46B4; } }
L_002D4284:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = 0ull | 0ull;
    c.f[3] = ld32((c.r[2].w[0] - 4168u));
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.f[0] = c.r[18].w[0];
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[4] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[28].w[0] - 29804u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[3]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[2], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[18], c.f[1]);
    c.budget -= 30;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4354; } }
L_002D42FC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D46C8; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D46C8; } }
    c.r[2].d[0] = c.r[18].sd[0] < 4000ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4354; } }
L_002D4324:
    c.f[0] = c.r[18].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[2] = ld32((c.r[2].w[0] - 4164u));
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    c.budget -= 12;
L_002D4354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 762u)));  if (t) { goto L_002D46CC; } }
L_002D435C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002D43E8; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 537u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D43D8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 15056u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002D4000u < 16384u) { entry = entries_0035[(t - 0x002D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002D4390:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D43A0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x002D43A0u) [[unlikely]] return; }
L_002D43A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002D43EC; } }
L_002D43A8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D43B8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x002D43B8u) [[unlikely]] return; }
L_002D43B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D43E8; } }
L_002D43C0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D43D0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x002D43D0u) [[unlikely]] return; }
L_002D43D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D43E8; } }
L_002D43D8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D43E8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x002D43E8u) [[unlikely]] return; }
L_002D43E8:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002D43EC:
    set32(c.r[2], ld32((c.r[20].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D46E0; } }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[3], ld32((c.r[20].w[0] + 1524u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D46E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1520u), 0u);  if (t) { goto L_002D46E0; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 220u));
    c.budget -= 1;
L_002D4414:
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D4498; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D448C; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 1356u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002D4714; } }
L_002D4440:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D448C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D448C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 204u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4480; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4478u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 50u, depth + 1u); else { c.pc = 0x004A08F0u; return; } if (c.pc != 0x002D4478u) [[unlikely]] return; }
L_002D4478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 1356u)));  if (t) { goto L_002D4490; } }
L_002D4480:
    set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D448Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 56u, depth + 1u); else { c.pc = 0x004A0A30u; return; } if (c.pc != 0x002D448Cu) [[unlikely]] return; }
L_002D448C:
    set32(c.r[4], ld32((c.r[20].w[0] + 1356u)));
    c.budget -= 1;
L_002D4490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4498u);  if (depth < kMaxDepth) unit_00A2(c, 17u, depth + 1u); else { c.pc = 0x004882F0u; return; } if (c.pc != 0x002D4498u) [[unlikely]] return; }
L_002D4498:
    set32(c.r[2], ld32((c.r[20].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D44B8; } }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[3], ld32((c.r[20].w[0] + 1524u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D44B8; } }
    st32((c.r[20].w[0] + 1520u), 0u);
    c.budget -= 1;
L_002D44B8:
    set32(c.r[3], ld32((c.r[20].w[0] + 1520u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D4730; } }
    c.f[3] = ld32((c.r[19].w[0]));
    c.budget -= 1;
L_002D44CC:
    set32(c.r[17], c.r[29].w[0] + 132u);
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    set32(c.r[16], c.r[29].w[0] + 136u);
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[29].w[0] + 128u), c.f[3]);
    st32((c.r[17].w[0]), c.f[2]);
    st32((c.r[16].w[0]), c.f[1]);
    st32((c.r[29].w[0] + 140u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 752u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 344u)));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 60u));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 61u));
    st8((c.r[29].w[0] + 412u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 62u));
    st8((c.r[29].w[0] + 413u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[29].w[0] + 414u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D47C0; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1578u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D452C; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_002D452C:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_002D4530:
    set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));
    c.r[19].d[0] = c.r[2].d[0] << 56;
    set32(c.r[5], c.r[20].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4544u); c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);  if (depth < kMaxDepth) unit_0088(c, 151u, depth + 1u); else { c.pc = 0x00420780u; return; } if (c.pc != 0x002D4544u) [[unlikely]] return; }
L_002D4544:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D47C8; } }
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_002D4550:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[29].w[0] + 128u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 752u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 344u)));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 60u));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 61u));
    st8((c.r[29].w[0] + 408u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 62u));
    st8((c.r[29].w[0] + 409u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[29].w[0] + 410u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D47F4; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1578u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4594; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_002D4594:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_002D4598:
    set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));
    c.r[16].d[0] = c.r[2].d[0] << 56;
    set32(c.r[5], c.r[20].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D45ACu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);  if (depth < kMaxDepth) unit_0088(c, 151u, depth + 1u); else { c.pc = 0x00420780u; return; } if (c.pc != 0x002D45ACu) [[unlikely]] return; }
L_002D45AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D45D8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 408u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 128u);
    set32(c.r[8], 0u + 4u);
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D45D8u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007D(c, 195u, depth + 1u); else { c.pc = 0x003F6080u; return; } if (c.pc != 0x002D45D8u) [[unlikely]] return; }
L_002D45D8:
    c.f[3] = ld32((c.r[20].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.f[4] = 0u;
    c.f[1] = c.r[2].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 120u), c.f[3]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4614u); st32((c.r[29].w[0] + 112u), c.f[0]);  if (depth < kMaxDepth) unit_007D(c, 21u, depth + 1u); else { c.pc = 0x003F41B0u; return; } if (c.pc != 0x002D4614u) [[unlikely]] return; }
L_002D4614:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002D47FC; } }
L_002D461C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D47FC; } }
L_002D4624:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4214u | kUnwind; return; } goto L_002D4214; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D420Cu | kUnwind; return; } goto L_002D420C; } }
L_002D4634:
    c.f[3] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[2] = ld32((c.r[28].w[0] - 32292u));
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D46A4; } }
    c.f[0] = ld32((c.r[28].w[0] - 32288u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D46AC; } }
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4230u | kUnwind; return; } goto L_002D4230; } }
L_002D46A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4230u | kUnwind; return; } goto L_002D4230; } }
L_002D46AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 100u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4230u | kUnwind; return; } goto L_002D4230; } }
L_002D46B4:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 1520u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D42FCu | kUnwind; return; } goto L_002D42FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4284u | kUnwind; return; } goto L_002D4284; } }
L_002D46C8:
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 762u)));
    c.budget -= 1;
L_002D46CC:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D43ECu | kUnwind; return; } goto L_002D43EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D435Cu | kUnwind; return; } goto L_002D435C; } }
L_002D46E0:
    set32(c.r[6], ld32((c.r[20].w[0] + 1520u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D46F4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x002805A0u; return; } if (c.pc != 0x002D46F4u) [[unlikely]] return; }
L_002D46F4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4704u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 219u, depth + 1u); else { c.pc = 0x002DA850u; return; } if (c.pc != 0x002D4704u) [[unlikely]] return; }
L_002D4704:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4498u | kUnwind; return; } goto L_002D4498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[20].w[0] + 220u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4414u | kUnwind; return; } goto L_002D4414; } }
L_002D4714:
    c.r[4].d[0] = ld8((c.r[5].w[0] + 64u));
    set32(c.r[2], 0u - 65u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4440u | kUnwind; return; } goto L_002D4440; } }
L_002D4730:
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 192u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4740u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D4740u) [[unlikely]] return; }
L_002D4740:
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 762u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4750u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 258u, depth + 1u); else { c.pc = 0x002DB0B0u; return; } if (c.pc != 0x002D4750u) [[unlikely]] return; }
L_002D4750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4758u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 360u, depth + 1u); else { c.pc = 0x00473410u; return; } if (c.pc != 0x002D4758u) [[unlikely]] return; }
L_002D4758:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002D47A0; } }
L_002D4764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D476Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 191u, depth + 1u); else { c.pc = 0x0027DD30u; return; } if (c.pc != 0x002D476Cu) [[unlikely]] return; }
L_002D476C:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 752u)));
    c.r[9].d[0] = c.r[16].d[0] << 48;
    set32(c.r[5], ld32((c.r[20].w[0] + 224u)));
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 82u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4798u); set32(c.r[4], c.r[3].w[0] + 2060u);  if (depth < kMaxDepth) unit_0047(c, 149u, depth + 1u); else { c.pc = 0x0031DB60u; return; } if (c.pc != 0x002D4798u) [[unlikely]] return; }
L_002D4798:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = ld32((c.r[19].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D44CCu | kUnwind; return; } goto L_002D44CC; } }
L_002D47A0:
    c.r[7].d[0] = ld16((c.r[20].w[0] + 6u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 220u)));
    set32(c.r[4], c.r[4].w[0] - 17552u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D47B8u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_007A(c, 211u, depth + 1u); else { c.pc = 0x003E9C30u; return; } if (c.pc != 0x002D47B8u) [[unlikely]] return; }
L_002D47B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[29].w[0] + 144u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4764u | kUnwind; return; } goto L_002D4764; } }
L_002D47C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4530u | kUnwind; return; } goto L_002D4530; } }
L_002D47C8:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 412u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 128u);
    set32(c.r[8], 0u + 4u);
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D47ECu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007D(c, 195u, depth + 1u); else { c.pc = 0x003F6080u; return; } if (c.pc != 0x002D47ECu) [[unlikely]] return; }
L_002D47EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4550u | kUnwind; return; } goto L_002D4550; } }
L_002D47F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4598u | kUnwind; return; } goto L_002D4598; } }
L_002D47FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_002D4820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[5].w[0] + 212u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002D484C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D484C:
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 154u));
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4868; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D4868:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 76u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D48ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x002805A0u; return; } if (c.pc != 0x002D48ACu) [[unlikely]] return; }
L_002D48AC:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D4938; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 122u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D4938; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1356u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002D4958; } }
L_002D48E0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D492C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D492C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 204u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4920; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4918u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 50u, depth + 1u); else { c.pc = 0x004A08F0u; return; } if (c.pc != 0x002D4918u) [[unlikely]] return; }
L_002D4918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 1356u)));  if (t) { goto L_002D4930; } }
L_002D4920:
    set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D492Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 56u, depth + 1u); else { c.pc = 0x004A0A30u; return; } if (c.pc != 0x002D492Cu) [[unlikely]] return; }
L_002D492C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1356u)));
    c.budget -= 1;
L_002D4930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4938u);  if (depth < kMaxDepth) unit_00A2(c, 17u, depth + 1u); else { c.pc = 0x004882F0u; return; } if (c.pc != 0x002D4938u) [[unlikely]] return; }
L_002D4938:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 531u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 531u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002D4974; } }
L_002D4958:
    c.r[4].d[0] = ld8((c.r[5].w[0] + 64u));
    set32(c.r[2], 0u - 65u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D48E0u | kUnwind; return; } goto L_002D48E0; } }
L_002D4974:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D4990:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 525u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D4C50; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1496u));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002D49FC; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 808u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D49F0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D49F0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D49F0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D49FC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D49FC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002D4A88; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 752u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 119u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 62;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D4A88; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 348u)));
    set32(c.r[2], 0u + 1u);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.f[2] = ld32((c.r[3].w[0] + 36u));
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 68u), c.f[2]);  if (t) { goto L_002D4A5C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D4A5C:
    c.f[0] = 0u;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002D4A74; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D4A74:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_002D4A88; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4A88; } }
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 762u)));
    c.budget -= 1;
L_002D4A88:
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);  if (t) { goto L_002D4AEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[3] = ld32((c.r[2].w[0] - 24104u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D4C58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[0] = ld32((c.r[2].w[0] - 24112u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[2] = ld32((c.r[3].w[0] - 24112u));  if (t) { goto L_002D4C60; } }
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 752u)));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 82u)));
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 11;
L_002D4AEC:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 530u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4B3C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 762u)));  if (t) { goto L_002D4B20; } }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[3], ld32((c.r[17].w[0] + 1524u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D4B20; } }
    st32((c.r[17].w[0] + 1520u), 0u);
    c.budget -= 1;
L_002D4B20:
    set32(c.r[6], ld32((c.r[17].w[0] + 1520u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4B30u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 163u, depth + 1u); else { c.pc = 0x002DA1A0u; return; } if (c.pc != 0x002D4B30u) [[unlikely]] return; }
L_002D4B30:
    if (c.r[2].d[0] == 0) c.r[18].d[0] = c.r[16].d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002D4D58; } }
L_002D4B3C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 762u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4D3C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4BE8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D4BE8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002D4BE8; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 537u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D4BD8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 15008u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002D4000u < 16384u) { entry = entries_0035[(t - 0x002D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002D4B90:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4BA0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x002D4BA0u) [[unlikely]] return; }
L_002D4BA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[17].w[0] + 523u));  if (t) { goto L_002D4BEC; } }
L_002D4BA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4BB8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x002D4BB8u) [[unlikely]] return; }
L_002D4BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4BE8; } }
L_002D4BC0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4BD0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x002D4BD0u) [[unlikely]] return; }
L_002D4BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4BE8; } }
L_002D4BD8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4BE8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x002D4BE8u) [[unlikely]] return; }
L_002D4BE8:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 523u));
    c.budget -= 1;
L_002D4BEC:
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4C6C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 530u));
    c.budget -= 1;
L_002D4C00:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4C84; } }
L_002D4C0C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4C20u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x002805A0u; return; } if (c.pc != 0x002D4C20u) [[unlikely]] return; }
L_002D4C20:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 220u));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D4CA0; } }
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D4CA0; } }
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D4CA0; } }
L_002D4C48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002D4D58; } }
L_002D4C50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D4D58; } }
L_002D4C58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4AECu | kUnwind; return; } goto L_002D4AEC; } }
L_002D4C60:
    set32(c.r[2], ld32((c.r[17].w[0] + 752u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 82u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4AECu | kUnwind; return; } goto L_002D4AEC; } }
L_002D4C6C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 23u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4C7Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x002D4C7Cu) [[unlikely]] return; }
L_002D4C7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[17].w[0] + 530u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4C00u | kUnwind; return; } goto L_002D4C00; } }
L_002D4C84:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 526u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4C0Cu | kUnwind; return; } goto L_002D4C0C; } }
L_002D4CA0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4D0C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 1356u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002D4D20; } }
L_002D4CC0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4D0C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4D0C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 204u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4D00; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4CF8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 50u, depth + 1u); else { c.pc = 0x004A08F0u; return; } if (c.pc != 0x002D4CF8u) [[unlikely]] return; }
L_002D4CF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 1356u)));  if (t) { goto L_002D4D10; } }
L_002D4D00:
    set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4D0Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 56u, depth + 1u); else { c.pc = 0x004A0A30u; return; } if (c.pc != 0x002D4D0Cu) [[unlikely]] return; }
L_002D4D0C:
    set32(c.r[4], ld32((c.r[17].w[0] + 1356u)));
    c.budget -= 1;
L_002D4D10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4D18u);  if (depth < kMaxDepth) unit_00A2(c, 17u, depth + 1u); else { c.pc = 0x004882F0u; return; } if (c.pc != 0x002D4D18u) [[unlikely]] return; }
L_002D4D18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002D4D58; } }
L_002D4D20:
    c.r[4].d[0] = ld8((c.r[5].w[0] + 64u));
    set32(c.r[2], 0u - 65u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4CC0u | kUnwind; return; } goto L_002D4CC0; } }
L_002D4D3C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4D50u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x002805A0u; return; } if (c.pc != 0x002D4D50u) [[unlikely]] return; }
L_002D4D50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4C48u | kUnwind; return; } goto L_002D4C48; } }
L_002D4D58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D4D70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D4FE8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1496u));
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[8].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_002D4FCC; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 808u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_002D4DD0; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D4DD0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D4DD0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002D4FCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002D4FCC; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 523u));
    c.budget -= 1;
L_002D4DE4:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D4DF4; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D4DF4:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_002D4FE8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002D4E1C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 120u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D4ED0; } }
L_002D4E1C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4EA8; } }
    c.r[3].d[0] = c.r[16].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[4].d[0] = 0ull | 0ull;
    c.f[0] = c.r[3].w[0];
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.f[3] = ld32((c.r[2].w[0] - 4168u));
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.f[4] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[28].w[0] - 29804u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[3]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[3], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1520u), c.r[6].w[0]);  if (t) { goto L_002D4EB4; } }
L_002D4EA8:
    c.r[5].d[0] = c.r[16].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    st32((c.r[17].w[0] + 1520u), c.r[6].w[0]);
    c.budget -= 3;
L_002D4EB4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002D4FDC; } }
L_002D4EBC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4ECCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x002805A0u; return; } if (c.pc != 0x002D4ECCu) [[unlikely]] return; }
L_002D4ECC:
    st32((c.r[17].w[0] + 1520u), 0u);
    c.budget -= 1;
L_002D4ED0:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 523u));
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D4EF8; } }
    c.r[3].d[0] = c.r[4].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
L_002D4EF8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D4F8C; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 552u));
    set32(c.r[3], 0u + 191u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D4F8C; } }
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 524u));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D4FE8; } }
    c.r[2].d[0] = c.r[4].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4F5C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4F54u); set32(c.r[8], 0u + 35u);  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x002D1540u; return; } if (c.pc != 0x002D4F54u) [[unlikely]] return; }
L_002D4F54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4FC4; } }
L_002D4F5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 17u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4F6Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x002D4F6Cu) [[unlikely]] return; }
L_002D4F6C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4F84u); set32(c.r[8], 0u + 35u);  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x002D1540u; return; } if (c.pc != 0x002D4F84u) [[unlikely]] return; }
L_002D4F84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4FC4; } }
L_002D4F8C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D4FE8; } }
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D4FBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4FB4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 56u, depth + 1u); else { c.pc = 0x00285120u; return; } if (c.pc != 0x002D4FB4u) [[unlikely]] return; }
L_002D4FB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4FC4; } }
L_002D4FBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4FC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 54u, depth + 1u); else { c.pc = 0x002850B0u; return; } if (c.pc != 0x002D4FC4u) [[unlikely]] return; }
L_002D4FC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002D4FEC; } }
L_002D4FCC:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4DF4u | kUnwind; return; } goto L_002D4DF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 523u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4DE4u | kUnwind; return; } goto L_002D4DE4; } }
L_002D4FDC:
    c.r[2].d[0] = ld16((c.r[6].w[0] + 6u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1524u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4EBCu | kUnwind; return; } goto L_002D4EBC; } }
L_002D4FE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002D4FEC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D5000:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D52C4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1496u));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002D50C4; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 808u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002D5060; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D5060; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D5060:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002D50C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002D50C4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 523u));
    c.budget -= 1;
L_002D5074:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D5084; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D5084:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002D52C4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D52C4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D50D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D50B4u);  if (depth < kMaxDepth) unit_0094(c, 35u, depth + 1u); else { c.pc = 0x00450680u; return; } if (c.pc != 0x002D50B4u) [[unlikely]] return; }
L_002D50B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D50D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002D52C8; } }
L_002D50C4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5084u | kUnwind; return; } goto L_002D5084; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 523u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5074u | kUnwind; return; } goto L_002D5074; } }
L_002D50D4:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 529u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D5288; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 120u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D5288; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D5184; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[4] = c.r[3].w[0];
    c.r[4].d[0] = 0ull | 0ull;
    c.f[3] = ld32((c.r[2].w[0] - 4168u));
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.f[2] = c.r[3].w[0];
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.f[1] = 0u;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.f[0] = ld32((c.r[28].w[0] - 29804u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[3], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.budget -= 30;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1520u), c.r[16].w[0]);  if (t) { goto L_002D51CC; } }
L_002D5184:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D52B0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D52B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[3] = c.r[3].w[0];
    c.f[2] = ld32((c.r[2].w[0] - 4164u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 12;
L_002D51C8:
    st32((c.r[17].w[0] + 1520u), c.r[16].w[0]);
    c.budget -= 1;
L_002D51CC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002D52B8; } }
L_002D51D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D51E4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x002805A0u; return; } if (c.pc != 0x002D51E4u) [[unlikely]] return; }
L_002D51E4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 523u));
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D520C; } }
    c.r[2].d[0] = c.r[3].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
L_002D520C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5278; } }
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 524u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D5278; } }
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5260; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5258u); set32(c.r[8], 0u + 35u);  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x002D1540u; return; } if (c.pc != 0x002D5258u) [[unlikely]] return; }
L_002D5258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D527C; } }
L_002D5260:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5278u); set32(c.r[8], 0u + 35u);  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x002D1540u; return; } if (c.pc != 0x002D5278u) [[unlikely]] return; }
L_002D5278:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002D527C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5288u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 35u, depth + 1u); else { c.pc = 0x00284D10u; return; } if (c.pc != 0x002D5288u) [[unlikely]] return; }
L_002D5288:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 11680u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D52A8u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0099(c, 183u, depth + 1u); else { c.pc = 0x00466BA0u; return; } if (c.pc != 0x002D52A8u) [[unlikely]] return; }
L_002D52A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D52C4; } }
L_002D52B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D51C8u | kUnwind; return; } goto L_002D51C8; } }
L_002D52B8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 6u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1524u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D51D4u | kUnwind; return; } goto L_002D51D4; } }
L_002D52C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002D52C8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D52E0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 21;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[4].w[0] + 1520u), c.r[18].w[0]);  if (t) { goto L_002D5700; } }
L_002D5334:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[12], c.f[13]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[22] = fp::ee::div(c.fcr31, c.f[0], c.f[12]);
    c.f[21] = c.r[3].w[0];
    c.budget -= 8;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_002D5358; } }
    c.f[21] = c.f[22];
    c.budget -= 1;
L_002D5358:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.f[20] = fp::ee::mul(c.fcr31, c.f[14], c.f[21]);  if (t) { goto L_002D5378; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[1] = ld32((c.r[3].w[0] - 4168u));
    c.f[0] = ld32((c.r[28].w[0] - 29804u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 5;
L_002D5378:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D570C; } }
    c.r[4].d[0] = ld8((c.r[20].w[0] + 552u));
    set32(c.r[3], 0u + 63u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D5A6C; } }
    c.r[4].d[0] = ld8((c.r[20].w[0] + 220u));
    set32(c.r[3], 0u + 57u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D5A6C; } }
    set32(c.r[3], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D5A6C; } }
    set32(c.r[2], 0u + 53u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002D5760; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 220u));
    c.budget -= 1;
L_002D53C8:
    set32(c.r[2], 0u + 63u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D57B0; } }
    set32(c.r[2], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D57B0; } }
    c.f[0] = fp::cvt_w_s(c.f[20]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D53F8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x002805A0u; return; } if (c.pc != 0x002D53F8u) [[unlikely]] return; }
L_002D53F8:
    c.r[17].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[17].d[0] = c.r[17].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002D5420; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D54C4; } }
L_002D5420:
    set32(c.r[2], ld32((c.r[20].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 119u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 62;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D54C4; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002D5478; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 808u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D546C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D546C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D546C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D5478; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D5478:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002D54C4; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D57EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.budget -= 1;
L_002D5494:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] - 11680u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D54B0u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 183u, depth + 1u); else { c.pc = 0x00466BA0u; return; } if (c.pc != 0x002D54B0u) [[unlikely]] return; }
L_002D54B0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 762u)));
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
L_002D54C4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D54D4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 219u, depth + 1u); else { c.pc = 0x002DA850u; return; } if (c.pc != 0x002D54D4u) [[unlikely]] return; }
L_002D54D4:
    c.r[4].d[0] = ld8((c.r[20].w[0] + 808u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002D54F4; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D54F4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D54F4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002D5A6C; } }
    set32(c.r[21], c.r[29].w[0] + 180u);
    set32(c.r[23], c.r[29].w[0] + 184u);
    st32((c.r[29].w[0] + 176u), 0u);
    c.f[0] = 0u;
    st32((c.r[21].w[0]), 0u);
    st32((c.r[23].w[0]), 0u);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(9ll);  if (t) { goto L_002D5850; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002D5590; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 1496u));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002D586C; } }
    c.r[4].d[0] = ld8((c.r[20].w[0] + 808u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002D5564; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D5564; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D5564:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002D586C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002D586C; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 523u));
    c.budget -= 1;
L_002D5578:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D5588; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D5588:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002D560C; } }
L_002D5590:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D587C; } }
L_002D55A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D5608; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(2ll);  if (t) { goto L_002D560C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D55D4u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 182u, depth + 1u); else { c.pc = 0x00486780u; return; } if (c.pc != 0x002D55D4u) [[unlikely]] return; }
L_002D55D4:
    c.r[1].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D560C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[12] = c.r[2].w[0];
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 11680u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5600u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 183u, depth + 1u); else { c.pc = 0x00466BA0u; return; } if (c.pc != 0x002D5600u) [[unlikely]] return; }
L_002D5600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 752u)));  if (t) { goto L_002D5610; } }
L_002D5608:
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002D560C:
    set32(c.r[3], ld32((c.r[20].w[0] + 752u)));
    c.budget -= 1;
L_002D5610:
    c.r[3].d[0] = ld8((c.r[3].w[0] + 119u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 62;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D5A30; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 1496u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002D5664; } }
    c.r[4].d[0] = ld8((c.r[20].w[0] + 808u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002D5658; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D5658; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D5658:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002D5664; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D5664:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002D5A30; } }
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D5A30; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 524u));
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D569C; } }
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002D569C:
    c.r[12].d[0] = ld16((c.r[20].w[0] + 544u));
    set32(c.r[10], 0u - 3u);
    c.r[7].d[0] = c.r[2].d[0] & 255ull;
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[8], 0u - 17u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[4], c.r[20].w[0] + 544u);
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st16((c.r[20].w[0] + 544u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld16((c.r[20].w[0] + 544u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[20].w[0] + 544u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[20].w[0] + 544u));
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D56F8u); st16((c.r[20].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 300u, depth + 1u); else { c.pc = 0x0028AEB0u; return; } if (c.pc != 0x002D56F8u) [[unlikely]] return; }
L_002D56F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_002D5A70; } }
L_002D5700:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 6u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1524u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5334u | kUnwind; return; } goto L_002D5334; } }
L_002D570C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D5734; } }
    c.f[0] = fp::cvt_w_s(c.f[20]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002D5750; } }
L_002D5734:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
L_002D5750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5758u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 163u, depth + 1u); else { c.pc = 0x002DA1A0u; return; } if (c.pc != 0x002D5758u) [[unlikely]] return; }
L_002D5758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5A6C; } }
L_002D5760:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 143u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5774u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x002D5774u) [[unlikely]] return; }
L_002D5774:
    set32(c.r[2], ld32((c.r[28].w[0] - 32296u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002D578C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002D57A8; } }
L_002D578C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[20]);
    c.budget -= 7;
L_002D57A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[20].w[0] + 220u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D53C8u | kUnwind; return; } goto L_002D53C8; } }
L_002D57B0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D57C0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 219u, depth + 1u); else { c.pc = 0x002DA850u; return; } if (c.pc != 0x002D57C0u) [[unlikely]] return; }
L_002D57C0:
    set32(c.r[4], ld32((c.r[20].w[0] + 1348u)));
    c.f[0] = fp::cvt_w_s(c.f[20]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[6], c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 312u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D57E4u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D57E4u) [[unlikely]] return; }
L_002D57E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5A6C; } }
L_002D57EC:
    c.r[12].d[0] = ld16((c.r[20].w[0] + 544u));
    set32(c.r[10], 0u - 3u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[8], 0u - 17u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[4], c.r[20].w[0] + 544u);
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st16((c.r[20].w[0] + 544u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld16((c.r[20].w[0] + 544u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[20].w[0] + 544u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[20].w[0] + 544u));
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5848u); st16((c.r[20].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 300u, depth + 1u); else { c.pc = 0x0028AEB0u; return; } if (c.pc != 0x002D5848u) [[unlikely]] return; }
L_002D5848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5494u | kUnwind; return; } goto L_002D5494; } }
L_002D5850:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(20ll);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[23].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D560Cu | kUnwind; return; } goto L_002D560C; } }
L_002D586C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5588u | kUnwind; return; } goto L_002D5588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[20].w[0] + 523u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5578u | kUnwind; return; } goto L_002D5578; } }
L_002D587C:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D55A8u | kUnwind; return; } goto L_002D55A8; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 752u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D55A8u | kUnwind; return; } goto L_002D55A8; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 808u));
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002D58D0; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & 67ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D58D0; } }
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_002D58D0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D5954; } }
L_002D58D8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002D59E4; } }
L_002D58E0:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(20ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D560Cu | kUnwind; return; } goto L_002D560C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D58F0u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 182u, depth + 1u); else { c.pc = 0x00486780u; return; } if (c.pc != 0x002D58F0u) [[unlikely]] return; }
L_002D58F0:
    c.r[1].d[0] = c.r[2].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D560Cu | kUnwind; return; } goto L_002D560C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002D592C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[12] = c.r[2].w[0];
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 11680u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5924u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 183u, depth + 1u); else { c.pc = 0x00466BA0u; return; } if (c.pc != 0x002D5924u) [[unlikely]] return; }
L_002D5924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D560Cu | kUnwind; return; } goto L_002D560C; } }
L_002D592C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[12] = c.r[2].w[0];
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 11680u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D594Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 183u, depth + 1u); else { c.pc = 0x00466BA0u; return; } if (c.pc != 0x002D594Cu) [[unlikely]] return; }
L_002D594C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D560Cu | kUnwind; return; } goto L_002D560C; } }
L_002D5954:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[0] = c.r[2].w[0];
    c.f[3] = ld32((c.r[19].w[0]));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[21].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[2] = ld32((c.r[19].w[0] + 12u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 188u), c.f[2]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5998u); st32((c.r[23].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x002D5998u) [[unlikely]] return; }
L_002D5998:
    c.f[2] = ld32((c.r[21].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = 0u;
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[3] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D59C0u); st32((c.r[21].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x002D59C0u) [[unlikely]] return; }
L_002D59C0:
    c.f[2] = ld32((c.r[23].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = 0u;
    c.f[3] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[23].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D58D8u | kUnwind; return; } goto L_002D58D8; } }
L_002D59E4:
    set32(c.r[2], ld32((c.r[20].w[0] + 752u)));
    c.f[20] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D59F4u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x002D59F4u) [[unlikely]] return; }
L_002D59F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43200000u);
    c.f[2] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[21].w[0]));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[20]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D58E0u | kUnwind; return; } goto L_002D58E0; } }
L_002D5A30:
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D5A6C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002D5A54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5A50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 64u, depth + 1u); else { c.pc = 0x002D0DC0u; return; } if (c.pc != 0x002D5A50u) [[unlikely]] return; }
L_002D5A50:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_002D5A54:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 176u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5A6Cu); set32(c.r[8], 0u + 35u);  if (depth < kMaxDepth) unit_0034(c, 75u, depth + 1u); else { c.pc = 0x002D1110u; return; } if (c.pc != 0x002D5A6Cu) [[unlikely]] return; }
L_002D5A6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_002D5A70:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002D5AB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D5C14; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1496u));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002D5BF4; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 808u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002D5B10; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D5B10; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D5B10:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002D5BF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002D5BF4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 523u));
    c.budget -= 1;
L_002D5B24:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D5B34; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D5B34:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002D5C14; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 762u)));  if (t) { goto L_002D5C04; } }
    set32(c.r[2], 0u + 55u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D5B58; } }
    set32(c.r[5], 0u + 20u);
    c.budget -= 1;
L_002D5B58:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002D5B98; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 808u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002D5B8C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D5B8C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D5B8C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D5B98; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D5B98:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002D5BB0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5BB0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x002805A0u; return; } if (c.pc != 0x002D5BB0u) [[unlikely]] return; }
L_002D5BB0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 523u));
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[6].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002D5BD8; } }
    c.r[2].d[0] = c.r[3].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
L_002D5BD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5BECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 179u, depth + 1u); else { c.pc = 0x002D28C0u; return; } if (c.pc != 0x002D5BECu) [[unlikely]] return; }
L_002D5BEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002D5C18; } }
L_002D5BF4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5B34u | kUnwind; return; } goto L_002D5B34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 523u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5B24u | kUnwind; return; } goto L_002D5B24; } }
L_002D5C04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5C0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 56u, depth + 1u); else { c.pc = 0x00285120u; return; } if (c.pc != 0x002D5C0Cu) [[unlikely]] return; }
L_002D5C0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 30u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5B58u | kUnwind; return; } goto L_002D5B58; } }
L_002D5C14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002D5C18:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D5C30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D5E9C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1496u));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002D5CC0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 808u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002D5C8C; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D5C8C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D5C8C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002D5CC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002D5CC0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 523u));
    c.budget -= 1;
L_002D5CA0:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D5CB0; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D5CB0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002D5CD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002D5EA0; } }
L_002D5CC0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5CB0u | kUnwind; return; } goto L_002D5CB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 523u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5CA0u | kUnwind; return; } goto L_002D5CA0; } }
L_002D5CD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 76u);
    set32(c.r[6], c.r[29].w[0] + 79u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5CE4u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x002D8920u; return; } if (c.pc != 0x002D5CE4u) [[unlikely]] return; }
L_002D5CE4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D5D60; } }
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.f[3] = ld32((c.r[2].w[0] - 4168u));
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.f[4] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[28].w[0] - 29804u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[3]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[2], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    c.budget -= 28;
L_002D5D60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5D74u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x002805A0u; return; } if (c.pc != 0x002D5D74u) [[unlikely]] return; }
L_002D5D74:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5E4C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 17u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5D94u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x002D5D94u) [[unlikely]] return; }
L_002D5D94:
    c.r[8].d[0] = ld16((c.r[16].w[0] + 544u));
    set32(c.r[6], 0u - 3u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[16].w[0] + 544u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[16].w[0] + 544u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[16].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 544u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[16].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[20] = ld32((c.r[16].w[0] + 104u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5DE8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002D5DE8u) [[unlikely]] return; }
L_002D5DE8:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5DF4u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002D5DF4u) [[unlikely]] return; }
L_002D5DF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    set32(c.r[4], c.r[16].w[0] + 544u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[5] = 0u;
    c.f[2] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 40u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[20]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[5]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 56u), c.f[3]);
    st32((c.r[29].w[0] + 52u), c.f[2]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5E44u); st32((c.r[29].w[0] + 48u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 369u, depth + 1u); else { c.pc = 0x0028B8C0u; return; } if (c.pc != 0x002D5E44u) [[unlikely]] return; }
L_002D5E44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5E9C; } }
L_002D5E4C:
    c.r[9].d[0] = ld16((c.r[16].w[0] + 544u));
    set32(c.r[7], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[5], 0u - 17u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[4], c.r[16].w[0] + 544u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[16].w[0] + 544u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[16].w[0] + 544u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[16].w[0] + 544u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[16].w[0] + 544u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5E9Cu); st16((c.r[16].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0023(c, 174u, depth + 1u); else { c.pc = 0x0028DBA0u; return; } if (c.pc != 0x002D5E9Cu) [[unlikely]] return; }
L_002D5E9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002D5EA0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D5EB0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
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
    st32((c.r[4].w[0] + 840u), c.r[18].w[0]);
    c.budget -= 15;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[4].w[0] + 1520u), c.r[18].w[0]);  if (t) { goto L_002D5F1C; } }
L_002D5EEC:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D65F0; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D5F28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_002D65F4; } }
L_002D5F1C:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 6u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1524u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5EECu | kUnwind; return; } goto L_002D5EEC; } }
L_002D5F28:
    set32(c.r[3], 0u + 9u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st16((c.r[29].w[0] + 124u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[29].w[0] + 124u);
    set32(c.r[6], c.r[29].w[0] + 127u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5F48u); st8((c.r[29].w[0] + 127u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x002D8920u; return; } if (c.pc != 0x002D5F48u) [[unlikely]] return; }
L_002D5F48:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 127u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5F74; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 121u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5F74; } }
    st8((c.r[29].w[0] + 127u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002D5F74:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D5FFC; } }
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = c.r[3].w[0];
    c.r[4].d[0] = 0ull | 0ull;
    c.f[3] = ld32((c.r[2].w[0] - 4168u));
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.f[4] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[28].w[0] - 29804u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[3]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[3], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_002D605C; } }
L_002D5FFC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002D6508; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D6508; } }
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < 4000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D6028; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D6058; } }
L_002D6028:
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[2] = ld32((c.r[2].w[0] - 4164u));
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 12;
L_002D6058:
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_002D605C:
    set32(c.r[2], 0u + 9u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 220u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D607C; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D607C; } }
    c.r[16].d[0] = ld16((c.r[19].w[0] + 762u));
    c.budget -= 1;
L_002D607C:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 530u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D6510; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 119u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 62;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6120; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 529u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6120; } }
    c.r[12].d[0] = ld16((c.r[19].w[0] + 544u));
    set32(c.r[10], 0u - 3u);
    set32(c.r[6], 0u + 1u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[8], 0u - 17u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 544u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st16((c.r[19].w[0] + 544u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld16((c.r[19].w[0] + 544u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[19].w[0] + 544u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[19].w[0] + 544u));
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6118u); st16((c.r[19].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 300u, depth + 1u); else { c.pc = 0x0028AEB0u; return; } if (c.pc != 0x002D6118u) [[unlikely]] return; }
L_002D6118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D65F0; } }
L_002D6120:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6160; } }
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[3], 0u + 4u);
    c.r[4].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D6160; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002D6160; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002D6160; } }
    c.r[17].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_002D6160:
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6268; } }
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[2] = ld32((c.r[19].w[0] + 32u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[20] = ld32((c.r[19].w[0] + 104u));
    c.f[21] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[22] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D61A4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002D61A4u) [[unlikely]] return; }
L_002D61A4:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D61B0u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002D61B0u) [[unlikely]] return; }
L_002D61B0:
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
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D6268; } }
    c.r[4].d[0] = ld8((c.r[19].w[0] + 808u));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D64A4; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 1496u));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002D6528; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002D6228; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D6228; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D6228:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002D6528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002D6528; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 523u));
    c.budget -= 1;
L_002D623C:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D624C; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D624C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002D625C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 124u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { goto L_002D64A4; } }
L_002D625C:
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 124u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002D64A4; } }
L_002D6268:
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D627Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x002805A0u; return; } if (c.pc != 0x002D627Cu) [[unlikely]] return; }
L_002D627C:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D6538; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 1496u));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002D6570; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 808u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002D62C4; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D62C4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D62C4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D6570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002D6570; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 523u));
    c.budget -= 1;
L_002D62D8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D62E8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D62E8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002D6398; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D637C; } }
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[2] = ld32((c.r[19].w[0] + 32u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[20] = ld32((c.r[19].w[0] + 104u));
    c.f[21] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[22] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6328u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002D6328u) [[unlikely]] return; }
L_002D6328:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6334u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002D6334u) [[unlikely]] return; }
L_002D6334:
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
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D6398; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D6398; } }
L_002D637C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6390u); st16((c.r[29].w[0] + 124u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (depth < kMaxDepth) unit_0021(c, 35u, depth + 1u); else { c.pc = 0x00284D10u; return; } if (c.pc != 0x002D6390u) [[unlikely]] return; }
L_002D6390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[19].w[0] + 736u));  if (t) { goto L_002D648C; } }
L_002D6398:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 1496u));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002D6580; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 808u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002D63D0; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D63D0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D63D0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D6580; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002D6580; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 523u));
    c.budget -= 1;
L_002D63E4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D63F4; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D63F4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002D6488; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6488; } }
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[2] = ld32((c.r[19].w[0] + 32u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[20] = ld32((c.r[19].w[0] + 104u));
    c.f[21] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[22] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6434u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002D6434u) [[unlikely]] return; }
L_002D6434:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6440u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002D6440u) [[unlikely]] return; }
L_002D6440:
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
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D6590; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D6590; } }
L_002D6488:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 736u));
    c.budget -= 1;
L_002D648C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D65AC; } }
    set32(c.r[4], c.r[19].w[0] + 752u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D64A4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 158u, depth + 1u); else { c.pc = 0x00396790u; return; } if (c.pc != 0x002D64A4u) [[unlikely]] return; }
L_002D64A4:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 127u));
    c.budget -= 1;
L_002D64A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = ld16((c.r[29].w[0] + 124u));  if (t) { goto L_002D64F0; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D64F0; } }
    c.r[6].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[6].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D65C4; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 752u)));
    c.r[5].d[0] = c.r[6].d[0] & 15ull;
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 64u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002D65CC; } }
L_002D64EC:
    st16((c.r[29].w[0] + 124u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002D64F0:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 124u));
    set32(c.r[3], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002D65D4; } }
L_002D6500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D65F0; } }
L_002D6508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6058u | kUnwind; return; } goto L_002D6058; } }
L_002D6510:
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6520u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 163u, depth + 1u); else { c.pc = 0x002DA1A0u; return; } if (c.pc != 0x002D6520u) [[unlikely]] return; }
L_002D6520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D65F0; } }
L_002D6528:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D624Cu | kUnwind; return; } goto L_002D624C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[19].w[0] + 523u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D623Cu | kUnwind; return; } goto L_002D623C; } }
L_002D6538:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 17u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6548u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x002D6548u) [[unlikely]] return; }
L_002D6548:
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[3], 0u + 7u);
    c.r[2].d[0] = c.r[2].d[0] & 48ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[29].w[0] + 124u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6488u | kUnwind; return; } goto L_002D6488; } }
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 124u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6488u | kUnwind; return; } goto L_002D6488; } }
L_002D6570:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D62E8u | kUnwind; return; } goto L_002D62E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[19].w[0] + 523u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D62D8u | kUnwind; return; } goto L_002D62D8; } }
L_002D6580:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D63F4u | kUnwind; return; } goto L_002D63F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[19].w[0] + 523u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D63E4u | kUnwind; return; } goto L_002D63E4; } }
L_002D6590:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 525u));
    set32(c.r[2], 0u - 33u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 525u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6488u | kUnwind; return; } goto L_002D6488; } }
L_002D65AC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 45u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D65BCu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x002D65BCu) [[unlikely]] return; }
L_002D65BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[29].w[0] + 127u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D64A8u | kUnwind; return; } goto L_002D64A8; } }
L_002D65C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[6].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D64ECu | kUnwind; return; } goto L_002D64EC; } }
L_002D65CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[6].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D64ECu | kUnwind; return; } goto L_002D64EC; } }
L_002D65D4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D65E8u); set32(c.r[8], 0u + 35u);  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x002D1540u; return; } if (c.pc != 0x002D65E8u) [[unlikely]] return; }
L_002D65E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6500u | kUnwind; return; } goto L_002D6500; } }
L_002D65F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002D65F4:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002D6620:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[9].d[0] & 255ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.f[20] = ld32((c.r[29].w[0] + 204u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002D706C; } }
    st32((c.r[18].w[0] + 840u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[18].w[0] + 1520u), c.r[17].w[0]);  if (t) { goto L_002D6C24; } }
L_002D668C:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1496u));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002D6C30; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 808u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002D66C4; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D66C4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D66C4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002D6C30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002D6C30; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 523u));
    c.budget -= 1;
L_002D66D8:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D66E8; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D66E8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002D706C; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D706C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6710u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 143u, depth + 1u); else { c.pc = 0x002D9F30u; return; } if (c.pc != 0x002D6710u) [[unlikely]] return; }
L_002D6710:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D6C40; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 122u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { goto L_002D6C5C; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1496u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D6C5C; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D6C5C; } }
    c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002D675C:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D6CCC; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D6784; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 212u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6784u); set32(c.r[4], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_0028(c, 48u, depth + 1u); else { c.pc = 0x002A0930u; return; } if (c.pc != 0x002D6784u) [[unlikely]] return; }
L_002D6784:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1496u));
    c.budget -= 1;
L_002D6788:
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D6CE4; } }
L_002D6798:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D6D4C; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 220u));
    set32(c.r[3], 0u + 63u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D706C; } }
    set32(c.r[3], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D706C; } }
    set32(c.r[3], 0u + 57u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D706C; } }
    set32(c.r[3], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D706C; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 220u));
    set32(c.r[2], 0u + 52u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D67F4; } }
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D67F4:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1496u));
    c.r[20].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002D6D64; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6D64; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 29u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6D64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002D6D64; } }
L_002D682C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_002D6858; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 220u));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002D6858; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 30u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6858u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x002805A0u; return; } if (c.pc != 0x002D6858u) [[unlikely]] return; }
L_002D6858:
    set32(c.r[23], c.r[29].w[0] + 244u);
    set32(c.r[30], c.r[29].w[0] + 248u);
    st32((c.r[29].w[0] + 240u), 0u);
    st32((c.r[23].w[0]), 0u);
    st32((c.r[30].w[0]), 0u);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 220u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6D74; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6D74; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 220u));
    c.budget -= 1;
L_002D6888:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D6D98; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 344u)));
    set32(c.r[2], 0u + 84u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1564u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D6D98; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D6D8C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1575u));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D68C4; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 1;
L_002D68C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 348u)));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_002D68D4:
    c.f[3] = ld32((c.r[2].w[0] + 56u));
    set32(c.r[7], c.r[29].w[0] + 180u);
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    set32(c.r[3], c.r[29].w[0] + 184u);
    c.f[1] = ld32((c.r[2].w[0] + 48u));
    set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    st32((c.r[29].w[0] + 188u), c.f[20]);
    st32((c.r[29].w[0] + 224u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 228u), c.f[2]);
    st32((c.r[29].w[0] + 232u), c.f[3]);
    c.f[4] = ld32((c.r[18].w[0] + 40u));
    c.f[3] = ld32((c.r[17].w[0] + 40u));
    c.f[6] = ld32((c.r[18].w[0] + 36u));
    c.f[5] = ld32((c.r[17].w[0] + 36u));
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = c.r[2].w[0];
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[5], c.f[5]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[5], c.f[2]);
    st32((c.r[7].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    st32((c.r[29].w[0] + 176u), c.f[1]);
    st32((c.r[29].w[0] + 208u), c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[4], c.f[2]);
    st32((c.r[3].w[0]), c.f[1]);
    st32((c.r[29].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    st32((c.r[29].w[0] + 220u), c.f[20]);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6978u); st32((c.r[29].w[0] + 216u), c.f[0]);  if (depth < kMaxDepth) unit_00A8(c, 29u, depth + 1u); else { c.pc = 0x004A04D0u; return; } if (c.pc != 0x002D6978u) [[unlikely]] return; }
L_002D6978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 5u);  if (t) { goto L_002D6D9C; } }
    c.r[4].d[0] = c.r[4].d[0] << 62;
    c.budget -= 1;
L_002D6984:
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D69A8; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_002D69A8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D6AE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[23].w[0]), 0u);  if (t) { goto L_002D6ED0; } }
L_002D69A8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D6A24; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002D6DCC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = ld8((c.r[17].w[0] + 220u));
    set32(c.r[2], 0u + 16u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D69E8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
L_002D69E8:
    st32((c.r[23].w[0]), c.f[1]);
    set32(c.r[4], c.r[18].w[0] + 752u);
    st32((c.r[30].w[0]), c.f[0]);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 240u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6A08u); c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(21ll);  if (depth < kMaxDepth) unit_0065(c, 127u, depth + 1u); else { c.pc = 0x00395F70u; return; } if (c.pc != 0x002D6A08u) [[unlikely]] return; }
L_002D6A08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 20192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6A1Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0047B600u; return; } if (c.pc != 0x002D6A1Cu) [[unlikely]] return; }
L_002D6A1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D6B3C; } }
L_002D6A24:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002D6A5C; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D6E50; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 529u));
    set32(c.r[3], 0u - 17u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 529u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002D706C; } }
L_002D6A5C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D6A9C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6A9C; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002D6A9C; } }
    set32(c.r[4], c.r[18].w[0] + 752u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6A94u); c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(19ll);  if (depth < kMaxDepth) unit_0065(c, 127u, depth + 1u); else { c.pc = 0x00395F70u; return; } if (c.pc != 0x002D6A94u) [[unlikely]] return; }
L_002D6A94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D6B3C; } }
L_002D6A9C:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 220u));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002D6AB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(21ll);  if (t) { goto L_002D6AB8; } }
L_002D6AB4:
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(5ll);
    c.budget -= 1;
L_002D6AB8:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[20].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[18].w[0] + 752u);
    set32(c.r[5], 0u + 2u);
    c.r[20].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6AD8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 127u, depth + 1u); else { c.pc = 0x00395F70u; return; } if (c.pc != 0x002D6AD8u) [[unlikely]] return; }
L_002D6AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D6B3C; } }
L_002D6AE0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002D6B18; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D6F34; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 529u));
    set32(c.r[3], 0u - 17u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 529u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002D706C; } }
L_002D6B18:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(3ll);  if (t) { goto L_002D6B3C; } }
    set32(c.r[4], c.r[18].w[0] + 752u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6B3Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 127u, depth + 1u); else { c.pc = 0x00395F70u; return; } if (c.pc != 0x002D6B3Cu) [[unlikely]] return; }
L_002D6B3C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002D6FB0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_002D6FB0; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D6FB0; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6FB0; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 736u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6FB0; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002D6FB0; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D6FB0; } }
    c.r[10].d[0] = ld8((c.r[17].w[0] + 529u));
    set32(c.r[11], 0u - 17u);
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[8], 0u - 3u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[4], c.r[18].w[0] + 544u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 15u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[10].d[0] = c.r[10].d[0] & c.r[11].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[12].d[0];
    st8((c.r[17].w[0] + 529u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld16((c.r[18].w[0] + 544u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[18].w[0] + 544u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[18].w[0] + 544u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[11].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[12].d[0];
    st16((c.r[18].w[0] + 544u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[18].w[0] + 544u));
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C04u); st16((c.r[18].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 351u, depth + 1u); else { c.pc = 0x0028B5F0u; return; } if (c.pc != 0x002D6C04u) [[unlikely]] return; }
L_002D6C04:
    set32(c.r[4], c.r[18].w[0] + 752u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C10u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 136u, depth + 1u); else { c.pc = 0x003961F0u; return; } if (c.pc != 0x002D6C10u) [[unlikely]] return; }
L_002D6C10:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C1Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 155u, depth + 1u); else { c.pc = 0x002D2350u; return; } if (c.pc != 0x002D6C1Cu) [[unlikely]] return; }
L_002D6C1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_002D7070; } }
L_002D6C24:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1524u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D668Cu | kUnwind; return; } goto L_002D668C; } }
L_002D6C30:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D66E8u | kUnwind; return; } goto L_002D66E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[18].w[0] + 523u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D66D8u | kUnwind; return; } goto L_002D66D8; } }
L_002D6C40:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 529u));
    set32(c.r[3], 0u - 17u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 529u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002D706C; } }
L_002D6C5C:
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[21] = ld32((c.r[18].w[0] + 104u));
    c.f[22] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[23] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C80u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002D6C80u) [[unlikely]] return; }
L_002D6C80:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C8Cu); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002D6C8Cu) [[unlikely]] return; }
L_002D6C8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[3].w[0];
    c.f[4] = 0u;
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[21]);
    c.f[1] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[21]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[23], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_002D6CC4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D6CC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[3].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D675Cu | kUnwind; return; } goto L_002D675C; } }
L_002D6CCC:
    set32(c.r[2], ld32((c.r[18].w[0] + 212u)));
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6CDCu); set32(c.r[4], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_0028(c, 48u, depth + 1u); else { c.pc = 0x002A0930u; return; } if (c.pc != 0x002D6CDCu) [[unlikely]] return; }
L_002D6CDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[18].w[0] + 1496u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6788u | kUnwind; return; } goto L_002D6788; } }
L_002D6CE4:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_002D6D00; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1496u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6798u | kUnwind; return; } goto L_002D6798; } }
L_002D6D00:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D6D3C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D6D20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6D20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 56u, depth + 1u); else { c.pc = 0x00285120u; return; } if (c.pc != 0x002D6D20u) [[unlikely]] return; }
L_002D6D20:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 525u));
    c.budget -= 1;
L_002D6D24:
    set32(c.r[3], 0u - 33u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 525u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002D706C; } }
L_002D6D3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6D44u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 56u, depth + 1u); else { c.pc = 0x00285120u; return; } if (c.pc != 0x002D6D44u) [[unlikely]] return; }
L_002D6D44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[18].w[0] + 525u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6D24u | kUnwind; return; } goto L_002D6D24; } }
L_002D6D4C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6D5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 163u, depth + 1u); else { c.pc = 0x002DA1A0u; return; } if (c.pc != 0x002D6D5Cu) [[unlikely]] return; }
L_002D6D5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D706C; } }
L_002D6D64:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6858u | kUnwind; return; } goto L_002D6858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D682Cu | kUnwind; return; } goto L_002D682C; } }
L_002D6D74:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6D84u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0034(c, 170u, depth + 1u); else { c.pc = 0x002D26B0u; return; } if (c.pc != 0x002D6D84u) [[unlikely]] return; }
L_002D6D84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[17].w[0] + 220u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6888u | kUnwind; return; } goto L_002D6888; } }
L_002D6D8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 15184u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D68D4u | kUnwind; return; } goto L_002D68D4; } }
L_002D6D98:
    set32(c.r[4], 0u + 5u);
    c.budget -= 1;
L_002D6D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6DA4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 6u, depth + 1u); else { c.pc = 0x003DC0A0u; return; } if (c.pc != 0x002D6DA4u) [[unlikely]] return; }
L_002D6DA4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6DB4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 219u, depth + 1u); else { c.pc = 0x002DA850u; return; } if (c.pc != 0x002D6DB4u) [[unlikely]] return; }
L_002D6DB4:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 524u));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D69A8u | kUnwind; return; } goto L_002D69A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] << 62;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6984u | kUnwind; return; } goto L_002D6984; } }
L_002D6DCC:
    c.r[12].d[0] = ld16((c.r[18].w[0] + 544u));
    set32(c.r[10], 0u - 3u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[8], 0u - 17u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[4], c.r[18].w[0] + 544u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 50u);
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st16((c.r[18].w[0] + 544u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld16((c.r[18].w[0] + 544u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[18].w[0] + 544u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[18].w[0] + 544u));
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6E28u); st16((c.r[18].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 351u, depth + 1u); else { c.pc = 0x0028B5F0u; return; } if (c.pc != 0x002D6E28u) [[unlikely]] return; }
L_002D6E28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 20192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6E3Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0047B600u; return; } if (c.pc != 0x002D6E3Cu) [[unlikely]] return; }
L_002D6E3C:
    set32(c.r[4], ld32((c.r[18].w[0] + 216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6E48u); set32(c.r[5], 0u + 100u);  if (depth < kMaxDepth) unit_0094(c, 73u, depth + 1u); else { c.pc = 0x00450FD0u; return; } if (c.pc != 0x002D6E48u) [[unlikely]] return; }
L_002D6E48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D706C; } }
L_002D6E50:
    c.r[12].d[0] = ld16((c.r[18].w[0] + 544u));
    set32(c.r[10], 0u - 3u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[8], 0u - 17u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[4], c.r[18].w[0] + 544u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st16((c.r[18].w[0] + 544u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld16((c.r[18].w[0] + 544u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[18].w[0] + 544u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[18].w[0] + 544u));
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6EACu); st16((c.r[18].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 351u, depth + 1u); else { c.pc = 0x0028B5F0u; return; } if (c.pc != 0x002D6EACu) [[unlikely]] return; }
L_002D6EAC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6EB8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 155u, depth + 1u); else { c.pc = 0x002D2350u; return; } if (c.pc != 0x002D6EB8u) [[unlikely]] return; }
L_002D6EB8:
    set32(c.r[4], ld32((c.r[18].w[0] + 216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6EC4u); set32(c.r[5], 0u + 100u);  if (depth < kMaxDepth) unit_0094(c, 73u, depth + 1u); else { c.pc = 0x00450FD0u; return; } if (c.pc != 0x002D6EC4u) [[unlikely]] return; }
L_002D6EC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D706C; } }
    st32((c.r[23].w[0]), 0u);
    c.budget -= 1;
L_002D6ED0:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; st32((c.r[29].w[0] + 240u), 0u);  if (t) { goto L_002D6EE4; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002D6F00; } }
L_002D6EE4:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_002D6F00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(19ll);
    c.f[0] = c.r[2].w[0];
    c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], c.r[18].w[0] + 752u);
    set32(c.r[5], 0u + 2u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6F2Cu); st32((c.r[30].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0065(c, 127u, depth + 1u); else { c.pc = 0x00395F70u; return; } if (c.pc != 0x002D6F2Cu) [[unlikely]] return; }
L_002D6F2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6B3Cu | kUnwind; return; } goto L_002D6B3C; } }
L_002D6F34:
    c.r[12].d[0] = ld16((c.r[18].w[0] + 544u));
    set32(c.r[10], 0u - 3u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[8], 0u - 17u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[4], c.r[18].w[0] + 544u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st16((c.r[18].w[0] + 544u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld16((c.r[18].w[0] + 544u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[18].w[0] + 544u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[18].w[0] + 544u));
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6F90u); st16((c.r[18].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 351u, depth + 1u); else { c.pc = 0x0028B5F0u; return; } if (c.pc != 0x002D6F90u) [[unlikely]] return; }
L_002D6F90:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6F9Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 155u, depth + 1u); else { c.pc = 0x002D2350u; return; } if (c.pc != 0x002D6F9Cu) [[unlikely]] return; }
L_002D6F9C:
    set32(c.r[4], ld32((c.r[18].w[0] + 216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6FA8u); set32(c.r[5], 0u + 100u);  if (depth < kMaxDepth) unit_0094(c, 73u, depth + 1u); else { c.pc = 0x00450FD0u; return; } if (c.pc != 0x002D6FA8u) [[unlikely]] return; }
L_002D6FA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D706C; } }
L_002D6FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6FB8u); set32(c.r[4], c.r[17].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 113u, depth + 1u); else { c.pc = 0x00395B60u; return; } if (c.pc != 0x002D6FB8u) [[unlikely]] return; }
L_002D6FB8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_002D6FF0; } }
    c.r[5].d[0] = c.r[21].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D705C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 752u)));
    c.r[4].d[0] = c.r[5].d[0] & 15ull;
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 64u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002D7064; } }
L_002D6FEC:
    c.r[21].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_002D6FF0:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 523u));
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D7018; } }
    c.r[2].d[0] = c.r[3].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
L_002D7018:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D702C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7028u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 64u, depth + 1u); else { c.pc = 0x002D0DC0u; return; } if (c.pc != 0x002D7028u) [[unlikely]] return; }
L_002D7028:
    c.r[21].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_002D702C:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 240u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7044u); set32(c.r[8], 0u + 35u);  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x002D1540u; return; } if (c.pc != 0x002D7044u) [[unlikely]] return; }
L_002D7044:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7054u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 35u, depth + 1u); else { c.pc = 0x00284D10u; return; } if (c.pc != 0x002D7054u) [[unlikely]] return; }
L_002D7054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D706C; } }
L_002D705C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6FECu | kUnwind; return; } goto L_002D6FEC; } }
L_002D7064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6FECu | kUnwind; return; } goto L_002D6FEC; } }
L_002D706C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_002D7070:
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
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_002D70B0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_002D710C; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 192u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7104u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D7104u) [[unlikely]] return; }
L_002D7104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = ld8((c.r[29].w[0] + 156u));  if (t) { goto L_002D7114; } }
L_002D710C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[11].d[0] = ld8((c.r[29].w[0] + 156u));
    c.budget -= 2;
L_002D7114:
    c.r[10].d[0] = 0ull & 1ull;
    set32(c.r[9], 0u - 2u);
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[7], 0u - 3u);
    set32(c.r[8], c.r[10].w[0] << 1);
    set32(c.r[5], 0u - 5u);
    set32(c.r[6], c.r[10].w[0] << 2);
    set32(c.r[2], 0u - 9u);
    set32(c.r[3], c.r[10].w[0] << 3);
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[29].w[0] + 156u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[29].w[0] + 156u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[29].w[0] + 156u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[29].w[0] + 156u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[29].w[0] + 156u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 156u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[29].w[0] + 156u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 28;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7184u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D7184u) [[unlikely]] return; }
L_002D7184:
    set32(c.r[3], c.r[29].w[0] + 156u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[10].d[0] = c.r[18].d[0] + 0ull;
    c.r[11].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D71B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0035(c, 228u, depth + 1u); else { c.pc = 0x002D7430u; return; } if (c.pc != 0x002D71B4u) [[unlikely]] return; }
L_002D71B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002D71E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[13].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[10].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[4].w[0] + 840u), c.r[13].w[0]);
    c.r[11].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[13].d[0] != 0ull; st32((c.r[4].w[0] + 1520u), c.r[13].w[0]);  if (t) { goto L_002D724C; } }
L_002D7200:
    st64((c.r[29].w[0]), c.r[9].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 522u));
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8704u);
    c.r[12].d[0] = ld8((c.r[13].w[0] + 522u));
    set32(c.r[9], 0u + 1u);
    set32(c.r[5], c.r[13].w[0] + 32u);
    c.r[6].d[0] = c.r[13].d[0] + 0ull;
    c.r[7].d[0] = c.r[13].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[9], c.r[9].w[0] << (c.r[12].w[0] & 31u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[9].d[0] & c.r[2].d[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7244u); c.r[9].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0035(c, 228u, depth + 1u); else { c.pc = 0x002D7430u; return; } if (c.pc != 0x002D7244u) [[unlikely]] return; }
L_002D7244:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002D7258; } }
L_002D724C:
    c.r[2].d[0] = ld16((c.r[13].w[0] + 6u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 1524u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7200u | kUnwind; return; } goto L_002D7200; } }
L_002D7258:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D7260:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 736u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D7370; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002D7380; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 808u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[9].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_002D72A8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D72A8; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D72A8:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_002D7380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_002D7380; } }
L_002D72B8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_002D72E8; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 220u));
    set32(c.r[2], 0u + 31u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D7390; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D7390; } }
    set32(c.r[2], 0u + 51u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D7390; } }
L_002D72E8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002D73CC; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 220u));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D73CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D741C; } }
L_002D7308:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002D73D8; } }
L_002D7310:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_002D7340; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1538u));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D740C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 120u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D740C; } }
L_002D7340:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002D7418; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 120u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D7418; } }
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002D741C; } }
L_002D7370:
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002D741C; } }
L_002D7380:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7308u | kUnwind; return; } goto L_002D7308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D72B8u | kUnwind; return; } goto L_002D72B8; } }
L_002D7390:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002D73C0; } }
    c.r[8].d[0] = ld8((c.r[4].w[0] + 525u));
    set32(c.r[6], 0u - 33u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], 0u + 1u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 525u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002D741C; } }
L_002D73C0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D741C; } }
L_002D73CC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D741C; } }
L_002D73D8:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D7400; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 105u));
    c.r[1].d[0] = c.r[2].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7310u | kUnwind; return; } goto L_002D7310; } }
L_002D7400:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D741C; } }
L_002D740C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D741C; } }
L_002D7418:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D741C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7430:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    set32(c.r[23], ld32((c.r[29].w[0] + 592u)));
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 252u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[23].w[0]));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 29;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_002D74B0; } }
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002D74B0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.f[12] = c.f[20];
    set32(c.r[5], c.r[29].w[0] + 591u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D74D4u); mmi::paddub(c.r[8], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0035(c, 224u, depth + 1u); else { c.pc = 0x002D7260u; return; } if (c.pc != 0x002D74D4u) [[unlikely]] return; }
L_002D74D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D75AC; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D75E0; } }
L_002D74E8:
    set32(c.r[2], ld32((c.r[20].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 122u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D7618; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D7618; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 736u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D7618; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[29].w[0] + 208u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002D7530:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D76D4; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 208u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D76D4; } }
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D76D4; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7574u); c.r[8].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 35u, depth + 1u); else { c.pc = 0x002D8470u; return; } if (c.pc != 0x002D7574u) [[unlikely]] return; }
L_002D7574:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D76D4; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D7688; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002D7594:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D75A4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0034(c, 120u, depth + 1u); else { c.pc = 0x002D1BE0u; return; } if (c.pc != 0x002D75A4u) [[unlikely]] return; }
L_002D75A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0036(c, 34u, depth); } }
L_002D75AC:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 591u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D75C4; } }
L_002D75BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 591u)));  if (t) { [[clang::musttail]] return unit_0036(c, 34u, depth); } }
L_002D75C4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D75D8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0034(c, 120u, depth + 1u); else { c.pc = 0x002D1BE0u; return; } if (c.pc != 0x002D75D8u) [[unlikely]] return; }
L_002D75D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D75BCu | kUnwind; return; } goto L_002D75BC; } }
L_002D75E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], 0u - 65u);
    c.r[7].d[0] = ld16((c.r[2].w[0] + 29166u));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[4].d[0] = ld16((c.r[2].w[0] + 29160u));
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[3].w[0] + 29166u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 29160u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D74E8u | kUnwind; return; } goto L_002D74E8; } }
L_002D7618:
    c.f[3] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[20].w[0] + 32u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[21] = ld32((c.r[20].w[0] + 104u));
    c.f[22] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[23] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D763Cu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002D763Cu) [[unlikely]] return; }
L_002D763C:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7648u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002D7648u) [[unlikely]] return; }
L_002D7648:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    c.f[4] = 0u;
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[21]);
    c.f[1] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[21]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[23], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002D7680; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D7680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 208u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7530u | kUnwind; return; } goto L_002D7530; } }
L_002D7688:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[6], 0u - 33u);
    c.r[8].d[0] = ld16((c.r[2].w[0] + 29166u));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], 0u + 5u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[4].d[0] = ld16((c.r[2].w[0] + 29158u));
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[3].w[0] + 29166u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[4].w[0] + 1u);
    st16((c.r[2].w[0] + 29158u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 212u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D76CCu); set32(c.r[4], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_0028(c, 48u, depth + 1u); else { c.pc = 0x002A0930u; return; } if (c.pc != 0x002D76CCu) [[unlikely]] return; }
L_002D76CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7594u | kUnwind; return; } goto L_002D7594; } }
L_002D76D4:
    st8((c.r[29].w[0] + 590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 50u);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 220u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D7894; } }
L_002D76E8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002D76F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 50u);  if (t) { goto L_002D7840; } }
L_002D76F8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002D796C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[23].w[0]));
    c.r[4].d[0] = ld8((c.r[18].w[0] + 220u));
    c.r[16].d[0] = ld8((c.r[3].w[0] + 104u));
    c.r[5].d[0] = c.r[2].d[0] << 62;
    c.r[5].d[0] = c.r[5].d[0] >> 63;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_002D77B8; } }
    set32(c.r[7], ld32((c.r[18].w[0] + 212u)));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[4].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], 0u + 4u);  if (t) { goto L_002D773C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D773C:
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], c.r[6].w[0] + c.r[7].w[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 154u));
    c.r[4].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D7758; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D7758:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 76u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002D7788; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002D7794; } }
L_002D7788:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D7794; } }
    set32(c.r[6], 0u + 200u);
    c.budget -= 1;
L_002D7794:
    c.r[2].d[0] = c.r[6].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 9;
L_002D77B8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D78A0; } }
    c.r[2].d[0] = ld8((c.r[23].w[0]));
    c.budget -= 1;
L_002D77C4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D7840; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D7940; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D7940; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 216u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    c.r[1].d[0] = c.r[2].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D7948; } }
L_002D7808:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002D7838; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002D7838; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7828u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0021(c, 32u, depth + 1u); else { c.pc = 0x00284B00u; return; } if (c.pc != 0x002D7828u) [[unlikely]] return; }
L_002D7828:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7838u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0021(c, 35u, depth + 1u); else { c.pc = 0x00284D10u; return; } if (c.pc != 0x002D7838u) [[unlikely]] return; }
L_002D7838:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0036(c, 34u, depth); } }
L_002D7840:
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D785Cu); set32(c.r[9], c.r[29].w[0] + 590u);  if (depth < kMaxDepth) unit_0036(c, 51u, depth + 1u); else { c.pc = 0x002D8790u; return; } if (c.pc != 0x002D785Cu) [[unlikely]] return; }
L_002D785C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[20].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D7974; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 123u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D7974; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0036(c, 34u, depth); } }
L_002D7894:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 590u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D76E8u | kUnwind; return; } goto L_002D76E8; } }
L_002D78A0:
    set32(c.r[4], ld32((c.r[18].w[0] + 216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D78ACu); set32(c.r[5], 0u + 100u);  if (depth < kMaxDepth) unit_0094(c, 73u, depth + 1u); else { c.pc = 0x00450FD0u; return; } if (c.pc != 0x002D78ACu) [[unlikely]] return; }
L_002D78AC:
    set32(c.r[4], ld32((c.r[20].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D7934; } }
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_002D78D4; } }
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 2;
L_002D78D4:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D78EC; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 1;
L_002D78EC:
    set32(c.r[2], ld32((c.r[20].w[0] + 348u)));
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_002D78FC:
    c.f[2] = ld32((c.r[3].w[0] + 56u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[3].w[0] + 52u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    set32(c.r[4], c.r[4].w[0] + 24576u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 560u);
    st32((c.r[29].w[0] + 560u), c.f[0]);
    st32((c.r[29].w[0] + 564u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D792Cu); st32((c.r[29].w[0] + 568u), c.f[2]);  if (depth < kMaxDepth) unit_0052(c, 158u, depth + 1u); else { c.pc = 0x0034B590u; return; } if (c.pc != 0x002D792Cu) [[unlikely]] return; }
L_002D792C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[23].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D77C4u | kUnwind; return; } goto L_002D77C4; } }
L_002D7934:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 15184u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D78FCu | kUnwind; return; } goto L_002D78FC; } }
L_002D7940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { [[clang::musttail]] return unit_0036(c, 34u, depth); } }
L_002D7948:
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], c.r[16].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7958u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 236u, depth + 1u); else { c.pc = 0x0044FFA0u; return; } if (c.pc != 0x002D7958u) [[unlikely]] return; }
L_002D7958:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7964u); set32(c.r[5], 0u + 100u);  if (depth < kMaxDepth) unit_0094(c, 73u, depth + 1u); else { c.pc = 0x00450FD0u; return; } if (c.pc != 0x002D7964u) [[unlikely]] return; }
L_002D7964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7808u | kUnwind; return; } goto L_002D7808; } }
L_002D796C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 50u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7840u | kUnwind; return; } goto L_002D7840; } }
L_002D7974:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 762u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7990u); st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x002805A0u; return; } if (c.pc != 0x002D7990u) [[unlikely]] return; }
L_002D7990:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 530u));
    c.r[21].d[0] = c.r[2].d[0] ^ 0ull;
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_002D7D08; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 220u));
    set32(c.r[2], 0u + 63u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D7D48; } }
    set32(c.r[2], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D7D48; } }
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D7AA4; } }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 380u));
    set32(c.r[2], 0u + 201u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D7AA4; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[20].w[0] + 344u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 50u));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002D7A0C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002D7A28; } }
L_002D7A0C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_002D7A28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[20].w[0] + 360u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D7AA4; } }
    c.r[10].d[0] = ld16((c.r[20].w[0] + 544u));
    set32(c.r[8], 0u - 3u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[6], 0u - 17u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 544u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7A9Cu); st16((c.r[20].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 182u, depth + 1u); else { c.pc = 0x00289EF0u; return; } if (c.pc != 0x002D7A9Cu) [[unlikely]] return; }
L_002D7A9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0036(c, 34u, depth); } }
L_002D7AA4:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002D7AC4; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002D7AC4; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7AC4u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0021(c, 32u, depth + 1u); else { c.pc = 0x00284B00u; return; } if (c.pc != 0x002D7AC4u) [[unlikely]] return; }
L_002D7AC4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7AD4u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 219u, depth + 1u); else { c.pc = 0x002DA850u; return; } if (c.pc != 0x002D7AD4u) [[unlikely]] return; }
L_002D7AD4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002D7B38; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D7B38; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7AF4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 258u, depth + 1u); else { c.pc = 0x002DB0B0u; return; } if (c.pc != 0x002D7AF4u) [[unlikely]] return; }
L_002D7AF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7AFCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 360u, depth + 1u); else { c.pc = 0x00473410u; return; } if (c.pc != 0x002D7AFCu) [[unlikely]] return; }
L_002D7AFC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D7DB4; } }
L_002D7B08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7B10u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 191u, depth + 1u); else { c.pc = 0x0027DD30u; return; } if (c.pc != 0x002D7B10u) [[unlikely]] return; }
L_002D7B10:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 752u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 224u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 82u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7B38u); set32(c.r[4], c.r[3].w[0] + 2060u);  if (depth < kMaxDepth) unit_0047(c, 149u, depth + 1u); else { c.pc = 0x0031DB60u; return; } if (c.pc != 0x002D7B38u) [[unlikely]] return; }
L_002D7B38:
    c.f[4] = ld32((c.r[19].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[20].w[0] + 36u));
    set32(c.r[4], c.r[29].w[0] + 260u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 264u);
    c.f[2] = ld32((c.r[19].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[6] = ld32((c.r[19].w[0] + 8u));
    c.f[5] = ld32((c.r[20].w[0] + 40u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[1]);
    c.f[1] = ld32((c.r[20].w[0] + 32u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[5], c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 260u));
    c.f[3] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    st32((c.r[29].w[0] + 256u), c.f[2]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 272u), c.f[2]);
    st32((c.r[29].w[0] + 276u), c.f[1]);
    st32((c.r[29].w[0] + 280u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 752u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 344u)));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 60u));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 61u));
    st8((c.r[29].w[0] + 584u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 62u));
    st8((c.r[29].w[0] + 585u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 43;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[29].w[0] + 586u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D7DD4; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1578u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D7BFC; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_002D7BFC:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_002D7C00:
    set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));
    c.r[16].d[0] = c.r[2].d[0] << 56;
    set32(c.r[5], c.r[20].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7C14u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);  if (depth < kMaxDepth) unit_0088(c, 151u, depth + 1u); else { c.pc = 0x00420780u; return; } if (c.pc != 0x002D7C14u) [[unlikely]] return; }
L_002D7C14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D7DDC; } }
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 1;
L_002D7C20:
    st8((c.r[29].w[0] + 224u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 119u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 62;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(9ll);  if (t) { goto L_002D7E08; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002D7C7C; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 808u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D7C70; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D7C70; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D7C70:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D7C7C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D7C7C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002D7E08; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_002D7C94; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_002D7D00; } }
L_002D7C94:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 552u));
    set32(c.r[2], 0u + 191u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D7D00; } }
    c.r[12].d[0] = ld16((c.r[20].w[0] + 544u));
    set32(c.r[10], 0u - 3u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[8], 0u - 17u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 544u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st16((c.r[20].w[0] + 544u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld16((c.r[20].w[0] + 544u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[20].w[0] + 544u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[20].w[0] + 544u));
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7D00u); st16((c.r[20].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 300u, depth + 1u); else { c.pc = 0x0028AEB0u; return; } if (c.pc != 0x002D7D00u) [[unlikely]] return; }
L_002D7D00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0036(c, 34u, depth); } }
L_002D7D08:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002D7D30; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 122u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D7D30; } }
L_002D7D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0036(c, 34u, depth); } }
L_002D7D30:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7D40u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 163u, depth + 1u); else { c.pc = 0x002DA1A0u; return; } if (c.pc != 0x002D7D40u) [[unlikely]] return; }
L_002D7D40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7D28u | kUnwind; return; } goto L_002D7D28; } }
L_002D7D48:
    c.r[3].d[0] = ld8((c.r[23].w[0]));
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_002D7DA4; } }
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D7DAC; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_002D7D74; } }
    set32(c.r[7], 0u + 2u);
    c.budget -= 1;
L_002D7D74:
    set32(c.r[4], ld32((c.r[20].w[0] + 1348u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 312u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7D90u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D7D90u) [[unlikely]] return; }
L_002D7D90:
    set32(c.r[4], c.r[20].w[0] + 752u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7D9Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 145u, depth + 1u); else { c.pc = 0x003964C0u; return; } if (c.pc != 0x002D7D9Cu) [[unlikely]] return; }
L_002D7D9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0036(c, 34u, depth); } }
L_002D7DA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7D74u | kUnwind; return; } goto L_002D7D74; } }
L_002D7DAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7D74u | kUnwind; return; } goto L_002D7D74; } }
L_002D7DB4:
    c.r[7].d[0] = ld16((c.r[20].w[0] + 6u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 220u)));
    set32(c.r[4], c.r[4].w[0] - 17552u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7DCCu); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_007A(c, 211u, depth + 1u); else { c.pc = 0x003E9C30u; return; } if (c.pc != 0x002D7DCCu) [[unlikely]] return; }
L_002D7DCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[29].w[0] + 288u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7B08u | kUnwind; return; } goto L_002D7B08; } }
L_002D7DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7C00u | kUnwind; return; } goto L_002D7C00; } }
L_002D7DDC:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 584u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 272u);
    set32(c.r[8], 0u + 4u);
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7E00u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007D(c, 195u, depth + 1u); else { c.pc = 0x003F6080u; return; } if (c.pc != 0x002D7E00u) [[unlikely]] return; }
L_002D7E00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7C20u | kUnwind; return; } goto L_002D7C20; } }
L_002D7E08:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_002D7E2C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002D7E2C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0036(c, 11u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7E2Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 44u, depth + 1u); else { c.pc = 0x00468B70u; return; } if (c.pc != 0x002D7E2Cu) [[unlikely]] return; }
L_002D7E2C:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0036(c, 13u, depth); } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1496u));
    c.budget -= 1;
L_002D7E38:
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D7E6C; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 208u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D7E6C; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002D7E6C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_002D7F34; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D7EA0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002D7EA0; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0036(c, 15u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7EA0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 40u, depth + 1u); else { c.pc = 0x00468A80u; return; } if (c.pc != 0x002D7EA0u) [[unlikely]] return; }
L_002D7EA0:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1538u));
    c.budget -= 1;
L_002D7EA4:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[20].w[0] + 1538u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 524u));
    c.r[4].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D7EE0; } }
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D7EE0; } }
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D7EF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(13ll);  if (t) { [[clang::musttail]] return unit_0036(c, 26u, depth); } }
L_002D7EE0:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(23ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 224u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_0036(c, 7u, depth); } }
L_002D7EF0:
    set32(c.r[3], ld32((c.r[20].w[0] + 752u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D7F2C; } }
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D7F2C; } }
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(23ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 224u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_0036(c, 7u, depth); } }
L_002D7F2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(12ll);  if (t) { [[clang::musttail]] return unit_0036(c, 7u, depth); } }
L_002D7F34:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 1496u));
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_002D7F7C; } }
    c.r[4].d[0] = ld8((c.r[20].w[0] + 808u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_002D7F70; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D7F70; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D7F70:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002D7F7C; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D7F7C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002D7F98; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D7F98; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D7F98:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0036(c, 4u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0036(c, 4u, depth); } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 524u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0036(c, 27u, depth); } }
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D7FD8; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(13ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 224u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D7FF4; } }
L_002D7FD8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0036(c, 28u, depth); } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 220u));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0036(c, 28u, depth); } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D7FF4:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0036(c, 7u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0036(c, 7u, depth); } }
    [[clang::musttail]] return unit_0036(c, 2u, depth);
}

}

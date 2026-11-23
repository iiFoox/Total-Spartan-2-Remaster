#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0029[4096] = {
    1, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0,
    0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 26, 0, 27, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0,
    0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0,
    0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 58, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0,
    0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 68, 0, 69, 0, 0, 0, 70, 0, 71, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 75, 0, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 80, 0, 81, 0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 85, 0,
    86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0, 0, 0, 94, 0,
    0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0,
    0, 0, 108, 0, 109, 0, 0, 0, 0, 110, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0,
    0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 183, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 187, 0, 188, 0, 189, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0,
    193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0,
    213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0,
    0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0,
    231, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0,
    0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0,
    0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253,
    0, 254, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 264, 0, 0,
    265, 0, 266, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 270, 271, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 274, 0, 0, 275, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0,
    279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 299, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0029(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002A4000;
    case 2u: goto L_002A4004;
    case 3u: goto L_002A4010;
    case 4u: goto L_002A4040;
    case 5u: goto L_002A4078;
    case 6u: goto L_002A4160;
    case 7u: goto L_002A41B8;
    case 8u: goto L_002A4258;
    case 9u: goto L_002A4290;
    case 10u: goto L_002A42B8;
    case 11u: goto L_002A42F0;
    case 12u: goto L_002A4350;
    case 13u: goto L_002A4408;
    case 14u: goto L_002A4480;
    case 15u: goto L_002A44C4;
    case 16u: goto L_002A4510;
    case 17u: goto L_002A45B8;
    case 18u: goto L_002A4600;
    case 19u: goto L_002A462C;
    case 20u: goto L_002A4638;
    case 21u: goto L_002A4640;
    case 22u: goto L_002A4668;
    case 23u: goto L_002A4670;
    case 24u: goto L_002A4688;
    case 25u: goto L_002A4694;
    case 26u: goto L_002A46A8;
    case 27u: goto L_002A46B0;
    case 28u: goto L_002A46BC;
    case 29u: goto L_002A46C4;
    case 30u: goto L_002A46F0;
    case 31u: goto L_002A472C;
    case 32u: goto L_002A4738;
    case 33u: goto L_002A4754;
    case 34u: goto L_002A4770;
    case 35u: goto L_002A47A8;
    case 36u: goto L_002A47C4;
    case 37u: goto L_002A47DC;
    case 38u: goto L_002A47F4;
    case 39u: goto L_002A480C;
    case 40u: goto L_002A4824;
    case 41u: goto L_002A483C;
    case 42u: goto L_002A4854;
    case 43u: goto L_002A486C;
    case 44u: goto L_002A4884;
    case 45u: goto L_002A4898;
    case 46u: goto L_002A48C0;
    case 47u: goto L_002A48D0;
    case 48u: goto L_002A48E0;
    case 49u: goto L_002A48F8;
    case 50u: goto L_002A4914;
    case 51u: goto L_002A4930;
    case 52u: goto L_002A4950;
    case 53u: goto L_002A4968;
    case 54u: goto L_002A4980;
    case 55u: goto L_002A4998;
    case 56u: goto L_002A49C0;
    case 57u: goto L_002A49F0;
    case 58u: goto L_002A4A08;
    case 59u: goto L_002A4A14;
    case 60u: goto L_002A4A1C;
    case 61u: goto L_002A4A44;
    case 62u: goto L_002A4A68;
    case 63u: goto L_002A4A78;
    case 64u: goto L_002A4A8C;
    case 65u: goto L_002A4A94;
    case 66u: goto L_002A4AB8;
    case 67u: goto L_002A4AD0;
    case 68u: goto L_002A4AD8;
    case 69u: goto L_002A4AE0;
    case 70u: goto L_002A4AF0;
    case 71u: goto L_002A4AF8;
    case 72u: goto L_002A4B5C;
    case 73u: goto L_002A4BC0;
    case 74u: goto L_002A4C24;
    case 75u: goto L_002A4C8C;
    case 76u: goto L_002A4C98;
    case 77u: goto L_002A4CA0;
    case 78u: goto L_002A4CA8;
    case 79u: goto L_002A4CB0;
    case 80u: goto L_002A4CBC;
    case 81u: goto L_002A4CC4;
    case 82u: goto L_002A4CCC;
    case 83u: goto L_002A4CDC;
    case 84u: goto L_002A4CEC;
    case 85u: goto L_002A4CF8;
    case 86u: goto L_002A4D00;
    case 87u: goto L_002A4D10;
    case 88u: goto L_002A4D20;
    case 89u: goto L_002A4D2C;
    case 90u: goto L_002A4D40;
    case 91u: goto L_002A4D50;
    case 92u: goto L_002A4D60;
    case 93u: goto L_002A4D68;
    case 94u: goto L_002A4D78;
    case 95u: goto L_002A4D98;
    case 96u: goto L_002A4DA0;
    case 97u: goto L_002A4DA8;
    case 98u: goto L_002A4DB8;
    case 99u: goto L_002A4DCC;
    case 100u: goto L_002A4DDC;
    case 101u: goto L_002A4DEC;
    case 102u: goto L_002A4E00;
    case 103u: goto L_002A4E14;
    case 104u: goto L_002A4E20;
    case 105u: goto L_002A4E58;
    case 106u: goto L_002A4E68;
    case 107u: goto L_002A4E78;
    case 108u: goto L_002A4E88;
    case 109u: goto L_002A4E90;
    case 110u: goto L_002A4EA4;
    case 111u: goto L_002A4EB0;
    case 112u: goto L_002A4EB8;
    case 113u: goto L_002A4EF0;
    case 114u: goto L_002A4F00;
    case 115u: goto L_002A4F10;
    case 116u: goto L_002A4F28;
    case 117u: goto L_002A4F30;
    case 118u: goto L_002A4F58;
    case 119u: goto L_002A4F60;
    case 120u: goto L_002A4F70;
    case 121u: goto L_002A4F88;
    case 122u: goto L_002A4F98;
    case 123u: goto L_002A4FA8;
    case 124u: goto L_002A4FB8;
    case 125u: goto L_002A4FC8;
    case 126u: goto L_002A4FD8;
    case 127u: goto L_002A4FE8;
    case 128u: goto L_002A4FF0;
    case 129u: goto L_002A5020;
    case 130u: goto L_002A509C;
    case 131u: goto L_002A5100;
    case 132u: goto L_002A5164;
    case 133u: goto L_002A51DC;
    case 134u: goto L_002A5280;
    case 135u: goto L_002A5328;
    case 136u: goto L_002A53F0;
    case 137u: goto L_002A53F8;
    case 138u: goto L_002A54F0;
    case 139u: goto L_002A5574;
    case 140u: goto L_002A5640;
    case 141u: goto L_002A5674;
    case 142u: goto L_002A56A4;
    case 143u: goto L_002A56D8;
    case 144u: goto L_002A5710;
    case 145u: goto L_002A5780;
    case 146u: goto L_002A57BC;
    case 147u: goto L_002A580C;
    case 148u: goto L_002A5828;
    case 149u: goto L_002A5874;
    case 150u: goto L_002A5888;
    case 151u: goto L_002A589C;
    case 152u: goto L_002A58B8;
    case 153u: goto L_002A5998;
    case 154u: goto L_002A59FC;
    case 155u: goto L_002A5A50;
    case 156u: goto L_002A5A5C;
    case 157u: goto L_002A5AD0;
    case 158u: goto L_002A5B20;
    case 159u: goto L_002A5B5C;
    case 160u: goto L_002A5BB4;
    case 161u: goto L_002A5BD0;
    case 162u: goto L_002A5C10;
    case 163u: goto L_002A5C44;
    case 164u: goto L_002A5C98;
    case 165u: goto L_002A5CE0;
    case 166u: goto L_002A5D30;
    case 167u: goto L_002A5D6C;
    case 168u: goto L_002A5DC4;
    case 169u: goto L_002A5DE0;
    case 170u: goto L_002A5E9C;
    case 171u: goto L_002A5EE4;
    case 172u: goto L_002A5F60;
    case 173u: goto L_002A60A0;
    case 174u: goto L_002A60E0;
    case 175u: goto L_002A6210;
    case 176u: goto L_002A6280;
    case 177u: goto L_002A638C;
    case 178u: goto L_002A63A0;
    case 179u: goto L_002A64AC;
    case 180u: goto L_002A64C0;
    case 181u: goto L_002A64E0;
    case 182u: goto L_002A64E8;
    case 183u: goto L_002A64F0;
    case 184u: goto L_002A651C;
    case 185u: goto L_002A6540;
    case 186u: goto L_002A6564;
    case 187u: goto L_002A6568;
    case 188u: goto L_002A6570;
    case 189u: goto L_002A6578;
    case 190u: goto L_002A65C0;
    case 191u: goto L_002A6738;
    case 192u: goto L_002A6770;
    case 193u: goto L_002A6780;
    case 194u: goto L_002A6798;
    case 195u: goto L_002A67EC;
    case 196u: goto L_002A67F8;
    case 197u: goto L_002A6924;
    case 198u: goto L_002A69E0;
    case 199u: goto L_002A6A20;
    case 200u: goto L_002A6A90;
    case 201u: goto L_002A6AAC;
    case 202u: goto L_002A6AE0;
    case 203u: goto L_002A6AF0;
    case 204u: goto L_002A6B18;
    case 205u: goto L_002A6B7C;
    case 206u: goto L_002A6BD0;
    case 207u: goto L_002A6CF0;
    case 208u: goto L_002A6D24;
    case 209u: goto L_002A6D54;
    case 210u: goto L_002A6DD0;
    case 211u: goto L_002A6DF0;
    case 212u: goto L_002A6DF8;
    case 213u: goto L_002A6E00;
    case 214u: goto L_002A6E40;
    case 215u: goto L_002A6E44;
    case 216u: goto L_002A6E50;
    case 217u: goto L_002A6EA0;
    case 218u: goto L_002A6ED4;
    case 219u: goto L_002A6EE0;
    case 220u: goto L_002A6EE8;
    case 221u: goto L_002A6F14;
    case 222u: goto L_002A6F1C;
    case 223u: goto L_002A6F28;
    case 224u: goto L_002A6F30;
    case 225u: goto L_002A6F6C;
    case 226u: goto L_002A6F84;
    case 227u: goto L_002A6FB0;
    case 228u: goto L_002A6FDC;
    case 229u: goto L_002A6FE8;
    case 230u: goto L_002A6FF4;
    case 231u: goto L_002A7000;
    case 232u: goto L_002A700C;
    case 233u: goto L_002A7018;
    case 234u: goto L_002A7024;
    case 235u: goto L_002A7030;
    case 236u: goto L_002A703C;
    case 237u: goto L_002A7048;
    case 238u: goto L_002A7050;
    case 239u: goto L_002A7060;
    case 240u: goto L_002A7078;
    case 241u: goto L_002A7088;
    case 242u: goto L_002A7098;
    case 243u: goto L_002A70A8;
    case 244u: goto L_002A70B8;
    case 245u: goto L_002A70C8;
    case 246u: goto L_002A70D8;
    case 247u: goto L_002A70E8;
    case 248u: goto L_002A70F8;
    case 249u: goto L_002A7108;
    case 250u: goto L_002A7118;
    case 251u: goto L_002A7128;
    case 252u: goto L_002A7150;
    case 253u: goto L_002A717C;
    case 254u: goto L_002A7184;
    case 255u: goto L_002A7198;
    case 256u: goto L_002A71A0;
    case 257u: goto L_002A71B4;
    case 258u: goto L_002A71D0;
    case 259u: goto L_002A71FC;
    case 260u: goto L_002A7228;
    case 261u: goto L_002A723C;
    case 262u: goto L_002A7258;
    case 263u: goto L_002A7268;
    case 264u: goto L_002A7274;
    case 265u: goto L_002A7280;
    case 266u: goto L_002A7288;
    case 267u: goto L_002A7294;
    case 268u: goto L_002A729C;
    case 269u: goto L_002A72B4;
    case 270u: goto L_002A72C0;
    case 271u: goto L_002A72C4;
    case 272u: goto L_002A72D0;
    case 273u: goto L_002A72DC;
    case 274u: goto L_002A7304;
    case 275u: goto L_002A7310;
    case 276u: goto L_002A7324;
    case 277u: goto L_002A732C;
    case 278u: goto L_002A7370;
    case 279u: goto L_002A7380;
    case 280u: goto L_002A7390;
    case 281u: goto L_002A73A0;
    case 282u: goto L_002A73B0;
    case 283u: goto L_002A73D8;
    case 284u: goto L_002A73F0;
    case 285u: goto L_002A7414;
    case 286u: goto L_002A7430;
    case 287u: goto L_002A7458;
    case 288u: goto L_002A7470;
    case 289u: goto L_002A7498;
    case 290u: goto L_002A74B0;
    case 291u: goto L_002A74F8;
    case 292u: goto L_002A7580;
    case 293u: goto L_002A7644;
    case 294u: goto L_002A7660;
    case 295u: goto L_002A76A0;
    case 296u: goto L_002A77B0;
    case 297u: goto L_002A77B8;
    case 298u: goto L_002A77E0;
    case 299u: goto L_002A7810;
    case 300u: goto L_002A7814;
    case 301u: goto L_002A785C;
    case 302u: goto L_002A78E0;
    case 303u: goto L_002A79A4;
    case 304u: goto L_002A79C0;
    case 305u: goto L_002A7A00;
    case 306u: goto L_002A7AB0;
    case 307u: goto L_002A7B0C;
    case 308u: goto L_002A7B90;
    case 309u: goto L_002A7C54;
    case 310u: goto L_002A7C70;
    case 311u: goto L_002A7CB0;
    case 312u: goto L_002A7E14;
    case 313u: goto L_002A7E20;
    case 314u: goto L_002A7E4C;
    case 315u: goto L_002A7E64;
    case 316u: goto L_002A7EA0;
    case 317u: goto L_002A7EC4;
    case 318u: goto L_002A7ED0;
    case 319u: goto L_002A7EE8;
    case 320u: goto L_002A7F20;
    case 321u: goto L_002A7F40;
    case 322u: goto L_002A7F4C;
    case 323u: goto L_002A7F64;
    case 324u: goto L_002A7FA0;
    case 325u: goto L_002A7FC4;
    case 326u: goto L_002A7FDC;
    default: bad_entry(c, 0x002A4000u); return;
    }
L_002A4000:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002A4004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3FA0u | kUnwind; return; } [[clang::musttail]] return unit_0028(c, 330u, depth); } }
    c.budget -= 1;
L_002A4010:
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
L_002A4040:
    set32(c.r[8], ld32((c.r[4].w[0] + 1440u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41440000u);
    c.f[12] = c.r[3].w[0];
    c.r[2].d[0] = 0ull + 0ull;
    c.r[1].d[0] = 0ll < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_002A4158; } }
    c.f[2] = ld32((c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[4].w[0] + 1424u)));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = 0u;
    c.f[4] = c.r[3].w[0];
    c.f[10] = c.f[12];
    c.budget -= 7;
L_002A4078:
    c.r[3].d[0] = c.r[9].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[7], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002A4158; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A4140; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 123u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A4140; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 1432u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.f[11] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[11]) <= fp::key(c.f[10]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A4140; } }
    c.f[7] = ld32((c.r[5].w[0] + 36u));
    c.f[6] = ld32((c.r[4].w[0] + 36u));
    c.f[9] = ld32((c.r[5].w[0] + 32u));
    c.f[8] = ld32((c.r[4].w[0] + 32u));
    c.f[3] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[6] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);
    c.facc = fp::ee::mul(c.fcr31, c.f[6], c.f[6]);
    c.f[8] = fp::ee::sub(c.fcr31, c.f[9], c.f[8]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[3], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[8]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[4], c.f[0]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[8], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[6], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[11]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[10], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A4140; } }
    c.f[12] = c.f[0];
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
L_002A4140:
    set32(c.r[3], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[3].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.r[3].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4078u | kUnwind; return; } goto L_002A4078; } }
L_002A4158:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A4160:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[11].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[13] = c.f[12];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[12] = fp::ee::mul(c.fcr31, c.f[13], c.f[13]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 1440u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[1].d[0] = 0ll < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.f[11] = c.f[12];  if (t) { goto L_002A42A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[11].w[0] + 1424u)));
    c.f[5] = c.r[2].w[0];
    c.f[3] = ld32((c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[6] = 0u;
    c.f[0] = c.r[2].w[0];
    c.budget -= 8;
L_002A41B8:
    c.r[2].d[0] = c.r[10].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[9], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_002A42A0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002A41F0; } }
    c.r[2].d[0] = ld8((c.r[9].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A4270; } }
L_002A41F0:
    set32(c.r[2], ld32((c.r[11].w[0] + 1432u)));
    c.f[7] = ld32((c.r[9].w[0] + 36u));
    c.f[1] = ld32((c.r[11].w[0] + 36u));
    c.f[9] = ld32((c.r[9].w[0] + 32u));
    c.f[8] = ld32((c.r[11].w[0] + 32u));
    c.f[4] = ld32((c.r[9].w[0] + 40u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[7], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[1] = ld32((c.r[11].w[0] + 40u));
    c.f[8] = fp::ee::sub(c.fcr31, c.f[9], c.f[8]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[8]);
    c.f[7] = fp::ee::sub(c.fcr31, c.f[4], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[7]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[5], c.f[1]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[8], c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[7], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[6]));
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[10] = ld32((c.r[2].w[0]));  if (t) { goto L_002A4298; } }
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[10]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[11], c.f[1]);
    c.budget -= 3;
L_002A4258:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A4270; } }
    c.f[12] = c.f[1];
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 3;
L_002A4270:
    set32(c.r[2], c.r[10].w[0] + 1u);
    c.r[10].d[0] = c.r[2].d[0] << 56;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 56);
    c.r[2].d[0] = c.r[10].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A41B8u | kUnwind; return; } goto L_002A41B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A42A0; } }
L_002A4290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002A42D0; } }
L_002A4298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = fp::ee::add(c.fcr31, c.f[10], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4258u | kUnwind; return; } goto L_002A4258; } }
L_002A42A0:
    set32(c.r[4], ld32((c.r[11].w[0] + 1564u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.r[5].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A42B8u); set32(c.r[8], c.r[29].w[0] + 63u);  if (depth < kMaxDepth) unit_002A(c, 64u, depth + 1u); else { c.pc = 0x002A8EA0u; return; } if (c.pc != 0x002A42B8u) [[unlikely]] return; }
L_002A42B8:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4290u | kUnwind; return; } goto L_002A4290; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4290u | kUnwind; return; } goto L_002A4290; } }
L_002A42D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A42F0:
    set32(c.r[3], ld32((c.r[4].w[0] + 1440u)));
    c.f[15] = fp::ee::mul(c.fcr31, c.f[12], c.f[12]);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.f[14] = c.f[15];  if (t) { goto L_002A4468; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[10], ld32((c.r[4].w[0] + 1424u)));
    c.f[8] = c.r[7].w[0];
    set32(c.r[9], 0u + 63u);
    c.f[6] = ld32((c.r[5].w[0]));
    set32(c.r[8], 0u + 72u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[7].w[0];
    c.f[5] = ld32((c.r[5].w[0] + 8u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[3] = c.r[7].w[0];
    c.f[9] = 0u;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[4] = c.r[7].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[7].d[0] = c.r[7].d[0] | 55050ull;
    c.f[2] = c.r[7].w[0];
    c.budget -= 17;
L_002A4350:
    c.r[5].d[0] = c.r[6].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[11], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[12], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_002A4468; } }
    c.r[7].d[0] = ld8((c.r[12].w[0] + 524u));
    c.r[5].d[0] = c.r[7].d[0] << 62;
    c.r[5].d[0] = c.r[5].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002A4450; } }
    c.r[5].d[0] = c.r[7].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002A43A0; } }
    c.r[5].d[0] = ld8((c.r[12].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[9].d[0];  if (t) { goto L_002A43A0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[8].d[0];  if (t) { goto L_002A4450; } }
L_002A43A0:
    set32(c.r[5], ld32((c.r[4].w[0] + 1432u)));
    c.f[10] = ld32((c.r[12].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[12] = ld32((c.r[12].w[0] + 32u));
    c.f[11] = ld32((c.r[4].w[0] + 32u));
    c.f[7] = ld32((c.r[12].w[0] + 40u));
    set32(c.r[5], c.r[5].w[0] + c.r[11].w[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[10], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[11] = fp::ee::sub(c.fcr31, c.f[12], c.f[11]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[11], c.f[11]);
    c.f[10] = fp::ee::sub(c.fcr31, c.f[7], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[10]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[8], c.f[1]);
    c.f[7] = fp::ee::mul(c.fcr31, c.f[11], c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[10], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[5]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[6]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[9]));
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[13] = ld32((c.r[5].w[0]));  if (t) { goto L_002A4470; } }
    c.facc = fp::ee::add(c.fcr31, c.f[9], c.f[13]);
    c.f[7] = fp::ee::msub(c.fcr31, c.facc, c.f[14], c.f[1]);
    c.budget -= 3;
L_002A4408:
    set32(c.r[5], ld32((c.r[12].w[0] + 752u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 82u)));
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[4]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A4430; } }
    c.f[1] = c.f[3];
    c.budget -= 2;
L_002A4430:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[7], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[15]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A4450; } }
    c.f[15] = c.f[1];
    c.r[2].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 3;
L_002A4450:
    set32(c.r[5], c.r[6].w[0] + 1u);
    c.r[6].d[0] = c.r[5].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[5].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4350u | kUnwind; return; } goto L_002A4350; } }
L_002A4468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A4478; } }
L_002A4470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[7] = fp::ee::add(c.fcr31, c.f[13], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4408u | kUnwind; return; } goto L_002A4408; } }
L_002A4478:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A4480:
    set32(c.r[9], ld32((c.r[4].w[0] + 1440u)));
    c.f[12] = fp::ee::mul(c.fcr31, c.f[12], c.f[12]);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[1].d[0] = 0ll < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.f[11] = c.f[12];  if (t) { goto L_002A45E8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[8].d[0] = c.r[8].d[0] & 255ull;
    c.f[5] = c.r[3].w[0];
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[3] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    set32(c.r[3], ld32((c.r[4].w[0] + 1424u)));
    c.f[6] = 0u;
    c.budget -= 10;
L_002A44C4:
    c.r[5].d[0] = c.r[10].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[12], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[13], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { const bool t = c.r[13].d[0] == 0ull;  if (t) { goto L_002A45E8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002A4500; } }
    c.r[5].d[0] = ld8((c.r[13].w[0] + 524u));
    c.r[5].d[0] = c.r[5].d[0] << 62;
    c.r[5].d[0] = c.r[5].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002A45D0; } }
    c.budget -= 1;
L_002A4500:
    c.r[1].d[0] = 0ll < c.r[8].sd[0] ? 1ull : 0ull;
    c.r[15].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[14].d[0] = 0ull + 0ull;  if (t) { goto L_002A4548; } }
L_002A4510:
    c.r[5].d[0] = c.r[14].d[0] & 255ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[13].d[0] != c.r[5].d[0];  if (t) { goto L_002A4530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[15].d[0] = c.r[11].d[0] + 0ull;  if (t) { goto L_002A4548; } }
L_002A4530:
    set32(c.r[5], c.r[14].w[0] + 1u);
    c.r[14].d[0] = c.r[5].d[0] & 255ull;
    c.r[5].d[0] = c.r[14].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4510u | kUnwind; return; } goto L_002A4510; } }
    c.budget -= 1;
L_002A4548:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != 0ull;  if (t) { goto L_002A45D0; } }
    c.f[8] = ld32((c.r[13].w[0] + 36u));
    set32(c.r[5], ld32((c.r[4].w[0] + 1432u)));
    c.f[7] = ld32((c.r[4].w[0] + 36u));
    c.f[10] = ld32((c.r[13].w[0] + 32u));
    c.f[9] = ld32((c.r[4].w[0] + 32u));
    c.f[4] = ld32((c.r[13].w[0] + 40u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    set32(c.r[5], c.r[5].w[0] + c.r[12].w[0]);
    c.f[7] = fp::ee::sub(c.fcr31, c.f[8], c.f[7]);
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[7]);
    c.f[9] = fp::ee::sub(c.fcr31, c.f[10], c.f[9]);
    c.f[7] = fp::ee::sub(c.fcr31, c.f[4], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[9]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[7]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[5], c.f[1]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[9], c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[7], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[6]));
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[8] = ld32((c.r[5].w[0]));  if (t) { goto L_002A45F0; } }
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[8]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[11], c.f[1]);
    c.budget -= 3;
L_002A45B8:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A45D0; } }
    c.f[12] = c.f[1];
    c.r[2].d[0] = c.r[13].d[0] + 0ull;
    c.budget -= 3;
L_002A45D0:
    set32(c.r[5], c.r[10].w[0] + 1u);
    c.r[10].d[0] = c.r[5].d[0] << 56;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 56);
    c.r[5].d[0] = c.r[10].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A44C4u | kUnwind; return; } goto L_002A44C4; } }
L_002A45E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A45F8; } }
L_002A45F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = fp::ee::add(c.fcr31, c.f[8], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A45B8u | kUnwind; return; } goto L_002A45B8; } }
L_002A45F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A4600:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 3040u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A462Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 33u, depth + 1u); else { c.pc = 0x00260780u; return; } if (c.pc != 0x002A462Cu) [[unlikely]] return; }
L_002A462C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4638u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 34u, depth + 1u); else { c.pc = 0x002A4770u; return; } if (c.pc != 0x002A4638u) [[unlikely]] return; }
L_002A4638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4640u);  if (depth < kMaxDepth) unit_0029(c, 57u, depth + 1u); else { c.pc = 0x002A49F0u; return; } if (c.pc != 0x002A4640u) [[unlikely]] return; }
L_002A4640:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 28400u);
    set32(c.r[4], c.r[29].w[0] + 92u);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 21088u);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4668u); st8((c.r[29].w[0] + 72u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002A4668u) [[unlikely]] return; }
L_002A4668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4670u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002A4670u) [[unlikely]] return; }
L_002A4670:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4688u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A4688u) [[unlikely]] return; }
L_002A4688:
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4694u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002A4694u) [[unlikely]] return; }
L_002A4694:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A46A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A46A8u) [[unlikely]] return; }
L_002A46A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A4710; } }
L_002A46B0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A46BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002A46BCu) [[unlikely]] return; }
L_002A46BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A46C4u);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x002A46C4u) [[unlikely]] return; }
L_002A46C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00620000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 28800u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 29153ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002A4720; } }
L_002A46F0:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A46F0u | kUnwind; return; } goto L_002A46F0; } }
    c.budget -= 1;
L_002A4710:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] - 21039u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A46B0u | kUnwind; return; } goto L_002A46B0; } }
L_002A4720:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A472Cu); set32(c.r[4], c.r[4].w[0] + 3040u);  if (depth < kMaxDepth) unit_0018(c, 13u, depth + 1u); else { c.pc = 0x002605C0u; return; } if (c.pc != 0x002A472Cu) [[unlikely]] return; }
L_002A472C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4738u); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 186u, depth + 1u); else { c.pc = 0x002DFB60u; return; } if (c.pc != 0x002A4738u) [[unlikely]] return; }
L_002A4738:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A472Cu | kUnwind; return; } goto L_002A472C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4754u); set32(c.r[4], c.r[4].w[0] + 3040u);  if (depth < kMaxDepth) unit_0018(c, 30u, depth + 1u); else { c.pc = 0x00260750u; return; } if (c.pc != 0x002A4754u) [[unlikely]] return; }
L_002A4754:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002A4770:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A48A8; } }
    c.r[1].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_002A48A8; } }
L_002A47A8:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[20], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 21084u);
    set32(c.r[19], ld32((c.r[20].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A47C4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x002A47C4u) [[unlikely]] return; }
L_002A47C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A48B0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A47DCu); set32(c.r[5], c.r[5].w[0] - 21077u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x002A47DCu) [[unlikely]] return; }
L_002A47DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A48D8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A47F4u); set32(c.r[5], c.r[5].w[0] - 21065u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x002A47F4u) [[unlikely]] return; }
L_002A47F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A48F0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A480Cu); set32(c.r[5], c.r[5].w[0] - 21059u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x002A480Cu) [[unlikely]] return; }
L_002A480C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A4908; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4824u); set32(c.r[5], c.r[5].w[0] - 21055u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x002A4824u) [[unlikely]] return; }
L_002A4824:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A4920; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A483Cu); set32(c.r[5], c.r[5].w[0] - 21047u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x002A483Cu) [[unlikely]] return; }
L_002A483C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A4938; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4854u); set32(c.r[5], c.r[5].w[0] - 21035u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x002A4854u) [[unlikely]] return; }
L_002A4854:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A4958; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A486Cu); set32(c.r[5], c.r[5].w[0] - 21023u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x002A486Cu) [[unlikely]] return; }
L_002A486C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A4970; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4884u); set32(c.r[5], c.r[5].w[0] - 21012u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x002A4884u) [[unlikely]] return; }
L_002A4884:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A4988; } }
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] - 21040u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_002A4898:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A47A8u | kUnwind; return; } goto L_002A47A8; } }
L_002A48A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A49C8; } }
L_002A48B0:
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A48C0u); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 176u, depth + 1u); else { c.pc = 0x002DF930u; return; } if (c.pc != 0x002A48C0u) [[unlikely]] return; }
L_002A48C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A48D0u); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 217u, depth + 1u); else { c.pc = 0x002DFEE0u; return; } if (c.pc != 0x002A48D0u) [[unlikely]] return; }
L_002A48D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4898u | kUnwind; return; } goto L_002A4898; } }
L_002A48D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A48E0u); set32(c.r[4], ld32((c.r[20].w[0] + 4u)));  if (depth < kMaxDepth) unit_000F(c, 424u, depth + 1u); else { c.pc = 0x0023FDC0u; return; } if (c.pc != 0x002A48E0u) [[unlikely]] return; }
L_002A48E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 17652u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4898u | kUnwind; return; } goto L_002A4898; } }
L_002A48F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A48F8u); set32(c.r[4], ld32((c.r[20].w[0] + 4u)));  if (depth < kMaxDepth) unit_000F(c, 424u, depth + 1u); else { c.pc = 0x0023FDC0u; return; } if (c.pc != 0x002A48F8u) [[unlikely]] return; }
L_002A48F8:
    st8((c.r[28].w[0] - 29192u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4898u | kUnwind; return; } goto L_002A4898; } }
    c.budget -= 1;
L_002A4908:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4914u); set32(c.r[4], c.r[4].w[0] + 29568u);  if (depth < kMaxDepth) unit_0053(c, 208u, depth + 1u); else { c.pc = 0x0034F590u; return; } if (c.pc != 0x002A4914u) [[unlikely]] return; }
L_002A4914:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4898u | kUnwind; return; } goto L_002A4898; } }
    c.budget -= 1;
L_002A4920:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4930u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002F(c, 4u, depth + 1u); else { c.pc = 0x002BC050u; return; } if (c.pc != 0x002A4930u) [[unlikely]] return; }
L_002A4930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4898u | kUnwind; return; } goto L_002A4898; } }
L_002A4938:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 17652u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4950u); set32(c.r[4], c.r[4].w[0] + 26720u);  if (depth < kMaxDepth) unit_00B0(c, 78u, depth + 1u); else { c.pc = 0x004C0910u; return; } if (c.pc != 0x002A4950u) [[unlikely]] return; }
L_002A4950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4898u | kUnwind; return; } goto L_002A4898; } }
L_002A4958:
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4968u); set32(c.r[4], c.r[4].w[0] + 26720u);  if (depth < kMaxDepth) unit_00B0(c, 73u, depth + 1u); else { c.pc = 0x004C08A0u; return; } if (c.pc != 0x002A4968u) [[unlikely]] return; }
L_002A4968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4898u | kUnwind; return; } goto L_002A4898; } }
L_002A4970:
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4980u); set32(c.r[4], c.r[4].w[0] + 26720u);  if (depth < kMaxDepth) unit_00B0(c, 63u, depth + 1u); else { c.pc = 0x004C07C0u; return; } if (c.pc != 0x002A4980u) [[unlikely]] return; }
L_002A4980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4898u | kUnwind; return; } goto L_002A4898; } }
L_002A4988:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4998u); set32(c.r[5], c.r[5].w[0] - 21004u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x002A4998u) [[unlikely]] return; }
L_002A4998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A49B0; } }
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] - 21039u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4898u | kUnwind; return; } goto L_002A4898; } }
L_002A49B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A49C0u); set32(c.r[5], c.r[5].w[0] - 20999u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x002A49C0u) [[unlikely]] return; }
L_002A49C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4898u | kUnwind; return; } goto L_002A4898; } }
L_002A49C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002A49F0:
    set32(c.r[29], c.r[29].w[0] - 736u);
    set32(c.r[4], 0u + 16384u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4A08u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 282u, depth + 1u); else { c.pc = 0x0023EE20u; return; } if (c.pc != 0x002A4A08u) [[unlikely]] return; }
L_002A4A08:
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4A14u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 217u, depth + 1u); else { c.pc = 0x0023E680u; return; } if (c.pc != 0x002A4A14u) [[unlikely]] return; }
L_002A4A14:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002A4A38; } }
L_002A4A1C:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4A1Cu | kUnwind; return; } goto L_002A4A1C; } }
L_002A4A38:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002A4A60; } }
L_002A4A44:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4A44u | kUnwind; return; } goto L_002A4A44; } }
L_002A4A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4A68u);  if (depth < kMaxDepth) unit_0086(c, 133u, depth + 1u); else { c.pc = 0x00419DE0u; return; } if (c.pc != 0x002A4A68u) [[unlikely]] return; }
L_002A4A68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4A78u); set32(c.r[5], c.r[5].w[0] - 20989u);  if (depth < kMaxDepth) unit_0044(c, 458u, depth + 1u); else { c.pc = 0x00313DD0u; return; } if (c.pc != 0x002A4A78u) [[unlikely]] return; }
L_002A4A78:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 444u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A4AD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4A8Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0044(c, 447u, depth + 1u); else { c.pc = 0x00313C40u; return; } if (c.pc != 0x002A4A8Cu) [[unlikely]] return; }
L_002A4A8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A4CC4; } }
L_002A4A94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[2].w[0] - 21356u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002A4AD0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[29].w[0] + 480u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4AB8u); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 181u, depth + 1u); else { c.pc = 0x002DFA60u; return; } if (c.pc != 0x002A4AB8u) [[unlikely]] return; }
L_002A4AB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A4AD0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4AD0u); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 217u, depth + 1u); else { c.pc = 0x002DFEE0u; return; } if (c.pc != 0x002A4AD0u) [[unlikely]] return; }
L_002A4AD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4AD8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0044(c, 455u, depth + 1u); else { c.pc = 0x00313D80u; return; } if (c.pc != 0x002A4AD8u) [[unlikely]] return; }
L_002A4AD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4AE0u);  if (depth < kMaxDepth) unit_009C(c, 415u, depth + 1u); else { c.pc = 0x00473B40u; return; } if (c.pc != 0x002A4AE0u) [[unlikely]] return; }
L_002A4AE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[2].d[0] | 20482ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4AF0u); st32((c.r[28].w[0] - 30496u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0077(c, 199u, depth + 1u); else { c.pc = 0x003DE4B0u; return; } if (c.pc != 0x002A4AF0u) [[unlikely]] return; }
L_002A4AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4AF8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0077(c, 68u, depth + 1u); else { c.pc = 0x003DD020u; return; } if (c.pc != 0x002A4AF8u) [[unlikely]] return; }
L_002A4AF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4B5Cu); st8((c.r[2].w[0] - 15888u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0077(c, 68u, depth + 1u); else { c.pc = 0x003DD020u; return; } if (c.pc != 0x002A4B5Cu) [[unlikely]] return; }
L_002A4B5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4BC0u); st8((c.r[2].w[0] - 15887u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0077(c, 68u, depth + 1u); else { c.pc = 0x003DD020u; return; } if (c.pc != 0x002A4BC0u) [[unlikely]] return; }
L_002A4BC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], 0u + 4u);
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4C24u); st8((c.r[2].w[0] - 15886u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0077(c, 68u, depth + 1u); else { c.pc = 0x003DD020u; return; } if (c.pc != 0x002A4C24u) [[unlikely]] return; }
L_002A4C24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 20971u);
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4C8Cu); st8((c.r[2].w[0] - 15885u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0094(c, 158u, depth + 1u); else { c.pc = 0x00452370u; return; } if (c.pc != 0x002A4C8Cu) [[unlikely]] return; }
L_002A4C8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4C98u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_001E(c, 41u, depth + 1u); else { c.pc = 0x00278540u; return; } if (c.pc != 0x002A4C98u) [[unlikely]] return; }
L_002A4C98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4CA0u);  if (depth < kMaxDepth) unit_0096(c, 226u, depth + 1u); else { c.pc = 0x0045BDA0u; return; } if (c.pc != 0x002A4CA0u) [[unlikely]] return; }
L_002A4CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4CA8u);  if (depth < kMaxDepth) unit_001D(c, 200u, depth + 1u); else { c.pc = 0x00277C60u; return; } if (c.pc != 0x002A4CA8u) [[unlikely]] return; }
L_002A4CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4CB0u);  if (depth < kMaxDepth) unit_0086(c, 131u, depth + 1u); else { c.pc = 0x00419DB0u; return; } if (c.pc != 0x002A4CB0u) [[unlikely]] return; }
L_002A4CB0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4CBCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0044(c, 451u, depth + 1u); else { c.pc = 0x00313D00u; return; } if (c.pc != 0x002A4CBCu) [[unlikely]] return; }
L_002A4CBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A5008; } }
L_002A4CC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4CCCu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0044(c, 434u, depth + 1u); else { c.pc = 0x003139A0u; return; } if (c.pc != 0x002A4CCCu) [[unlikely]] return; }
L_002A4CCC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4CDCu); set32(c.r[5], c.r[5].w[0] - 20940u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x002A4CDCu) [[unlikely]] return; }
L_002A4CDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A4D88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4CECu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0044(c, 435u, depth + 1u); else { c.pc = 0x003139B0u; return; } if (c.pc != 0x002A4CECu) [[unlikely]] return; }
L_002A4CEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A4F68; } }
    c.budget -= 1;
L_002A4CF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4D00u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x002A4D00u) [[unlikely]] return; }
L_002A4D00:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4D10u); set32(c.r[5], c.r[5].w[0] - 20935u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x002A4D10u) [[unlikely]] return; }
L_002A4D10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A4D38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4D20u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x002A4D20u) [[unlikely]] return; }
L_002A4D20:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4D2Cu); set32(c.r[4], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002A4D2Cu) [[unlikely]] return; }
L_002A4D2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A4D70; } }
    c.budget -= 1;
L_002A4D38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4D40u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x002A4D40u) [[unlikely]] return; }
L_002A4D40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4D50u); set32(c.r[5], c.r[5].w[0] - 20921u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x002A4D50u) [[unlikely]] return; }
L_002A4D50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A4D70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4D60u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x002A4D60u) [[unlikely]] return; }
L_002A4D60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4D68u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 424u, depth + 1u); else { c.pc = 0x0023FDC0u; return; } if (c.pc != 0x002A4D68u) [[unlikely]] return; }
L_002A4D68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] - 17652u), c.r[2].w[0]);
    c.budget -= 2;
L_002A4D70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4D78u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0044(c, 435u, depth + 1u); else { c.pc = 0x003139B0u; return; } if (c.pc != 0x002A4D78u) [[unlikely]] return; }
L_002A4D78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4CF8u | kUnwind; return; } goto L_002A4CF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A4F68; } }
L_002A4D88:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4D98u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 435u, depth + 1u); else { c.pc = 0x003139B0u; return; } if (c.pc != 0x002A4D98u) [[unlikely]] return; }
L_002A4D98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A4F68; } }
L_002A4DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4DA8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x002A4DA8u) [[unlikely]] return; }
L_002A4DA8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4DB8u); set32(c.r[5], c.r[5].w[0] - 20910u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x002A4DB8u) [[unlikely]] return; }
L_002A4DB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A4EF8; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4DCCu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x002A4DCCu) [[unlikely]] return; }
L_002A4DCC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4DDCu); set32(c.r[5], c.r[5].w[0] - 20905u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x002A4DDCu) [[unlikely]] return; }
L_002A4DDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A4E60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4DECu); set32(c.r[4], 0u + 580u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002A4DECu) [[unlikely]] return; }
L_002A4DEC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A4E08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4E00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 302u, depth + 1u); else { c.pc = 0x002E18F0u; return; } if (c.pc != 0x002A4E00u) [[unlikely]] return; }
L_002A4E00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002A4E08:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4E14u); c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 434u, depth + 1u); else { c.pc = 0x003139A0u; return; } if (c.pc != 0x002A4E14u) [[unlikely]] return; }
L_002A4E14:
    set32(c.r[5], 0u + 32u);
    set32(c.r[6], c.r[16].w[0] + 4u);
    c.budget -= 3;
L_002A4E20:
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] - 1u);  if (t) { goto L_002A4E48; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4E20u | kUnwind; return; } goto L_002A4E20; } }
    c.budget -= 1;
L_002A4E48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 21424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4E58u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 185u, depth + 1u); else { c.pc = 0x002DFB40u; return; } if (c.pc != 0x002A4E58u) [[unlikely]] return; }
L_002A4E58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A4F58; } }
L_002A4E60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4E68u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x002A4E68u) [[unlikely]] return; }
L_002A4E68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4E78u); set32(c.r[5], c.r[5].w[0] - 20895u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x002A4E78u) [[unlikely]] return; }
L_002A4E78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A4F58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4E88u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 217u, depth + 1u); else { c.pc = 0x0023E680u; return; } if (c.pc != 0x002A4E88u) [[unlikely]] return; }
L_002A4E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4E90u); set32(c.r[4], 0u + 216u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002A4E90u) [[unlikely]] return; }
L_002A4E90:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A4EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4EA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 414u, depth + 1u); else { c.pc = 0x00387A70u; return; } if (c.pc != 0x002A4EA4u) [[unlikely]] return; }
L_002A4EA4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002A4EA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4EB0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0044(c, 434u, depth + 1u); else { c.pc = 0x003139A0u; return; } if (c.pc != 0x002A4EB0u) [[unlikely]] return; }
L_002A4EB0:
    set32(c.r[5], 0u + 32u);
    set32(c.r[6], c.r[17].w[0] + 4u);
    c.budget -= 2;
L_002A4EB8:
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] - 1u);  if (t) { goto L_002A4EE0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4EB8u | kUnwind; return; } goto L_002A4EB8; } }
    c.budget -= 1;
L_002A4EE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 21424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4EF0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 185u, depth + 1u); else { c.pc = 0x002DFB40u; return; } if (c.pc != 0x002A4EF0u) [[unlikely]] return; }
L_002A4EF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A4F58; } }
L_002A4EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F00u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x002A4F00u) [[unlikely]] return; }
L_002A4F00:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F10u); set32(c.r[5], c.r[5].w[0] - 20887u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x002A4F10u) [[unlikely]] return; }
L_002A4F10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A4F80; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A4F58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F28u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x002A4F28u) [[unlikely]] return; }
L_002A4F28:
    set32(c.r[5], 0u + 128u);
    set32(c.r[6], c.r[17].w[0] + 36u);
    c.budget -= 2;
L_002A4F30:
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] - 1u);  if (t) { goto L_002A4F58; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4F30u | kUnwind; return; } goto L_002A4F30; } }
    c.budget -= 1;
L_002A4F58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F60u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0044(c, 435u, depth + 1u); else { c.pc = 0x003139B0u; return; } if (c.pc != 0x002A4F60u) [[unlikely]] return; }
L_002A4F60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4DA0u | kUnwind; return; } goto L_002A4DA0; } }
L_002A4F68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F70u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0044(c, 447u, depth + 1u); else { c.pc = 0x00313C40u; return; } if (c.pc != 0x002A4F70u) [[unlikely]] return; }
L_002A4F70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4CC4u | kUnwind; return; } goto L_002A4CC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4A94u | kUnwind; return; } goto L_002A4A94; } }
L_002A4F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F88u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x002A4F88u) [[unlikely]] return; }
L_002A4F88:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F98u); set32(c.r[5], c.r[5].w[0] - 20882u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x002A4F98u) [[unlikely]] return; }
L_002A4F98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A4FC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4FA8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x002A4FA8u) [[unlikely]] return; }
L_002A4FA8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4F58u | kUnwind; return; } goto L_002A4F58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4FB8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 424u, depth + 1u); else { c.pc = 0x0023FDC0u; return; } if (c.pc != 0x002A4FB8u) [[unlikely]] return; }
L_002A4FB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 561u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4F58u | kUnwind; return; } goto L_002A4F58; } }
L_002A4FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4FC8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x002A4FC8u) [[unlikely]] return; }
L_002A4FC8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4FD8u); set32(c.r[5], c.r[5].w[0] - 20921u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x002A4FD8u) [[unlikely]] return; }
L_002A4FD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4F58u | kUnwind; return; } goto L_002A4F58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4FE8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x002A4FE8u) [[unlikely]] return; }
L_002A4FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4FF0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 424u, depth + 1u); else { c.pc = 0x0023FDC0u; return; } if (c.pc != 0x002A4FF0u) [[unlikely]] return; }
L_002A4FF0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4F58u | kUnwind; return; } goto L_002A4F58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 17652u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4F58u | kUnwind; return; } goto L_002A4F58; } }
    c.budget -= 1;
L_002A5008:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 736u);  c.pc = t; return; }
L_002A5020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = ld32((c.r[6].w[0] + 8u));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    set32(c.r[3], ld32((c.r[28].w[0] - 29752u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[7], c.r[29].w[0] + 20u);
    c.f[6] = ld32((c.r[6].w[0] + 4u));
    set32(c.r[4], c.r[29].w[0] + 24u);
    c.f[5] = ld32((c.r[5].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[7] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[7]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    st32((c.r[4].w[0]), c.f[7]);
    st32((c.r[29].w[0] + 16u), c.f[3]);
    st32((c.r[7].w[0]), c.f[4]);
    c.f[2] = ld32((c.r[2].w[0] + 2048u));
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[2]));
    c.budget -= 31;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = fp::ee::mul(c.fcr31, c.f[4], c.f[1]);  if (t) { goto L_002A51E8; } }
L_002A509C:
    c.f[5] = ld32((c.r[29].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439B0000u);
    c.f[4] = ld32((c.r[5].w[0]));
    c.f[2] = c.r[2].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A5218; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC39B0000u);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A5100; } }
    c.f[3] = fp::ee::sub(c.fcr31, c.f[2], c.f[4]);
    c.f[4] = fp::ee::div(c.fcr31, c.f[3], c.f[5]);
    c.f[2] = ld32((c.r[29].w[0] + 16u));
    c.f[3] = ld32((c.r[7].w[0]));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[4]);
    st32((c.r[29].w[0] + 16u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[4]);
    st32((c.r[7].w[0]), c.f[3]);
    st32((c.r[4].w[0]), c.f[2]);
    c.budget -= 11;
L_002A5100:
    c.f[5] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439B0000u);
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = c.r[2].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A5248; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC39B0000u);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A5164; } }
    c.f[3] = fp::ee::sub(c.fcr31, c.f[2], c.f[4]);
    c.f[4] = fp::ee::div(c.fcr31, c.f[3], c.f[5]);
    c.f[2] = ld32((c.r[29].w[0] + 16u));
    c.f[3] = ld32((c.r[7].w[0]));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[4]);
    st32((c.r[29].w[0] + 16u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[4]);
    st32((c.r[7].w[0]), c.f[3]);
    st32((c.r[4].w[0]), c.f[2]);
    c.budget -= 11;
L_002A5164:
    c.f[6] = ld32((c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = ld32((c.r[29].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.f[5] = ld32((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[3] = c.r[3].w[0];
    c.f[7] = ld32((c.r[29].w[0] + 16u));
    c.f[2] = c.r[2].w[0];
    c.facc = fp::ee::mul(c.fcr31, c.f[6], c.f[6]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[4] = fp::ee::sqrt(c.fcr31, c.f[4]);
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[4]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[7], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[3] = fp::ee::mul(c.fcr31, c.f[6], c.f[3]);  if (t) { goto L_002A51C4; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[3], c.f[1]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
L_002A51C4:
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.f[12] = 0u;
    set32(c.r[6], c.r[29].w[0] + 16u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A51DCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 227u, depth + 1u); else { c.pc = 0x002EA8A0u; return; } if (c.pc != 0x002A51DCu) [[unlikely]] return; }
L_002A51DC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_002A5274; } }
L_002A51E8:
    c.f[4] = fp::ee::sub(c.fcr31, c.f[2], c.f[5]);
    c.f[5] = ld32((c.r[7].w[0]));
    c.f[3] = ld32((c.r[29].w[0] + 16u));
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[4] = fp::ee::div(c.fcr31, c.f[4], c.f[5]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    st32((c.r[29].w[0] + 16u), c.f[3]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[5], c.f[4]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[4]);
    st32((c.r[7].w[0]), c.f[3]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A509Cu | kUnwind; return; } goto L_002A509C; } }
L_002A5218:
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[4]);
    c.f[4] = fp::ee::div(c.fcr31, c.f[2], c.f[5]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[29].w[0] + 16u), c.f[2]);
    c.f[3] = ld32((c.r[7].w[0]));
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[4]);
    st32((c.r[7].w[0]), c.f[3]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5100u | kUnwind; return; } goto L_002A5100; } }
L_002A5248:
    c.f[3] = fp::ee::sub(c.fcr31, c.f[2], c.f[4]);
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[5]);
    c.f[2] = ld32((c.r[29].w[0] + 16u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 16u), c.f[2]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[5], c.f[3]);
    st32((c.r[4].w[0]), c.f[2]);
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5164u | kUnwind; return; } goto L_002A5164; } }
L_002A5274:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A5280:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.f[5] = ld32((c.r[6].w[0] + 4u));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.f[6] = ld32((c.r[6].w[0]));
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.f[3] = ld32((c.r[6].w[0] + 12u));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.f[4] = ld32((c.r[6].w[0] + 8u));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.f[2] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], 0u + 40u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.facc = fp::ee::mul(c.fcr31, c.f[5], c.f[5]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    set32(c.r[17], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 188u), c.f[3]);
    set32(c.r[21], c.r[29].w[0] + 180u);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    set32(c.r[22], c.r[29].w[0] + 184u);
    c.f[3] = fp::ee::sqrt(c.fcr31, c.f[3]);
    set32(c.r[16], c.r[29].w[0] + 168u);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[29].w[0] + 160u), c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[5], c.f[2]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[6], c.f[2]);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[2]);
    st32((c.r[21].w[0]), c.f[1]);
    st32((c.r[22].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[16].w[0]), c.f[1]);
    st32((c.r[29].w[0] + 172u), c.f[0]);
    c.budget -= 42;
L_002A5328:
    c.f[4] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    c.f[3] = ld32((c.r[21].w[0]));
    c.f[6] = ld32((c.r[29].w[0] + 160u));
    c.f[5] = ld32((c.r[29].w[0] + 176u));
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[22].w[0]));
    c.f[0] = c.r[2].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    st32((c.r[29].w[0] + 160u), c.f[5]);
    st32((c.r[17].w[0]), c.f[3]);
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0]), c.f[2]);  if (t) { goto L_002A55AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A55AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3A00000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A55AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A55AC; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A55AC; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A55AC; } }
    c.f[2] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[3], c.r[2].w[0] >> 4);
    set32(c.r[2], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[19].d[0]; set32(c.r[2], c.r[2].w[0] >> 4);  if (t) { goto L_002A55D4; } }
    c.budget -= 1;
L_002A53F0:
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002A53F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.f[1] = c.r[2].w[0];
    c.f[3] = fp::cvt_w_s(c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[3]);
    set32(c.r[4], c.f[0]);
    set32(c.r[2], c.r[3].w[0] >> 4);
    set32(c.r[6], c.r[3].w[0] >> 2);
    set32(c.r[3], c.r[4].w[0] >> 4);
    set32(c.r[7], c.r[4].w[0] >> 2);
    set32(c.r[4], c.r[7].w[0] << 2);
    c.budget -= 15;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_002A5440; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002A545C; } }
L_002A5440:
    set32(c.r[5], c.r[4].w[0] >> 1);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002A545C:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[4], c.r[6].w[0] << 2);
    c.f[0] = c.r[5].w[0];
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] < 0; c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_002A5480; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002A549C; } }
L_002A5480:
    set32(c.r[5], c.r[4].w[0] >> 1);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002A549C:
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[7].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] - c.r[4].w[0]);
    set32(c.r[7], c.r[3].w[0] << 4);
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    set32(c.r[7], c.r[7].w[0] - c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    c.f[0] = c.r[8].w[0];
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[13] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A54F0u); set32(c.r[4], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_002A(c, 8u, depth + 1u); else { c.pc = 0x002A80E0u; return; } if (c.pc != 0x002A54F0u) [[unlikely]] return; }
L_002A54F0:
    c.f[1] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A55E8; } }
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[6], c.r[29].w[0] + 176u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29752u)));
    c.f[12] = 0u;
    set32(c.r[7], c.r[29].w[0] + 128u);
    set32(c.r[8], 0u + 1u);
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
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5574u); set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 170u, depth + 1u); else { c.pc = 0x00203F80u; return; } if (c.pc != 0x002A5574u) [[unlikely]] return; }
L_002A5574:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5328u | kUnwind; return; } goto L_002A5328; } }
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[2], 0u + 2u);
    st32((c.r[20].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[20].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 12u), c.f[0]);  if (t) { goto L_002A560C; } }
L_002A55AC:
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[2], 0u + 4u);
    st32((c.r[20].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[20].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 12u), c.f[0]);  if (t) { goto L_002A560C; } }
L_002A55D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A53F8u | kUnwind; return; } goto L_002A53F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A53F0u | kUnwind; return; } goto L_002A53F0; } }
    c.budget -= 1;
L_002A55E8:
    set32(c.r[2], 0u + 3u);
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[20].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[20].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[20].w[0] + 12u), c.f[0]);
    c.budget -= 9;
L_002A560C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002A5640:
    set32(c.r[6], ld32((c.r[4].w[0] + 2040u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0])));
    st32((c.r[4].w[0] + 2040u), c.r[2].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 8u), c.f[12]);
    set32(c.r[5], ld32((c.r[4].w[0] + 2044u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002A56E0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002A56D0; } }
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 2;
L_002A5674:
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002A5688; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A5688:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A56AC; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002A56EC; } }
    st32((c.r[6].w[0]), c.r[5].w[0]);
    st32((c.r[7].w[0]), c.r[6].w[0]);
    c.budget -= 2;
L_002A56A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A56FC; } }
L_002A56AC:
    set32(c.r[2], ld32((c.r[4].w[0] + 2052u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002A56F8; } }
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5674u | kUnwind; return; } goto L_002A5674; } }
    c.budget -= 1;
L_002A56D0:
    st32((c.r[7].w[0]), c.r[6].w[0]);
    st32((c.r[6].w[0]), 0u);
    c.budget -= 2;
L_002A56D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A56FC; } }
L_002A56E0:
    st32((c.r[4].w[0] + 2044u), c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A56D8u | kUnwind; return; } goto L_002A56D8; } }
L_002A56EC:
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 2044u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A56A4u | kUnwind; return; } goto L_002A56A4; } }
L_002A56F8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A56FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A5710:
    set32(c.r[29], c.r[29].w[0] - 2352u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[29].w[0] + 2240u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[7], 0u + 25u);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    set32(c.r[8], c.r[29].w[0] + 2351u);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[26] = fp::ee::mul(c.fcr31, c.f[12], c.f[12]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5780u); st8((c.r[29].w[0] + 2351u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0029(c, 172u, depth + 1u); else { c.pc = 0x002A5F60u; return; } if (c.pc != 0x002A5780u) [[unlikely]] return; }
L_002A5780:
    c.r[2].d[0] = c.r[23].d[0] & 255ull;
    set32(c.r[5], c.r[29].w[0] + 2220u);
    set32(c.r[3], 0u + 170u);
    st32((c.r[29].w[0] + 2228u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] - 1u);
    set32(c.r[6], c.r[29].w[0] + 2216u);
    set32(c.r[7], c.r[29].w[0] + 176u);
    set32(c.r[4], c.r[29].w[0] + 2224u);
    st32((c.r[6].w[0]), c.r[7].w[0]);
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st32((c.r[5].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { goto L_002A57E8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A57BC:
    set32(c.r[3], c.r[3].w[0] + 12u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + 176u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A57BCu | kUnwind; return; } goto L_002A57BC; } }
    c.budget -= 1;
L_002A57E8:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st32((c.r[2].w[0] + 164u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A580Cu); st32((c.r[5].w[0]), 0u);  if (depth < kMaxDepth) unit_0028(c, 180u, depth + 1u); else { c.pc = 0x002A21E0u; return; } if (c.pc != 0x002A580Cu) [[unlikely]] return; }
L_002A580C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A5A40; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5828u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5828u) [[unlikely]] return; }
L_002A5828:
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[21].w[0] + 4u));
    c.f[5] = ld32((c.r[2].w[0]));
    c.f[4] = ld32((c.r[21].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.f[21] = c.r[3].w[0];
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[21], c.f[0]);
    c.f[23] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.f[22] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[24] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 19;
L_002A5874:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5888u);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002A5888u) [[unlikely]] return; }
L_002A5888:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 2351u));
    c.f[25] = c.f[0];
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A59D0; } }
L_002A589C:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 2240u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 264u)));
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002A59B8; } }
L_002A58B8:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 522u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = ld8((c.r[18].w[0] + 522u));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 8704u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A59A8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[17].d[0];  if (t) { goto L_002A59A8; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 529u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A59A8; } }
    c.f[6] = ld32((c.r[18].w[0] + 32u));
    c.f[5] = ld32((c.r[21].w[0]));
    c.f[4] = ld32((c.r[18].w[0] + 36u));
    c.f[2] = ld32((c.r[21].w[0] + 4u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.f[3] = 0u;
    c.f[6] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[4], c.f[2]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[5], c.f[5]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[26]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A59A8; } }
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[21], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[5], c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[6], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[23], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[4], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[24], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[25]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A59A8; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5998u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0029(c, 140u, depth + 1u); else { c.pc = 0x002A5640u; return; } if (c.pc != 0x002A5998u) [[unlikely]] return; }
L_002A5998:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A59A8; } }
    c.f[26] = c.f[20];
    c.budget -= 1;
L_002A59A8:
    set32(c.r[18], ld32((c.r[18].w[0] + 1572u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A58B8u | kUnwind; return; } goto L_002A58B8; } }
    c.budget -= 1;
L_002A59B8:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 2351u));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A589Cu | kUnwind; return; } goto L_002A589C; } }
L_002A59D0:
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 2220u)));  if (t) { goto L_002A59F8; } }
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_002A59F8:
    c.r[5].d[0] = c.r[23].d[0] & 255ull;
    c.budget -= 1;
L_002A59FC:
    c.r[3].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A5A80; } }
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A5A80; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[6].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A59FCu | kUnwind; return; } goto L_002A59FC; } }
L_002A5A40:
    c.f[20] = ld32((c.r[19].w[0] + 104u));
    c.f[22] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5A50u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002A5A50u) [[unlikely]] return; }
L_002A5A50:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5A5Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002A5A5Cu) [[unlikely]] return; }
L_002A5A5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[2].w[0];
    c.f[1] = c.f[22];
    c.facc = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[23] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[21], c.f[20]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.f[24] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5874u | kUnwind; return; } goto L_002A5874; } }
L_002A5A80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2352u);  c.pc = t; return; }
L_002A5AD0:
    set32(c.r[29], c.r[29].w[0] - 2304u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[6], c.r[29].w[0] + 2192u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[7], 0u + 25u);
    c.f[21] = fp::ee::mul(c.fcr31, c.f[12], c.f[12]);
    set32(c.r[8], c.r[29].w[0] + 2303u);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5B20u); st8((c.r[29].w[0] + 2303u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0029(c, 172u, depth + 1u); else { c.pc = 0x002A5F60u; return; } if (c.pc != 0x002A5B20u) [[unlikely]] return; }
L_002A5B20:
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[6], c.r[29].w[0] + 2172u);
    set32(c.r[4], 0u + 170u);
    st32((c.r[29].w[0] + 2180u), c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] - 1u);
    set32(c.r[7], c.r[29].w[0] + 2168u);
    set32(c.r[8], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 2176u);
    st32((c.r[7].w[0]), c.r[8].w[0]);
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st32((c.r[6].w[0]), 0u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[5].w[0]), c.r[4].w[0]);  if (t) { goto L_002A5B88; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A5B5C:
    set32(c.r[4], c.r[4].w[0] + 12u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + 128u);
    st32((c.r[8].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5B5Cu | kUnwind; return; } goto L_002A5B5C; } }
    c.budget -= 1;
L_002A5B88:
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 2303u));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    st32((c.r[4].w[0] + 116u), 0u);
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[6].w[0]), 0u);  if (t) { goto L_002A5C38; } }
L_002A5BB4:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 2192u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 264u)));
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A5C20; } }
L_002A5BD0:
    c.f[3] = ld32((c.r[17].w[0] + 36u));
    c.f[2] = ld32((c.r[21].w[0] + 4u));
    c.f[5] = ld32((c.r[17].w[0] + 32u));
    c.f[4] = ld32((c.r[21].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[21]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A5C88; } }
    c.budget -= 1;
L_002A5C10:
    set32(c.r[17], ld32((c.r[17].w[0] + 1572u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5BD0u | kUnwind; return; } goto L_002A5BD0; } }
    c.budget -= 1;
L_002A5C20:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 2303u));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5BB4u | kUnwind; return; } goto L_002A5BB4; } }
L_002A5C38:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[29].w[0] + 2172u)));
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 3;
L_002A5C44:
    c.r[3].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A5CB0; } }
    c.r[3].d[0] = ld8((c.r[19].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A5CB0; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[19].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[6].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5C44u | kUnwind; return; } goto L_002A5C44; } }
L_002A5C88:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5C98u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0029(c, 140u, depth + 1u); else { c.pc = 0x002A5640u; return; } if (c.pc != 0x002A5C98u) [[unlikely]] return; }
L_002A5C98:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5C10u | kUnwind; return; } goto L_002A5C10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[20];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5C10u | kUnwind; return; } goto L_002A5C10; } }
    c.budget -= 1;
L_002A5CB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2304u);  c.pc = t; return; }
L_002A5CE0:
    set32(c.r[29], c.r[29].w[0] - 2304u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[6], c.r[29].w[0] + 2192u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[7], 0u + 25u);
    c.f[21] = fp::ee::mul(c.fcr31, c.f[12], c.f[12]);
    set32(c.r[8], c.r[29].w[0] + 2303u);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5D30u); st8((c.r[29].w[0] + 2303u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0029(c, 172u, depth + 1u); else { c.pc = 0x002A5F60u; return; } if (c.pc != 0x002A5D30u) [[unlikely]] return; }
L_002A5D30:
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[6], c.r[29].w[0] + 2172u);
    set32(c.r[4], 0u + 170u);
    st32((c.r[29].w[0] + 2180u), c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] - 1u);
    set32(c.r[7], c.r[29].w[0] + 2168u);
    set32(c.r[8], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 2176u);
    st32((c.r[7].w[0]), c.r[8].w[0]);
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st32((c.r[6].w[0]), 0u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[5].w[0]), c.r[4].w[0]);  if (t) { goto L_002A5D98; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A5D6C:
    set32(c.r[4], c.r[4].w[0] + 12u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + 128u);
    st32((c.r[8].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5D6Cu | kUnwind; return; } goto L_002A5D6C; } }
    c.budget -= 1;
L_002A5D98:
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 2303u));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    st32((c.r[4].w[0] + 116u), 0u);
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[6].w[0]), 0u);  if (t) { goto L_002A5ED8; } }
L_002A5DC4:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 2192u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 264u)));
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A5EC0; } }
L_002A5DE0:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 811u));
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A5E04; } }
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002A5E04:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A5EB0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 529u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A5EB0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A5EB0; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 220u));
    set32(c.r[3], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002A5EB0; } }
    set32(c.r[3], 0u + 51u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002A5EB0; } }
    c.f[3] = ld32((c.r[17].w[0] + 36u));
    c.f[2] = ld32((c.r[21].w[0] + 4u));
    c.f[5] = ld32((c.r[17].w[0] + 32u));
    c.f[4] = ld32((c.r[21].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[21]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A5EB0; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5E9Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0029(c, 140u, depth + 1u); else { c.pc = 0x002A5640u; return; } if (c.pc != 0x002A5E9Cu) [[unlikely]] return; }
L_002A5E9C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A5EB0; } }
    c.f[21] = c.f[20];
    c.budget -= 2;
L_002A5EB0:
    set32(c.r[17], ld32((c.r[17].w[0] + 1572u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5DE0u | kUnwind; return; } goto L_002A5DE0; } }
    c.budget -= 1;
L_002A5EC0:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 2303u));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5DC4u | kUnwind; return; } goto L_002A5DC4; } }
L_002A5ED8:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[29].w[0] + 2172u)));
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 3;
L_002A5EE4:
    c.r[3].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A5F28; } }
    c.r[3].d[0] = ld8((c.r[19].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A5F28; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[19].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[6].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5EE4u | kUnwind; return; } goto L_002A5EE4; } }
L_002A5F28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2304u);  c.pc = t; return; }
L_002A5F60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC39F0000u);
    c.f[2] = ld32((c.r[5].w[0]));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.f[0] = c.r[3].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[2], c.f[12]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[2], c.f[12]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[1], c.f[12]);
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[4] = fp::ee::add(c.fcr31, c.f[1], c.f[12]);  if (t) { goto L_002A5FB0; } }
    c.f[5] = c.f[0];
    c.budget -= 1;
L_002A5FB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC39F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A5FD0; } }
    c.f[6] = c.f[0];
    c.budget -= 1;
L_002A5FD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A5FF0; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_002A5FF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A6010; } }
    c.f[4] = c.f[0];
    c.budget -= 1;
L_002A6010:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(0u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[5]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    set32(c.r[20], c.r[3].w[0] >> 4);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[21], c.r[3].w[0] >> 4);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    set32(c.r[3], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.r[3].w[0] >> 4);
    c.r[1].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.f[0]);
    c.budget -= 22;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[25], c.r[3].w[0] >> 4);  if (t) { goto L_002A6250; } }
    set32(c.r[5], c.r[20].w[0] << 4);
    set32(c.r[3], c.r[25].w[0] - c.r[21].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[20].w[0]);
    set32(c.r[24], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[13].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[14], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[15], c.r[25].w[0] - 8u);
    set32(c.r[18], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[21].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[12], c.r[3].w[0] << 5);
    c.budget -= 14;
L_002A60A0:
    c.r[1].d[0] = c.r[25].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[19].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002A6240; } }
    c.r[1].d[0] = c.r[24].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002A61F0; } }
    c.r[1].d[0] = c.r[25].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002A60D0; } }
    c.budget -= 2;
    { const bool t = c.r[25].d[0] == c.r[14].d[0];  if (t) { goto L_002A60D0; } }
    c.r[3].d[0] = c.r[13].d[0] + 0ull;
    c.budget -= 1;
L_002A60D0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A61F0; } }
    set32(c.r[17], c.r[18].w[0] + c.r[12].w[0]);
    c.budget -= 2;
L_002A60E0:
    c.r[22].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[11], c.r[17].w[0] + 288u);
    set32(c.r[10], c.r[17].w[0] + 576u);
    set32(c.r[9], c.r[17].w[0] + 864u);
    set32(c.r[7], c.r[17].w[0] + 1152u);
    set32(c.r[5], c.r[17].w[0] + 1440u);
    set32(c.r[4], c.r[17].w[0] + 1728u);
    set32(c.r[3], c.r[17].w[0] + 2016u);
    c.r[1].d[0] = c.r[15].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    set32(c.r[22], c.r[22].w[0] << 2);
    set32(c.r[22], c.r[6].w[0] + c.r[22].w[0]);
    st32((c.r[22].w[0]), c.r[17].w[0]);
    c.r[22].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[17], c.r[17].w[0] + 2304u);
    set32(c.r[22], c.r[22].w[0] + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[22].w[0]));
    c.r[22].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[22], c.r[22].w[0] << 2);
    set32(c.r[22], c.r[6].w[0] + c.r[22].w[0]);
    st32((c.r[22].w[0]), c.r[11].w[0]);
    c.r[11].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[11], c.r[11].w[0] + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[11], c.r[6].w[0] + c.r[11].w[0]);
    st32((c.r[11].w[0]), c.r[10].w[0]);
    c.r[10].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[10], c.r[6].w[0] + c.r[10].w[0]);
    st32((c.r[10].w[0]), c.r[9].w[0]);
    c.r[9].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[6].w[0] + c.r[9].w[0]);
    st32((c.r[9].w[0]), c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[7].w[0]), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 67;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A60E0u | kUnwind; return; } goto L_002A60E0; } }
    c.budget -= 1;
L_002A61F0:
    c.r[1].d[0] = c.r[25].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002A6240; } }
    set32(c.r[3], c.r[19].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_002A6210:
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[1].d[0] = c.r[25].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[4], c.r[4].w[0] + 288u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6210u | kUnwind; return; } goto L_002A6210; } }
    c.budget -= 1;
L_002A6240:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[1].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 11520u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A60A0u | kUnwind; return; } goto L_002A60A0; } }
L_002A6250:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A6280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[2] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[7], c.r[2].w[0] >> 4);
    set32(c.r[5], c.r[2].w[0] >> 2);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.f[0]);
    set32(c.r[9], c.r[3].w[0] >> 4);
    c.budget -= 21;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[6], c.r[3].w[0] >> 2);  if (t) { goto L_002A62E0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002A62FC; } }
L_002A62E0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002A62FC:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[2], c.r[6].w[0] << 2);
    c.f[0] = c.r[3].w[0];
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0; c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_002A6320; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002A633C; } }
L_002A6320:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002A633C:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[2], c.r[9].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] - c.r[2].w[0]);
    c.f[0] = c.r[8].w[0];
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[9].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    c.f[13] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A638Cu); set32(c.r[4], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_002A(c, 8u, depth + 1u); else { c.pc = 0x002A80E0u; return; } if (c.pc != 0x002A638Cu) [[unlikely]] return; }
L_002A638C:
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A63A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[1] = ld32((c.r[5].w[0]));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[2] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[7], c.r[2].w[0] >> 4);
    set32(c.r[5], c.r[2].w[0] >> 2);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.f[0]);
    set32(c.r[9], c.r[3].w[0] >> 4);
    c.budget -= 21;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[6], c.r[3].w[0] >> 2);  if (t) { goto L_002A6400; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002A641C; } }
L_002A6400:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002A641C:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[2], c.r[6].w[0] << 2);
    c.f[0] = c.r[3].w[0];
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0; c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_002A6440; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002A645C; } }
L_002A6440:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002A645C:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[2], c.r[9].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] - c.r[2].w[0]);
    c.f[0] = c.r[8].w[0];
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[9].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    c.f[13] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A64ACu); set32(c.r[4], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_002A(c, 8u, depth + 1u); else { c.pc = 0x002A80E0u; return; } if (c.pc != 0x002A64ACu) [[unlikely]] return; }
L_002A64AC:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A64C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
L_002A64E0:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_002A64E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A64F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 233u, depth + 1u); else { c.pc = 0x002AB7B0u; return; } if (c.pc != 0x002A64F0u) [[unlikely]] return; }
L_002A64F0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 288u);
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A64E8u | kUnwind; return; } goto L_002A64E8; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 11520u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A64E0u | kUnwind; return; } goto L_002A64E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A651Cu); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 124u, depth + 1u); else { c.pc = 0x00345B90u; return; } if (c.pc != 0x002A651Cu) [[unlikely]] return; }
L_002A651C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A6540:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6564u); set32(c.r[4], c.r[28].w[0] - 29576u);  if (depth < kMaxDepth) unit_0029(c, 286u, depth + 1u); else { c.pc = 0x002A7430u; return; } if (c.pc != 0x002A6564u) [[unlikely]] return; }
L_002A6564:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A6568:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002A6570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6578u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 237u, depth + 1u); else { c.pc = 0x002AB7F0u; return; } if (c.pc != 0x002A6578u) [[unlikely]] return; }
L_002A6578:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 288u);
    c.r[3].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6570u | kUnwind; return; } goto L_002A6570; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 11520u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6568u | kUnwind; return; } goto L_002A6568; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A65C0:
    set32(c.r[29], c.r[29].w[0] - 352u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC39F0000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[2] = ld32((c.r[5].w[0]));
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[0] = c.r[3].w[0];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    st8((c.r[29].w[0] + 303u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.f[20] = c.f[12];
    c.f[5] = fp::ee::sub(c.fcr31, c.f[2], c.f[20]);
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 28;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[6] = fp::ee::sub(c.fcr31, c.f[1], c.f[20]);  if (t) { goto L_002A6634; } }
    c.f[5] = c.f[0];
    c.budget -= 1;
L_002A6634:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC39F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A6654; } }
    c.f[6] = c.f[0];
    c.budget -= 1;
L_002A6654:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[3] = fp::ee::add(c.fcr31, c.f[2], c.f[20]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[4] = fp::ee::add(c.fcr31, c.f[1], c.f[20]);  if (t) { goto L_002A6678; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_002A6678:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A6698; } }
    c.f[4] = c.f[0];
    c.budget -= 1;
L_002A6698:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[5]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    set32(c.r[3], c.r[3].w[0] >> 4);
    st32((c.r[29].w[0] + 256u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 256u)));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.r[3].w[0] >> 4);
    st32((c.r[29].w[0] + 272u), c.r[3].w[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    set32(c.r[3], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.r[3].w[0] >> 4);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] >> 4);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 29;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002A6858; } }
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[22], c.r[29].w[0] + 324u);
    set32(c.r[5], c.r[3].w[0] << 4);
    set32(c.r[23], c.r[29].w[0] + 328u);
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[30], c.r[29].w[0] + 308u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    c.budget -= 11;
L_002A6738:
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002A6828; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.budget -= 7;
L_002A6770:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 264u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A67A8; } }
L_002A6780:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 303u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A6860; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[17].d[0];  if (t) { goto L_002A6860; } }
    c.budget -= 1;
L_002A6798:
    set32(c.r[16], ld32((c.r[16].w[0] + 1572u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6780u | kUnwind; return; } goto L_002A6780; } }
L_002A67A8:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_002A67BC; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[13] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002A67D8; } }
L_002A67BC:
    set32(c.r[3], c.r[20].w[0] >> 1);
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.f[13] = fp::ee::add(c.fcr31, c.f[13], c.f[13]);
    c.budget -= 7;
L_002A67D8:
    set32(c.r[4], ld32((c.r[29].w[0] + 208u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A67ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 46u, depth + 1u); else { c.pc = 0x002A8B00u; return; } if (c.pc != 0x002A67ECu) [[unlikely]] return; }
L_002A67EC:
    set32(c.r[4], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A67F8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 100u, depth + 1u); else { c.pc = 0x002A97F0u; return; } if (c.pc != 0x002A67F8u) [[unlikely]] return; }
L_002A67F8:
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[3], c.r[3].w[0] + 288u);
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6770u | kUnwind; return; } goto L_002A6770; } }
    c.budget -= 1;
L_002A6828:
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[3], c.r[3].w[0] + 11520u);
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 256u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6738u | kUnwind; return; } goto L_002A6738; } }
    c.budget -= 1;
L_002A6858:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A69E8; } }
L_002A6860:
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 523u));
    c.f[2] = ld32((c.r[21].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[5] = ld32((c.r[16].w[0] + 40u));
    c.f[4] = ld32((c.r[21].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    st32((c.r[29].w[0] + 320u), c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[13] = fp::ee::sqrt(c.fcr31, c.f[0]);
    st32((c.r[22].w[0]), c.f[2]);
    st32((c.r[23].w[0]), c.f[4]);
    c.budget -= 24;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6798u | kUnwind; return; } goto L_002A6798; } }
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6798u | kUnwind; return; } goto L_002A6798; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002A6930; } }
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_002A68E8; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[14] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002A6904; } }
L_002A68E8:
    set32(c.r[3], c.r[20].w[0] >> 1);
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[14] = fp::ee::add(c.fcr31, c.f[14], c.f[14]);
    c.budget -= 7;
L_002A6904:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6924u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0035(c, 94u, depth + 1u); else { c.pc = 0x002D52E0u; return; } if (c.pc != 0x002A6924u) [[unlikely]] return; }
L_002A6924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6798u | kUnwind; return; } goto L_002A6798; } }
    c.budget -= 1;
L_002A6930:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.r[6].d[0] = ld16((c.r[16].w[0] + 544u));
    set32(c.r[5], 0u - 3u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.f[3] = ld32((c.r[19].w[0] + 4u));
    set32(c.r[9], 0u - 17u);
    c.f[0] = c.r[2].w[0];
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.f[2] = ld32((c.r[19].w[0]));
    set32(c.r[3], 0u - 2049u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[4], c.r[16].w[0] + 544u);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[11].d[0] = c.r[6].d[0] | c.r[11].d[0];
    set32(c.r[7], 0u + 1u);
    st16((c.r[16].w[0] + 544u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[16].w[0] + 544u));
    set32(c.r[6], c.r[29].w[0] + 336u);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[13]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[10].d[0];
    st16((c.r[16].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 544u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st16((c.r[16].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 340u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[20]);
    st32((c.r[29].w[0] + 304u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[20]);
    st32((c.r[29].w[0] + 336u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 312u);
    st32((c.r[2].w[0]), c.f[4]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 344u);
    st32((c.r[30].w[0]), c.f[3]);
    c.budget -= 44;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A69E0u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 363u, depth + 1u); else { c.pc = 0x0028B7C0u; return; } if (c.pc != 0x002A69E0u) [[unlikely]] return; }
L_002A69E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6798u | kUnwind; return; } goto L_002A6798; } }
L_002A69E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_002A6A20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[1] = ld32((c.r[5].w[0]));
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[2] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[2], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.r[2].w[0] >> 4);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] >> 4);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6A90u); set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 90u, depth + 1u); else { c.pc = 0x002A9550u; return; } if (c.pc != 0x002A6A90u) [[unlikely]] return; }
L_002A6A90:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A6AC0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 252u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6AACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A6AACu) [[unlikely]] return; }
L_002A6AAC:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002A6AC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002A6AC4; } }
L_002A6AC0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A6AC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A6AE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 64u)));  c.pc = t; return; }
L_002A6AF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
L_002A6B18:
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[2] = c.r[2].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[12] = 0u;
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[2], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.r[2].w[0] >> 4);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] >> 4);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6B7Cu); set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 90u, depth + 1u); else { c.pc = 0x002A9550u; return; } if (c.pc != 0x002A6B7Cu) [[unlikely]] return; }
L_002A6B7C:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A6B94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[17].w[0]);  if (t) { goto L_002A6BA8; } }
L_002A6B94:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6B18u | kUnwind; return; } goto L_002A6B18; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A6BA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A6BD0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[2] = c.r[2].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[8], c.r[2].w[0] >> 4);
    set32(c.r[5], c.r[2].w[0] >> 2);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.f[0]);
    set32(c.r[9], c.r[3].w[0] >> 4);
    c.budget -= 25;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[6], c.r[3].w[0] >> 2);  if (t) { goto L_002A6C40; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002A6C5C; } }
L_002A6C40:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002A6C5C:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[2], c.r[6].w[0] << 2);
    c.f[0] = c.r[3].w[0];
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0; c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_002A6C80; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002A6C9C; } }
L_002A6C80:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002A6C9C:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[3], c.r[8].w[0] << 4);
    set32(c.r[2], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] - c.r[2].w[0]);
    c.f[0] = c.r[7].w[0];
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[9].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);
    c.f[13] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6CF0u); set32(c.r[4], c.r[18].w[0] + 160u);  if (depth < kMaxDepth) unit_0000(c, 106u, depth + 1u); else { c.pc = 0x00202850u; return; } if (c.pc != 0x002A6CF0u) [[unlikely]] return; }
L_002A6CF0:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[20] = c.f[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = 0u;
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[7], c.r[29].w[0] + 80u);
    set32(c.r[8], 0u + 3u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 112u), 0u);
    st32((c.r[29].w[0] + 120u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6D24u); st32((c.r[29].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 166u, depth + 1u); else { c.pc = 0x00203940u; return; } if (c.pc != 0x002A6D24u) [[unlikely]] return; }
L_002A6D24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A6D5C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.f[20] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 10;
L_002A6D54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.f[20]);  if (t) { goto L_002A6DA8; } }
L_002A6D5C:
    c.f[3] = ld32((c.r[16].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = c.r[3].w[0];
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6D54u | kUnwind; return; } goto L_002A6D54; } }
L_002A6DA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002A6DD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
L_002A6DF0:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_002A6DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6E00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 239u, depth + 1u); else { c.pc = 0x002AB810u; return; } if (c.pc != 0x002A6E00u) [[unlikely]] return; }
L_002A6E00:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 288u);
    c.r[3].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6DF8u | kUnwind; return; } goto L_002A6DF8; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 11520u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6DF0u | kUnwind; return; } goto L_002A6DF0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A6E40:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A6E44:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
L_002A6E50:
    st32((c.r[5].w[0] + 264u), 0u);
    st32((c.r[5].w[0] + 552u), 0u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 840u), 0u);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    st32((c.r[5].w[0] + 1128u), 0u);
    st32((c.r[5].w[0] + 1416u), 0u);
    st32((c.r[5].w[0] + 1704u), 0u);
    st32((c.r[5].w[0] + 1992u), 0u);
    st32((c.r[5].w[0] + 2280u), 0u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2304u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6E50u | kUnwind; return; } goto L_002A6E50; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 11520u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6E44u | kUnwind; return; } goto L_002A6E44; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A6EA0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { const bool t = c.r[20].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002A6F84; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_002A6ED4:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_002A6EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6EE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 233u, depth + 1u); else { c.pc = 0x002AB7B0u; return; } if (c.pc != 0x002A6EE8u) [[unlikely]] return; }
L_002A6EE8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 288u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6EE0u | kUnwind; return; } goto L_002A6EE0; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 11520u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6ED4u | kUnwind; return; } goto L_002A6ED4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6F14u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 124u, depth + 1u); else { c.pc = 0x00345B90u; return; } if (c.pc != 0x002A6F14u) [[unlikely]] return; }
L_002A6F14:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_002A6F1C:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_002A6F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6F30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 238u, depth + 1u); else { c.pc = 0x002AB800u; return; } if (c.pc != 0x002A6F30u) [[unlikely]] return; }
L_002A6F30:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 288u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6F28u | kUnwind; return; } goto L_002A6F28; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 11520u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6F1Cu | kUnwind; return; } goto L_002A6F1C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 28592u);
    set32(c.r[6], 0u + 288u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6F6Cu); set32(c.r[7], 0u + 1600u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x002A6F6Cu) [[unlikely]] return; }
L_002A6F6C:
    c.r[2].d[0] = c.r[21].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002A6F84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6F84u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002A6F84u) [[unlikely]] return; }
L_002A6F84:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A6FB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A7078; } }
    set32(c.r[4], c.r[17].w[0] + 152u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A7080; } }
    set32(c.r[4], c.r[17].w[0] + 144u);
    c.budget -= 1;
L_002A6FDC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A7090; } }
    set32(c.r[4], c.r[17].w[0] + 136u);
    c.budget -= 1;
L_002A6FE8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A70A0; } }
    set32(c.r[4], c.r[17].w[0] + 128u);
    c.budget -= 1;
L_002A6FF4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A70B0; } }
    set32(c.r[4], c.r[17].w[0] + 120u);
    c.budget -= 1;
L_002A7000:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A70C0; } }
    set32(c.r[4], c.r[17].w[0] + 112u);
    c.budget -= 1;
L_002A700C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A70D0; } }
    set32(c.r[4], c.r[17].w[0] + 84u);
    c.budget -= 1;
L_002A7018:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A70E0; } }
    set32(c.r[4], c.r[17].w[0] + 76u);
    c.budget -= 1;
L_002A7024:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A70F0; } }
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 1;
L_002A7030:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A7100; } }
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 1;
L_002A703C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A7110; } }
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 1;
L_002A7048:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A7120; } }
L_002A7050:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A7060; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7060u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 288u, depth + 1u); else { c.pc = 0x002A7470u; return; } if (c.pc != 0x002A7060u) [[unlikely]] return; }
L_002A7060:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002A7078; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7078u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002A7078u) [[unlikely]] return; }
L_002A7078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002A7130; } }
L_002A7080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7088u);  if (depth < kMaxDepth) unit_0029(c, 279u, depth + 1u); else { c.pc = 0x002A7380u; return; } if (c.pc != 0x002A7088u) [[unlikely]] return; }
L_002A7088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 144u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6FDCu | kUnwind; return; } goto L_002A6FDC; } }
L_002A7090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7098u);  if (depth < kMaxDepth) unit_0029(c, 279u, depth + 1u); else { c.pc = 0x002A7380u; return; } if (c.pc != 0x002A7098u) [[unlikely]] return; }
L_002A7098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 136u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6FE8u | kUnwind; return; } goto L_002A6FE8; } }
L_002A70A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A70A8u);  if (depth < kMaxDepth) unit_0029(c, 278u, depth + 1u); else { c.pc = 0x002A7370u; return; } if (c.pc != 0x002A70A8u) [[unlikely]] return; }
L_002A70A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 128u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6FF4u | kUnwind; return; } goto L_002A6FF4; } }
L_002A70B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A70B8u);  if (depth < kMaxDepth) unit_0029(c, 279u, depth + 1u); else { c.pc = 0x002A7380u; return; } if (c.pc != 0x002A70B8u) [[unlikely]] return; }
L_002A70B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 120u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7000u | kUnwind; return; } goto L_002A7000; } }
L_002A70C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A70C8u);  if (depth < kMaxDepth) unit_0029(c, 278u, depth + 1u); else { c.pc = 0x002A7370u; return; } if (c.pc != 0x002A70C8u) [[unlikely]] return; }
L_002A70C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 112u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A700Cu | kUnwind; return; } goto L_002A700C; } }
L_002A70D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A70D8u);  if (depth < kMaxDepth) unit_0029(c, 279u, depth + 1u); else { c.pc = 0x002A7380u; return; } if (c.pc != 0x002A70D8u) [[unlikely]] return; }
L_002A70D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 84u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7018u | kUnwind; return; } goto L_002A7018; } }
L_002A70E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A70E8u);  if (depth < kMaxDepth) unit_0029(c, 280u, depth + 1u); else { c.pc = 0x002A7390u; return; } if (c.pc != 0x002A70E8u) [[unlikely]] return; }
L_002A70E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 76u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7024u | kUnwind; return; } goto L_002A7024; } }
L_002A70F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A70F8u);  if (depth < kMaxDepth) unit_0029(c, 281u, depth + 1u); else { c.pc = 0x002A73A0u; return; } if (c.pc != 0x002A70F8u) [[unlikely]] return; }
L_002A70F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7030u | kUnwind; return; } goto L_002A7030; } }
L_002A7100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7108u);  if (depth < kMaxDepth) unit_0029(c, 282u, depth + 1u); else { c.pc = 0x002A73B0u; return; } if (c.pc != 0x002A7108u) [[unlikely]] return; }
L_002A7108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 56u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A703Cu | kUnwind; return; } goto L_002A703C; } }
L_002A7110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7118u);  if (depth < kMaxDepth) unit_0029(c, 284u, depth + 1u); else { c.pc = 0x002A73F0u; return; } if (c.pc != 0x002A7118u) [[unlikely]] return; }
L_002A7118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7048u | kUnwind; return; } goto L_002A7048; } }
L_002A7120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7128u);  if (depth < kMaxDepth) unit_0029(c, 284u, depth + 1u); else { c.pc = 0x002A73F0u; return; } if (c.pc != 0x002A7128u) [[unlikely]] return; }
L_002A7128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7050u | kUnwind; return; } goto L_002A7050; } }
L_002A7130:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A7150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 18400u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 28592u);
    set32(c.r[7], 0u + 288u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A717Cu); set32(c.r[8], 0u + 1600u);  if (depth < kMaxDepth) unit_0002(c, 183u, depth + 1u); else { c.pc = 0x0020B3F0u; return; } if (c.pc != 0x002A717Cu) [[unlikely]] return; }
L_002A717C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7184u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 258u, depth + 1u); else { c.pc = 0x002A71D0u; return; } if (c.pc != 0x002A7184u) [[unlikely]] return; }
L_002A7184:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7198u); set32(c.r[5], c.r[5].w[0] - 20800u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002A7198u) [[unlikely]] return; }
L_002A7198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A71A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 5u, depth + 1u); else { c.pc = 0x002AC080u; return; } if (c.pc != 0x002A71A0u) [[unlikely]] return; }
L_002A71A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A71B4u); set32(c.r[5], c.r[5].w[0] - 20770u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002A71B4u) [[unlikely]] return; }
L_002A71B4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A71D0:
    set32(c.r[29], c.r[29].w[0] - 640u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] + 792u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[5], c.r[29].w[0] + 624u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 5u);
    c.budget -= 11;
L_002A71FC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A71FCu | kUnwind; return; } goto L_002A71FC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7228u); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002A7228u) [[unlikely]] return; }
L_002A7228:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A7318; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[29].w[0] + 368u);
    set32(c.r[4], c.r[4].w[0] - 22000u);
    c.budget -= 3;
L_002A723C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A723Cu | kUnwind; return; } goto L_002A723C; } }
L_002A7258:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7268u); set32(c.r[5], c.r[5].w[0] - 20738u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002A7268u) [[unlikely]] return; }
L_002A7268:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7274u); set32(c.r[5], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002A7274u) [[unlikely]] return; }
L_002A7274:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7280u); set32(c.r[5], c.r[29].w[0] + 624u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002A7280u) [[unlikely]] return; }
L_002A7280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7288u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x002A7288u) [[unlikely]] return; }
L_002A7288:
    set32(c.r[4], c.r[29].w[0] + 636u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7294u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002A7294u) [[unlikely]] return; }
L_002A7294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A729Cu); set32(c.r[4], c.r[29].w[0] + 636u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002A729Cu) [[unlikely]] return; }
L_002A729C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A72B4u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A72B4u) [[unlikely]] return; }
L_002A72B4:
    set32(c.r[4], c.r[29].w[0] + 636u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A72C0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002A72C0u) [[unlikely]] return; }
L_002A72C0:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A72C4:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_002A72D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A72DCu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0032(c, 48u, depth + 1u); else { c.pc = 0x002CAC40u; return; } if (c.pc != 0x002A72DCu) [[unlikely]] return; }
L_002A72DC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 288u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A72D0u | kUnwind; return; } goto L_002A72D0; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 11520u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A72C4u | kUnwind; return; } goto L_002A72C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7304u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x002A7304u) [[unlikely]] return; }
L_002A7304:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7310u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002A7310u) [[unlikely]] return; }
L_002A7310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002A7350; } }
L_002A7318:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7324u); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002A7324u) [[unlikely]] return; }
L_002A7324:
    set32(c.r[4], c.r[2].w[0] + 36u);
    set32(c.r[5], c.r[29].w[0] + 368u);
    c.budget -= 2;
L_002A732C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A732Cu | kUnwind; return; } goto L_002A732C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7258u | kUnwind; return; } goto L_002A7258; } }
L_002A7350:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 640u);  c.pc = t; return; }
L_002A7370:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_002A7380:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_002A7390:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_002A73A0:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_002A73B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A73D8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A73D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A73D8u); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002A73D8u) [[unlikely]] return; }
L_002A73D8:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A73F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A7414; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7414u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002A7414u) [[unlikely]] return; }
L_002A7414:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A7430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A7458; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A7458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7458u); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002A7458u) [[unlikely]] return; }
L_002A7458:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A7470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A7498; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A7498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7498u); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002A7498u) [[unlikely]] return; }
L_002A7498:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A74B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A77A8; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002A7558; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[7], c.r[5].w[0] + 4u);
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002A7558; } }
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], 0u + 17u);
    set32(c.r[11], c.r[11].w[0] + 3376u);
    c.budget -= 3;
L_002A74F8:
    set32(c.r[12], ld32((c.r[7].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[8], ld32((c.r[12].w[0] + 16u)));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[9], ld32((c.r[12].w[0] + 32u)));
    set32(c.r[8], c.r[9].w[0] << 5);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[10], c.r[11].w[0] + c.r[8].w[0]);
    set32(c.r[9], ld32((c.r[10].w[0] + 1064u)));
    set32(c.r[8], ld32((c.r[10].w[0] + 1056u)));
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    st32((c.r[8].w[0]), c.r[12].w[0]);
    set32(c.r[8], ld32((c.r[10].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    st32((c.r[10].w[0] + 1064u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[5].w[0])));
    c.r[8].d[0] = c.r[6].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A74F8u | kUnwind; return; } goto L_002A74F8; } }
    c.budget -= 1;
L_002A7558:
    set32(c.r[7], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002A7618; } }
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[9], c.r[7].w[0] + 4u);
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002A7618; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] + 3376u);
    c.budget -= 2;
L_002A7580:
    set32(c.r[6], ld32((c.r[9].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { goto L_002A7600; } }
    c.r[10].d[0] = ld8((c.r[6].w[0] + 2u));
    set32(c.r[5], ld32((c.r[6].w[0] + 12u)));
    c.r[10].d[0] = c.r[10].d[0] | 17ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[5], ld32((c.r[6].w[0] + 24u)));
    set32(c.r[11], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[10], c.r[11].w[0] << 5);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 1);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 4);
    set32(c.r[12], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[12].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[12].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[12].w[0] + 1064u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[12].w[0] + 1064u), c.r[6].w[0]);
    set32(c.r[10], ld32((c.r[12].w[0] + 1064u)));
    set32(c.r[6], ld32((c.r[12].w[0] + 1056u)));
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[10].w[0]);
    st32((c.r[6].w[0]), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[12].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[12].w[0] + 1064u), c.r[5].w[0]);
    c.budget -= 28;
L_002A7600:
    set32(c.r[5], ld32((c.r[7].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[5].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7580u | kUnwind; return; } goto L_002A7580; } }
    c.budget -= 1;
L_002A7618:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A7678; } }
    set32(c.r[7], ld32((c.r[3].w[0])));
    set32(c.r[6], c.r[3].w[0] + 4u);
    c.r[1].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002A7678; } }
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[11], 0u + 17u);
    set32(c.r[10], c.r[10].w[0] + 3376u);
    c.budget -= 3;
L_002A7644:
    set32(c.r[8], ld32((c.r[28].w[0] - 29744u)));
    set32(c.r[7], ld32((c.r[6].w[0])));
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002A7758; } }
    c.budget -= 1;
L_002A7660:
    set32(c.r[7], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[7].d[0] = c.r[5].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7644u | kUnwind; return; } goto L_002A7644; } }
    c.budget -= 1;
L_002A7678:
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A7750; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[4].w[0] + 4u);
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002A7750; } }
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[10], c.r[10].w[0] + 3376u);
    c.budget -= 2;
L_002A76A0:
    set32(c.r[7], ld32((c.r[28].w[0] - 29744u)));
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A7738; } }
    set32(c.r[11], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[11].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A7738; } }
    c.r[7].d[0] = ld8((c.r[11].w[0] + 2u));
    set32(c.r[3], ld32((c.r[11].w[0] + 12u)));
    c.r[7].d[0] = c.r[7].d[0] | 17ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], ld32((c.r[11].w[0] + 24u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[7], c.r[8].w[0] << 5);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[9], c.r[10].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[9].w[0] + 1064u)));
    set32(c.r[7], ld32((c.r[9].w[0] + 1056u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[7].w[0]), c.r[11].w[0]);
    set32(c.r[7], ld32((c.r[9].w[0] + 1064u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[9].w[0] + 1064u), c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[9].w[0] + 1064u)));
    set32(c.r[7], ld32((c.r[9].w[0] + 1056u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[9].w[0] + 1064u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[9].w[0] + 1064u), c.r[3].w[0]);
    c.budget -= 28;
L_002A7738:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A76A0u | kUnwind; return; } goto L_002A76A0; } }
    c.budget -= 1;
L_002A7750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002A77D0; } }
L_002A7758:
    set32(c.r[12], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[12].w[0] + 16u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[8], ld32((c.r[12].w[0] + 32u)));
    set32(c.r[7], c.r[8].w[0] << 5);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[9], c.r[10].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[9].w[0] + 1064u)));
    set32(c.r[7], ld32((c.r[9].w[0] + 1056u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[7].w[0]), c.r[12].w[0]);
    set32(c.r[7], ld32((c.r[9].w[0] + 1064u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0] + 1064u), c.r[7].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7660u | kUnwind; return; } goto L_002A7660; } }
    c.budget -= 1;
L_002A77A8:
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002A77B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A77B8u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0029(c, 290u, depth + 1u); else { c.pc = 0x002A74B0u; return; } if (c.pc != 0x002A77B8u) [[unlikely]] return; }
L_002A77B8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A77B0u | kUnwind; return; } goto L_002A77B0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002A77D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A77E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A7E00; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A7AB8; } }
L_002A7810:
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 1;
L_002A7814:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_002A7AB0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002A7AE4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002A7AB0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A78B8; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[4].w[0] + 4u);
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002A78B8; } }
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], 0u + 17u);
    set32(c.r[10], c.r[10].w[0] + 3376u);
    c.budget -= 3;
L_002A785C:
    set32(c.r[11], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[7], ld32((c.r[11].w[0] + 16u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[8], ld32((c.r[11].w[0] + 32u)));
    set32(c.r[7], c.r[8].w[0] << 5);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[9], c.r[10].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[9].w[0] + 1064u)));
    set32(c.r[7], ld32((c.r[9].w[0] + 1056u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[7].w[0]), c.r[11].w[0]);
    set32(c.r[7], ld32((c.r[9].w[0] + 1064u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[9].w[0] + 1064u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.r[7].d[0] = c.r[5].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A785Cu | kUnwind; return; } goto L_002A785C; } }
L_002A78B8:
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002A7978; } }
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[8], c.r[6].w[0] + 4u);
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002A7978; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] + 3376u);
    c.budget -= 2;
L_002A78E0:
    set32(c.r[5], ld32((c.r[8].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { goto L_002A7960; } }
    c.r[9].d[0] = ld8((c.r[5].w[0] + 2u));
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    c.r[9].d[0] = c.r[9].d[0] | 17ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[9], c.r[10].w[0] << 5);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[11], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[10], ld32((c.r[11].w[0] + 1064u)));
    set32(c.r[9], ld32((c.r[11].w[0] + 1056u)));
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    st32((c.r[9].w[0]), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[11].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[11].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[9], ld32((c.r[11].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[11].w[0] + 1056u)));
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[11].w[0] + 1064u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[11].w[0] + 1064u), c.r[4].w[0]);
    c.budget -= 28;
L_002A7960:
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A78E0u | kUnwind; return; } goto L_002A78E0; } }
    c.budget -= 1;
L_002A7978:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A79D8; } }
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.r[1].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002A79D8; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[10], 0u + 17u);
    set32(c.r[9], c.r[9].w[0] + 3376u);
    c.budget -= 3;
L_002A79A4:
    set32(c.r[7], ld32((c.r[28].w[0] - 29744u)));
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002A7DB0; } }
    c.budget -= 1;
L_002A79C0:
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[6].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A79A4u | kUnwind; return; } goto L_002A79A4; } }
    c.budget -= 1;
L_002A79D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A7AB0; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[4].w[0] + 4u);
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002A7AB0; } }
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[10], c.r[10].w[0] + 3376u);
    c.budget -= 2;
L_002A7A00:
    set32(c.r[7], ld32((c.r[28].w[0] - 29744u)));
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A7A98; } }
    set32(c.r[11], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[11].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A7A98; } }
    c.r[7].d[0] = ld8((c.r[11].w[0] + 2u));
    set32(c.r[3], ld32((c.r[11].w[0] + 12u)));
    c.r[7].d[0] = c.r[7].d[0] | 17ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], ld32((c.r[11].w[0] + 24u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[7], c.r[8].w[0] << 5);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[9], c.r[10].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[9].w[0] + 1064u)));
    set32(c.r[7], ld32((c.r[9].w[0] + 1056u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[7].w[0]), c.r[11].w[0]);
    set32(c.r[7], ld32((c.r[9].w[0] + 1064u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[9].w[0] + 1064u), c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[9].w[0] + 1064u)));
    set32(c.r[7], ld32((c.r[9].w[0] + 1056u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[9].w[0] + 1064u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[9].w[0] + 1064u), c.r[3].w[0]);
    c.budget -= 28;
L_002A7A98:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7A00u | kUnwind; return; } goto L_002A7A00; } }
    c.budget -= 1;
L_002A7AB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002A7E80; } }
L_002A7AB8:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7810u | kUnwind; return; } goto L_002A7810; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7810u | kUnwind; return; } goto L_002A7810; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7AB0u | kUnwind; return; } goto L_002A7AB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7814u | kUnwind; return; } goto L_002A7814; } }
L_002A7AE4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A7B68; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[4].w[0] + 4u);
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002A7B68; } }
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], 0u + 16u);
    set32(c.r[10], c.r[10].w[0] + 3376u);
    c.budget -= 3;
L_002A7B0C:
    set32(c.r[11], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[7], ld32((c.r[11].w[0] + 16u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[8], ld32((c.r[11].w[0] + 32u)));
    set32(c.r[7], c.r[8].w[0] << 5);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[9], c.r[10].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[9].w[0] + 1064u)));
    set32(c.r[7], ld32((c.r[9].w[0] + 1056u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[7].w[0]), c.r[11].w[0]);
    set32(c.r[7], ld32((c.r[9].w[0] + 1064u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[9].w[0] + 1064u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.r[7].d[0] = c.r[5].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7B0Cu | kUnwind; return; } goto L_002A7B0C; } }
L_002A7B68:
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002A7C28; } }
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[8], c.r[6].w[0] + 4u);
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002A7C28; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] + 3376u);
    c.budget -= 2;
L_002A7B90:
    set32(c.r[5], ld32((c.r[8].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { goto L_002A7C10; } }
    c.r[9].d[0] = ld8((c.r[5].w[0] + 2u));
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    c.r[9].d[0] = c.r[9].d[0] | 16ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[9], c.r[10].w[0] << 5);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[11], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[10], ld32((c.r[11].w[0] + 1064u)));
    set32(c.r[9], ld32((c.r[11].w[0] + 1056u)));
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    st32((c.r[9].w[0]), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[11].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[11].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[9], ld32((c.r[11].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[11].w[0] + 1056u)));
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[11].w[0] + 1064u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[11].w[0] + 1064u), c.r[4].w[0]);
    c.budget -= 28;
L_002A7C10:
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7B90u | kUnwind; return; } goto L_002A7B90; } }
    c.budget -= 1;
L_002A7C28:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A7C88; } }
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.r[1].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002A7C88; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[10], 0u + 16u);
    set32(c.r[9], c.r[9].w[0] + 3376u);
    c.budget -= 3;
L_002A7C54:
    set32(c.r[7], ld32((c.r[28].w[0] - 29744u)));
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002A7D64; } }
    c.budget -= 1;
L_002A7C70:
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[6].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7C54u | kUnwind; return; } goto L_002A7C54; } }
    c.budget -= 1;
L_002A7C88:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7AB0u | kUnwind; return; } goto L_002A7AB0; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[4].w[0] + 4u);
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7AB0u | kUnwind; return; } goto L_002A7AB0; } }
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[10], c.r[10].w[0] + 3376u);
    c.budget -= 2;
L_002A7CB0:
    set32(c.r[7], ld32((c.r[28].w[0] - 29744u)));
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A7D48; } }
    set32(c.r[11], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[11].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A7D48; } }
    c.r[7].d[0] = ld8((c.r[11].w[0] + 2u));
    set32(c.r[3], ld32((c.r[11].w[0] + 12u)));
    c.r[7].d[0] = c.r[7].d[0] | 16ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], ld32((c.r[11].w[0] + 24u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[7], c.r[8].w[0] << 5);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[9], c.r[10].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[9].w[0] + 1064u)));
    set32(c.r[7], ld32((c.r[9].w[0] + 1056u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[7].w[0]), c.r[11].w[0]);
    set32(c.r[7], ld32((c.r[9].w[0] + 1064u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[9].w[0] + 1064u), c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[9].w[0] + 1064u)));
    set32(c.r[7], ld32((c.r[9].w[0] + 1056u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[9].w[0] + 1064u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[9].w[0] + 1064u), c.r[3].w[0]);
    c.budget -= 28;
L_002A7D48:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7CB0u | kUnwind; return; } goto L_002A7CB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7AB0u | kUnwind; return; } goto L_002A7AB0; } }
L_002A7D64:
    set32(c.r[11], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[11].w[0] + 16u)));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[7], ld32((c.r[11].w[0] + 32u)));
    set32(c.r[6], c.r[7].w[0] << 5);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[8], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[6], ld32((c.r[8].w[0] + 1056u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[6].w[0]), c.r[11].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 1064u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7C70u | kUnwind; return; } goto L_002A7C70; } }
L_002A7DB0:
    set32(c.r[11], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[11].w[0] + 16u)));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[7], ld32((c.r[11].w[0] + 32u)));
    set32(c.r[6], c.r[7].w[0] << 5);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[8], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[6], ld32((c.r[8].w[0] + 1056u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[6].w[0]), c.r[11].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 1064u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A79C0u | kUnwind; return; } goto L_002A79C0; } }
    c.budget -= 1;
L_002A7E00:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7E14u); set32(c.r[4], c.r[4].w[0] - 224u);  if (depth < kMaxDepth) unit_0001(c, 182u, depth + 1u); else { c.pc = 0x00207A00u; return; } if (c.pc != 0x002A7E14u) [[unlikely]] return; }
L_002A7E14:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_002A7E20:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[3].w[0] + 28u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 28u));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002A7E68; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A7E58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7E4Cu); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0029(c, 290u, depth + 1u); else { c.pc = 0x002A74B0u; return; } if (c.pc != 0x002A7E4Cu) [[unlikely]] return; }
L_002A7E4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A7E68; } }
    c.budget -= 1;
L_002A7E58:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7E64u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0029(c, 298u, depth + 1u); else { c.pc = 0x002A77E0u; return; } if (c.pc != 0x002A7E64u) [[unlikely]] return; }
L_002A7E64:
    c.budget -= 1;
L_002A7E68:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 32u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7E20u | kUnwind; return; } goto L_002A7E20; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002A7E80:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A7EA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29724u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002A7ECC; } }
L_002A7EC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002A7F08; } }
L_002A7ECC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A7ED0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29728u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 29744u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7EE8u); set32(c.r[18], c.r[3].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x002A7EE8u) [[unlikely]] return; }
L_002A7EE8:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 29724u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7ED0u | kUnwind; return; } goto L_002A7ED0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7EC4u | kUnwind; return; } goto L_002A7EC4; } }
L_002A7F08:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A7F20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29732u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002A7F48; } }
L_002A7F40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002A7F8C; } }
L_002A7F48:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A7F4C:
    set32(c.r[2], ld32((c.r[28].w[0] - 29736u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7F64u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002E(c, 291u, depth + 1u); else { c.pc = 0x002BBE30u; return; } if (c.pc != 0x002A7F64u) [[unlikely]] return; }
L_002A7F64:
    set32(c.r[3], ld32((c.r[28].w[0] - 29728u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29732u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7F4Cu | kUnwind; return; } goto L_002A7F4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7F40u | kUnwind; return; } goto L_002A7F40; } }
L_002A7F8C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A7FA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A7FDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7FC4u);  if (depth < kMaxDepth) unit_002A(c, 4u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002A7FC4u) [[unlikely]] return; }
L_002A7FC4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002A7FDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7FDCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002A7FDCu) [[unlikely]] return; }
L_002A7FDC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
}

}
